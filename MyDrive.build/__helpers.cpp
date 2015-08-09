// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.hpp"


NUITKA_MAY_BE_UNUSED static PyObject *fast_python_call( PyObject *func, PyObject **args, int count )
{
    PyCodeObject *co = (PyCodeObject *)PyFunction_GET_CODE( func );
    PyObject *globals = PyFunction_GET_GLOBALS( func );
    PyObject *argdefs = PyFunction_GET_DEFAULTS( func );

#if PYTHON_VERSION >= 300
    PyObject *kwdefs = PyFunction_GET_KW_DEFAULTS( func );

    if ( kwdefs == NULL && argdefs == NULL && co->co_argcount == count &&
        co->co_flags == ( CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE ))
#else
    if ( argdefs == NULL && co->co_argcount == count &&
        co->co_flags == ( CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE ))
#endif
    {
        PyThreadState *tstate = PyThreadState_GET();
        assertObject( globals );

        PyFrameObject *frame = PyFrame_New( tstate, co, globals, NULL );

        if (unlikely( frame == NULL ))
        {
            return NULL;
        };

        for ( int i = 0; i < count; i++ )
        {
            frame->f_localsplus[i] = INCREASE_REFCOUNT( args[i] );
        }

        PyObject *result = PyEval_EvalFrameEx( frame, 0 );

        // Frame release protects against recursion as it may lead to variable
        // destruction.
        ++tstate->recursion_depth;
        Py_DECREF( frame );
        --tstate->recursion_depth;

        return result;
    }

    PyObject **defaults = NULL;
    int nd = 0;

    if ( argdefs != NULL )
    {
        defaults = &PyTuple_GET_ITEM( argdefs, 0 );
        nd = int( Py_SIZE( argdefs ) );
    }

    PyObject *result = PyEval_EvalCodeEx(
#if PYTHON_VERSION >= 300
        (PyObject *)co,
#else
        co,        // code object
#endif
        globals,   // globals
        NULL,      // no locals
        args,      // args
        count,     // argcount
        NULL,      // kwds
        0,         // kwcount
        defaults,  // defaults
        nd,        // defcount
#if PYTHON_VERSION >= 300
        kwdefs,
#endif
        PyFunction_GET_CLOSURE( func )
    );

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject *arg1 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject *arg1, PyObject *arg2 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS19( PyObject *called, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9, PyObject *arg10, PyObject *arg11, PyObject *arg12, PyObject *arg13, PyObject *arg14, PyObject *arg15, PyObject *arg16, PyObject *arg17, PyObject *arg18, PyObject *arg19 )
{
    assertObject( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    PyObject *args_for_test[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19 };

    for( size_t i = 0; i < sizeof( args_for_test ) / sizeof( PyObject * ); i++ )
    {
        assertObject( args_for_test[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19 };

        if ( function->m_direct_arg_parser )
        {
            result = function->m_direct_arg_parser(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * )
            );
        }
        else
        {
            result = function->m_code(
                function,
                args,
                sizeof( args ) / sizeof( PyObject * ),
                NULL
            );
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            PyObject *args[] = {
                method->m_object,
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19
            };

            PyObject *result;

            if ( method->m_function->m_direct_arg_parser )
            {
                result = method->m_function->m_direct_arg_parser(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * )
                );
            }
            else
            {
                result = method->m_function->m_code(
                    method->m_function,
                    args,
                    sizeof( args ) / sizeof( PyObject * ),
                    NULL
                );
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19 };

        return fast_python_call(
            called,
            args,
            sizeof( args ) / sizeof( PyObject * )
        );
    }

    PyObject *args[] = { arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19 };
    PyObject *pos_args = MAKE_TUPLE( args, sizeof( args ) / sizeof( PyObject * ) );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

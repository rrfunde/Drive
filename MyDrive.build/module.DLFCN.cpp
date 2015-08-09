// Generated code for Python source for module 'DLFCN'
// created by Nuitka version 0.5.5.3

// This code is in part copyright 2014 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_DLFCN is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_DLFCN;
PyDictObject *moduledict_DLFCN;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_6;
extern PyObject *const_dict_empty;
static PyObject *const_int_pos_256;
extern PyObject *const_int_pos_600;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_4096;
static PyObject *const_str_plain___P;
static PyObject *const_str_plain_xyz;
extern PyObject *const_str_plain_args;
extern PyObject *const_list_int_0_list;
static PyObject *const_long_pos_199506;
static PyObject *const_long_pos_200009;
extern PyObject *const_str_plain_DLFCN;
static PyObject *const_str_plain___PMT;
static PyObject *const_str_plain_cname;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_RTLD_NOW;
static PyObject *const_str_plain__DLFCN_H;
static PyObject *const_str_plain___STRING;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_int_pos_1_list;
static PyObject *const_str_plain_RTLD_LAZY;
static PyObject *const_str_plain___ASMNAME;
static PyObject *const_str_plain___GLIBC__;
static PyObject *const_str_plain___USE_BSD;
static PyObject *const_str_plain___USE_GNU;
static PyObject *const_str_plain___flexarr;
static PyObject *const_str_plain_RTLD_LOCAL;
static PyObject *const_str_plain___ASMNAME2;
static PyObject *const_str_plain___USE_ANSI;
static PyObject *const_str_plain___USE_MISC;
static PyObject *const_str_plain___USE_SVID;
extern PyObject *const_str_plain_RTLD_GLOBAL;
static PyObject *const_str_plain_RTLD_NOLOAD;
static PyObject *const_str_plain__BSD_SOURCE;
static PyObject *const_str_plain__FEATURES_H;
static PyObject *const_str_plain___FAVOR_BSD;
static PyObject *const_str_plain___USE_POSIX;
static PyObject *const_str_plain___USE_XOPEN;
static PyObject *const_str_plain__SVID_SOURCE;
static PyObject *const_str_plain__SYS_CDEFS_H;
static PyObject *const_str_plain___USE_ISOC99;
static PyObject *const_str_plain___USE_POSIX2;
static PyObject *const_str_plain___USE_UNIX98;
static PyObject *const_str_plain_RTLD_NODELETE;
static PyObject *const_str_plain__POSIX_SOURCE;
static PyObject *const_str_plain__XOPEN_SOURCE;
static PyObject *const_str_plain___USE_XOPEN2K;
static PyObject *const_str_plain___attribute__;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain__ISOC99_SOURCE;
static PyObject *const_str_plain___format_arg__;
static PyObject *const_str_plain__POSIX_C_SOURCE;
static PyObject *const_str_plain___GLIBC_MINOR__;
static PyObject *const_str_plain___GNU_LIBRARY__;
static PyObject *const_str_plain___USE_LARGEFILE;
static PyObject *const_str_plain___USE_REENTRANT;
static PyObject *const_tuple_str_plain_xyz_tuple;
static PyObject *const_str_plain___STDC_IEC_559__;
static PyObject *const_tuple_str_plain_args_tuple;
static PyObject *const_str_plain_RTLD_BINDING_MASK;
static PyObject *const_str_plain__LARGEFILE_SOURCE;
static PyObject *const_str_plain___USE_LARGEFILE64;
static PyObject *const_str_plain___USE_POSIX199309;
static PyObject *const_str_plain___USE_POSIX199506;
static PyObject *const_tuple_str_plain_cname_tuple;
static PyObject *const_str_plain___STDC_ISO_10646__;
static PyObject *const_str_plain__LARGEFILE64_SOURCE;
static PyObject *const_str_plain___USE_FILE_OFFSET64;
static PyObject *const_str_plain___USE_EXTERN_INLINES;
static PyObject *const_str_plain___USE_XOPEN_EXTENDED;
static PyObject *const_str_plain___USER_LABEL_PREFIX__;
static PyObject *const_str_plain__XOPEN_SOURCE_EXTENDED;
static PyObject *const_str_plain___STDC_IEC_559_COMPLEX__;
static PyObject *const_str_plain___attribute_format_arg__;
static PyObject *const_str_digest_3cab54cefb5c25e536912414d5b67c4f;

static void _initModuleConstants(void)
{
    const_int_pos_256 = PyInt_FromLong( 256l );
    const_str_plain___P = UNSTREAM_STRING( &constant_bin[ 189972 ], 3, 1 );
    const_str_plain_xyz = UNSTREAM_STRING( &constant_bin[ 189975 ], 3, 1 );
    const_long_pos_199506 = PyLong_FromUnsignedLong( 199506ul );
    const_long_pos_200009 = PyLong_FromUnsignedLong( 200009ul );
    const_str_plain___PMT = UNSTREAM_STRING( &constant_bin[ 189978 ], 5, 1 );
    const_str_plain_cname = UNSTREAM_STRING( &constant_bin[ 12892 ], 5, 1 );
    const_str_plain__DLFCN_H = UNSTREAM_STRING( &constant_bin[ 189983 ], 8, 1 );
    const_str_plain___STRING = UNSTREAM_STRING( &constant_bin[ 189991 ], 8, 1 );
    const_list_int_pos_1_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_int_pos_1_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_RTLD_LAZY = UNSTREAM_STRING( &constant_bin[ 189999 ], 9, 1 );
    const_str_plain___ASMNAME = UNSTREAM_STRING( &constant_bin[ 12800 ], 9, 1 );
    const_str_plain___GLIBC__ = UNSTREAM_STRING( &constant_bin[ 190008 ], 9, 1 );
    const_str_plain___USE_BSD = UNSTREAM_STRING( &constant_bin[ 190017 ], 9, 1 );
    const_str_plain___USE_GNU = UNSTREAM_STRING( &constant_bin[ 190026 ], 9, 1 );
    const_str_plain___flexarr = UNSTREAM_STRING( &constant_bin[ 190035 ], 9, 1 );
    const_str_plain_RTLD_LOCAL = UNSTREAM_STRING( &constant_bin[ 190044 ], 10, 1 );
    const_str_plain___ASMNAME2 = UNSTREAM_STRING( &constant_bin[ 12800 ], 10, 1 );
    const_str_plain___USE_ANSI = UNSTREAM_STRING( &constant_bin[ 190054 ], 10, 1 );
    const_str_plain___USE_MISC = UNSTREAM_STRING( &constant_bin[ 190064 ], 10, 1 );
    const_str_plain___USE_SVID = UNSTREAM_STRING( &constant_bin[ 190074 ], 10, 1 );
    const_str_plain_RTLD_NOLOAD = UNSTREAM_STRING( &constant_bin[ 190084 ], 11, 1 );
    const_str_plain__BSD_SOURCE = UNSTREAM_STRING( &constant_bin[ 190095 ], 11, 1 );
    const_str_plain__FEATURES_H = UNSTREAM_STRING( &constant_bin[ 190106 ], 11, 1 );
    const_str_plain___FAVOR_BSD = UNSTREAM_STRING( &constant_bin[ 190117 ], 11, 1 );
    const_str_plain___USE_POSIX = UNSTREAM_STRING( &constant_bin[ 190128 ], 11, 1 );
    const_str_plain___USE_XOPEN = UNSTREAM_STRING( &constant_bin[ 190139 ], 11, 1 );
    const_str_plain__SVID_SOURCE = UNSTREAM_STRING( &constant_bin[ 190150 ], 12, 1 );
    const_str_plain__SYS_CDEFS_H = UNSTREAM_STRING( &constant_bin[ 190162 ], 12, 1 );
    const_str_plain___USE_ISOC99 = UNSTREAM_STRING( &constant_bin[ 190174 ], 12, 1 );
    const_str_plain___USE_POSIX2 = UNSTREAM_STRING( &constant_bin[ 190186 ], 12, 1 );
    const_str_plain___USE_UNIX98 = UNSTREAM_STRING( &constant_bin[ 190198 ], 12, 1 );
    const_str_plain_RTLD_NODELETE = UNSTREAM_STRING( &constant_bin[ 190210 ], 13, 1 );
    const_str_plain__POSIX_SOURCE = UNSTREAM_STRING( &constant_bin[ 190223 ], 13, 1 );
    const_str_plain__XOPEN_SOURCE = UNSTREAM_STRING( &constant_bin[ 190236 ], 13, 1 );
    const_str_plain___USE_XOPEN2K = UNSTREAM_STRING( &constant_bin[ 190249 ], 13, 1 );
    const_str_plain___attribute__ = UNSTREAM_STRING( &constant_bin[ 12940 ], 13, 1 );
    const_str_plain__ISOC99_SOURCE = UNSTREAM_STRING( &constant_bin[ 190262 ], 14, 1 );
    const_str_plain___format_arg__ = UNSTREAM_STRING( &constant_bin[ 12982 ], 14, 1 );
    const_str_plain__POSIX_C_SOURCE = UNSTREAM_STRING( &constant_bin[ 190276 ], 15, 1 );
    const_str_plain___GLIBC_MINOR__ = UNSTREAM_STRING( &constant_bin[ 190291 ], 15, 1 );
    const_str_plain___GNU_LIBRARY__ = UNSTREAM_STRING( &constant_bin[ 190306 ], 15, 1 );
    const_str_plain___USE_LARGEFILE = UNSTREAM_STRING( &constant_bin[ 190321 ], 15, 1 );
    const_str_plain___USE_REENTRANT = UNSTREAM_STRING( &constant_bin[ 190336 ], 15, 1 );
    const_tuple_str_plain_xyz_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_xyz_tuple, 0, const_str_plain_xyz ); Py_INCREF( const_str_plain_xyz );
    const_str_plain___STDC_IEC_559__ = UNSTREAM_STRING( &constant_bin[ 190351 ], 16, 1 );
    const_tuple_str_plain_args_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_plain_RTLD_BINDING_MASK = UNSTREAM_STRING( &constant_bin[ 190367 ], 17, 1 );
    const_str_plain__LARGEFILE_SOURCE = UNSTREAM_STRING( &constant_bin[ 190384 ], 17, 1 );
    const_str_plain___USE_LARGEFILE64 = UNSTREAM_STRING( &constant_bin[ 190401 ], 17, 1 );
    const_str_plain___USE_POSIX199309 = UNSTREAM_STRING( &constant_bin[ 190418 ], 17, 1 );
    const_str_plain___USE_POSIX199506 = UNSTREAM_STRING( &constant_bin[ 190435 ], 17, 1 );
    const_tuple_str_plain_cname_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cname_tuple, 0, const_str_plain_cname ); Py_INCREF( const_str_plain_cname );
    const_str_plain___STDC_ISO_10646__ = UNSTREAM_STRING( &constant_bin[ 190452 ], 18, 1 );
    const_str_plain__LARGEFILE64_SOURCE = UNSTREAM_STRING( &constant_bin[ 190470 ], 19, 1 );
    const_str_plain___USE_FILE_OFFSET64 = UNSTREAM_STRING( &constant_bin[ 190489 ], 19, 1 );
    const_str_plain___USE_EXTERN_INLINES = UNSTREAM_STRING( &constant_bin[ 190508 ], 20, 1 );
    const_str_plain___USE_XOPEN_EXTENDED = UNSTREAM_STRING( &constant_bin[ 190528 ], 20, 1 );
    const_str_plain___USER_LABEL_PREFIX__ = UNSTREAM_STRING( &constant_bin[ 12839 ], 21, 1 );
    const_str_plain__XOPEN_SOURCE_EXTENDED = UNSTREAM_STRING( &constant_bin[ 190548 ], 22, 1 );
    const_str_plain___STDC_IEC_559_COMPLEX__ = UNSTREAM_STRING( &constant_bin[ 190570 ], 24, 1 );
    const_str_plain___attribute_format_arg__ = UNSTREAM_STRING( &constant_bin[ 190594 ], 24, 1 );
    const_str_digest_3cab54cefb5c25e536912414d5b67c4f = UNSTREAM_STRING( &constant_bin[ 190618 ], 49, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_a0cbd950a29b35ff8f9e95c262cfea3e;
static PyCodeObject *codeobj_634f8649fc2d4ff971a375a36efa7209;
static PyCodeObject *codeobj_afe094f42404cb8c18dcc8ce25a1fd99;
static PyCodeObject *codeobj_e7513d2a3b2e885aaf5ac15eaff1b173;
static PyCodeObject *codeobj_44b1edfec30495bd15d1a1fc949ef0f2;
static PyCodeObject *codeobj_8a8308cf0df9cd0de5009c3e7a4c02ca;
static PyCodeObject *codeobj_13ca96ee591877e6c4a8173d8c01dd40;
static PyCodeObject *codeobj_5e362d7f43dbc3424cd199d69953549a;
static PyCodeObject *codeobj_3f8de7d08cb6694bc3e28210015a46a4;

static void _initModuleCodeObjects(void)
{
    codeobj_a0cbd950a29b35ff8f9e95c262cfea3e = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain_DLFCN, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_634f8649fc2d4ff971a375a36efa7209 = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___ASMNAME, 62, const_tuple_str_plain_cname_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_afe094f42404cb8c18dcc8ce25a1fd99 = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___P, 52, const_tuple_str_plain_args_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e7513d2a3b2e885aaf5ac15eaff1b173 = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___PMT, 50, const_tuple_str_plain_args_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_44b1edfec30495bd15d1a1fc949ef0f2 = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___PMT, 54, const_tuple_str_plain_args_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8a8308cf0df9cd0de5009c3e7a4c02ca = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___STRING, 56, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_13ca96ee591877e6c4a8173d8c01dd40 = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___attribute__, 64, const_tuple_str_plain_xyz_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_5e362d7f43dbc3424cd199d69953549a = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___attribute_format_arg__, 66, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_3f8de7d08cb6694bc3e28210015a46a4 = MAKE_CODEOBJ( const_str_digest_3cab54cefb5c25e536912414d5b67c4f, const_str_plain___attribute_format_arg__, 68, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1___PMT_of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_2___P_of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_3___PMT_of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_4___STRING_of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_5___ASMNAME_of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_6___attribute___of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_7___attribute_format_arg___of_module_DLFCN(  );


static PyObject *MAKE_FUNCTION_function_8___attribute_format_arg___of_module_DLFCN(  );


// The module function definitions.
static PyObject *impl_function_1___PMT_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e7513d2a3b2e885aaf5ac15eaff1b173, module_DLFCN );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_return_value = par_args.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1___PMT_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__PMT() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__PMT() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_args == NULL ))
    {
        PyObject *values[] = { _python_par_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___PMT_of_module_DLFCN( self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_1___PMT_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___PMT_of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___PMT_of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___P_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_afe094f42404cb8c18dcc8ce25a1fd99, module_DLFCN );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_return_value = par_args.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_2___P_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__P() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__P() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_args == NULL ))
    {
        PyObject *values[] = { _python_par_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2___P_of_module_DLFCN( self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_2___P_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___P_of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___P_of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___PMT_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_44b1edfec30495bd15d1a1fc949ef0f2, module_DLFCN );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_return_value = par_args.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_3___PMT_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__PMT() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__PMT() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_args == NULL ))
    {
        PyObject *values[] = { _python_par_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3___PMT_of_module_DLFCN( self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_3___PMT_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3___PMT_of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___PMT_of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___STRING_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_4___STRING_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__STRING() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__STRING() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4___STRING_of_module_DLFCN( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_4___STRING_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4___STRING_of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___STRING_of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___ASMNAME_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_cname )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_cname; par_cname.object = _python_par_cname;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_634f8649fc2d4ff971a375a36efa7209, module_DLFCN );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___ASMNAME2 );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ASMNAME2 );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12787 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USER_LABEL_PREFIX__ );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___USER_LABEL_PREFIX__ );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12826 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_cname.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12876 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 62;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_cname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cname,
            par_cname.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_5___ASMNAME_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cname = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__ASMNAME() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_cname == key )
            {
                assert( _python_par_cname == NULL );
                _python_par_cname = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cname, key ) == 1 )
            {
                assert( _python_par_cname == NULL );
                _python_par_cname = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__ASMNAME() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_cname != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_cname = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_cname == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_cname = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_cname == NULL ))
    {
        PyObject *values[] = { _python_par_cname };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5___ASMNAME_of_module_DLFCN( self, _python_par_cname );

error_exit:;

    Py_XDECREF( _python_par_cname );

    return NULL;
}

static PyObject *dparse_function_5___ASMNAME_of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5___ASMNAME_of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___ASMNAME_of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___attribute___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_xyz )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_xyz; par_xyz.object = _python_par_xyz;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_6___attribute___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_xyz = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__attribute__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_xyz == key )
            {
                assert( _python_par_xyz == NULL );
                _python_par_xyz = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_xyz, key ) == 1 )
            {
                assert( _python_par_xyz == NULL );
                _python_par_xyz = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__attribute__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_xyz != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_xyz = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_xyz == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_xyz = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_xyz == NULL ))
    {
        PyObject *values[] = { _python_par_xyz };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6___attribute___of_module_DLFCN( self, _python_par_xyz );

error_exit:;

    Py_XDECREF( _python_par_xyz );

    return NULL;
}

static PyObject *dparse_function_6___attribute___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_6___attribute___of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___attribute___of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7___attribute_format_arg___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5e362d7f43dbc3424cd199d69953549a, module_DLFCN );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___attribute__ );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___attribute__ );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12927 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___format_arg__ );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___format_arg__ );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12969 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_x.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5862 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 66;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_7___attribute_format_arg___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__attribute_format_arg__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__attribute_format_arg__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7___attribute_format_arg___of_module_DLFCN( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_7___attribute_format_arg___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_7___attribute_format_arg___of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7___attribute_format_arg___of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8___attribute_format_arg___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_8___attribute_format_arg___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__attribute_format_arg__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__attribute_format_arg__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8___attribute_format_arg___of_module_DLFCN( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_8___attribute_format_arg___of_module_DLFCN( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_8___attribute_format_arg___of_module_DLFCN( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8___attribute_format_arg___of_module_DLFCN( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___PMT_of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___PMT_of_module_DLFCN,
        dparse_function_1___PMT_of_module_DLFCN,
        const_str_plain___PMT,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e7513d2a3b2e885aaf5ac15eaff1b173,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___P_of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___P_of_module_DLFCN,
        dparse_function_2___P_of_module_DLFCN,
        const_str_plain___P,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_afe094f42404cb8c18dcc8ce25a1fd99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___PMT_of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___PMT_of_module_DLFCN,
        dparse_function_3___PMT_of_module_DLFCN,
        const_str_plain___PMT,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_44b1edfec30495bd15d1a1fc949ef0f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___STRING_of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___STRING_of_module_DLFCN,
        dparse_function_4___STRING_of_module_DLFCN,
        const_str_plain___STRING,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a8308cf0df9cd0de5009c3e7a4c02ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___ASMNAME_of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___ASMNAME_of_module_DLFCN,
        dparse_function_5___ASMNAME_of_module_DLFCN,
        const_str_plain___ASMNAME,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_634f8649fc2d4ff971a375a36efa7209,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___attribute___of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___attribute___of_module_DLFCN,
        dparse_function_6___attribute___of_module_DLFCN,
        const_str_plain___attribute__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_13ca96ee591877e6c4a8173d8c01dd40,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___attribute_format_arg___of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7___attribute_format_arg___of_module_DLFCN,
        dparse_function_7___attribute_format_arg___of_module_DLFCN,
        const_str_plain___attribute_format_arg__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e362d7f43dbc3424cd199d69953549a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8___attribute_format_arg___of_module_DLFCN(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8___attribute_format_arg___of_module_DLFCN,
        dparse_function_8___attribute_format_arg___of_module_DLFCN,
        const_str_plain___attribute_format_arg__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3f8de7d08cb6694bc3e28210015a46a4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_DLFCN,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_DLFCN =
{
    PyModuleDef_HEAD_INIT,
    "DLFCN",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{

    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( DLFCN )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_DLFCN );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( meta_path_loader_entries );
#endif

    _initModuleConstants();
    _initModuleCodeObjects();

    // puts( "in initDLFCN" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_DLFCN = Py_InitModule4(
        "DLFCN",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_DLFCN = PyModule_Create( &mdef_DLFCN );
#endif

    moduledict_DLFCN = (PyDictObject *)((PyModuleObject *)module_DLFCN)->md_dict;

    assertObject( module_DLFCN );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_DLFCN, module_DLFCN );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_DLFCN );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3cab54cefb5c25e536912414d5b67c4f;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__DLFCN_H, tmp_assign_source_3 );
    tmp_assign_source_4 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__FEATURES_H, tmp_assign_source_4 );
    tmp_assign_source_5 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_ANSI, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___FAVOR_BSD, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__ISOC99_SOURCE, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__POSIX_SOURCE, tmp_assign_source_8 );
    tmp_assign_source_9 = const_long_pos_199506;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__POSIX_C_SOURCE, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_600;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__XOPEN_SOURCE, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__XOPEN_SOURCE_EXTENDED, tmp_assign_source_11 );
    tmp_assign_source_12 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__LARGEFILE64_SOURCE, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__BSD_SOURCE, tmp_assign_source_13 );
    tmp_assign_source_14 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__SVID_SOURCE, tmp_assign_source_14 );
    tmp_assign_source_15 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__BSD_SOURCE, tmp_assign_source_15 );
    tmp_assign_source_16 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__SVID_SOURCE, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_ISOC99, tmp_assign_source_17 );
    tmp_assign_source_18 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__POSIX_SOURCE, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__POSIX_C_SOURCE, tmp_assign_source_19 );
    tmp_assign_source_20 = const_long_pos_199506;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__POSIX_C_SOURCE, tmp_assign_source_20 );
    tmp_assign_source_21 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_POSIX, tmp_assign_source_21 );
    tmp_assign_source_22 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_POSIX2, tmp_assign_source_22 );
    tmp_assign_source_23 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_POSIX199309, tmp_assign_source_23 );
    tmp_assign_source_24 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_POSIX199506, tmp_assign_source_24 );
    tmp_assign_source_25 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_XOPEN, tmp_assign_source_25 );
    tmp_assign_source_26 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_XOPEN_EXTENDED, tmp_assign_source_26 );
    tmp_assign_source_27 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_UNIX98, tmp_assign_source_27 );
    tmp_assign_source_28 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__LARGEFILE_SOURCE, tmp_assign_source_28 );
    tmp_assign_source_29 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_XOPEN2K, tmp_assign_source_29 );
    tmp_assign_source_30 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_ISOC99, tmp_assign_source_30 );
    tmp_assign_source_31 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_XOPEN_EXTENDED, tmp_assign_source_31 );
    tmp_assign_source_32 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_LARGEFILE, tmp_assign_source_32 );
    tmp_assign_source_33 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_LARGEFILE64, tmp_assign_source_33 );
    tmp_assign_source_34 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_FILE_OFFSET64, tmp_assign_source_34 );
    tmp_assign_source_35 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_MISC, tmp_assign_source_35 );
    tmp_assign_source_36 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_BSD, tmp_assign_source_36 );
    tmp_assign_source_37 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_SVID, tmp_assign_source_37 );
    tmp_assign_source_38 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_GNU, tmp_assign_source_38 );
    tmp_assign_source_39 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_REENTRANT, tmp_assign_source_39 );
    tmp_assign_source_40 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___STDC_IEC_559__, tmp_assign_source_40 );
    tmp_assign_source_41 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___STDC_IEC_559_COMPLEX__, tmp_assign_source_41 );
    tmp_assign_source_42 = const_long_pos_200009;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___STDC_ISO_10646__, tmp_assign_source_42 );
    tmp_assign_source_43 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___GNU_LIBRARY__, tmp_assign_source_43 );
    tmp_assign_source_44 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___GLIBC__, tmp_assign_source_44 );
    tmp_assign_source_45 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___GLIBC_MINOR__, tmp_assign_source_45 );
    tmp_assign_source_46 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain__SYS_CDEFS_H, tmp_assign_source_46 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_a0cbd950a29b35ff8f9e95c262cfea3e, module_DLFCN );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_assign_source_47 = MAKE_FUNCTION_function_1___PMT_of_module_DLFCN(  );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_47 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___PMT, tmp_assign_source_47 );
    tmp_assign_source_48 = MAKE_FUNCTION_function_2___P_of_module_DLFCN(  );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_48 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___P, tmp_assign_source_48 );
    tmp_assign_source_49 = MAKE_FUNCTION_function_3___PMT_of_module_DLFCN(  );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_49 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___PMT, tmp_assign_source_49 );
    tmp_assign_source_50 = MAKE_FUNCTION_function_4___STRING_of_module_DLFCN(  );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_50 );

        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___STRING, tmp_assign_source_50 );
    tmp_assign_source_51 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___flexarr, tmp_assign_source_51 );
    tmp_assign_source_52 = LIST_COPY( const_list_int_0_list );
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___flexarr, tmp_assign_source_52 );
    tmp_assign_source_53 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___flexarr, tmp_assign_source_53 );
    tmp_assign_source_54 = LIST_COPY( const_list_int_pos_1_list );
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___flexarr, tmp_assign_source_54 );
    tmp_assign_source_55 = MAKE_FUNCTION_function_5___ASMNAME_of_module_DLFCN(  );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_55 );

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___ASMNAME, tmp_assign_source_55 );
    tmp_assign_source_56 = MAKE_FUNCTION_function_6___attribute___of_module_DLFCN(  );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_56 );

        frame_module->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___attribute__, tmp_assign_source_56 );
    tmp_assign_source_57 = MAKE_FUNCTION_function_7___attribute_format_arg___of_module_DLFCN(  );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_57 );

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___attribute_format_arg__, tmp_assign_source_57 );
    tmp_assign_source_58 = MAKE_FUNCTION_function_8___attribute_format_arg___of_module_DLFCN(  );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_58 );

        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___attribute_format_arg__, tmp_assign_source_58 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_59 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_LARGEFILE, tmp_assign_source_59 );
    tmp_assign_source_60 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_LARGEFILE64, tmp_assign_source_60 );
    tmp_assign_source_61 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain___USE_EXTERN_INLINES, tmp_assign_source_61 );
    tmp_assign_source_62 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_LAZY, tmp_assign_source_62 );
    tmp_assign_source_63 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_NOW, tmp_assign_source_63 );
    tmp_assign_source_64 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_BINDING_MASK, tmp_assign_source_64 );
    tmp_assign_source_65 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_NOLOAD, tmp_assign_source_65 );
    tmp_assign_source_66 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_GLOBAL, tmp_assign_source_66 );
    tmp_assign_source_67 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_LOCAL, tmp_assign_source_67 );
    tmp_assign_source_68 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_DLFCN, (Nuitka_StringObject *)const_str_plain_RTLD_NODELETE, tmp_assign_source_68 );

    return MOD_RETURN_VALUE( module_DLFCN );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

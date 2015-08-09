// Generated code for Python source for module 'OpenSSL'
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

// The _module_OpenSSL is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_OpenSSL;
PyDictObject *moduledict_OpenSSL;

// The module constants used
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_2;
static PyObject *const_int_pos_258;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_dl;
static PyObject *const_str_plain_SSL;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_orig;
static PyObject *const_str_plain_rand;
extern PyObject *const_str_plain_DLFCN;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_tsafe;
extern PyObject *const_str_plain_crypto;
static PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_OpenSSL;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_RTLD_NOW;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_RTLD_GLOBAL;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_getdlopenflags;
static PyObject *const_str_plain_setdlopenflags;
extern PyObject *const_tuple_str_plain_crypto_tuple;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_tuple_str_plain_rand_str_plain_SSL_tuple;
static PyObject *const_list_ae3c1402306effbf77270acb7dcf037d_list;
static PyObject *const_str_digest_22f788fafaeb72f7ec2efc2f6875d50e;
extern PyObject *const_str_digest_74c9cee97c5b2738bfb46dc459970da3;
static PyObject *const_str_digest_844125be384df6b7ea3130df20673f2a;
extern PyObject *const_str_digest_acc5220e644fa7b8b9598dcd1269cd6c;
static PyObject *const_list_str_digest_22f788fafaeb72f7ec2efc2f6875d50e_list;

static void _initModuleConstants(void)
{
    const_int_pos_258 = PyInt_FromLong( 258l );
    const_str_plain_dl = UNSTREAM_STRING( &constant_bin[ 68 ], 2, 1 );
    const_str_plain_SSL = UNSTREAM_STRING( &constant_bin[ 27515 ], 3, 1 );
    const_str_plain_orig = UNSTREAM_STRING( &constant_bin[ 13124 ], 4, 1 );
    const_str_plain_rand = UNSTREAM_STRING( &constant_bin[ 2905 ], 4, 1 );
    const_str_plain_tsafe = UNSTREAM_STRING( &constant_bin[ 190667 ], 5, 1 );
    const_str_plain_ctypes = UNSTREAM_STRING( &constant_bin[ 13018 ], 6, 1 );
    const_str_plain_getdlopenflags = UNSTREAM_STRING( &constant_bin[ 190672 ], 14, 1 );
    const_str_plain_setdlopenflags = UNSTREAM_STRING( &constant_bin[ 190686 ], 14, 1 );
    const_tuple_str_plain_rand_str_plain_SSL_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_SSL_tuple, 0, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_SSL_tuple, 1, const_str_plain_SSL ); Py_INCREF( const_str_plain_SSL );
    const_list_ae3c1402306effbf77270acb7dcf037d_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 0, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 1, const_str_plain_crypto ); Py_INCREF( const_str_plain_crypto );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 2, const_str_plain_SSL ); Py_INCREF( const_str_plain_SSL );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 3, const_str_plain_tsafe ); Py_INCREF( const_str_plain_tsafe );
    PyList_SET_ITEM( const_list_ae3c1402306effbf77270acb7dcf037d_list, 4, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    const_str_digest_22f788fafaeb72f7ec2efc2f6875d50e = UNSTREAM_STRING( &constant_bin[ 190700 ], 40, 0 );
    const_str_digest_844125be384df6b7ea3130df20673f2a = UNSTREAM_STRING( &constant_bin[ 190740 ], 52, 0 );
    const_list_str_digest_22f788fafaeb72f7ec2efc2f6875d50e_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_22f788fafaeb72f7ec2efc2f6875d50e_list, 0, const_str_digest_22f788fafaeb72f7ec2efc2f6875d50e ); Py_INCREF( const_str_digest_22f788fafaeb72f7ec2efc2f6875d50e );
}

// The module code objects.
static PyCodeObject *codeobj_11296814fb77c7231499fccecc5a6f7e;

static void _initModuleCodeObjects(void)
{
    codeobj_11296814fb77c7231499fccecc5a6f7e = MAKE_CODEOBJ( const_str_digest_844125be384df6b7ea3130df20673f2a, const_str_plain_OpenSSL, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL =
{
    PyModuleDef_HEAD_INIT,
    "OpenSSL",   /* m_name */
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

MOD_INIT_DECL( OpenSSL )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenSSL );
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

    // puts( "in initOpenSSL" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL = Py_InitModule4(
        "OpenSSL",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_OpenSSL = PyModule_Create( &mdef_OpenSSL );
#endif

    moduledict_OpenSSL = (PyDictObject *)((PyModuleObject *)module_OpenSSL)->md_dict;

    assertObject( module_OpenSSL );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_OpenSSL, module_OpenSSL );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_OpenSSL );

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
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObjectTempVariable tmp_try_except_2__unhandled_indicator;
    PyObjectTempVariable tmp_try_except_3__unhandled_indicator;
    PyObjectTempVariable tmp_try_except_4__unhandled_indicator;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_acc5220e644fa7b8b9598dcd1269cd6c;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_844125be384df6b7ea3130df20673f2a;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_22f788fafaeb72f7ec2efc2f6875d50e_list );
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_11296814fb77c7231499fccecc5a6f7e, module_OpenSSL );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_True;
    assert( tmp_try_except_4__unhandled_indicator.object == NULL );
    tmp_try_except_4__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    // Tried code
    // Tried block of try/except
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 485 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 11;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getdlopenflags );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 11;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_orig, tmp_assign_source_6 );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_7 = Py_False;
    if (tmp_try_except_4__unhandled_indicator.object == NULL)
    {
        tmp_try_except_4__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = tmp_try_except_4__unhandled_indicator.object;
        tmp_try_except_4__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module || exception_tb->tb_lineno != frame_module->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_module, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_crypto_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto try_finally_handler_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_crypto );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto try_finally_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_crypto, tmp_assign_source_8 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_compare_left_2 = tmp_try_except_4__unhandled_indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_9 = Py_True;
    assert( tmp_try_except_3__unhandled_indicator.object == NULL );
    tmp_try_except_3__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    // Tried code
    // Tried block of try/except
    tmp_import_globals_3 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 16;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_DLFCN, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_DLFCN, tmp_assign_source_10 );
    goto try_except_end_2;
    try_except_handler_2:;
    // Exception handler of try/except
    tmp_assign_source_11 = Py_False;
    if (tmp_try_except_3__unhandled_indicator.object == NULL)
    {
        tmp_try_except_3__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = tmp_try_except_3__unhandled_indicator.object;
        tmp_try_except_3__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module || exception_tb->tb_lineno != frame_module->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_module, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_2;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_12 = Py_True;
    assert( tmp_try_except_2__unhandled_indicator.object == NULL );
    tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    // Tried code
    // Tried block of try/except
    tmp_import_globals_4 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_13 = IMPORT_MODULE( const_str_plain_dl, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_dl, tmp_assign_source_13 );
    goto try_except_end_3;
    try_except_handler_3:;
    // Exception handler of try/except
    tmp_assign_source_14 = Py_False;
    if (tmp_try_except_2__unhandled_indicator.object == NULL)
    {
        tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = tmp_try_except_2__unhandled_indicator.object;
        tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module || exception_tb->tb_lineno != frame_module->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_module, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_finally_handler_3;
    }
    if (tmp_exc_match_exception_match_3 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_15 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    // Tried code
    // Tried block of try/except
    tmp_import_globals_5 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_16 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_16 );
    goto try_except_end_4;
    try_except_handler_4:;
    // Exception handler of try/except
    tmp_assign_source_17 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module || exception_tb->tb_lineno != frame_module->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_module, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_ImportError;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto try_finally_handler_4;
    }
    if (tmp_exc_match_exception_match_4 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_18 = const_int_pos_258;
    UPDATE_STRING_DICT0( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_flags, tmp_assign_source_18 );
    goto branch_end_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_4;
    branch_end_5:;
    try_except_end_4:;
    tmp_compare_left_6 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_6 = Py_True;
    tmp_is_2 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if (tmp_is_2)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_binop_left_1 = const_int_pos_2;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13012 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto try_finally_handler_4;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_RTLD_GLOBAL );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_4;
    }
    tmp_assign_source_19 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_flags, tmp_assign_source_19 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_OpenSSL, const_str_plain_ctypes );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13012 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto try_finally_handler_4;
    }

    branch_no_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_module->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_module->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_3;
    }

    goto finally_end_1;
    finally_end_1:;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_3;
    branch_end_4:;
    try_except_end_3:;
    tmp_compare_left_7 = tmp_try_except_2__unhandled_indicator.object;

    tmp_compare_right_7 = Py_True;
    tmp_is_3 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_3)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_dl );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dl );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13040 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto try_finally_handler_3;
    }

    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_RTLD_NOW );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_finally_handler_3;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_dl );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dl );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13040 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto try_finally_handler_3;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RTLD_GLOBAL );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_module->f_lineno = 29;
        goto try_finally_handler_3;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_finally_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_flags, tmp_assign_source_20 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_OpenSSL, const_str_plain_dl );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13040 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto try_finally_handler_3;
    }

    branch_no_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_module->f_lineno;
    tmp_result = tmp_try_except_2__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_2__unhandled_indicator.object );
        tmp_try_except_2__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_module->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_2;
    }

    goto finally_end_2;
    finally_end_2:;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_end_3:;
    try_except_end_2:;
    tmp_compare_left_8 = tmp_try_except_3__unhandled_indicator.object;

    tmp_compare_right_8 = Py_True;
    tmp_is_4 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    if (tmp_is_4)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_DLFCN );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DLFCN );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13064 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto try_finally_handler_2;
    }

    tmp_binop_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_RTLD_NOW );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto try_finally_handler_2;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_DLFCN );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DLFCN );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13064 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto try_finally_handler_2;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_RTLD_GLOBAL );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_module->f_lineno = 32;
        goto try_finally_handler_2;
    }
    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_flags, tmp_assign_source_21 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_OpenSSL, const_str_plain_DLFCN );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13064 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }

    branch_no_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_module->f_lineno;
    tmp_result = tmp_try_except_3__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_3__unhandled_indicator.object );
        tmp_try_except_3__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_module->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 485 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_setdlopenflags );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_flags );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flags );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13091 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto try_finally_handler_1;
    }

    frame_module->f_lineno = 35;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_6 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_crypto_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto try_finally_handler_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_crypto );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto try_finally_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_crypto, tmp_assign_source_22 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 485 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_setdlopenflags );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_orig );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13118 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto try_finally_handler_1;
    }

    frame_module->f_lineno = 37;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_OpenSSL, const_str_plain_orig );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13118 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto try_finally_handler_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_OpenSSL, const_str_plain_flags );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13091 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto try_finally_handler_1;
    }

    branch_no_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_module->f_lineno;
    tmp_result = tmp_try_except_4__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_4__unhandled_indicator.object );
        tmp_try_except_4__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_module->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto frame_exception_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_OpenSSL, const_str_plain_sys );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 485 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_7 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 41;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_rand_str_plain_SSL_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_rand );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_23 );
    tmp_import_globals_8 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 41;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_OpenSSL, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_rand_str_plain_SSL_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SSL );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain_SSL, tmp_assign_source_24 );
    tmp_import_globals_9 = ((PyModuleObject *)module_OpenSSL)->md_dict;
    frame_module->f_lineno = 42;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_74c9cee97c5b2738bfb46dc459970da3, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain___version___tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_25 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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
    tmp_assign_source_26 = LIST_COPY( const_list_ae3c1402306effbf77270acb7dcf037d_list );
    UPDATE_STRING_DICT1( moduledict_OpenSSL, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26 );

    return MOD_RETURN_VALUE( module_OpenSSL );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

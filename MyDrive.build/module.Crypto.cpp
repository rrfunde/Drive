// Generated code for Python source for module 'Crypto'
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

// The _module_Crypto is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Crypto;
PyDictObject *moduledict_Crypto;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_Hash;
extern PyObject *const_str_plain_Util;
extern PyObject *const_str_plain_final;
extern PyObject *const_str_plain_Cipher;
extern PyObject *const_str_plain_Crypto;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_Protocol;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_PublicKey;
static PyObject *const_str_plain_Signature;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain_version_info;
static PyObject *const_list_55054b935cf4996ed49afe2fd40aea72_list;
static PyObject *const_str_digest_375a05d369f8284af680afa9b0d9791a;
static PyObject *const_str_digest_827f54fa7b8e74091ee20e1cf6cdf898;
static PyObject *const_str_digest_bb46cd2e154d3c67d1e1c305fb5e4c4a;
extern PyObject *const_str_digest_e716a6839c8454d1d77f5308c1bdd157;
static PyObject *const_str_digest_f8664166f6406f1ea9a7476d4c5ff749;
static PyObject *const_list_str_digest_f8664166f6406f1ea9a7476d4c5ff749_list;
static PyObject *const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_Protocol = UNSTREAM_STRING( &constant_bin[ 68702 ], 8, 1 );
    const_str_plain_PublicKey = UNSTREAM_STRING( &constant_bin[ 68710 ], 9, 1 );
    const_str_plain_Signature = UNSTREAM_STRING( &constant_bin[ 68719 ], 9, 1 );
    const_list_55054b935cf4996ed49afe2fd40aea72_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 0, const_str_plain_Cipher ); Py_INCREF( const_str_plain_Cipher );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 1, const_str_plain_Hash ); Py_INCREF( const_str_plain_Hash );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 2, const_str_plain_Protocol ); Py_INCREF( const_str_plain_Protocol );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 3, const_str_plain_PublicKey ); Py_INCREF( const_str_plain_PublicKey );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 4, const_str_plain_Util ); Py_INCREF( const_str_plain_Util );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 5, const_str_plain_Signature ); Py_INCREF( const_str_plain_Signature );
    const_str_digest_375a05d369f8284af680afa9b0d9791a = UNSTREAM_STRING( &constant_bin[ 68728 ], 5, 0 );
    const_str_digest_827f54fa7b8e74091ee20e1cf6cdf898 = UNSTREAM_STRING( &constant_bin[ 68733 ], 51, 0 );
    const_str_digest_bb46cd2e154d3c67d1e1c305fb5e4c4a = UNSTREAM_STRING( &constant_bin[ 68784 ], 703, 0 );
    const_str_digest_f8664166f6406f1ea9a7476d4c5ff749 = UNSTREAM_STRING( &constant_bin[ 68733 ], 39, 0 );
    const_list_str_digest_f8664166f6406f1ea9a7476d4c5ff749_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_f8664166f6406f1ea9a7476d4c5ff749_list, 0, const_str_digest_f8664166f6406f1ea9a7476d4c5ff749 ); Py_INCREF( const_str_digest_f8664166f6406f1ea9a7476d4c5ff749 );
    const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 3, const_str_plain_final ); Py_INCREF( const_str_plain_final );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
}

// The module code objects.


static void _initModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto =
{
    PyModuleDef_HEAD_INIT,
    "Crypto",   /* m_name */
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

MOD_INIT_DECL( Crypto )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto );
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

    // puts( "in initCrypto" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto = Py_InitModule4(
        "Crypto",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto = PyModule_Create( &mdef_Crypto );
#endif

    moduledict_Crypto = (PyDictObject *)((PyModuleObject *)module_Crypto)->md_dict;

    assertObject( module_Crypto );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_Crypto, module_Crypto );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Crypto );

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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;

    // Module code.
    tmp_assign_source_1 = const_str_digest_bb46cd2e154d3c67d1e1c305fb5e4c4a;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_827f54fa7b8e74091ee20e1cf6cdf898;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f8664166f6406f1ea9a7476d4c5ff749_list );
    UPDATE_STRING_DICT1( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = LIST_COPY( const_list_55054b935cf4996ed49afe2fd40aea72_list );
    UPDATE_STRING_DICT1( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_375a05d369f8284af680afa9b0d9791a;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_e716a6839c8454d1d77f5308c1bdd157;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_Crypto );
}

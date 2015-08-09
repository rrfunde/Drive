// Generated code for Python source for module 'oauth2client'
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

// The _module_oauth2client is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_oauth2client;
PyDictObject *moduledict_oauth2client;

// The module constants used
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_oauth2client;
extern PyObject *const_str_plain_GOOGLE_AUTH_URI;
extern PyObject *const_str_plain_GOOGLE_TOKEN_URI;
extern PyObject *const_str_plain_GOOGLE_REVOKE_URI;
extern PyObject *const_str_digest_56765472680401499c79732468ba4340;
static PyObject *const_str_digest_87e874da72eaacb47c6146a873051af7;
extern PyObject *const_str_digest_9a338342c3e451687bd8a9231f7dff7c;
extern PyObject *const_str_digest_9adc413b70d50ff5145c1d0bc2530c29;
static PyObject *const_str_digest_b29a8ff02c61b92147de93430ef688ec;
static PyObject *const_str_digest_f53c45aed4cda62cf58e602f70f9be48;
static PyObject *const_list_str_digest_87e874da72eaacb47c6146a873051af7_list;

static void _initModuleConstants(void)
{
    const_str_digest_87e874da72eaacb47c6146a873051af7 = UNSTREAM_STRING( &constant_bin[ 265392 ], 51, 0 );
    const_str_digest_b29a8ff02c61b92147de93430ef688ec = UNSTREAM_STRING( &constant_bin[ 265443 ], 63, 0 );
    const_str_digest_f53c45aed4cda62cf58e602f70f9be48 = UNSTREAM_STRING( &constant_bin[ 265506 ], 43, 0 );
    const_list_str_digest_87e874da72eaacb47c6146a873051af7_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_87e874da72eaacb47c6146a873051af7_list, 0, const_str_digest_87e874da72eaacb47c6146a873051af7 ); Py_INCREF( const_str_digest_87e874da72eaacb47c6146a873051af7 );
}

// The module code objects.


static void _initModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client",   /* m_name */
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

MOD_INIT_DECL( oauth2client )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client );
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

    // puts( "in initoauth2client" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client = Py_InitModule4(
        "oauth2client",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauth2client = PyModule_Create( &mdef_oauth2client );
#endif

    moduledict_oauth2client = (PyDictObject *)((PyModuleObject *)module_oauth2client)->md_dict;

    assertObject( module_oauth2client );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_oauth2client, module_oauth2client );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_oauth2client );

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
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b29a8ff02c61b92147de93430ef688ec;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_87e874da72eaacb47c6146a873051af7_list );
    UPDATE_STRING_DICT1( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_56765472680401499c79732468ba4340;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_9a338342c3e451687bd8a9231f7dff7c;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_AUTH_URI, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_f53c45aed4cda62cf58e602f70f9be48;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_REVOKE_URI, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_9adc413b70d50ff5145c1d0bc2530c29;
    UPDATE_STRING_DICT0( moduledict_oauth2client, (Nuitka_StringObject *)const_str_plain_GOOGLE_TOKEN_URI, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_oauth2client );
}

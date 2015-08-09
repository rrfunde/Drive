// Generated code for Python source for module 'Crypto.Random.Fortuna'
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

// The _module_Crypto$Random$Fortuna is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Crypto$Random$Fortuna;
PyDictObject *moduledict_Crypto$Random$Fortuna;

// The module constants used
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_0ff9ee71e00c64dd639aabc1b01e35d7;
static PyObject *const_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433;
static PyObject *const_str_digest_7d2f7ac5e65faca87442c353cc0bce9c;
static PyObject *const_list_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433_list;

static void _initModuleConstants(void)
{
    const_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433 = UNSTREAM_STRING( &constant_bin[ 115742 ], 54, 0 );
    const_str_digest_7d2f7ac5e65faca87442c353cc0bce9c = UNSTREAM_STRING( &constant_bin[ 115796 ], 66, 0 );
    const_list_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433_list, 0, const_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433 ); Py_INCREF( const_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433 );
}

// The module code objects.


static void _initModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$Fortuna =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.Fortuna",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$Fortuna )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$Fortuna );
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

    // puts( "in initCrypto$Random$Fortuna" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$Fortuna = Py_InitModule4(
        "Crypto.Random.Fortuna",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$Fortuna = PyModule_Create( &mdef_Crypto$Random$Fortuna );
#endif

    moduledict_Crypto$Random$Fortuna = (PyDictObject *)((PyModuleObject *)module_Crypto$Random$Fortuna)->md_dict;

    assertObject( module_Crypto$Random$Fortuna );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0ff9ee71e00c64dd639aabc1b01e35d7, module_Crypto$Random$Fortuna );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Crypto$Random$Fortuna );

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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7d2f7ac5e65faca87442c353cc0bce9c;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_4d6cabfe6d1524c9a5c9a39bc4a27433_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );

    return MOD_RETURN_VALUE( module_Crypto$Random$Fortuna );
}
// Generated code for Python source for module 'django.utils.version'
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

// The _module_django$utils$version is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_django$utils$version;
PyDictObject *moduledict_django$utils$version;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_unicode_dot;
extern PyObject *const_str_plain_os;
static PyObject *const_str_plain_cwd;
extern PyObject *const_str_plain_sub;
extern PyObject *const_unicode_empty;
static PyObject *const_str_plain_PIPE;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_main;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_Popen;
extern PyObject *const_str_plain_parts;
static PyObject *const_str_plain_shell;
extern PyObject *const_unicode_plain_a;
static PyObject *const_unicode_plain_b;
static PyObject *const_unicode_plain_c;
extern PyObject *const_str_plain_django;
static PyObject *const_str_plain_stderr;
static PyObject *const_str_plain_stdout;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_unicode_plain_rc;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_git_log;
extern PyObject *const_str_plain_mapping;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_datetime;
static PyObject *const_str_plain_repo_dir;
extern PyObject *const_str_plain_strftime;
static PyObject *const_unicode_plain_beta;
static PyObject *const_str_plain_timestamp;
static PyObject *const_unicode_plain_alpha;
static PyObject *const_unicode_plain_final;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___iterator;
static PyObject *const_str_plain_subprocess;
static PyObject *const_str_plain_communicate;
extern PyObject *const_str_plain_contraction;
extern PyObject *const_str_plain_get_version;
static PyObject *const_str_plain_git_changeset;
static PyObject *const_str_plain_unicode_literals;
static PyObject *const_str_plain_utcfromtimestamp;
static PyObject *const_str_plain_get_git_changeset;
static PyObject *const_str_plain_universal_newlines;
static PyObject *const_tuple_str_plain_VERSION_tuple;
static PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_tuple_str_plain___iterator_tuple;
static PyObject *const_dict_6a1559e30f274d05348f924769d5b01f;
static PyObject *const_tuple_str_plain_unicode_literals_tuple;
static PyObject *const_str_digest_70431bb1d1820641133fda212bdca498;
extern PyObject *const_str_digest_7b0986266463f6f3532b6c3b9bcb1f27;
static PyObject *const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple;
static PyObject *const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple;
static PyObject *const_unicode_digest_0741003367f051f80c9aa6286f69c4aa;
static PyObject *const_unicode_digest_3f62daf1d921db9a1d9a0b7d7d82ac63;
static PyObject *const_unicode_digest_94bcb5e0b07765669dd2c0ecb185824f;
static PyObject *const_unicode_digest_9749e6c8182f9339ffc2fc75ab27c2be;
static PyObject *const_unicode_digest_ee26ac064d5f44bbd868135656cb4611;
static PyObject *const_tuple_unicode_digest_ee26ac064d5f44bbd868135656cb4611_tuple;
static PyObject *const_tuple_str_plain_repo_dir_str_plain_git_log_str_plain_timestamp_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_cwd = UNSTREAM_STRING( &constant_bin[ 246346 ], 3, 1 );
    const_str_plain_PIPE = UNSTREAM_STRING( &constant_bin[ 246349 ], 4, 1 );
    const_str_plain_Popen = UNSTREAM_STRING( &constant_bin[ 246353 ], 5, 1 );
    const_str_plain_shell = UNSTREAM_STRING( &constant_bin[ 246358 ], 5, 1 );
    const_unicode_plain_b = UNSTREAM_UNICODE( &constant_bin[ 6 ], 1 );
    const_unicode_plain_c = UNSTREAM_UNICODE( &constant_bin[ 9 ], 1 );
    const_str_plain_stderr = UNSTREAM_STRING( &constant_bin[ 246363 ], 6, 1 );
    const_str_plain_stdout = UNSTREAM_STRING( &constant_bin[ 246369 ], 6, 1 );
    const_unicode_plain_rc = UNSTREAM_UNICODE( &constant_bin[ 6830 ], 2 );
    const_str_plain_git_log = UNSTREAM_STRING( &constant_bin[ 246375 ], 7, 1 );
    const_str_plain_repo_dir = UNSTREAM_STRING( &constant_bin[ 246382 ], 8, 1 );
    const_unicode_plain_beta = UNSTREAM_UNICODE( &constant_bin[ 246390 ], 4 );
    const_str_plain_timestamp = UNSTREAM_STRING( &constant_bin[ 27288 ], 9, 1 );
    const_unicode_plain_alpha = UNSTREAM_UNICODE( &constant_bin[ 192110 ], 5 );
    const_unicode_plain_final = UNSTREAM_UNICODE( &constant_bin[ 78625 ], 5 );
    const_str_plain_subprocess = UNSTREAM_STRING( &constant_bin[ 27209 ], 10, 1 );
    const_str_plain_communicate = UNSTREAM_STRING( &constant_bin[ 246394 ], 11, 1 );
    const_str_plain_git_changeset = UNSTREAM_STRING( &constant_bin[ 26975 ], 13, 1 );
    const_str_plain_unicode_literals = UNSTREAM_STRING( &constant_bin[ 246405 ], 16, 1 );
    const_str_plain_utcfromtimestamp = UNSTREAM_STRING( &constant_bin[ 246421 ], 16, 1 );
    const_str_plain_get_git_changeset = UNSTREAM_STRING( &constant_bin[ 26971 ], 17, 1 );
    const_str_plain_universal_newlines = UNSTREAM_STRING( &constant_bin[ 246437 ], 18, 1 );
    const_tuple_str_plain_VERSION_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_VERSION_tuple, 0, const_str_plain_VERSION ); Py_INCREF( const_str_plain_VERSION );
    const_tuple_str_plain_version_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_version_tuple, 0, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    const_dict_6a1559e30f274d05348f924769d5b01f = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_6a1559e30f274d05348f924769d5b01f, const_unicode_plain_alpha, const_unicode_plain_a );
    PyDict_SetItem( const_dict_6a1559e30f274d05348f924769d5b01f, const_unicode_plain_beta, const_unicode_plain_b );
    PyDict_SetItem( const_dict_6a1559e30f274d05348f924769d5b01f, const_unicode_plain_rc, const_unicode_plain_c );
    const_tuple_str_plain_unicode_literals_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unicode_literals_tuple, 0, const_str_plain_unicode_literals ); Py_INCREF( const_str_plain_unicode_literals );
    const_str_digest_70431bb1d1820641133fda212bdca498 = UNSTREAM_STRING( &constant_bin[ 246455 ], 56, 0 );
    const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple, 0, const_unicode_plain_alpha ); Py_INCREF( const_unicode_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple, 1, const_unicode_plain_beta ); Py_INCREF( const_unicode_plain_beta );
    PyTuple_SET_ITEM( const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple, 2, const_unicode_plain_rc ); Py_INCREF( const_unicode_plain_rc );
    PyTuple_SET_ITEM( const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple, 3, const_unicode_plain_final ); Py_INCREF( const_unicode_plain_final );
    const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 0, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 1, const_str_plain_parts ); Py_INCREF( const_str_plain_parts );
    PyTuple_SET_ITEM( const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 2, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyTuple_SET_ITEM( const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 3, const_str_plain_sub ); Py_INCREF( const_str_plain_sub );
    PyTuple_SET_ITEM( const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 4, const_str_plain_git_changeset ); Py_INCREF( const_str_plain_git_changeset );
    PyTuple_SET_ITEM( const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 5, const_str_plain_mapping ); Py_INCREF( const_str_plain_mapping );
    const_unicode_digest_0741003367f051f80c9aa6286f69c4aa = UNSTREAM_UNICODE( &constant_bin[ 246511 ], 56 );
    const_unicode_digest_3f62daf1d921db9a1d9a0b7d7d82ac63 = UNSTREAM_UNICODE( &constant_bin[ 246567 ], 6 );
    const_unicode_digest_94bcb5e0b07765669dd2c0ecb185824f = UNSTREAM_UNICODE( &constant_bin[ 246573 ], 293 );
    const_unicode_digest_9749e6c8182f9339ffc2fc75ab27c2be = UNSTREAM_UNICODE( &constant_bin[ 246866 ], 12 );
    const_unicode_digest_ee26ac064d5f44bbd868135656cb4611 = UNSTREAM_UNICODE( &constant_bin[ 246878 ], 43 );
    const_tuple_unicode_digest_ee26ac064d5f44bbd868135656cb4611_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_unicode_digest_ee26ac064d5f44bbd868135656cb4611_tuple, 0, const_unicode_digest_ee26ac064d5f44bbd868135656cb4611 ); Py_INCREF( const_unicode_digest_ee26ac064d5f44bbd868135656cb4611 );
    const_tuple_str_plain_repo_dir_str_plain_git_log_str_plain_timestamp_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_repo_dir_str_plain_git_log_str_plain_timestamp_tuple, 0, const_str_plain_repo_dir ); Py_INCREF( const_str_plain_repo_dir );
    PyTuple_SET_ITEM( const_tuple_str_plain_repo_dir_str_plain_git_log_str_plain_timestamp_tuple, 1, const_str_plain_git_log ); Py_INCREF( const_str_plain_git_log );
    PyTuple_SET_ITEM( const_tuple_str_plain_repo_dir_str_plain_git_log_str_plain_timestamp_tuple, 2, const_str_plain_timestamp ); Py_INCREF( const_str_plain_timestamp );
}

// The module code objects.
static PyCodeObject *codeobj_5925bf8e86eca7221654a8b38bb8ed9e;
static PyCodeObject *codeobj_005b792233cccb2694c8b4877093e460;
static PyCodeObject *codeobj_1ba13fa28b24c972e33c181c7ac7676b;
static PyCodeObject *codeobj_f8c44c56a7400ee73b66e2239a566233;
static PyCodeObject *codeobj_0db99df467f053735786e7eb8f1b3746;
static PyCodeObject *codeobj_3292a7908d5d317fcf7df59b315d17ed;
static PyCodeObject *codeobj_21c6d3141f0e8c11df32644da1fb1f1d;

static void _initModuleCodeObjects(void)
{
    codeobj_5925bf8e86eca7221654a8b38bb8ed9e = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_angle_genexpr, 21, const_tuple_str_plain___iterator_tuple, 1, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_005b792233cccb2694c8b4877093e460 = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_plain_contraction, 21, const_tuple_empty, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_1ba13fa28b24c972e33c181c7ac7676b = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_plain_get_git_changeset, 35, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_f8c44c56a7400ee73b66e2239a566233 = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_plain_get_git_changeset, 35, const_tuple_str_plain_repo_dir_str_plain_git_log_str_plain_timestamp_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_0db99df467f053735786e7eb8f1b3746 = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_plain_get_version, 7, const_tuple_str_plain_version_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_3292a7908d5d317fcf7df59b315d17ed = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_plain_get_version, 7, const_tuple_a68683553d75ae278ce26ef3dacd7317_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_21c6d3141f0e8c11df32644da1fb1f1d = MAKE_CODEOBJ( const_str_digest_70431bb1d1820641133fda212bdca498, const_str_plain_version, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_1_get_version_of_module_django$utils$version( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_1_get_version_of_module_django$utils$version( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_get_git_changeset_of_module_django$utils$version(  );


// The module function definitions.
static PyObject *impl_function_1_get_version_of_module_django$utils$version( Nuitka_FunctionObject *self, PyObject *_python_par_version )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_version; par_version.object = _python_par_version;
    PyObjectLocalVariable var_parts;
    PyObjectLocalVariable var_main;
    PyObjectLocalVariable var_sub;
    PyObjectLocalVariable var_git_changeset;
    PyObjectLocalVariable var_mapping;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0db99df467f053735786e7eb8f1b3746, module_django$utils$version );
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
    tmp_compare_left_1 = par_version.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 9;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_1 = ((PyModuleObject *)module_django$utils$version)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_parts.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_parts,
            var_parts.object
        );

    }
    if ((var_main.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_main,
            var_main.object
        );

    }
    if ((var_sub.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sub,
            var_sub.object
        );

    }
    if ((var_git_changeset.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_git_changeset,
            var_git_changeset.object
        );

    }
    if ((var_mapping.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mapping,
            var_mapping.object
        );

    }
    if ((par_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_version,
            par_version.object
        );

    }
    frame_function->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_django, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_VERSION_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_VERSION );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    if (par_version.object == NULL)
    {
        par_version.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_version.object;
        par_version.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_1 = par_version.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_5;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 12;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_subscr_target_1 = par_version.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_pos_3;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_tuple_0ac09f30af48120c073c27f3e402d53e_tuple;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_2 );
    frame_function->f_lineno = 13;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    branch_end_1:;
    tmp_subscr_target_2 = par_version.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_pos_2;
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_2 = const_int_pos_2;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = const_int_pos_3;
    condexpr_end_1:;
    assert( var_parts.object == NULL );
    var_parts.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_source_name_1 = const_unicode_dot;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_1 = par_version.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = var_parts.object;

    tmp_iter_arg_1 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = impl_genexpr_1_of_function_1_get_version_of_module_django$utils$version( tmp_dircall_arg1_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 21;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    assert( var_main.object == NULL );
    var_main.object = tmp_assign_source_3;

    tmp_assign_source_4 = const_unicode_empty;
    assert( var_sub.object == NULL );
    var_sub.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_subscr_target_3 = par_version.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_3 = const_int_pos_3;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_unicode_plain_alpha;
    tmp_assign_source_5 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_5;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_4 = par_version.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_4 = const_int_pos_4;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_cond_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_3;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 24;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_get_git_changeset );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_git_changeset );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26958 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 25;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    assert( var_git_changeset.object == NULL );
    var_git_changeset.object = tmp_assign_source_6;

    tmp_cond_value_3 = var_git_changeset.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_1 = const_unicode_digest_3f62daf1d921db9a1d9a0b7d7d82ac63;
    tmp_binop_right_1 = var_git_changeset.object;

    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    if (var_sub.object == NULL)
    {
        var_sub.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_sub.object;
        var_sub.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_subscr_target_5 = par_version.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_5 = const_int_pos_3;
    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto try_finally_handler_1;
    }
    tmp_compare_right_5 = const_unicode_plain_final;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 29;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_8 = PyDict_Copy( const_dict_6a1559e30f274d05348f924769d5b01f );
    assert( var_mapping.object == NULL );
    var_mapping.object = tmp_assign_source_8;

    tmp_subscr_target_6 = var_mapping.object;

    tmp_subscr_target_7 = par_version.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_7 = const_int_pos_3;
    tmp_subscr_subscript_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_subscr_subscript_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }
    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_8 = par_version.object;

    if ( tmp_subscr_target_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_8 = const_int_pos_4;
    tmp_str_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_1;
    }
    if (var_sub.object == NULL)
    {
        var_sub.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_sub.object;
        var_sub.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    branch_no_6:;
    branch_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_binop_left_3 = var_main.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27004 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = var_sub.object;

    if ( tmp_binop_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27054 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_str_arg_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_str_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyObject_Str( tmp_str_arg_2 );
    Py_DECREF( tmp_str_arg_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
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
    if ((var_parts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_parts,
            var_parts.object
        );

    }
    if ((var_main.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_main,
            var_main.object
        );

    }
    if ((var_sub.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sub,
            var_sub.object
        );

    }
    if ((var_git_changeset.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_git_changeset,
            var_git_changeset.object
        );

    }
    if ((var_mapping.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mapping,
            var_mapping.object
        );

    }
    if ((par_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_version,
            par_version.object
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
static PyObject *fparse_function_1_get_version_of_module_django$utils$version( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_version = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_version == key )
            {
                assert( _python_par_version == NULL );
                _python_par_version = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_version, key ) == 1 )
            {
                assert( _python_par_version == NULL );
                _python_par_version = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_version() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_version != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_version = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_version == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_version = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_version == NULL ))
    {
        PyObject *values[] = { _python_par_version };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_get_version_of_module_django$utils$version( self, _python_par_version );

error_exit:;

    Py_XDECREF( _python_par_version );

    return NULL;
}

static PyObject *dparse_function_1_get_version_of_module_django$utils$version( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_get_version_of_module_django$utils$version( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_get_version_of_module_django$utils$version( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure___iterator;
    PyObjectLocalVariable closure_x;
    PyObjectTempVariable closure_iter_value_0;
};

static void _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t *_python_context = (struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void genexpr_1_of_function_1_get_version_of_module_django$utils$version_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void genexpr_1_of_function_1_get_version_of_module_django$utils$version_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t *_python_context = (_context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next_source_1;
    PyObject *tmp_str_arg_1;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_005b792233cccb2694c8b4877093e460, module_django$utils$version );

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Tried code
    // Throwing into unstarted generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            goto try_finally_handler_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = _python_context->closure___iterator.object;

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27103 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto try_finally_handler_1;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_1 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 21;
            goto try_finally_handler_1;
        }
    }

    if (_python_context->closure_iter_value_0.object == NULL)
    {
        _python_context->closure_iter_value_0.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = _python_context->closure_iter_value_0.object;
        _python_context->closure_iter_value_0.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = _python_context->closure_iter_value_0.object;

    if (_python_context->closure_x.object == NULL)
    {
        _python_context->closure_x.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = _python_context->closure_x.object;
        _python_context->closure_x.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    tmp_str_arg_1 = _python_context->closure_x.object;

    tmp_yield_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto try_finally_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( _python_context->closure_iter_value_0.object );
    _python_context->closure_iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

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
    if ((_python_context->closure_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            _python_context->closure_x.object
        );

    }
    if ((_python_context->closure___iterator.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___iterator,
            _python_context->closure___iterator.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


#if PYTHON_VERSION > 300
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    PyErr_Restore( INCREASE_REFCOUNT( PyExc_StopIteration ), NULL, NULL );

    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return;
function_exception_exit:
    assert( exception_type );
    assert( exception_tb );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

}
static PyObject *impl_genexpr_1_of_function_1_get_version_of_module_django$utils$version( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t *_python_context = new _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_t;

        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_1_get_version_of_module_django$utils$version_context,
            const_str_angle_genexpr,
            codeobj_5925bf8e86eca7221654a8b38bb8ed9e,
            _python_context,
            _context_generator_genexpr_1_of_function_1_get_version_of_module_django$utils$version_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure___iterator.object = _python_par___iterator;

    return result;
}


static PyObject *impl_function_2_get_git_changeset_of_module_django$utils$version( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_repo_dir;
    PyObjectLocalVariable var_git_log;
    PyObjectLocalVariable var_timestamp;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1ba13fa28b24c972e33c181c7ac7676b, module_django$utils$version );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7530 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7530 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7530 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27159 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 42;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 42;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 42;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( var_repo_dir.object == NULL );
    var_repo_dir.object = tmp_assign_source_1;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27196 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Popen );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = const_tuple_unicode_digest_ee26ac064d5f44bbd868135656cb4611_tuple;
    tmp_call_kw_1 = _PyDict_NewPresized( 5 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27196 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PIPE );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_stdout;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27196 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_PIPE );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_stderr;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = Py_True;
    tmp_dict_key_3 = const_str_plain_shell;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_repo_dir.object;

    tmp_dict_key_4 = const_str_plain_cwd;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = Py_True;
    tmp_dict_key_5 = const_str_plain_universal_newlines;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 45;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    assert( var_git_log.object == NULL );
    var_git_log.object = tmp_assign_source_2;

    tmp_source_name_10 = var_git_log.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_communicate );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 46;
    tmp_subscr_target_1 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var_timestamp.object == NULL );
    var_timestamp.object = tmp_assign_source_3;

    // Tried block of try/except
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27235 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto try_except_handler_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_datetime );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_except_handler_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_utcfromtimestamp );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_except_handler_1;
    }
    tmp_int_arg_1 = var_timestamp.object;

    tmp_call_arg_element_4 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 48;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 48;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_except_handler_1;
    }
    assert( var_timestamp.object != NULL );
    {
        PyObject *old = var_timestamp.object;
        var_timestamp.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_source_name_13 = var_timestamp.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27272 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_strftime );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_unicode_digest_9749e6c8182f9339ffc2fc75ab27c2be;
    frame_function->f_lineno = 51;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 1
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
    if ((var_repo_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_repo_dir,
            var_repo_dir.object
        );

    }
    if ((var_git_log.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_git_log,
            var_git_log.object
        );

    }
    if ((var_timestamp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_timestamp,
            var_timestamp.object
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
static PyObject *fparse_function_2_get_git_changeset_of_module_django$utils$version( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }


    return impl_function_2_get_git_changeset_of_module_django$utils$version( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_get_git_changeset_of_module_django$utils$version( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2_get_git_changeset_of_module_django$utils$version( self );
    }
    else
    {
        PyObject *result = fparse_function_2_get_git_changeset_of_module_django$utils$version( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_get_version_of_module_django$utils$version( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_version_of_module_django$utils$version,
        dparse_function_1_get_version_of_module_django$utils$version,
        const_str_plain_get_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3292a7908d5d317fcf7df59b315d17ed,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$version,
        const_unicode_digest_0741003367f051f80c9aa6286f69c4aa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_git_changeset_of_module_django$utils$version(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_git_changeset_of_module_django$utils$version,
        dparse_function_2_get_git_changeset_of_module_django$utils$version,
        const_str_plain_get_git_changeset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f8c44c56a7400ee73b66e2239a566233,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$version,
        const_unicode_digest_94bcb5e0b07765669dd2c0ecb185824f
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$version =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.version",   /* m_name */
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

MOD_INIT_DECL( django$utils$version )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$version );
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

    // puts( "in initdjango$utils$version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$version = Py_InitModule4(
        "django.utils.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$version = PyModule_Create( &mdef_django$utils$version );
#endif

    moduledict_django$utils$version = (PyDictObject *)((PyModuleObject *)module_django$utils$version)->md_dict;

    assertObject( module_django$utils$version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7b0986266463f6f3532b6c3b9bcb1f27, module_django$utils$version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_django$utils$version );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_70431bb1d1820641133fda212bdca498;
    UPDATE_STRING_DICT0( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_21c6d3141f0e8c11df32644da1fb1f1d, module_django$utils$version );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_django$utils$version)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_unicode_literals_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_django$utils$version)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_datetime, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_django$utils$version)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_django$utils$version)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_subprocess, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_subprocess, tmp_assign_source_6 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_get_version_of_module_django$utils$version( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_get_version, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_function_2_get_git_changeset_of_module_django$utils$version(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$version, (Nuitka_StringObject *)const_str_plain_get_git_changeset, tmp_assign_source_8 );

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

    return MOD_RETURN_VALUE( module_django$utils$version );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

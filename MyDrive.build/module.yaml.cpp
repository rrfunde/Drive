// Generated code for Python source for module 'yaml'
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

// The _module_yaml is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_yaml;
PyDictObject *moduledict_yaml;

// The module constants used
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain_emit;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_scan;
extern PyObject *const_str_plain_tags;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_yaml;
extern PyObject *const_str_plain_bases;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_cyaml;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_event;
extern PyObject *const_str_plain_first;
extern PyObject *const_str_plain_nodes;
static PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_Dumper;
extern PyObject *const_str_plain_Loader;
extern PyObject *const_str_plain_dumper;
extern PyObject *const_str_plain_events;
extern PyObject *const_str_plain_indent;
extern PyObject *const_str_plain_loader;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_regexp;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_plain_tokens;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_compose;
extern PyObject *const_str_plain_dispose;
static PyObject *const_str_plain_to_yaml;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_dump_all;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_get_data;
extern PyObject *const_str_plain_get_node;
extern PyObject *const_str_plain_getvalue;
static PyObject *const_str_plain_load_all;
static PyObject *const_str_plain_yaml_tag;
static PyObject *const_str_plain___slots__;
extern PyObject *const_str_plain_cStringIO;
extern PyObject *const_str_plain_canonical;
extern PyObject *const_str_plain_data_type;
static PyObject *const_str_plain_documents;
static PyObject *const_str_plain_from_yaml;
extern PyObject *const_str_plain_get_event;
extern PyObject *const_str_plain_get_token;
extern PyObject *const_str_plain_represent;
static PyObject *const_str_plain_safe_dump;
static PyObject *const_str_plain_safe_load;
extern PyObject *const_str_plain_serialize;
extern PyObject *const_str_plain_SafeDumper;
extern PyObject *const_str_plain_SafeLoader;
static PyObject *const_str_plain_YAMLObject;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_check_data;
extern PyObject *const_str_plain_check_node;
extern PyObject *const_str_plain_flow_style;
extern PyObject *const_str_plain_line_break;
extern PyObject *const_str_plain_tag_prefix;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_check_event;
extern PyObject *const_str_plain_check_token;
extern PyObject *const_str_plain_classmethod;
static PyObject *const_str_plain_compose_all;
extern PyObject *const_str_plain_constructor;
extern PyObject *const_str_plain_representer;
static PyObject *const_str_plain_yaml_dumper;
static PyObject *const_str_plain_yaml_loader;
extern PyObject *const_str_plain_explicit_end;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_allow_unicode;
extern PyObject *const_str_plain_default_style;
static PyObject *const_str_plain_safe_dump_all;
static PyObject *const_str_plain_safe_load_all;
static PyObject *const_str_plain_serialize_all;
extern PyObject *const_str_plain_explicit_start;
extern PyObject *const_str_plain_add_constructor;
extern PyObject *const_str_plain_add_representer;
extern PyObject *const_str_plain_get_single_data;
extern PyObject *const_str_plain_get_single_node;
static PyObject *const_str_plain_yaml_flow_style;
static PyObject *const_str_plain___with_libyaml__;
extern PyObject *const_str_plain_add_path_resolver;
extern PyObject *const_str_plain_multi_constructor;
static PyObject *const_str_plain_multi_representer;
extern PyObject *const_str_plain_default_flow_style;
static PyObject *const_tuple_str_plain_stream_tuple;
static PyObject *const_str_plain_YAMLObjectMetaclass;
static PyObject *const_tuple_str_plain_StringIO_tuple;
extern PyObject *const_str_plain_add_implicit_resolver;
extern PyObject *const_str_plain_add_multi_constructor;
extern PyObject *const_str_plain_add_multi_representer;
extern PyObject *const_str_plain_construct_yaml_object;
extern PyObject *const_str_plain_represent_yaml_object;
static PyObject *const_str_digest_0ea443bfd96e1b1712763d5746853c32;
static PyObject *const_str_digest_2223c89990f93a7cadb8e585806c943d;
static PyObject *const_str_digest_2be2088f380f05c91030e3c0a5c0aea7;
static PyObject *const_str_digest_3733a5996907aa690e39f1e78ee89f30;
static PyObject *const_str_digest_57df5db6c047c908e666fef54878d310;
static PyObject *const_str_digest_592fcfe486c2a919eeca0c4c43e0a3e6;
static PyObject *const_str_digest_6359860bc6a6a86403f938ba9c31f854;
static PyObject *const_str_digest_64d91d164dab8f1dcf9ab9c7dabcd277;
static PyObject *const_str_digest_7b65c8c8bd5d0a1400de64b4eea0f234;
static PyObject *const_str_digest_7c2fff4390a089ec442d3d6360002e75;
static PyObject *const_str_digest_842684dfd72b94e5cd4cba4fb237caba;
static PyObject *const_str_digest_86109977ba39a3fd8af230b1713b5986;
static PyObject *const_str_digest_8b321806a68d32b5d2089b494f6053c9;
static PyObject *const_str_digest_aba5b8b311dcc764d8cd28361d094275;
static PyObject *const_str_digest_ac4479e37afb45562de618a2432e20e7;
static PyObject *const_str_digest_b8f5b75ad5fa6d2dcd6ebd91641d225c;
static PyObject *const_str_digest_be9f5988c832674333dc86f9e14cd835;
static PyObject *const_str_digest_c421ea8e23681214b813508309ab7232;
static PyObject *const_str_digest_c7a254ce21c0bbaa3494e736db212023;
static PyObject *const_str_digest_c942d2c989f3b1224eccd4e2fd5393dd;
static PyObject *const_str_digest_d08724d30d57ad0fd62c47d58b43a640;
static PyObject *const_str_digest_d2782260ec3f6babd0d8cdf6de153d18;
static PyObject *const_str_digest_d37c975cb44979b09e197a5a584cf2a0;
static PyObject *const_str_digest_d813edd7eda23544d31d9c48821d11bc;
static PyObject *const_str_digest_dbb2ee2c44abdad00b80331c569c12ab;
static PyObject *const_str_digest_e25863bdea9b8fb998503fc94bdd2be2;
static PyObject *const_str_digest_e275f79ce14db9be76237699539edb52;
extern PyObject *const_str_digest_e9e2aa8136260a22b0b09fdee43ccb8a;
static PyObject *const_str_digest_f9cb1aa37a8194d1b89841f99e5f7fef;
static PyObject *const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple;
static PyObject *const_tuple_48b633efb608e2688839313939cf92e6_tuple;
static PyObject *const_tuple_4a00b97c735dba332804887e29f26afb_tuple;
static PyObject *const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple;
static PyObject *const_tuple_950adea43bcae15e1447872cace8ac33_tuple;
static PyObject *const_tuple_beeef77c361060d983bd4ace6528c030_tuple;
static PyObject *const_tuple_c20dfb5470e5dc811754493000b71135_tuple;
static PyObject *const_tuple_c5a65859bf7212500814656c9d506148_tuple;
static PyObject *const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple;
static PyObject *const_tuple_d355267c6e168abd718665c8afc169d6_tuple;
static PyObject *const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple;
static PyObject *const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple;
static PyObject *const_tuple_str_plain_stream_str_plain_Loader_tuple;
static PyObject *const_list_str_digest_842684dfd72b94e5cd4cba4fb237caba_list;
static PyObject *const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple;
static PyObject *const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple;
static PyObject *const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple;
static PyObject *const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple;
static PyObject *const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple;
static PyObject *const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple;
static PyObject *const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple;
static PyObject *const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_parse = UNSTREAM_STRING( &constant_bin[ 15841 ], 5, 1 );
    const_str_plain_compose = UNSTREAM_STRING( &constant_bin[ 346899 ], 7, 1 );
    const_str_plain_to_yaml = UNSTREAM_STRING( &constant_bin[ 346906 ], 7, 1 );
    const_str_plain_dump_all = UNSTREAM_STRING( &constant_bin[ 57486 ], 8, 1 );
    const_str_plain_load_all = UNSTREAM_STRING( &constant_bin[ 56529 ], 8, 1 );
    const_str_plain_yaml_tag = UNSTREAM_STRING( &constant_bin[ 346913 ], 8, 1 );
    const_str_plain___slots__ = UNSTREAM_STRING( &constant_bin[ 346921 ], 9, 1 );
    const_str_plain_documents = UNSTREAM_STRING( &constant_bin[ 57434 ], 9, 1 );
    const_str_plain_from_yaml = UNSTREAM_STRING( &constant_bin[ 346930 ], 9, 1 );
    const_str_plain_safe_dump = UNSTREAM_STRING( &constant_bin[ 346939 ], 9, 1 );
    const_str_plain_safe_load = UNSTREAM_STRING( &constant_bin[ 346948 ], 9, 1 );
    const_str_plain_YAMLObject = UNSTREAM_STRING( &constant_bin[ 58009 ], 10, 1 );
    const_str_plain_compose_all = UNSTREAM_STRING( &constant_bin[ 346957 ], 11, 1 );
    const_str_plain_yaml_dumper = UNSTREAM_STRING( &constant_bin[ 346968 ], 11, 1 );
    const_str_plain_yaml_loader = UNSTREAM_STRING( &constant_bin[ 346979 ], 11, 1 );
    const_str_plain_safe_dump_all = UNSTREAM_STRING( &constant_bin[ 346990 ], 13, 1 );
    const_str_plain_safe_load_all = UNSTREAM_STRING( &constant_bin[ 347003 ], 13, 1 );
    const_str_plain_serialize_all = UNSTREAM_STRING( &constant_bin[ 57216 ], 13, 1 );
    const_str_plain_yaml_flow_style = UNSTREAM_STRING( &constant_bin[ 347016 ], 15, 1 );
    const_str_plain___with_libyaml__ = UNSTREAM_STRING( &constant_bin[ 347031 ], 16, 1 );
    const_str_plain_multi_representer = UNSTREAM_STRING( &constant_bin[ 57949 ], 17, 1 );
    const_tuple_str_plain_stream_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain_YAMLObjectMetaclass = UNSTREAM_STRING( &constant_bin[ 58009 ], 19, 1 );
    const_tuple_str_plain_StringIO_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_tuple, 0, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    const_str_digest_0ea443bfd96e1b1712763d5746853c32 = UNSTREAM_STRING( &constant_bin[ 347047 ], 114, 0 );
    const_str_digest_2223c89990f93a7cadb8e585806c943d = UNSTREAM_STRING( &constant_bin[ 347161 ], 39, 0 );
    const_str_digest_2be2088f380f05c91030e3c0a5c0aea7 = UNSTREAM_STRING( &constant_bin[ 347200 ], 148, 0 );
    const_str_digest_3733a5996907aa690e39f1e78ee89f30 = UNSTREAM_STRING( &constant_bin[ 347348 ], 67, 0 );
    const_str_digest_57df5db6c047c908e666fef54878d310 = UNSTREAM_STRING( &constant_bin[ 347415 ], 67, 0 );
    const_str_digest_592fcfe486c2a919eeca0c4c43e0a3e6 = UNSTREAM_STRING( &constant_bin[ 347482 ], 4, 0 );
    const_str_digest_6359860bc6a6a86403f938ba9c31f854 = UNSTREAM_STRING( &constant_bin[ 347486 ], 106, 0 );
    const_str_digest_64d91d164dab8f1dcf9ab9c7dabcd277 = UNSTREAM_STRING( &constant_bin[ 347592 ], 268, 0 );
    const_str_digest_7b65c8c8bd5d0a1400de64b4eea0f234 = UNSTREAM_STRING( &constant_bin[ 347860 ], 126, 0 );
    const_str_digest_7c2fff4390a089ec442d3d6360002e75 = UNSTREAM_STRING( &constant_bin[ 347986 ], 57, 0 );
    const_str_digest_842684dfd72b94e5cd4cba4fb237caba = UNSTREAM_STRING( &constant_bin[ 348043 ], 43, 0 );
    const_str_digest_86109977ba39a3fd8af230b1713b5986 = UNSTREAM_STRING( &constant_bin[ 348086 ], 222, 0 );
    const_str_digest_8b321806a68d32b5d2089b494f6053c9 = UNSTREAM_STRING( &constant_bin[ 348308 ], 217, 0 );
    const_str_digest_aba5b8b311dcc764d8cd28361d094275 = UNSTREAM_STRING( &constant_bin[ 348525 ], 120, 0 );
    const_str_digest_ac4479e37afb45562de618a2432e20e7 = UNSTREAM_STRING( &constant_bin[ 348645 ], 161, 0 );
    const_str_digest_b8f5b75ad5fa6d2dcd6ebd91641d225c = UNSTREAM_STRING( &constant_bin[ 348806 ], 205, 0 );
    const_str_digest_be9f5988c832674333dc86f9e14cd835 = UNSTREAM_STRING( &constant_bin[ 349011 ], 134, 0 );
    const_str_digest_c421ea8e23681214b813508309ab7232 = UNSTREAM_STRING( &constant_bin[ 349145 ], 133, 0 );
    const_str_digest_c7a254ce21c0bbaa3494e736db212023 = UNSTREAM_STRING( &constant_bin[ 349278 ], 57, 0 );
    const_str_digest_c942d2c989f3b1224eccd4e2fd5393dd = UNSTREAM_STRING( &constant_bin[ 349335 ], 127, 0 );
    const_str_digest_d08724d30d57ad0fd62c47d58b43a640 = UNSTREAM_STRING( &constant_bin[ 349462 ], 108, 0 );
    const_str_digest_d2782260ec3f6babd0d8cdf6de153d18 = UNSTREAM_STRING( &constant_bin[ 347860 ], 92, 0 );
    const_str_digest_d37c975cb44979b09e197a5a584cf2a0 = UNSTREAM_STRING( &constant_bin[ 349011 ], 100, 0 );
    const_str_digest_d813edd7eda23544d31d9c48821d11bc = UNSTREAM_STRING( &constant_bin[ 349570 ], 55, 0 );
    const_str_digest_dbb2ee2c44abdad00b80331c569c12ab = UNSTREAM_STRING( &constant_bin[ 349625 ], 98, 0 );
    const_str_digest_e25863bdea9b8fb998503fc94bdd2be2 = UNSTREAM_STRING( &constant_bin[ 349723 ], 175, 0 );
    const_str_digest_e275f79ce14db9be76237699539edb52 = UNSTREAM_STRING( &constant_bin[ 349898 ], 97, 0 );
    const_str_digest_f9cb1aa37a8194d1b89841f99e5f7fef = UNSTREAM_STRING( &constant_bin[ 349995 ], 193, 0 );
    const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 0, const_str_plain_tag_prefix ); Py_INCREF( const_str_plain_tag_prefix );
    PyTuple_SET_ITEM( const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 1, const_str_plain_multi_constructor ); Py_INCREF( const_str_plain_multi_constructor );
    PyTuple_SET_ITEM( const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 2, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    const_tuple_48b633efb608e2688839313939cf92e6_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 0, const_str_plain_nodes ); Py_INCREF( const_str_plain_nodes );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 3, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 6, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 7, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 8, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 9, const_str_plain_explicit_start ); Py_INCREF( const_str_plain_explicit_start );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 10, const_str_plain_explicit_end ); Py_INCREF( const_str_plain_explicit_end );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 11, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_48b633efb608e2688839313939cf92e6_tuple, 12, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    const_tuple_4a00b97c735dba332804887e29f26afb_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 0, const_str_plain_documents ); Py_INCREF( const_str_plain_documents );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 3, const_str_plain_default_style ); Py_INCREF( const_str_plain_default_style );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 4, const_str_plain_default_flow_style ); Py_INCREF( const_str_plain_default_flow_style );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 5, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 6, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 7, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 8, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 9, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 10, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 11, const_str_plain_explicit_start ); Py_INCREF( const_str_plain_explicit_start );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 12, const_str_plain_explicit_end ); Py_INCREF( const_str_plain_explicit_end );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 13, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 14, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 15, const_str_plain_getvalue ); Py_INCREF( const_str_plain_getvalue );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 16, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 17, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 18, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 0, const_str_plain_data_type ); Py_INCREF( const_str_plain_data_type );
    PyTuple_SET_ITEM( const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 1, const_str_plain_multi_representer ); Py_INCREF( const_str_plain_multi_representer );
    PyTuple_SET_ITEM( const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_tuple_950adea43bcae15e1447872cace8ac33_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 1, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 2, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 3, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 4, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_tuple_beeef77c361060d983bd4ace6528c030_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 0, const_str_plain_events ); Py_INCREF( const_str_plain_events );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 3, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 6, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 7, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 8, const_str_plain_getvalue ); Py_INCREF( const_str_plain_getvalue );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 9, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 10, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 11, const_str_plain_event ); Py_INCREF( const_str_plain_event );
    const_tuple_c20dfb5470e5dc811754493000b71135_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 1, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 2, const_str_plain_first ); Py_INCREF( const_str_plain_first );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 3, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 4, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_tuple_c5a65859bf7212500814656c9d506148_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 0, const_str_plain_nodes ); Py_INCREF( const_str_plain_nodes );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 3, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 6, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 7, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 8, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 9, const_str_plain_explicit_start ); Py_INCREF( const_str_plain_explicit_start );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 10, const_str_plain_explicit_end ); Py_INCREF( const_str_plain_explicit_end );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 11, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 12, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 13, const_str_plain_getvalue ); Py_INCREF( const_str_plain_getvalue );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 14, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 15, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_c5a65859bf7212500814656c9d506148_tuple, 16, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 0, const_str_plain_documents ); Py_INCREF( const_str_plain_documents );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 3, const_str_plain_default_style ); Py_INCREF( const_str_plain_default_style );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 4, const_str_plain_default_flow_style ); Py_INCREF( const_str_plain_default_flow_style );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 5, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 6, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 7, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 8, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 9, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 10, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 11, const_str_plain_explicit_start ); Py_INCREF( const_str_plain_explicit_start );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 12, const_str_plain_explicit_end ); Py_INCREF( const_str_plain_explicit_end );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 13, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 14, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    const_tuple_d355267c6e168abd718665c8afc169d6_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 0, const_str_plain_events ); Py_INCREF( const_str_plain_events );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 3, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 6, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 7, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 0, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_tuple_str_plain_stream_str_plain_Loader_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_tuple, 1, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    const_list_str_digest_842684dfd72b94e5cd4cba4fb237caba_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_842684dfd72b94e5cd4cba4fb237caba_list, 0, const_str_digest_842684dfd72b94e5cd4cba4fb237caba ); Py_INCREF( const_str_digest_842684dfd72b94e5cd4cba4fb237caba );
    const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 1, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 1, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 2, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 2, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 1, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 0, const_str_plain_documents ); Py_INCREF( const_str_plain_documents );
    PyTuple_SET_ITEM( const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 2, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 1, const_str_plain_constructor ); Py_INCREF( const_str_plain_constructor );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 2, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 0, const_str_plain_data_type ); Py_INCREF( const_str_plain_data_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 1, const_str_plain_representer ); Py_INCREF( const_str_plain_representer );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple, 2, const_str_plain_bases ); Py_INCREF( const_str_plain_bases );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
}

// The module code objects.
static PyCodeObject *codeobj_f69b49b266d9f83a33f549e6d18ea8a1;
static PyCodeObject *codeobj_7f156c68689444a28b0a13e46bd1c744;
static PyCodeObject *codeobj_ac2452fb63776356149dbadf4f1778b8;
static PyCodeObject *codeobj_a766df459da7890683c3f6fd64419587;
static PyCodeObject *codeobj_d608ff455e049af10f082bd1e1abd1d1;
static PyCodeObject *codeobj_146dab16bec11d6840de83f7bcc35dea;
static PyCodeObject *codeobj_5e64fa3f6d5a0cc7f22dd9a3291f7908;
static PyCodeObject *codeobj_c6dd15f70f2490038da52278c99c7201;
static PyCodeObject *codeobj_10763c3e086ea89f5597dddfab45f961;
static PyCodeObject *codeobj_6594a453546d1280652fb524aef2c85a;
static PyCodeObject *codeobj_ccce553cc0f0558ffae20933b2b85698;
static PyCodeObject *codeobj_dffbdffa750b4918105aa8485e13c34e;
static PyCodeObject *codeobj_f65963c1448f95e5e95bc9865c1a9967;
static PyCodeObject *codeobj_b824bf8b43db1a7a3867e5d45ac1bc38;
static PyCodeObject *codeobj_2ef6326b70ec5d8a5230128af860cf43;
static PyCodeObject *codeobj_491aea3494f0fb04e08953eedcc0675a;
static PyCodeObject *codeobj_819fd2275138592f353c3a3b4283b065;
static PyCodeObject *codeobj_04c34bef869e22cd8e93bd002a9ba6a4;
static PyCodeObject *codeobj_e6906cbffaec4ba5501874396aab7206;
static PyCodeObject *codeobj_b1af1abdd1525d61f05b5d7832f8e1e1;
static PyCodeObject *codeobj_c6ed7157d1b0d2e11716266995b41ba0;
static PyCodeObject *codeobj_9359b883bf97fae8139d4ef5693f3a65;
static PyCodeObject *codeobj_8d02dbf6420929223e60c430c1a495ed;
static PyCodeObject *codeobj_d7f7a549071f98f98a9b54bd59fb5515;
static PyCodeObject *codeobj_819b3ef960c17de6b88432c6d6f42f94;
static PyCodeObject *codeobj_06c2e5ef5b2264833429c991a50113cf;
static PyCodeObject *codeobj_614a1ed08d8be534e1121addaf0bbb26;
static PyCodeObject *codeobj_6666f81b101fbeb4822995b0d9671649;
static PyCodeObject *codeobj_e0723e5d8078ff05d929f649bd0e894b;
static PyCodeObject *codeobj_51ebecb73853dddc0ffa0135d0bde9f4;
static PyCodeObject *codeobj_ed61324ee0a3fa796220bb29a017f9ca;
static PyCodeObject *codeobj_f7e2f008a2a5cb7d39db6bace784cd45;
static PyCodeObject *codeobj_d01d32064a6580acee8eee581a5cbd2a;
static PyCodeObject *codeobj_c2656c86a62d6378ccc71d7301db3a71;
static PyCodeObject *codeobj_f54dbe86dff20a06f9486655c03cdf1e;
static PyCodeObject *codeobj_39575fce98bf24843e58b5a8cf0a52a3;
static PyCodeObject *codeobj_f131d0afe7fe9fd705d840e4147dc16b;
static PyCodeObject *codeobj_620bf882124a3f247778dfaaa3fe0d58;
static PyCodeObject *codeobj_e24e25176217ddebfada9b6974cb125a;
static PyCodeObject *codeobj_5ce150782c7516c9d2f4ce8641a69992;

static void _initModuleCodeObjects(void)
{
    codeobj_f69b49b266d9f83a33f549e6d18ea8a1 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_YAMLObject, 286, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_7f156c68689444a28b0a13e46bd1c744 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_YAMLObjectMetaclass, 276, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_ac2452fb63776356149dbadf4f1778b8 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain___init__, 280, const_tuple_str_plain_cls_str_plain_name_str_plain_bases_str_plain_kwds_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a766df459da7890683c3f6fd64419587 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_add_constructor, 241, const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d608ff455e049af10f082bd1e1abd1d1 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_add_implicit_resolver, 220, const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_146dab16bec11d6840de83f7bcc35dea = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_add_multi_constructor, 249, const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_5e64fa3f6d5a0cc7f22dd9a3291f7908 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_add_multi_representer, 267, const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_c6dd15f70f2490038da52278c99c7201 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_add_path_resolver, 231, const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_10763c3e086ea89f5597dddfab45f961 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_add_representer, 258, const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6594a453546d1280652fb524aef2c85a = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_compose, 41, const_tuple_str_plain_stream_str_plain_Loader_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ccce553cc0f0558ffae20933b2b85698 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_compose, 41, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_dffbdffa750b4918105aa8485e13c34e = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_compose_all, 52, const_tuple_str_plain_stream_str_plain_Loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f65963c1448f95e5e95bc9865c1a9967 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_compose_all, 52, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b824bf8b43db1a7a3867e5d45ac1bc38 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_dump, 197, const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2ef6326b70ec5d8a5230128af860cf43 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_dump, 197, const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_491aea3494f0fb04e08953eedcc0675a = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_dump_all, 163, const_tuple_cc1cd562f8e1983bcb46c76fd9a05e57_tuple, 15, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_819fd2275138592f353c3a3b4283b065 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_dump_all, 163, const_tuple_4a00b97c735dba332804887e29f26afb_tuple, 15, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_04c34bef869e22cd8e93bd002a9ba6a4 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_emit, 103, const_tuple_d355267c6e168abd718665c8afc169d6_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e6906cbffaec4ba5501874396aab7206 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_emit, 103, const_tuple_beeef77c361060d983bd4ace6528c030_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b1af1abdd1525d61f05b5d7832f8e1e1 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_from_yaml, 301, const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_c6ed7157d1b0d2e11716266995b41ba0 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_load, 64, const_tuple_str_plain_stream_str_plain_Loader_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_9359b883bf97fae8139d4ef5693f3a65 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_load, 64, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8d02dbf6420929223e60c430c1a495ed = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_load_all, 75, const_tuple_str_plain_stream_str_plain_Loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d7f7a549071f98f98a9b54bd59fb5515 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_load_all, 75, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_819b3ef960c17de6b88432c6d6f42f94 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_parse, 30, const_tuple_str_plain_stream_str_plain_Loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_06c2e5ef5b2264833429c991a50113cf = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_parse, 30, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_614a1ed08d8be534e1121addaf0bbb26 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_safe_dump, 212, const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6666f81b101fbeb4822995b0d9671649 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_safe_dump, 212, const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e0723e5d8078ff05d929f649bd0e894b = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_safe_dump_all, 204, const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_51ebecb73853dddc0ffa0135d0bde9f4 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_safe_dump_all, 204, const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ed61324ee0a3fa796220bb29a017f9ca = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_safe_load, 87, const_tuple_str_plain_stream_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f7e2f008a2a5cb7d39db6bace784cd45 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_safe_load_all, 95, const_tuple_str_plain_stream_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d01d32064a6580acee8eee581a5cbd2a = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_scan, 19, const_tuple_str_plain_stream_str_plain_Loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_c2656c86a62d6378ccc71d7301db3a71 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_scan, 19, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f54dbe86dff20a06f9486655c03cdf1e = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_serialize, 156, const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_39575fce98bf24843e58b5a8cf0a52a3 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_serialize, 156, const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f131d0afe7fe9fd705d840e4147dc16b = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_serialize_all, 125, const_tuple_48b633efb608e2688839313939cf92e6_tuple, 13, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_620bf882124a3f247778dfaaa3fe0d58 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_serialize_all, 125, const_tuple_c5a65859bf7212500814656c9d506148_tuple, 13, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e24e25176217ddebfada9b6974cb125a = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_to_yaml, 308, const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_5ce150782c7516c9d2f4ce8641a69992 = MAKE_CODEOBJ( const_str_digest_d813edd7eda23544d31d9c48821d11bc, const_str_plain_yaml, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_22_YAMLObjectMetaclass_of_module_yaml(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_23_YAMLObject_of_module_yaml(  );


NUITKA_CROSS_MODULE PyObject *impl_function_7_complex_call_helper_pos_keywords_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_10_serialize_all_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_serialize_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_dump_all_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_13_dump_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_14_safe_dump_all_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_15_safe_dump_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_16_add_implicit_resolver_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_17_add_path_resolver_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_18_add_constructor_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_19_add_multi_constructor_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml(  );


static PyObject *MAKE_FUNCTION_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml(  );


static PyObject *MAKE_FUNCTION_function_1_scan_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_20_add_representer_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_21_add_multi_representer_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_parse_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml(  );


static PyObject *MAKE_FUNCTION_function_3_compose_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_compose_all_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_load_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_load_all_of_module_yaml( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7_safe_load_of_module_yaml(  );


static PyObject *MAKE_FUNCTION_function_8_safe_load_all_of_module_yaml(  );


static PyObject *MAKE_FUNCTION_function_9_emit_of_module_yaml( PyObject *defaults );


// The module function definitions.

struct _context_generator_function_1_scan_of_module_yaml_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure_stream;
    PyObjectLocalVariable closure_Loader;
    PyObjectLocalVariable closure_loader;
};

static void _context_generator_function_1_scan_of_module_yaml_destructor( void *context_voidptr )
{
    _context_generator_function_1_scan_of_module_yaml_t *_python_context = (struct _context_generator_function_1_scan_of_module_yaml_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_1_scan_of_module_yaml_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_1_scan_of_module_yaml_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_function_1_scan_of_module_yaml_t *_python_context = (_context_generator_function_1_scan_of_module_yaml_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_d01d32064a6580acee8eee581a5cbd2a, module_yaml );

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
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_called_1 = _python_context->closure_Loader.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = _python_context->closure_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 23;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_loader.object == NULL );
    _python_context->closure_loader.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_source_name_1 = _python_context->closure_loader.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_token );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 25;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = _python_context->closure_loader.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_token );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 26;
    tmp_yield_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
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
    tmp_source_name_3 = _python_context->closure_loader.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dispose );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 28;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
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
    if ((_python_context->closure_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            _python_context->closure_loader.object
        );

    }
    if ((_python_context->closure_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            _python_context->closure_stream.object
        );

    }
    if ((_python_context->closure_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            _python_context->closure_Loader.object
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
static PyObject *impl_function_1_scan_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_Loader )
{
    // Create context if any
    struct _context_generator_function_1_scan_of_module_yaml_t *_python_context = new _context_generator_function_1_scan_of_module_yaml_t;

        PyObject *result = Nuitka_Generator_New(
            function_1_scan_of_module_yaml_context,
            const_str_plain_scan,
            codeobj_d01d32064a6580acee8eee581a5cbd2a,
            _python_context,
            _context_generator_function_1_scan_of_module_yaml_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function scan" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure_stream.object = _python_par_stream;
    _python_context->closure_Loader.object = _python_par_Loader;

    return result;
}
static PyObject *fparse_function_1_scan_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "scan() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "scan() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_stream == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_stream, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_scan_of_module_yaml( self, _python_par_stream, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_1_scan_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_scan_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_scan_of_module_yaml( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_2_parse_of_module_yaml_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure_stream;
    PyObjectLocalVariable closure_Loader;
    PyObjectLocalVariable closure_loader;
};

static void _context_generator_function_2_parse_of_module_yaml_destructor( void *context_voidptr )
{
    _context_generator_function_2_parse_of_module_yaml_t *_python_context = (struct _context_generator_function_2_parse_of_module_yaml_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_2_parse_of_module_yaml_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_2_parse_of_module_yaml_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_function_2_parse_of_module_yaml_t *_python_context = (_context_generator_function_2_parse_of_module_yaml_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_819b3ef960c17de6b88432c6d6f42f94, module_yaml );

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
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_called_1 = _python_context->closure_Loader.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = _python_context->closure_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 34;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_loader.object == NULL );
    _python_context->closure_loader.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_source_name_1 = _python_context->closure_loader.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_event );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 36;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 36;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = _python_context->closure_loader.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_event );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 37;
    tmp_yield_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
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
    tmp_source_name_3 = _python_context->closure_loader.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dispose );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 39;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
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
    if ((_python_context->closure_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            _python_context->closure_loader.object
        );

    }
    if ((_python_context->closure_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            _python_context->closure_stream.object
        );

    }
    if ((_python_context->closure_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            _python_context->closure_Loader.object
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
static PyObject *impl_function_2_parse_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_Loader )
{
    // Create context if any
    struct _context_generator_function_2_parse_of_module_yaml_t *_python_context = new _context_generator_function_2_parse_of_module_yaml_t;

        PyObject *result = Nuitka_Generator_New(
            function_2_parse_of_module_yaml_context,
            const_str_plain_parse,
            codeobj_819b3ef960c17de6b88432c6d6f42f94,
            _python_context,
            _context_generator_function_2_parse_of_module_yaml_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function parse" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure_stream.object = _python_par_stream;
    _python_context->closure_Loader.object = _python_par_Loader;

    return result;
}
static PyObject *fparse_function_2_parse_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_stream == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_stream, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_parse_of_module_yaml( self, _python_par_stream, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_2_parse_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_parse_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_parse_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_compose_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_Loader )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Loader; par_Loader.object = _python_par_Loader;
    PyObjectLocalVariable var_loader;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6594a453546d1280652fb524aef2c85a, module_yaml );
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
    tmp_called_1 = par_Loader.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 46;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var_loader.object == NULL );
    var_loader.object = tmp_assign_source_1;

    // Tried code
    tmp_source_name_1 = var_loader.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_single_node );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 48;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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
    tmp_source_name_2 = var_loader.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dispose );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 50;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_1;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
    finally_end_1:;

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
    if ((var_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            var_loader.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            par_Loader.object
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
static PyObject *fparse_function_3_compose_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "compose() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "compose() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_stream == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_stream, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_compose_of_module_yaml( self, _python_par_stream, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_3_compose_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3_compose_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_compose_of_module_yaml( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_4_compose_all_of_module_yaml_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure_stream;
    PyObjectLocalVariable closure_Loader;
    PyObjectLocalVariable closure_loader;
};

static void _context_generator_function_4_compose_all_of_module_yaml_destructor( void *context_voidptr )
{
    _context_generator_function_4_compose_all_of_module_yaml_t *_python_context = (struct _context_generator_function_4_compose_all_of_module_yaml_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_4_compose_all_of_module_yaml_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_4_compose_all_of_module_yaml_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_function_4_compose_all_of_module_yaml_t *_python_context = (_context_generator_function_4_compose_all_of_module_yaml_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_dffbdffa750b4918105aa8485e13c34e, module_yaml );

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
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_called_1 = _python_context->closure_Loader.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = _python_context->closure_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 57;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_loader.object == NULL );
    _python_context->closure_loader.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_source_name_1 = _python_context->closure_loader.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_node );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 59;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = _python_context->closure_loader.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_node );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 60;
    tmp_yield_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
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
    tmp_source_name_3 = _python_context->closure_loader.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dispose );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 62;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
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
    if ((_python_context->closure_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            _python_context->closure_loader.object
        );

    }
    if ((_python_context->closure_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            _python_context->closure_stream.object
        );

    }
    if ((_python_context->closure_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            _python_context->closure_Loader.object
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
static PyObject *impl_function_4_compose_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_Loader )
{
    // Create context if any
    struct _context_generator_function_4_compose_all_of_module_yaml_t *_python_context = new _context_generator_function_4_compose_all_of_module_yaml_t;

        PyObject *result = Nuitka_Generator_New(
            function_4_compose_all_of_module_yaml_context,
            const_str_plain_compose_all,
            codeobj_dffbdffa750b4918105aa8485e13c34e,
            _python_context,
            _context_generator_function_4_compose_all_of_module_yaml_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function compose_all" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure_stream.object = _python_par_stream;
    _python_context->closure_Loader.object = _python_par_Loader;

    return result;
}
static PyObject *fparse_function_4_compose_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "compose_all() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "compose_all() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_stream == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_stream, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_compose_all_of_module_yaml( self, _python_par_stream, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_4_compose_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_compose_all_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_compose_all_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_load_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_Loader )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Loader; par_Loader.object = _python_par_Loader;
    PyObjectLocalVariable var_loader;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c6ed7157d1b0d2e11716266995b41ba0, module_yaml );
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
    tmp_called_1 = par_Loader.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 69;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var_loader.object == NULL );
    var_loader.object = tmp_assign_source_1;

    // Tried code
    tmp_source_name_1 = var_loader.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_single_data );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 71;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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
    tmp_source_name_2 = var_loader.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dispose );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 73;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_1;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
    finally_end_1:;

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
    if ((var_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            var_loader.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            par_Loader.object
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
static PyObject *fparse_function_5_load_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "load() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_stream == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_stream, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_load_of_module_yaml( self, _python_par_stream, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_5_load_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_5_load_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_load_of_module_yaml( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_6_load_all_of_module_yaml_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure_stream;
    PyObjectLocalVariable closure_Loader;
    PyObjectLocalVariable closure_loader;
};

static void _context_generator_function_6_load_all_of_module_yaml_destructor( void *context_voidptr )
{
    _context_generator_function_6_load_all_of_module_yaml_t *_python_context = (struct _context_generator_function_6_load_all_of_module_yaml_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_6_load_all_of_module_yaml_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_6_load_all_of_module_yaml_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_function_6_load_all_of_module_yaml_t *_python_context = (_context_generator_function_6_load_all_of_module_yaml_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_8d02dbf6420929223e60c430c1a495ed, module_yaml );

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
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_called_1 = _python_context->closure_Loader.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = _python_context->closure_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 80;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_loader.object == NULL );
    _python_context->closure_loader.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_source_name_1 = _python_context->closure_loader.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_data );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 82;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 82;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = _python_context->closure_loader.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_data );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 83;
    tmp_yield_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
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
    tmp_source_name_3 = _python_context->closure_loader.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dispose );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 85;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
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
    if ((_python_context->closure_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            _python_context->closure_loader.object
        );

    }
    if ((_python_context->closure_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            _python_context->closure_stream.object
        );

    }
    if ((_python_context->closure_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            _python_context->closure_Loader.object
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
static PyObject *impl_function_6_load_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_Loader )
{
    // Create context if any
    struct _context_generator_function_6_load_all_of_module_yaml_t *_python_context = new _context_generator_function_6_load_all_of_module_yaml_t;

        PyObject *result = Nuitka_Generator_New(
            function_6_load_all_of_module_yaml_context,
            const_str_plain_load_all,
            codeobj_8d02dbf6420929223e60c430c1a495ed,
            _python_context,
            _context_generator_function_6_load_all_of_module_yaml_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function load_all" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure_stream.object = _python_par_stream;
    _python_context->closure_Loader.object = _python_par_Loader;

    return result;
}
static PyObject *fparse_function_6_load_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "load_all() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_all() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_stream == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_stream, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_load_all_of_module_yaml( self, _python_par_stream, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_6_load_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6_load_all_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_load_all_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_safe_load_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ed61324ee0a3fa796220bb29a017f9ca, module_yaml );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46205 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeLoader );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeLoader );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56477 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 93;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
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
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
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
static PyObject *fparse_function_7_safe_load_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
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
                PyErr_Format( PyExc_TypeError, "safe_load() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "safe_load() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_stream == NULL ))
    {
        PyObject *values[] = { _python_par_stream };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_safe_load_of_module_yaml( self, _python_par_stream );

error_exit:;

    Py_XDECREF( _python_par_stream );

    return NULL;
}

static PyObject *dparse_function_7_safe_load_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_7_safe_load_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_safe_load_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_safe_load_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_stream )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f7e2f008a2a5cb7d39db6bace784cd45, module_yaml );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load_all );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load_all );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56516 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_stream.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeLoader );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeLoader );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56477 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 101;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
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
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
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
static PyObject *fparse_function_8_safe_load_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
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
                PyErr_Format( PyExc_TypeError, "safe_load_all() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "safe_load_all() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_stream == NULL ))
    {
        PyObject *values[] = { _python_par_stream };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_safe_load_all_of_module_yaml( self, _python_par_stream );

error_exit:;

    Py_XDECREF( _python_par_stream );

    return NULL;
}

static PyObject *dparse_function_8_safe_load_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_8_safe_load_all_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_safe_load_all_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_emit_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_events, PyObject *_python_par_stream, PyObject *_python_par_Dumper, PyObject *_python_par_canonical, PyObject *_python_par_indent, PyObject *_python_par_width, PyObject *_python_par_allow_unicode, PyObject *_python_par_line_break )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_events; par_events.object = _python_par_events;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObjectLocalVariable par_canonical; par_canonical.object = _python_par_canonical;
    PyObjectLocalVariable par_indent; par_indent.object = _python_par_indent;
    PyObjectLocalVariable par_width; par_width.object = _python_par_width;
    PyObjectLocalVariable par_allow_unicode; par_allow_unicode.object = _python_par_allow_unicode;
    PyObjectLocalVariable par_line_break; par_line_break.object = _python_par_line_break;
    PyObjectLocalVariable var_getvalue;
    PyObjectLocalVariable var_StringIO;
    PyObjectLocalVariable var_dumper;
    PyObjectLocalVariable var_event;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_getvalue.object == NULL );
    var_getvalue.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_04c34bef869e22cd8e93bd002a9ba6a4, module_yaml );
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
    tmp_compare_left_1 = par_stream.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
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
    tmp_import_globals_1 = ((PyModuleObject *)module_yaml)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_event.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_event,
            var_event.object
        );

    }
    if ((par_events.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_events,
            par_events.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    frame_function->f_lineno = 112;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_StringIO, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_StringIO_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_StringIO.object == NULL );
    var_StringIO.object = tmp_assign_source_2;

    tmp_called_1 = var_StringIO.object;

    frame_function->f_lineno = 113;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    if (par_stream.object == NULL)
    {
        par_stream.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_stream.object;
        par_stream.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_stream.object;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getvalue );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( var_getvalue.object != NULL );
    {
        PyObject *old = var_getvalue.object;
        var_getvalue.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_2 = par_Dumper.object;

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_1 = par_canonical.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56605 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_canonical;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_indent.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46901 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_indent;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_width.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56660 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_width;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_allow_unicode.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56711 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_allow_unicode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_line_break.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56770 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_line_break;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 116;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    assert( var_dumper.object == NULL );
    var_dumper.object = tmp_assign_source_5;

    // Tried code
    tmp_iter_arg_1 = par_events.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56826 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto try_finally_handler_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_6;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 118;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_for_loop_1__iter_value.object;

    if (var_event.object == NULL)
    {
        var_event.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_event.object;
        var_event.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_dumper.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_2;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_emit );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = var_event.object;

    frame_function->f_lineno = 119;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_source_name_3 = var_dumper.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_error_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dispose );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_2 );exception_keeper_type_2 = NULL;
    Py_XDECREF( exception_keeper_value_2 );exception_keeper_value_2 = NULL;
    Py_XDECREF( exception_keeper_tb_2 );exception_keeper_tb_2 = NULL;
    goto frame_exception_exit_1;
    finally_end_2:;
    tmp_cond_value_1 = var_getvalue.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56930 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_5 = var_getvalue.object;

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56930 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 123;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;

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
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_event.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_event,
            var_event.object
        );

    }
    if ((par_events.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_events,
            par_events.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line_break,
            par_line_break.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_9_emit_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_events = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Dumper = NULL;
    PyObject *_python_par_canonical = NULL;
    PyObject *_python_par_indent = NULL;
    PyObject *_python_par_width = NULL;
    PyObject *_python_par_allow_unicode = NULL;
    PyObject *_python_par_line_break = NULL;
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
                PyErr_Format( PyExc_TypeError, "emit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_events == key )
            {
                assert( _python_par_events == NULL );
                _python_par_events = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_canonical == key )
            {
                assert( _python_par_canonical == NULL );
                _python_par_canonical = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_indent == key )
            {
                assert( _python_par_indent == NULL );
                _python_par_indent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_width == key )
            {
                assert( _python_par_width == NULL );
                _python_par_width = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_allow_unicode == key )
            {
                assert( _python_par_allow_unicode == NULL );
                _python_par_allow_unicode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_line_break == key )
            {
                assert( _python_par_line_break == NULL );
                _python_par_line_break = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_events, key ) == 1 )
            {
                assert( _python_par_events == NULL );
                _python_par_events = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_canonical, key ) == 1 )
            {
                assert( _python_par_canonical == NULL );
                _python_par_canonical = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_indent, key ) == 1 )
            {
                assert( _python_par_indent == NULL );
                _python_par_indent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_width, key ) == 1 )
            {
                assert( _python_par_width == NULL );
                _python_par_width = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_allow_unicode, key ) == 1 )
            {
                assert( _python_par_allow_unicode == NULL );
                _python_par_allow_unicode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_line_break, key ) == 1 )
            {
                assert( _python_par_line_break == NULL );
                _python_par_line_break = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "emit() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 8 ))
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
         if (unlikely( _python_par_events != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_events = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_events == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_events = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_canonical != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_canonical = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_canonical == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_canonical = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_indent != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_indent = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_indent == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_indent = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
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
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_width != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_width = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_width == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_width = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
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
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_allow_unicode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_allow_unicode = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_allow_unicode == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_allow_unicode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_line_break != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_line_break = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_line_break == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_line_break = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
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
    if (unlikely( _python_par_events == NULL || _python_par_stream == NULL || _python_par_Dumper == NULL || _python_par_canonical == NULL || _python_par_indent == NULL || _python_par_width == NULL || _python_par_allow_unicode == NULL || _python_par_line_break == NULL ))
    {
        PyObject *values[] = { _python_par_events, _python_par_stream, _python_par_Dumper, _python_par_canonical, _python_par_indent, _python_par_width, _python_par_allow_unicode, _python_par_line_break };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_emit_of_module_yaml( self, _python_par_events, _python_par_stream, _python_par_Dumper, _python_par_canonical, _python_par_indent, _python_par_width, _python_par_allow_unicode, _python_par_line_break );

error_exit:;

    Py_XDECREF( _python_par_events );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Dumper );
    Py_XDECREF( _python_par_canonical );
    Py_XDECREF( _python_par_indent );
    Py_XDECREF( _python_par_width );
    Py_XDECREF( _python_par_allow_unicode );
    Py_XDECREF( _python_par_line_break );

    return NULL;
}

static PyObject *dparse_function_9_emit_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_9_emit_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_emit_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_serialize_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_nodes, PyObject *_python_par_stream, PyObject *_python_par_Dumper, PyObject *_python_par_canonical, PyObject *_python_par_indent, PyObject *_python_par_width, PyObject *_python_par_allow_unicode, PyObject *_python_par_line_break, PyObject *_python_par_encoding, PyObject *_python_par_explicit_start, PyObject *_python_par_explicit_end, PyObject *_python_par_version, PyObject *_python_par_tags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_nodes; par_nodes.object = _python_par_nodes;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObjectLocalVariable par_canonical; par_canonical.object = _python_par_canonical;
    PyObjectLocalVariable par_indent; par_indent.object = _python_par_indent;
    PyObjectLocalVariable par_width; par_width.object = _python_par_width;
    PyObjectLocalVariable par_allow_unicode; par_allow_unicode.object = _python_par_allow_unicode;
    PyObjectLocalVariable par_line_break; par_line_break.object = _python_par_line_break;
    PyObjectLocalVariable par_encoding; par_encoding.object = _python_par_encoding;
    PyObjectLocalVariable par_explicit_start; par_explicit_start.object = _python_par_explicit_start;
    PyObjectLocalVariable par_explicit_end; par_explicit_end.object = _python_par_explicit_end;
    PyObjectLocalVariable par_version; par_version.object = _python_par_version;
    PyObjectLocalVariable par_tags; par_tags.object = _python_par_tags;
    PyObjectLocalVariable var_getvalue;
    PyObjectLocalVariable var_StringIO;
    PyObjectLocalVariable var_dumper;
    PyObjectLocalVariable var_node;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_call_arg_element_1;
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
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_getvalue.object == NULL );
    var_getvalue.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f131d0afe7fe9fd705d840e4147dc16b, module_yaml );
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
    tmp_compare_left_1 = par_stream.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
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
    tmp_compare_left_2 = par_encoding.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47009 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_yaml)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_node,
            var_node.object
        );

    }
    if ((par_nodes.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nodes,
            par_nodes.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    if ((par_encoding.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_encoding,
            par_encoding.object
        );

    }
    if ((par_explicit_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_explicit_start,
            par_explicit_start.object
        );

    }
    if ((par_explicit_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_explicit_end,
            par_explicit_end.object
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
    if ((par_tags.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_tags,
            par_tags.object
        );

    }
    frame_function->f_lineno = 137;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_StringIO, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_StringIO_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    assert( var_StringIO.object == NULL );
    var_StringIO.object = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_import_globals_2 = ((PyModuleObject *)module_yaml)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_node,
            var_node.object
        );

    }
    if ((par_nodes.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_nodes,
            par_nodes.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    if ((par_encoding.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_encoding,
            par_encoding.object
        );

    }
    if ((par_explicit_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_explicit_start,
            par_explicit_start.object
        );

    }
    if ((par_explicit_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_explicit_end,
            par_explicit_end.object
        );

    }
    if ((par_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_version,
            par_version.object
        );

    }
    if ((par_tags.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_tags,
            par_tags.object
        );

    }
    frame_function->f_lineno = 139;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_cStringIO, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_StringIO_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    assert( var_StringIO.object == NULL );
    var_StringIO.object = tmp_assign_source_3;

    branch_end_2:;
    tmp_called_1 = var_StringIO.object;

    frame_function->f_lineno = 140;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    if (par_stream.object == NULL)
    {
        par_stream.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_stream.object;
        par_stream.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_stream.object;

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getvalue );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    assert( var_getvalue.object != NULL );
    {
        PyObject *old = var_getvalue.object;
        var_getvalue.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_2 = par_Dumper.object;

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 10 );
    tmp_dict_value_1 = par_canonical.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56605 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_canonical;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_indent.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46901 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_indent;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_width.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56660 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_width;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_allow_unicode.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56711 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_allow_unicode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_line_break.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56770 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_line_break;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_encoding.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47009 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_encoding;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_version.object;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_version;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = par_tags.object;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56984 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_tags;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = par_explicit_start.object;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57034 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_explicit_start;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = par_explicit_end.object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57094 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_explicit_end;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_10, tmp_dict_value_10 );
    frame_function->f_lineno = 145;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( var_dumper.object == NULL );
    var_dumper.object = tmp_assign_source_6;

    // Tried code
    tmp_source_name_2 = var_dumper.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_open );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 147;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = par_nodes.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57152 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_7;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_8 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 148;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_for_loop_1__iter_value.object;

    if (var_node.object == NULL)
    {
        var_node.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_node.object;
        var_node.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = var_dumper.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_serialize );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = var_node.object;

    frame_function->f_lineno = 149;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_source_name_4 = var_dumper.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_close );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 150;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_source_name_5 = var_dumper.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_error_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dispose );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 152;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_2 );exception_keeper_type_2 = NULL;
    Py_XDECREF( exception_keeper_value_2 );exception_keeper_value_2 = NULL;
    Py_XDECREF( exception_keeper_tb_2 );exception_keeper_tb_2 = NULL;
    goto frame_exception_exit_1;
    finally_end_2:;
    tmp_cond_value_1 = var_getvalue.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56930 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_7 = var_getvalue.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56930 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 154;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;

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
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node,
            var_node.object
        );

    }
    if ((par_nodes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nodes,
            par_nodes.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    if ((par_encoding.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_encoding,
            par_encoding.object
        );

    }
    if ((par_explicit_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_explicit_start,
            par_explicit_start.object
        );

    }
    if ((par_explicit_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_explicit_end,
            par_explicit_end.object
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
    if ((par_tags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tags,
            par_tags.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_10_serialize_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_nodes = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Dumper = NULL;
    PyObject *_python_par_canonical = NULL;
    PyObject *_python_par_indent = NULL;
    PyObject *_python_par_width = NULL;
    PyObject *_python_par_allow_unicode = NULL;
    PyObject *_python_par_line_break = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par_explicit_start = NULL;
    PyObject *_python_par_explicit_end = NULL;
    PyObject *_python_par_version = NULL;
    PyObject *_python_par_tags = NULL;
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
                PyErr_Format( PyExc_TypeError, "serialize_all() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_nodes == key )
            {
                assert( _python_par_nodes == NULL );
                _python_par_nodes = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_canonical == key )
            {
                assert( _python_par_canonical == NULL );
                _python_par_canonical = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_indent == key )
            {
                assert( _python_par_indent == NULL );
                _python_par_indent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_width == key )
            {
                assert( _python_par_width == NULL );
                _python_par_width = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_allow_unicode == key )
            {
                assert( _python_par_allow_unicode == NULL );
                _python_par_allow_unicode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_line_break == key )
            {
                assert( _python_par_line_break == NULL );
                _python_par_line_break = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_encoding == key )
            {
                assert( _python_par_encoding == NULL );
                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_explicit_start == key )
            {
                assert( _python_par_explicit_start == NULL );
                _python_par_explicit_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_explicit_end == key )
            {
                assert( _python_par_explicit_end == NULL );
                _python_par_explicit_end = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_version == key )
            {
                assert( _python_par_version == NULL );
                _python_par_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_tags == key )
            {
                assert( _python_par_tags == NULL );
                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_nodes, key ) == 1 )
            {
                assert( _python_par_nodes == NULL );
                _python_par_nodes = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_canonical, key ) == 1 )
            {
                assert( _python_par_canonical == NULL );
                _python_par_canonical = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_indent, key ) == 1 )
            {
                assert( _python_par_indent == NULL );
                _python_par_indent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_width, key ) == 1 )
            {
                assert( _python_par_width == NULL );
                _python_par_width = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_allow_unicode, key ) == 1 )
            {
                assert( _python_par_allow_unicode == NULL );
                _python_par_allow_unicode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_line_break, key ) == 1 )
            {
                assert( _python_par_line_break == NULL );
                _python_par_line_break = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encoding, key ) == 1 )
            {
                assert( _python_par_encoding == NULL );
                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_explicit_start, key ) == 1 )
            {
                assert( _python_par_explicit_start == NULL );
                _python_par_explicit_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_explicit_end, key ) == 1 )
            {
                assert( _python_par_explicit_end == NULL );
                _python_par_explicit_end = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_version, key ) == 1 )
            {
                assert( _python_par_version == NULL );
                _python_par_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tags, key ) == 1 )
            {
                assert( _python_par_tags == NULL );
                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "serialize_all() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 13 ))
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
         if (unlikely( _python_par_nodes != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_nodes = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_nodes == NULL )
    {
        if ( 0 + self->m_defaults_given >= 13  )
        {
            _python_par_nodes = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 13 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 13  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 13 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 13  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 13 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_canonical != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_canonical = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_canonical == NULL )
    {
        if ( 3 + self->m_defaults_given >= 13  )
        {
            _python_par_canonical = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 13 ) );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_indent != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_indent = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_indent == NULL )
    {
        if ( 4 + self->m_defaults_given >= 13  )
        {
            _python_par_indent = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 13 ) );
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
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_width != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_width = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_width == NULL )
    {
        if ( 5 + self->m_defaults_given >= 13  )
        {
            _python_par_width = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 13 ) );
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
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_allow_unicode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_allow_unicode = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_allow_unicode == NULL )
    {
        if ( 6 + self->m_defaults_given >= 13  )
        {
            _python_par_allow_unicode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 13 ) );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_line_break != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_line_break = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_line_break == NULL )
    {
        if ( 7 + self->m_defaults_given >= 13  )
        {
            _python_par_line_break = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 13 ) );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_encoding == NULL )
    {
        if ( 8 + self->m_defaults_given >= 13  )
        {
            _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 13 ) );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_explicit_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_explicit_start = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_explicit_start == NULL )
    {
        if ( 9 + self->m_defaults_given >= 13  )
        {
            _python_par_explicit_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 13 ) );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_explicit_end != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_explicit_end = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_explicit_end == NULL )
    {
        if ( 10 + self->m_defaults_given >= 13  )
        {
            _python_par_explicit_end = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 13 ) );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_version != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_version = INCREASE_REFCOUNT( args[ 11 ] );
    }
    else if ( _python_par_version == NULL )
    {
        if ( 11 + self->m_defaults_given >= 13  )
        {
            _python_par_version = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 13 ) );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_tags != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_tags = INCREASE_REFCOUNT( args[ 12 ] );
    }
    else if ( _python_par_tags == NULL )
    {
        if ( 12 + self->m_defaults_given >= 13  )
        {
            _python_par_tags = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 13 ) );
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
    if (unlikely( _python_par_nodes == NULL || _python_par_stream == NULL || _python_par_Dumper == NULL || _python_par_canonical == NULL || _python_par_indent == NULL || _python_par_width == NULL || _python_par_allow_unicode == NULL || _python_par_line_break == NULL || _python_par_encoding == NULL || _python_par_explicit_start == NULL || _python_par_explicit_end == NULL || _python_par_version == NULL || _python_par_tags == NULL ))
    {
        PyObject *values[] = { _python_par_nodes, _python_par_stream, _python_par_Dumper, _python_par_canonical, _python_par_indent, _python_par_width, _python_par_allow_unicode, _python_par_line_break, _python_par_encoding, _python_par_explicit_start, _python_par_explicit_end, _python_par_version, _python_par_tags };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_serialize_all_of_module_yaml( self, _python_par_nodes, _python_par_stream, _python_par_Dumper, _python_par_canonical, _python_par_indent, _python_par_width, _python_par_allow_unicode, _python_par_line_break, _python_par_encoding, _python_par_explicit_start, _python_par_explicit_end, _python_par_version, _python_par_tags );

error_exit:;

    Py_XDECREF( _python_par_nodes );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Dumper );
    Py_XDECREF( _python_par_canonical );
    Py_XDECREF( _python_par_indent );
    Py_XDECREF( _python_par_width );
    Py_XDECREF( _python_par_allow_unicode );
    Py_XDECREF( _python_par_line_break );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par_explicit_start );
    Py_XDECREF( _python_par_explicit_end );
    Py_XDECREF( _python_par_version );
    Py_XDECREF( _python_par_tags );

    return NULL;
}

static PyObject *dparse_function_10_serialize_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 13 )
    {
        return impl_function_10_serialize_all_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_serialize_all_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_serialize_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_node, PyObject *_python_par_stream, PyObject *_python_par_Dumper, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_node; par_node.object = _python_par_node;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObjectLocalVariable par_kwds; par_kwds.object = _python_par_kwds;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_39575fce98bf24843e58b5a8cf0a52a3, module_yaml );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_serialize_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serialize_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57203 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_node.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57245 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_Dumper.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_Dumper;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg4_1 = par_kwds.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_7_complex_call_helper_pos_keywords_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, tmp_dircall_arg3_1, INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
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
    if ((par_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node,
            par_node.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_kwds.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwds,
            par_kwds.object
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
static PyObject *fparse_function_11_serialize_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_node = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Dumper = NULL;
    PyObject *_python_par_kwds = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwds = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwds = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "serialize() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "serialize() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwds = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwds = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "serialize() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwds = PyDict_New();
        }
    }

    // Check if argument node was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_node );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_node == NULL );

            _python_par_node = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_node );

            kw_found += 1;
        }
    }

    // Check if argument stream was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_stream );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_stream == NULL );

            _python_par_stream = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_stream );

            kw_found += 1;
        }
    }

    // Check if argument Dumper was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_Dumper );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_Dumper == NULL );

            _python_par_Dumper = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_Dumper );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_node != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_node == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_node = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_node == NULL || _python_par_stream == NULL || _python_par_Dumper == NULL ))
    {
        PyObject *values[] = { _python_par_node, _python_par_stream, _python_par_Dumper };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_serialize_of_module_yaml( self, _python_par_node, _python_par_stream, _python_par_Dumper, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_node );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Dumper );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_11_serialize_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_11_serialize_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_11_serialize_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_dump_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_documents, PyObject *_python_par_stream, PyObject *_python_par_Dumper, PyObject *_python_par_default_style, PyObject *_python_par_default_flow_style, PyObject *_python_par_canonical, PyObject *_python_par_indent, PyObject *_python_par_width, PyObject *_python_par_allow_unicode, PyObject *_python_par_line_break, PyObject *_python_par_encoding, PyObject *_python_par_explicit_start, PyObject *_python_par_explicit_end, PyObject *_python_par_version, PyObject *_python_par_tags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_documents; par_documents.object = _python_par_documents;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObjectLocalVariable par_default_style; par_default_style.object = _python_par_default_style;
    PyObjectLocalVariable par_default_flow_style; par_default_flow_style.object = _python_par_default_flow_style;
    PyObjectLocalVariable par_canonical; par_canonical.object = _python_par_canonical;
    PyObjectLocalVariable par_indent; par_indent.object = _python_par_indent;
    PyObjectLocalVariable par_width; par_width.object = _python_par_width;
    PyObjectLocalVariable par_allow_unicode; par_allow_unicode.object = _python_par_allow_unicode;
    PyObjectLocalVariable par_line_break; par_line_break.object = _python_par_line_break;
    PyObjectLocalVariable par_encoding; par_encoding.object = _python_par_encoding;
    PyObjectLocalVariable par_explicit_start; par_explicit_start.object = _python_par_explicit_start;
    PyObjectLocalVariable par_explicit_end; par_explicit_end.object = _python_par_explicit_end;
    PyObjectLocalVariable par_version; par_version.object = _python_par_version;
    PyObjectLocalVariable par_tags; par_tags.object = _python_par_tags;
    PyObjectLocalVariable var_getvalue;
    PyObjectLocalVariable var_StringIO;
    PyObjectLocalVariable var_dumper;
    PyObjectLocalVariable var_data;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_call_arg_element_1;
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
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_getvalue.object == NULL );
    var_getvalue.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_491aea3494f0fb04e08953eedcc0675a, module_yaml );
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
    tmp_compare_left_1 = par_stream.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
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
    tmp_compare_left_2 = par_encoding.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47009 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_yaml)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((par_documents.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_documents,
            par_documents.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_default_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_default_style,
            par_default_style.object
        );

    }
    if ((par_default_flow_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_default_flow_style,
            par_default_flow_style.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    if ((par_encoding.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_encoding,
            par_encoding.object
        );

    }
    if ((par_explicit_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_explicit_start,
            par_explicit_start.object
        );

    }
    if ((par_explicit_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_explicit_end,
            par_explicit_end.object
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
    if ((par_tags.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_tags,
            par_tags.object
        );

    }
    frame_function->f_lineno = 176;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_StringIO, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_StringIO_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    assert( var_StringIO.object == NULL );
    var_StringIO.object = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_import_globals_2 = ((PyModuleObject *)module_yaml)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((par_documents.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_documents,
            par_documents.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_default_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_default_style,
            par_default_style.object
        );

    }
    if ((par_default_flow_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_default_flow_style,
            par_default_flow_style.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    if ((par_encoding.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_encoding,
            par_encoding.object
        );

    }
    if ((par_explicit_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_explicit_start,
            par_explicit_start.object
        );

    }
    if ((par_explicit_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_explicit_end,
            par_explicit_end.object
        );

    }
    if ((par_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_version,
            par_version.object
        );

    }
    if ((par_tags.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_tags,
            par_tags.object
        );

    }
    frame_function->f_lineno = 178;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_cStringIO, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_StringIO_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    assert( var_StringIO.object == NULL );
    var_StringIO.object = tmp_assign_source_3;

    branch_end_2:;
    tmp_called_1 = var_StringIO.object;

    frame_function->f_lineno = 179;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    if (par_stream.object == NULL)
    {
        par_stream.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_stream.object;
        par_stream.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_stream.object;

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getvalue );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    assert( var_getvalue.object != NULL );
    {
        PyObject *old = var_getvalue.object;
        var_getvalue.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_2 = par_Dumper.object;

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 12 );
    tmp_dict_value_1 = par_default_style.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57295 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_default_style;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_default_flow_style.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57354 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_default_flow_style;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_canonical.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56605 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_canonical;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_indent.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46901 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_indent;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_width.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56660 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_width;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_allow_unicode.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56711 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_allow_unicode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_line_break.object;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56770 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_line_break;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = par_encoding.object;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47009 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_encoding;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = par_version.object;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14890 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_version;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = par_tags.object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56984 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_tags;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = par_explicit_start.object;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57034 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_explicit_start;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = par_explicit_end.object;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57094 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_explicit_end;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_12, tmp_dict_value_12 );
    frame_function->f_lineno = 186;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    assert( var_dumper.object == NULL );
    var_dumper.object = tmp_assign_source_6;

    // Tried code
    tmp_source_name_2 = var_dumper.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_open );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 188;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = par_documents.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57418 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_7;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_8 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 189;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_for_loop_1__iter_value.object;

    if (var_data.object == NULL)
    {
        var_data.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_data.object;
        var_data.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = var_dumper.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_represent );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = var_data.object;

    frame_function->f_lineno = 190;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_source_name_4 = var_dumper.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_close );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 191;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 191;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 191;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_source_name_5 = var_dumper.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto try_finally_handler_error_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dispose );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 193;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_2 );exception_keeper_type_2 = NULL;
    Py_XDECREF( exception_keeper_value_2 );exception_keeper_value_2 = NULL;
    Py_XDECREF( exception_keeper_tb_2 );exception_keeper_tb_2 = NULL;
    goto frame_exception_exit_1;
    finally_end_2:;
    tmp_cond_value_1 = var_getvalue.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56930 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_7 = var_getvalue.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56930 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 195;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;

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
    if ((var_getvalue.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getvalue,
            var_getvalue.object
        );

    }
    if ((var_StringIO.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_StringIO,
            var_StringIO.object
        );

    }
    if ((var_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dumper,
            var_dumper.object
        );

    }
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((par_documents.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_documents,
            par_documents.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_default_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_default_style,
            par_default_style.object
        );

    }
    if ((par_default_flow_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_default_flow_style,
            par_default_flow_style.object
        );

    }
    if ((par_canonical.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_canonical,
            par_canonical.object
        );

    }
    if ((par_indent.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indent,
            par_indent.object
        );

    }
    if ((par_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_width,
            par_width.object
        );

    }
    if ((par_allow_unicode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_allow_unicode,
            par_allow_unicode.object
        );

    }
    if ((par_line_break.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line_break,
            par_line_break.object
        );

    }
    if ((par_encoding.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_encoding,
            par_encoding.object
        );

    }
    if ((par_explicit_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_explicit_start,
            par_explicit_start.object
        );

    }
    if ((par_explicit_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_explicit_end,
            par_explicit_end.object
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
    if ((par_tags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tags,
            par_tags.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_12_dump_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_documents = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Dumper = NULL;
    PyObject *_python_par_default_style = NULL;
    PyObject *_python_par_default_flow_style = NULL;
    PyObject *_python_par_canonical = NULL;
    PyObject *_python_par_indent = NULL;
    PyObject *_python_par_width = NULL;
    PyObject *_python_par_allow_unicode = NULL;
    PyObject *_python_par_line_break = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par_explicit_start = NULL;
    PyObject *_python_par_explicit_end = NULL;
    PyObject *_python_par_version = NULL;
    PyObject *_python_par_tags = NULL;
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
                PyErr_Format( PyExc_TypeError, "dump_all() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_documents == key )
            {
                assert( _python_par_documents == NULL );
                _python_par_documents = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_stream == key )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_default_style == key )
            {
                assert( _python_par_default_style == NULL );
                _python_par_default_style = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_default_flow_style == key )
            {
                assert( _python_par_default_flow_style == NULL );
                _python_par_default_flow_style = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_canonical == key )
            {
                assert( _python_par_canonical == NULL );
                _python_par_canonical = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_indent == key )
            {
                assert( _python_par_indent == NULL );
                _python_par_indent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_width == key )
            {
                assert( _python_par_width == NULL );
                _python_par_width = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_allow_unicode == key )
            {
                assert( _python_par_allow_unicode == NULL );
                _python_par_allow_unicode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_line_break == key )
            {
                assert( _python_par_line_break == NULL );
                _python_par_line_break = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_encoding == key )
            {
                assert( _python_par_encoding == NULL );
                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_explicit_start == key )
            {
                assert( _python_par_explicit_start == NULL );
                _python_par_explicit_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_explicit_end == key )
            {
                assert( _python_par_explicit_end == NULL );
                _python_par_explicit_end = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_version == key )
            {
                assert( _python_par_version == NULL );
                _python_par_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_tags == key )
            {
                assert( _python_par_tags == NULL );
                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_documents, key ) == 1 )
            {
                assert( _python_par_documents == NULL );
                _python_par_documents = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stream, key ) == 1 )
            {
                assert( _python_par_stream == NULL );
                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_default_style, key ) == 1 )
            {
                assert( _python_par_default_style == NULL );
                _python_par_default_style = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_default_flow_style, key ) == 1 )
            {
                assert( _python_par_default_flow_style == NULL );
                _python_par_default_flow_style = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_canonical, key ) == 1 )
            {
                assert( _python_par_canonical == NULL );
                _python_par_canonical = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_indent, key ) == 1 )
            {
                assert( _python_par_indent == NULL );
                _python_par_indent = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_width, key ) == 1 )
            {
                assert( _python_par_width == NULL );
                _python_par_width = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_allow_unicode, key ) == 1 )
            {
                assert( _python_par_allow_unicode == NULL );
                _python_par_allow_unicode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_line_break, key ) == 1 )
            {
                assert( _python_par_line_break == NULL );
                _python_par_line_break = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_encoding, key ) == 1 )
            {
                assert( _python_par_encoding == NULL );
                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_explicit_start, key ) == 1 )
            {
                assert( _python_par_explicit_start == NULL );
                _python_par_explicit_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_explicit_end, key ) == 1 )
            {
                assert( _python_par_explicit_end == NULL );
                _python_par_explicit_end = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_version, key ) == 1 )
            {
                assert( _python_par_version == NULL );
                _python_par_version = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tags, key ) == 1 )
            {
                assert( _python_par_tags == NULL );
                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dump_all() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 15 ))
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
         if (unlikely( _python_par_documents != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_documents = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_documents == NULL )
    {
        if ( 0 + self->m_defaults_given >= 15  )
        {
            _python_par_documents = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 15 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 15  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 15 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 15  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 15 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_default_style != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_default_style = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_default_style == NULL )
    {
        if ( 3 + self->m_defaults_given >= 15  )
        {
            _python_par_default_style = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 15 ) );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_default_flow_style != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_default_flow_style = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_default_flow_style == NULL )
    {
        if ( 4 + self->m_defaults_given >= 15  )
        {
            _python_par_default_flow_style = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 15 ) );
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
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_canonical != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_canonical = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_canonical == NULL )
    {
        if ( 5 + self->m_defaults_given >= 15  )
        {
            _python_par_canonical = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 15 ) );
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
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_indent != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_indent = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_indent == NULL )
    {
        if ( 6 + self->m_defaults_given >= 15  )
        {
            _python_par_indent = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 15 ) );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_width != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_width = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_width == NULL )
    {
        if ( 7 + self->m_defaults_given >= 15  )
        {
            _python_par_width = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 15 ) );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_allow_unicode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_allow_unicode = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_allow_unicode == NULL )
    {
        if ( 8 + self->m_defaults_given >= 15  )
        {
            _python_par_allow_unicode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 15 ) );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_line_break != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_line_break = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_line_break == NULL )
    {
        if ( 9 + self->m_defaults_given >= 15  )
        {
            _python_par_line_break = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 15 ) );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_encoding == NULL )
    {
        if ( 10 + self->m_defaults_given >= 15  )
        {
            _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 15 ) );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_explicit_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_explicit_start = INCREASE_REFCOUNT( args[ 11 ] );
    }
    else if ( _python_par_explicit_start == NULL )
    {
        if ( 11 + self->m_defaults_given >= 15  )
        {
            _python_par_explicit_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 15 ) );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_explicit_end != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_explicit_end = INCREASE_REFCOUNT( args[ 12 ] );
    }
    else if ( _python_par_explicit_end == NULL )
    {
        if ( 12 + self->m_defaults_given >= 15  )
        {
            _python_par_explicit_end = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 15 ) );
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
    if (likely( 13 < args_given ))
    {
         if (unlikely( _python_par_version != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 13 );
             goto error_exit;
         }

        _python_par_version = INCREASE_REFCOUNT( args[ 13 ] );
    }
    else if ( _python_par_version == NULL )
    {
        if ( 13 + self->m_defaults_given >= 15  )
        {
            _python_par_version = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 13 - 15 ) );
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
    if (likely( 14 < args_given ))
    {
         if (unlikely( _python_par_tags != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 14 );
             goto error_exit;
         }

        _python_par_tags = INCREASE_REFCOUNT( args[ 14 ] );
    }
    else if ( _python_par_tags == NULL )
    {
        if ( 14 + self->m_defaults_given >= 15  )
        {
            _python_par_tags = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 14 - 15 ) );
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
    if (unlikely( _python_par_documents == NULL || _python_par_stream == NULL || _python_par_Dumper == NULL || _python_par_default_style == NULL || _python_par_default_flow_style == NULL || _python_par_canonical == NULL || _python_par_indent == NULL || _python_par_width == NULL || _python_par_allow_unicode == NULL || _python_par_line_break == NULL || _python_par_encoding == NULL || _python_par_explicit_start == NULL || _python_par_explicit_end == NULL || _python_par_version == NULL || _python_par_tags == NULL ))
    {
        PyObject *values[] = { _python_par_documents, _python_par_stream, _python_par_Dumper, _python_par_default_style, _python_par_default_flow_style, _python_par_canonical, _python_par_indent, _python_par_width, _python_par_allow_unicode, _python_par_line_break, _python_par_encoding, _python_par_explicit_start, _python_par_explicit_end, _python_par_version, _python_par_tags };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_dump_all_of_module_yaml( self, _python_par_documents, _python_par_stream, _python_par_Dumper, _python_par_default_style, _python_par_default_flow_style, _python_par_canonical, _python_par_indent, _python_par_width, _python_par_allow_unicode, _python_par_line_break, _python_par_encoding, _python_par_explicit_start, _python_par_explicit_end, _python_par_version, _python_par_tags );

error_exit:;

    Py_XDECREF( _python_par_documents );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Dumper );
    Py_XDECREF( _python_par_default_style );
    Py_XDECREF( _python_par_default_flow_style );
    Py_XDECREF( _python_par_canonical );
    Py_XDECREF( _python_par_indent );
    Py_XDECREF( _python_par_width );
    Py_XDECREF( _python_par_allow_unicode );
    Py_XDECREF( _python_par_line_break );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par_explicit_start );
    Py_XDECREF( _python_par_explicit_end );
    Py_XDECREF( _python_par_version );
    Py_XDECREF( _python_par_tags );

    return NULL;
}

static PyObject *dparse_function_12_dump_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 15 )
    {
        return impl_function_12_dump_all_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ), INCREASE_REFCOUNT( args[ 13 ] ), INCREASE_REFCOUNT( args[ 14 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_dump_all_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_dump_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_data, PyObject *_python_par_stream, PyObject *_python_par_Dumper, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObjectLocalVariable par_kwds; par_kwds.object = _python_par_kwds;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2ef6326b70ec5d8a5230128af860cf43, module_yaml );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57473 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_data.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1549 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_Dumper.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_Dumper;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg4_1 = par_kwds.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_7_complex_call_helper_pos_keywords_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, tmp_dircall_arg3_1, INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
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
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
        );

    }
    if ((par_kwds.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwds,
            par_kwds.object
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
static PyObject *fparse_function_13_dump_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_Dumper = NULL;
    PyObject *_python_par_kwds = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwds = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwds = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "dump() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "dump() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwds = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwds = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "dump() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwds = PyDict_New();
        }
    }

    // Check if argument data was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_data );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_data == NULL );

            _python_par_data = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_data );

            kw_found += 1;
        }
    }

    // Check if argument stream was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_stream );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_stream == NULL );

            _python_par_stream = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_stream );

            kw_found += 1;
        }
    }

    // Check if argument Dumper was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_Dumper );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_Dumper == NULL );

            _python_par_Dumper = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_Dumper );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_data == NULL || _python_par_stream == NULL || _python_par_Dumper == NULL ))
    {
        PyObject *values[] = { _python_par_data, _python_par_stream, _python_par_Dumper };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_dump_of_module_yaml( self, _python_par_data, _python_par_stream, _python_par_Dumper, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_Dumper );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_13_dump_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_13_dump_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_13_dump_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_safe_dump_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_documents, PyObject *_python_par_stream, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_documents; par_documents.object = _python_par_documents;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_kwds; par_kwds.object = _python_par_kwds;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_51ebecb73853dddc0ffa0135d0bde9f4, module_yaml );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57473 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_documents.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57418 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeDumper );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeDumper );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_Dumper;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg4_1 = par_kwds.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_7_complex_call_helper_pos_keywords_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, tmp_dircall_arg3_1, INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
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
    if ((par_documents.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_documents,
            par_documents.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_kwds.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwds,
            par_kwds.object
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
static PyObject *fparse_function_14_safe_dump_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_documents = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_kwds = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwds = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwds = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "safe_dump_all() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "safe_dump_all() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwds = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwds = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "safe_dump_all() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwds = PyDict_New();
        }
    }

    // Check if argument documents was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_documents );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_documents == NULL );

            _python_par_documents = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_documents );

            kw_found += 1;
        }
    }

    // Check if argument stream was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_stream );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_stream == NULL );

            _python_par_stream = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_stream );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_documents != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_documents = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_documents == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_documents = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_documents == NULL || _python_par_stream == NULL ))
    {
        PyObject *values[] = { _python_par_documents, _python_par_stream };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14_safe_dump_all_of_module_yaml( self, _python_par_documents, _python_par_stream, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_documents );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_14_safe_dump_all_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_14_safe_dump_all_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_14_safe_dump_all_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_safe_dump_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_data, PyObject *_python_par_stream, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable par_stream; par_stream.object = _python_par_stream;
    PyObjectLocalVariable par_kwds; par_kwds.object = _python_par_kwds;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6666f81b101fbeb4822995b0d9671649, module_yaml );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57473 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_data.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1549 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21991 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeDumper );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeDumper );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_Dumper;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg4_1 = par_kwds.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_7_complex_call_helper_pos_keywords_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, tmp_dircall_arg3_1, INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
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
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
        );

    }
    if ((par_stream.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stream,
            par_stream.object
        );

    }
    if ((par_kwds.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwds,
            par_kwds.object
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
static PyObject *fparse_function_15_safe_dump_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_kwds = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwds = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwds = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "safe_dump() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "safe_dump() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwds = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwds = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "safe_dump() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwds = PyDict_New();
        }
    }

    // Check if argument data was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_data );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_data == NULL );

            _python_par_data = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_data );

            kw_found += 1;
        }
    }

    // Check if argument stream was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, const_str_plain_stream );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_stream == NULL );

            _python_par_stream = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, const_str_plain_stream );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stream == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_stream = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_data == NULL || _python_par_stream == NULL ))
    {
        PyObject *values[] = { _python_par_data, _python_par_stream };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_15_safe_dump_of_module_yaml( self, _python_par_data, _python_par_stream, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_15_safe_dump_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_15_safe_dump_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_15_safe_dump_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_add_implicit_resolver_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_tag, PyObject *_python_par_regexp, PyObject *_python_par_first, PyObject *_python_par_Loader, PyObject *_python_par_Dumper )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_tag; par_tag.object = _python_par_tag;
    PyObjectLocalVariable par_regexp; par_regexp.object = _python_par_regexp;
    PyObjectLocalVariable par_first; par_first.object = _python_par_first;
    PyObjectLocalVariable par_Loader; par_Loader.object = _python_par_Loader;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d608ff455e049af10f082bd1e1abd1d1, module_yaml );
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
    tmp_source_name_1 = par_Loader.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_implicit_resolver );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_tag.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57549 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_regexp.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57598 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_first.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52774 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 228;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_Dumper.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_implicit_resolver );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_tag.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57549 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_regexp.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57598 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_first.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52774 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 229;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((par_tag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tag,
            par_tag.object
        );

    }
    if ((par_regexp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_regexp,
            par_regexp.object
        );

    }
    if ((par_first.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_first,
            par_first.object
        );

    }
    if ((par_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            par_Loader.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_16_add_implicit_resolver_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_tag = NULL;
    PyObject *_python_par_regexp = NULL;
    PyObject *_python_par_first = NULL;
    PyObject *_python_par_Loader = NULL;
    PyObject *_python_par_Dumper = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_implicit_resolver() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_tag == key )
            {
                assert( _python_par_tag == NULL );
                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_regexp == key )
            {
                assert( _python_par_regexp == NULL );
                _python_par_regexp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_first == key )
            {
                assert( _python_par_first == NULL );
                _python_par_first = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tag, key ) == 1 )
            {
                assert( _python_par_tag == NULL );
                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_regexp, key ) == 1 )
            {
                assert( _python_par_regexp == NULL );
                _python_par_regexp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_first, key ) == 1 )
            {
                assert( _python_par_first == NULL );
                _python_par_first = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_implicit_resolver() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 5 ))
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
         if (unlikely( _python_par_tag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_tag = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_tag == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_tag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_regexp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_regexp = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_regexp == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_regexp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_first != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_first = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_first == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_first = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_tag == NULL || _python_par_regexp == NULL || _python_par_first == NULL || _python_par_Loader == NULL || _python_par_Dumper == NULL ))
    {
        PyObject *values[] = { _python_par_tag, _python_par_regexp, _python_par_first, _python_par_Loader, _python_par_Dumper };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_16_add_implicit_resolver_of_module_yaml( self, _python_par_tag, _python_par_regexp, _python_par_first, _python_par_Loader, _python_par_Dumper );

error_exit:;

    Py_XDECREF( _python_par_tag );
    Py_XDECREF( _python_par_regexp );
    Py_XDECREF( _python_par_first );
    Py_XDECREF( _python_par_Loader );
    Py_XDECREF( _python_par_Dumper );

    return NULL;
}

static PyObject *dparse_function_16_add_implicit_resolver_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_16_add_implicit_resolver_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_add_implicit_resolver_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_add_path_resolver_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_tag, PyObject *_python_par_path, PyObject *_python_par_kind, PyObject *_python_par_Loader, PyObject *_python_par_Dumper )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_tag; par_tag.object = _python_par_tag;
    PyObjectLocalVariable par_path; par_path.object = _python_par_path;
    PyObjectLocalVariable par_kind; par_kind.object = _python_par_kind;
    PyObjectLocalVariable par_Loader; par_Loader.object = _python_par_Loader;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c6dd15f70f2490038da52278c99c7201, module_yaml );
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
    tmp_source_name_1 = par_Loader.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_path_resolver );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_tag.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57549 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_path.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29096 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_kind.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57650 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 238;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_Dumper.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_path_resolver );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_tag.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57549 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_path.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29096 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_kind.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57650 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 239;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((par_tag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tag,
            par_tag.object
        );

    }
    if ((par_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_path,
            par_path.object
        );

    }
    if ((par_kind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kind,
            par_kind.object
        );

    }
    if ((par_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            par_Loader.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_17_add_path_resolver_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_tag = NULL;
    PyObject *_python_par_path = NULL;
    PyObject *_python_par_kind = NULL;
    PyObject *_python_par_Loader = NULL;
    PyObject *_python_par_Dumper = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_path_resolver() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_tag == key )
            {
                assert( _python_par_tag == NULL );
                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_path == key )
            {
                assert( _python_par_path == NULL );
                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_kind == key )
            {
                assert( _python_par_kind == NULL );
                _python_par_kind = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tag, key ) == 1 )
            {
                assert( _python_par_tag == NULL );
                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_path, key ) == 1 )
            {
                assert( _python_par_path == NULL );
                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_kind, key ) == 1 )
            {
                assert( _python_par_kind == NULL );
                _python_par_kind = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_path_resolver() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 5 ))
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
         if (unlikely( _python_par_tag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_tag = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_tag == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_tag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_path == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_kind != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_kind = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_kind == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_kind = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_tag == NULL || _python_par_path == NULL || _python_par_kind == NULL || _python_par_Loader == NULL || _python_par_Dumper == NULL ))
    {
        PyObject *values[] = { _python_par_tag, _python_par_path, _python_par_kind, _python_par_Loader, _python_par_Dumper };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_17_add_path_resolver_of_module_yaml( self, _python_par_tag, _python_par_path, _python_par_kind, _python_par_Loader, _python_par_Dumper );

error_exit:;

    Py_XDECREF( _python_par_tag );
    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_kind );
    Py_XDECREF( _python_par_Loader );
    Py_XDECREF( _python_par_Dumper );

    return NULL;
}

static PyObject *dparse_function_17_add_path_resolver_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_17_add_path_resolver_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_add_path_resolver_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_add_constructor_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_tag, PyObject *_python_par_constructor, PyObject *_python_par_Loader )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_tag; par_tag.object = _python_par_tag;
    PyObjectLocalVariable par_constructor; par_constructor.object = _python_par_constructor;
    PyObjectLocalVariable par_Loader; par_Loader.object = _python_par_Loader;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a766df459da7890683c3f6fd64419587, module_yaml );
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
    tmp_source_name_1 = par_Loader.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_constructor );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_tag.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57549 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_constructor.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57700 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 247;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((par_tag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tag,
            par_tag.object
        );

    }
    if ((par_constructor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_constructor,
            par_constructor.object
        );

    }
    if ((par_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            par_Loader.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_18_add_constructor_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_tag = NULL;
    PyObject *_python_par_constructor = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_constructor() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_tag == key )
            {
                assert( _python_par_tag == NULL );
                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_constructor == key )
            {
                assert( _python_par_constructor == NULL );
                _python_par_constructor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tag, key ) == 1 )
            {
                assert( _python_par_tag == NULL );
                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_constructor, key ) == 1 )
            {
                assert( _python_par_constructor == NULL );
                _python_par_constructor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_constructor() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_tag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_tag = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_tag == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_tag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_constructor != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_constructor = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_constructor == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_constructor = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_tag == NULL || _python_par_constructor == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_tag, _python_par_constructor, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_18_add_constructor_of_module_yaml( self, _python_par_tag, _python_par_constructor, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_tag );
    Py_XDECREF( _python_par_constructor );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_18_add_constructor_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_18_add_constructor_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_add_constructor_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_add_multi_constructor_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_tag_prefix, PyObject *_python_par_multi_constructor, PyObject *_python_par_Loader )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_tag_prefix; par_tag_prefix.object = _python_par_tag_prefix;
    PyObjectLocalVariable par_multi_constructor; par_multi_constructor.object = _python_par_multi_constructor;
    PyObjectLocalVariable par_Loader; par_Loader.object = _python_par_Loader;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_146dab16bec11d6840de83f7bcc35dea, module_yaml );
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
    tmp_source_name_1 = par_Loader.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56425 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_multi_constructor );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_tag_prefix.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57757 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_multi_constructor.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57813 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 256;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((par_tag_prefix.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tag_prefix,
            par_tag_prefix.object
        );

    }
    if ((par_multi_constructor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_multi_constructor,
            par_multi_constructor.object
        );

    }
    if ((par_Loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Loader,
            par_Loader.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_19_add_multi_constructor_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_tag_prefix = NULL;
    PyObject *_python_par_multi_constructor = NULL;
    PyObject *_python_par_Loader = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_multi_constructor() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_tag_prefix == key )
            {
                assert( _python_par_tag_prefix == NULL );
                _python_par_tag_prefix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_multi_constructor == key )
            {
                assert( _python_par_multi_constructor == NULL );
                _python_par_multi_constructor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Loader == key )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tag_prefix, key ) == 1 )
            {
                assert( _python_par_tag_prefix == NULL );
                _python_par_tag_prefix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_multi_constructor, key ) == 1 )
            {
                assert( _python_par_multi_constructor == NULL );
                _python_par_multi_constructor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Loader, key ) == 1 )
            {
                assert( _python_par_Loader == NULL );
                _python_par_Loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_multi_constructor() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_tag_prefix != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_tag_prefix = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_tag_prefix == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_tag_prefix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_multi_constructor != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_multi_constructor = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_multi_constructor == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_multi_constructor = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Loader = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Loader == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_Loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_tag_prefix == NULL || _python_par_multi_constructor == NULL || _python_par_Loader == NULL ))
    {
        PyObject *values[] = { _python_par_tag_prefix, _python_par_multi_constructor, _python_par_Loader };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_19_add_multi_constructor_of_module_yaml( self, _python_par_tag_prefix, _python_par_multi_constructor, _python_par_Loader );

error_exit:;

    Py_XDECREF( _python_par_tag_prefix );
    Py_XDECREF( _python_par_multi_constructor );
    Py_XDECREF( _python_par_Loader );

    return NULL;
}

static PyObject *dparse_function_19_add_multi_constructor_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_19_add_multi_constructor_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_add_multi_constructor_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_add_representer_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_data_type, PyObject *_python_par_representer, PyObject *_python_par_Dumper )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_data_type; par_data_type.object = _python_par_data_type;
    PyObjectLocalVariable par_representer; par_representer.object = _python_par_representer;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_10763c3e086ea89f5597dddfab45f961, module_yaml );
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
    tmp_source_name_1 = par_Dumper.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_representer );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_data_type.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46512 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_representer.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57876 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 265;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((par_data_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data_type,
            par_data_type.object
        );

    }
    if ((par_representer.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_representer,
            par_representer.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_20_add_representer_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_data_type = NULL;
    PyObject *_python_par_representer = NULL;
    PyObject *_python_par_Dumper = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_representer() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_data_type == key )
            {
                assert( _python_par_data_type == NULL );
                _python_par_data_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_representer == key )
            {
                assert( _python_par_representer == NULL );
                _python_par_representer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data_type, key ) == 1 )
            {
                assert( _python_par_data_type == NULL );
                _python_par_data_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_representer, key ) == 1 )
            {
                assert( _python_par_representer == NULL );
                _python_par_representer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_representer() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_data_type != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_data_type = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_data_type == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_data_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_representer != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_representer = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_representer == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_representer = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_data_type == NULL || _python_par_representer == NULL || _python_par_Dumper == NULL ))
    {
        PyObject *values[] = { _python_par_data_type, _python_par_representer, _python_par_Dumper };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_20_add_representer_of_module_yaml( self, _python_par_data_type, _python_par_representer, _python_par_Dumper );

error_exit:;

    Py_XDECREF( _python_par_data_type );
    Py_XDECREF( _python_par_representer );
    Py_XDECREF( _python_par_Dumper );

    return NULL;
}

static PyObject *dparse_function_20_add_representer_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_20_add_representer_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_add_representer_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_add_multi_representer_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_data_type, PyObject *_python_par_multi_representer, PyObject *_python_par_Dumper )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_data_type; par_data_type.object = _python_par_data_type;
    PyObjectLocalVariable par_multi_representer; par_multi_representer.object = _python_par_multi_representer;
    PyObjectLocalVariable par_Dumper; par_Dumper.object = _python_par_Dumper;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5e64fa3f6d5a0cc7f22dd9a3291f7908, module_yaml );
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
    tmp_source_name_1 = par_Dumper.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56553 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_multi_representer );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_data_type.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46512 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_multi_representer.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57933 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 274;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((par_data_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data_type,
            par_data_type.object
        );

    }
    if ((par_multi_representer.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_multi_representer,
            par_multi_representer.object
        );

    }
    if ((par_Dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dumper,
            par_Dumper.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_21_add_multi_representer_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_data_type = NULL;
    PyObject *_python_par_multi_representer = NULL;
    PyObject *_python_par_Dumper = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_multi_representer() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_data_type == key )
            {
                assert( _python_par_data_type == NULL );
                _python_par_data_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_multi_representer == key )
            {
                assert( _python_par_multi_representer == NULL );
                _python_par_multi_representer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dumper == key )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data_type, key ) == 1 )
            {
                assert( _python_par_data_type == NULL );
                _python_par_data_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_multi_representer, key ) == 1 )
            {
                assert( _python_par_multi_representer == NULL );
                _python_par_multi_representer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dumper, key ) == 1 )
            {
                assert( _python_par_Dumper == NULL );
                _python_par_Dumper = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_multi_representer() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_data_type != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_data_type = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_data_type == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_data_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_multi_representer != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_multi_representer = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_multi_representer == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_multi_representer = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_Dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_Dumper = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_Dumper == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_Dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_data_type == NULL || _python_par_multi_representer == NULL || _python_par_Dumper == NULL ))
    {
        PyObject *values[] = { _python_par_data_type, _python_par_multi_representer, _python_par_Dumper };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_21_add_multi_representer_of_module_yaml( self, _python_par_data_type, _python_par_multi_representer, _python_par_Dumper );

error_exit:;

    Py_XDECREF( _python_par_data_type );
    Py_XDECREF( _python_par_multi_representer );
    Py_XDECREF( _python_par_Dumper );

    return NULL;
}

static PyObject *dparse_function_21_add_multi_representer_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_21_add_multi_representer_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_add_multi_representer_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_22_YAMLObjectMetaclass_of_module_yaml(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_yaml;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_2223c89990f93a7cadb8e585806c943d;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7f156c68689444a28b0a13e46bd1c744, module_yaml );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;


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
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_name, PyObject *_python_par_bases, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_cls; par_cls.object = _python_par_cls;
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable par_bases; par_bases.object = _python_par_bases;
    PyObjectLocalVariable par_kwds; par_kwds.object = _python_par_kwds;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_super_object_1;
    PyObject *tmp_super_type_1;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ac2452fb63776356149dbadf4f1778b8, module_yaml );
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
    tmp_super_type_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );

    if (unlikely( tmp_super_type_1 == NULL ))
    {
        tmp_super_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );
    }

    if ( tmp_super_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57996 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_super_object_1 = par_cls.object;

    if ( tmp_super_object_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_super_type_1, tmp_super_object_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_name.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 510 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_bases.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58044 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_kwds.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 281;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = const_str_plain_yaml_tag;
    tmp_compexpr_right_1 = par_kwds.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto try_finally_handler_2;
    }

    tmp_assign_source_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_1 = par_kwds.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54320 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_1 = const_str_plain_yaml_tag;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_cond_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
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
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    condexpr_end_1:;
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


        frame_function->f_lineno = 282;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = par_cls.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_yaml_loader );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_constructor );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }
    tmp_source_name_4 = par_cls.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_yaml_tag );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }
    tmp_source_name_5 = par_cls.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_from_yaml );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 283;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_cls.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_yaml_dumper );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add_representer );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_6 = par_cls.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }

    tmp_source_name_8 = par_cls.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_to_yaml );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 284;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
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
    if ((par_cls.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cls,
            par_cls.object
        );

    }
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            par_name.object
        );

    }
    if ((par_bases.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bases,
            par_bases.object
        );

    }
    if ((par_kwds.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwds,
            par_kwds.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_bases = NULL;
    PyObject *_python_par_kwds = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_cls == key )
            {
                assert( _python_par_cls == NULL );
                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_bases == key )
            {
                assert( _python_par_bases == NULL );
                _python_par_bases = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_kwds == key )
            {
                assert( _python_par_kwds == NULL );
                _python_par_kwds = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cls, key ) == 1 )
            {
                assert( _python_par_cls == NULL );
                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_bases, key ) == 1 )
            {
                assert( _python_par_bases == NULL );
                _python_par_bases = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_kwds, key ) == 1 )
            {
                assert( _python_par_kwds == NULL );
                _python_par_kwds = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_cls = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_bases != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_bases = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_bases == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_bases = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_kwds != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_kwds = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_kwds == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_kwds = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_cls == NULL || _python_par_name == NULL || _python_par_bases == NULL || _python_par_kwds == NULL ))
    {
        PyObject *values[] = { _python_par_cls, _python_par_name, _python_par_bases, _python_par_kwds };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml( self, _python_par_cls, _python_par_name, _python_par_bases, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_bases );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_23_YAMLObject_of_module_yaml(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___metaclass__;
    PyObjectLocalVariable var___slots__;
    PyObjectLocalVariable var_yaml_loader;
    PyObjectLocalVariable var_yaml_dumper;
    PyObjectLocalVariable var_yaml_tag;
    PyObjectLocalVariable var_yaml_flow_style;
    PyObjectLocalVariable var_from_yaml;
    PyObjectLocalVariable var_to_yaml;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_yaml;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_e275f79ce14db9be76237699539edb52;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f69b49b266d9f83a33f549e6d18ea8a1, module_yaml );
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
    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57996 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    assert( var___metaclass__.object == NULL );
    var___metaclass__.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = const_tuple_empty;
    assert( var___slots__.object == NULL );
    var___slots__.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_assign_source_5 == NULL ))
    {
        tmp_assign_source_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46238 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    assert( var_yaml_loader.object == NULL );
    var_yaml_loader.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_assign_source_6 == NULL ))
    {
        tmp_assign_source_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_assign_source_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58095 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    assert( var_yaml_dumper.object == NULL );
    var_yaml_dumper.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = Py_None;
    assert( var_yaml_tag.object == NULL );
    var_yaml_tag.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_assign_source_8 = Py_None;
    assert( var_yaml_flow_style.object == NULL );
    var_yaml_flow_style.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_assign_source_9 = MAKE_FUNCTION_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    assert( var_from_yaml.object == NULL );
    var_from_yaml.object = tmp_assign_source_9;

    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_from_yaml.object;

    frame_function->f_lineno = 306;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    assert( var_from_yaml.object != NULL );
    {
        PyObject *old = var_from_yaml.object;
        var_from_yaml.object = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_assign_source_11 = MAKE_FUNCTION_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    assert( var_to_yaml.object == NULL );
    var_to_yaml.object = tmp_assign_source_11;

    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_to_yaml.object;

    frame_function->f_lineno = 314;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    assert( var_to_yaml.object != NULL );
    {
        PyObject *old = var_to_yaml.object;
        var_to_yaml.object = tmp_assign_source_12;
        Py_DECREF( old );
    }


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
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var___metaclass__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___metaclass__,
            var___metaclass__.object
        );

    }
    if ((var___slots__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___slots__,
            var___slots__.object
        );

    }
    if ((var_yaml_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_yaml_loader,
            var_yaml_loader.object
        );

    }
    if ((var_yaml_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_yaml_dumper,
            var_yaml_dumper.object
        );

    }
    if ((var_yaml_tag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_yaml_tag,
            var_yaml_tag.object
        );

    }
    if ((var_yaml_flow_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_yaml_flow_style,
            var_yaml_flow_style.object
        );

    }
    if ((var_from_yaml.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_from_yaml,
            var_from_yaml.object
        );

    }
    if ((var_to_yaml.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_to_yaml,
            var_to_yaml.object
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
    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var___metaclass__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___metaclass__,
            var___metaclass__.object
        );

    }
    if ((var___slots__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___slots__,
            var___slots__.object
        );

    }
    if ((var_yaml_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_yaml_loader,
            var_yaml_loader.object
        );

    }
    if ((var_yaml_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_yaml_dumper,
            var_yaml_dumper.object
        );

    }
    if ((var_yaml_tag.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_yaml_tag,
            var_yaml_tag.object
        );

    }
    if ((var_yaml_flow_style.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_yaml_flow_style,
            var_yaml_flow_style.object
        );

    }
    if ((var_from_yaml.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_from_yaml,
            var_from_yaml.object
        );

    }
    if ((var_to_yaml.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_to_yaml,
            var_to_yaml.object
        );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}


static PyObject *impl_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_loader, PyObject *_python_par_node )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_cls; par_cls.object = _python_par_cls;
    PyObjectLocalVariable par_loader; par_loader.object = _python_par_loader;
    PyObjectLocalVariable par_node; par_node.object = _python_par_node;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b1af1abdd1525d61f05b5d7832f8e1e1, module_yaml );
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
    tmp_source_name_1 = par_loader.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58130 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_construct_yaml_object );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_node.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57245 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_cls.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 305;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
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
    if ((par_cls.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cls,
            par_cls.object
        );

    }
    if ((par_loader.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_loader,
            par_loader.object
        );

    }
    if ((par_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node,
            par_node.object
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
static PyObject *fparse_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_loader = NULL;
    PyObject *_python_par_node = NULL;
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
                PyErr_Format( PyExc_TypeError, "from_yaml() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_cls == key )
            {
                assert( _python_par_cls == NULL );
                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_loader == key )
            {
                assert( _python_par_loader == NULL );
                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_node == key )
            {
                assert( _python_par_node == NULL );
                _python_par_node = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cls, key ) == 1 )
            {
                assert( _python_par_cls == NULL );
                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_loader, key ) == 1 )
            {
                assert( _python_par_loader == NULL );
                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_node, key ) == 1 )
            {
                assert( _python_par_node == NULL );
                _python_par_node = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "from_yaml() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_cls = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_loader != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_loader == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_node == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_node = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_cls == NULL || _python_par_loader == NULL || _python_par_node == NULL ))
    {
        PyObject *values[] = { _python_par_cls, _python_par_loader, _python_par_node };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml( self, _python_par_cls, _python_par_loader, _python_par_node );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_loader );
    Py_XDECREF( _python_par_node );

    return NULL;
}

static PyObject *dparse_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_dumper, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_cls; par_cls.object = _python_par_cls;
    PyObjectLocalVariable par_dumper; par_dumper.object = _python_par_dumper;
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e24e25176217ddebfada9b6974cb125a, module_yaml );
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
    tmp_source_name_1 = par_dumper.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56878 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_represent_yaml_object );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 3 );
    tmp_source_name_2 = par_cls.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_yaml_tag );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_data.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1549 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_cls.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_cls.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38783 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_yaml_flow_style );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_flow_style;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 313;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
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
    if ((par_cls.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cls,
            par_cls.object
        );

    }
    if ((par_dumper.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dumper,
            par_dumper.object
        );

    }
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
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
static PyObject *fparse_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_dumper = NULL;
    PyObject *_python_par_data = NULL;
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
                PyErr_Format( PyExc_TypeError, "to_yaml() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_cls == key )
            {
                assert( _python_par_cls == NULL );
                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dumper == key )
            {
                assert( _python_par_dumper == NULL );
                _python_par_dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_data == key )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cls, key ) == 1 )
            {
                assert( _python_par_cls == NULL );
                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dumper, key ) == 1 )
            {
                assert( _python_par_dumper == NULL );
                _python_par_dumper = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data, key ) == 1 )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "to_yaml() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_cls != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_cls == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_cls = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_dumper != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_dumper = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_dumper == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_dumper = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_cls == NULL || _python_par_dumper == NULL || _python_par_data == NULL ))
    {
        PyObject *values[] = { _python_par_cls, _python_par_dumper, _python_par_data };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml( self, _python_par_cls, _python_par_dumper, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_dumper );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_serialize_all_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_serialize_all_of_module_yaml,
        dparse_function_10_serialize_all_of_module_yaml,
        const_str_plain_serialize_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_620bf882124a3f247778dfaaa3fe0d58,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_c421ea8e23681214b813508309ab7232
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_serialize_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_serialize_of_module_yaml,
        dparse_function_11_serialize_of_module_yaml,
        const_str_plain_serialize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f54dbe86dff20a06f9486655c03cdf1e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_aba5b8b311dcc764d8cd28361d094275
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_dump_all_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_dump_all_of_module_yaml,
        dparse_function_12_dump_all_of_module_yaml,
        const_str_plain_dump_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_819fd2275138592f353c3a3b4283b065,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_c942d2c989f3b1224eccd4e2fd5393dd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_dump_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_dump_of_module_yaml,
        dparse_function_13_dump_of_module_yaml,
        const_str_plain_dump,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b824bf8b43db1a7a3867e5d45ac1bc38,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_0ea443bfd96e1b1712763d5746853c32
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_safe_dump_all_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_safe_dump_all_of_module_yaml,
        dparse_function_14_safe_dump_all_of_module_yaml,
        const_str_plain_safe_dump_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e0723e5d8078ff05d929f649bd0e894b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_ac4479e37afb45562de618a2432e20e7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_safe_dump_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_safe_dump_of_module_yaml,
        dparse_function_15_safe_dump_of_module_yaml,
        const_str_plain_safe_dump,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_614a1ed08d8be534e1121addaf0bbb26,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_2be2088f380f05c91030e3c0a5c0aea7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_add_implicit_resolver_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_add_implicit_resolver_of_module_yaml,
        dparse_function_16_add_implicit_resolver_of_module_yaml,
        const_str_plain_add_implicit_resolver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d608ff455e049af10f082bd1e1abd1d1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_8b321806a68d32b5d2089b494f6053c9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_add_path_resolver_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_add_path_resolver_of_module_yaml,
        dparse_function_17_add_path_resolver_of_module_yaml,
        const_str_plain_add_path_resolver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c6dd15f70f2490038da52278c99c7201,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_f9cb1aa37a8194d1b89841f99e5f7fef
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_add_constructor_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_add_constructor_of_module_yaml,
        dparse_function_18_add_constructor_of_module_yaml,
        const_str_plain_add_constructor,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a766df459da7890683c3f6fd64419587,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_e25863bdea9b8fb998503fc94bdd2be2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_add_multi_constructor_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_add_multi_constructor_of_module_yaml,
        dparse_function_19_add_multi_constructor_of_module_yaml,
        const_str_plain_add_multi_constructor,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_146dab16bec11d6840de83f7bcc35dea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_64d91d164dab8f1dcf9ab9c7dabcd277
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml,
        dparse_function_1___init___of_class_22_YAMLObjectMetaclass_of_module_yaml,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ac2452fb63776356149dbadf4f1778b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml,
        dparse_function_1_from_yaml_of_class_23_YAMLObject_of_module_yaml,
        const_str_plain_from_yaml,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b1af1abdd1525d61f05b5d7832f8e1e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_3733a5996907aa690e39f1e78ee89f30
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_scan_of_module_yaml( PyObject *defaults )
{
    return Nuitka_Function_New(
        fparse_function_1_scan_of_module_yaml,
        dparse_function_1_scan_of_module_yaml,
        const_str_plain_scan,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c2656c86a62d6378ccc71d7301db3a71,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_7c2fff4390a089ec442d3d6360002e75
    );
}



static PyObject *MAKE_FUNCTION_function_20_add_representer_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_add_representer_of_module_yaml,
        dparse_function_20_add_representer_of_module_yaml,
        const_str_plain_add_representer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10763c3e086ea89f5597dddfab45f961,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_b8f5b75ad5fa6d2dcd6ebd91641d225c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_add_multi_representer_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_add_multi_representer_of_module_yaml,
        dparse_function_21_add_multi_representer_of_module_yaml,
        const_str_plain_add_multi_representer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e64fa3f6d5a0cc7f22dd9a3291f7908,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_86109977ba39a3fd8af230b1713b5986
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_parse_of_module_yaml( PyObject *defaults )
{
    return Nuitka_Function_New(
        fparse_function_2_parse_of_module_yaml,
        dparse_function_2_parse_of_module_yaml,
        const_str_plain_parse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06c2e5ef5b2264833429c991a50113cf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_c7a254ce21c0bbaa3494e736db212023
    );
}



static PyObject *MAKE_FUNCTION_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml,
        dparse_function_2_to_yaml_of_class_23_YAMLObject_of_module_yaml,
        const_str_plain_to_yaml,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e24e25176217ddebfada9b6974cb125a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_57df5db6c047c908e666fef54878d310
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_compose_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_compose_of_module_yaml,
        dparse_function_3_compose_of_module_yaml,
        const_str_plain_compose,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ccce553cc0f0558ffae20933b2b85698,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_6359860bc6a6a86403f938ba9c31f854
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_compose_all_of_module_yaml( PyObject *defaults )
{
    return Nuitka_Function_New(
        fparse_function_4_compose_all_of_module_yaml,
        dparse_function_4_compose_all_of_module_yaml,
        const_str_plain_compose_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f65963c1448f95e5e95bc9865c1a9967,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_dbb2ee2c44abdad00b80331c569c12ab
    );
}



static PyObject *MAKE_FUNCTION_function_5_load_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_load_of_module_yaml,
        dparse_function_5_load_of_module_yaml,
        const_str_plain_load,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9359b883bf97fae8139d4ef5693f3a65,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_d37c975cb44979b09e197a5a584cf2a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_load_all_of_module_yaml( PyObject *defaults )
{
    return Nuitka_Function_New(
        fparse_function_6_load_all_of_module_yaml,
        dparse_function_6_load_all_of_module_yaml,
        const_str_plain_load_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d7f7a549071f98f98a9b54bd59fb5515,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_d2782260ec3f6babd0d8cdf6de153d18
    );
}



static PyObject *MAKE_FUNCTION_function_7_safe_load_of_module_yaml(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_safe_load_of_module_yaml,
        dparse_function_7_safe_load_of_module_yaml,
        const_str_plain_safe_load,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed61324ee0a3fa796220bb29a017f9ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_be9f5988c832674333dc86f9e14cd835
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_safe_load_all_of_module_yaml(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_safe_load_all_of_module_yaml,
        dparse_function_8_safe_load_all_of_module_yaml,
        const_str_plain_safe_load_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f7e2f008a2a5cb7d39db6bace784cd45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_7b65c8c8bd5d0a1400de64b4eea0f234
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_emit_of_module_yaml( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_emit_of_module_yaml,
        dparse_function_9_emit_of_module_yaml,
        const_str_plain_emit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e6906cbffaec4ba5501874396aab7206,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_yaml,
        const_str_digest_d08724d30d57ad0fd62c47d58b43a640
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_yaml =
{
    PyModuleDef_HEAD_INIT,
    "yaml",   /* m_name */
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

MOD_INIT_DECL( yaml )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_yaml );
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

    // puts( "in inityaml" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_yaml = Py_InitModule4(
        "yaml",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_yaml = PyModule_Create( &mdef_yaml );
#endif

    moduledict_yaml = (PyDictObject *)((PyModuleObject *)module_yaml)->md_dict;

    assertObject( module_yaml );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_yaml, module_yaml );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_yaml );

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
    PyObjectTempVariable tmp_class_creation_1__bases;
    PyObjectTempVariable tmp_class_creation_1__class_dict;
    PyObjectTempVariable tmp_class_creation_1__metaclass;
    PyObjectTempVariable tmp_class_creation_1__class;
    PyObjectTempVariable tmp_class_creation_2__bases;
    PyObjectTempVariable tmp_class_creation_2__class_dict;
    PyObjectTempVariable tmp_class_creation_2__metaclass;
    PyObjectTempVariable tmp_class_creation_2__class;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
    PyObject *tmp_defaults_11;
    PyObject *tmp_defaults_12;
    PyObject *tmp_defaults_13;
    PyObject *tmp_defaults_14;
    PyObject *tmp_defaults_15;
    PyObject *tmp_defaults_16;
    PyObject *tmp_defaults_17;
    PyObject *tmp_defaults_18;
    PyObject *tmp_defaults_19;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d813edd7eda23544d31d9c48821d11bc;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_842684dfd72b94e5cd4cba4fb237caba_list );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_5ce150782c7516c9d2f4ce8641a69992, module_yaml );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 2;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_error, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_2 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 4;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_tokens, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_import_globals_3 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 5;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_events, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_3 );

        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_3 );
    tmp_import_globals_4 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 6;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_nodes, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_4 );

        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_4 );
    tmp_import_globals_5 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 8;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_loader, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_5 );

        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_5 );
    tmp_import_globals_6 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 9;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_dumper, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_6 );

        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_6 );
    tmp_assign_source_4 = const_str_digest_592fcfe486c2a919eeca0c4c43e0a3e6;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    // Tried block of try/except
    tmp_import_globals_7 = ((PyModuleObject *)module_yaml)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain_cyaml, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto try_except_handler_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_7 );

        frame_module->f_lineno = 14;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_star_imported_7 );
    tmp_assign_source_5 = Py_True;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___with_libyaml__, tmp_assign_source_5 );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
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
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
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
    tmp_assign_source_6 = Py_False;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___with_libyaml__, tmp_assign_source_6 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_scan_of_module_yaml( tmp_defaults_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_scan, tmp_assign_source_7 );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_8 = MAKE_FUNCTION_function_2_parse_of_module_yaml( tmp_defaults_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_parse, tmp_assign_source_8 );
    tmp_defaults_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_defaults_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_3_compose_of_module_yaml( tmp_defaults_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_compose, tmp_assign_source_9 );
    tmp_defaults_4 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_defaults_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_4 );
    tmp_assign_source_10 = MAKE_FUNCTION_function_4_compose_all_of_module_yaml( tmp_defaults_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_compose_all, tmp_assign_source_10 );
    tmp_defaults_5 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_defaults_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_5 );
    tmp_assign_source_11 = MAKE_FUNCTION_function_5_load_of_module_yaml( tmp_defaults_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load, tmp_assign_source_11 );
    tmp_defaults_6 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_defaults_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_6, 0, tmp_tuple_element_6 );
    tmp_assign_source_12 = MAKE_FUNCTION_function_6_load_all_of_module_yaml( tmp_defaults_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_module->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load_all, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_function_7_safe_load_of_module_yaml(  );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_load, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_function_8_safe_load_all_of_module_yaml(  );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_load_all, tmp_assign_source_14 );
    tmp_defaults_7 = PyTuple_New( 7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_defaults_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 2, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 3, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 4, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 5, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 6, tmp_tuple_element_7 );
    tmp_assign_source_15 = MAKE_FUNCTION_function_9_emit_of_module_yaml( tmp_defaults_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_emit, tmp_assign_source_15 );
    tmp_defaults_8 = PyTuple_New( 12 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_defaults_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 2, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 3, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 4, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 5, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 6, tmp_tuple_element_8 );
    tmp_tuple_element_8 = const_str_digest_e9e2aa8136260a22b0b09fdee43ccb8a;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 7, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 8, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 9, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 10, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 11, tmp_tuple_element_8 );
    tmp_assign_source_16 = MAKE_FUNCTION_function_10_serialize_all_of_module_yaml( tmp_defaults_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_serialize_all, tmp_assign_source_16 );
    tmp_defaults_9 = PyTuple_New( 2 );
    tmp_tuple_element_9 = Py_None;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_9, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_defaults_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_9, 1, tmp_tuple_element_9 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_11_serialize_of_module_yaml( tmp_defaults_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_serialize, tmp_assign_source_17 );
    tmp_defaults_10 = PyTuple_New( 14 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_defaults_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 2, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 3, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 4, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 5, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 6, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 7, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 8, tmp_tuple_element_10 );
    tmp_tuple_element_10 = const_str_digest_e9e2aa8136260a22b0b09fdee43ccb8a;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 9, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 10, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 11, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 12, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 13, tmp_tuple_element_10 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_12_dump_all_of_module_yaml( tmp_defaults_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_module->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all, tmp_assign_source_18 );
    tmp_defaults_11 = PyTuple_New( 2 );
    tmp_tuple_element_11 = Py_None;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_11, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_defaults_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_11, 1, tmp_tuple_element_11 );
    tmp_assign_source_19 = MAKE_FUNCTION_function_13_dump_of_module_yaml( tmp_defaults_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump, tmp_assign_source_19 );
    tmp_defaults_12 = const_tuple_none_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_14_safe_dump_all_of_module_yaml( INCREASE_REFCOUNT( tmp_defaults_12 ) );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        frame_module->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_dump_all, tmp_assign_source_20 );
    tmp_defaults_13 = const_tuple_none_tuple;
    tmp_assign_source_21 = MAKE_FUNCTION_function_15_safe_dump_of_module_yaml( INCREASE_REFCOUNT( tmp_defaults_13 ) );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_21 );

        frame_module->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_dump, tmp_assign_source_21 );
    tmp_defaults_14 = PyTuple_New( 3 );
    tmp_tuple_element_12 = Py_None;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_14, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_defaults_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_14, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_defaults_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_14, 2, tmp_tuple_element_12 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_16_add_implicit_resolver_of_module_yaml( tmp_defaults_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_module->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_implicit_resolver, tmp_assign_source_22 );
    tmp_defaults_15 = PyTuple_New( 3 );
    tmp_tuple_element_13 = Py_None;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_defaults_15, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_defaults_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_defaults_15, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_defaults_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_defaults_15, 2, tmp_tuple_element_13 );
    tmp_assign_source_23 = MAKE_FUNCTION_function_17_add_path_resolver_of_module_yaml( tmp_defaults_15 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_path_resolver, tmp_assign_source_23 );
    tmp_defaults_16 = PyTuple_New( 1 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_defaults_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_defaults_16, 0, tmp_tuple_element_14 );
    tmp_assign_source_24 = MAKE_FUNCTION_function_18_add_constructor_of_module_yaml( tmp_defaults_16 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_constructor, tmp_assign_source_24 );
    tmp_defaults_17 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_defaults_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 46245 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_defaults_17, 0, tmp_tuple_element_15 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_19_add_multi_constructor_of_module_yaml( tmp_defaults_17 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_multi_constructor, tmp_assign_source_25 );
    tmp_defaults_18 = PyTuple_New( 1 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_defaults_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_18, 0, tmp_tuple_element_16 );
    tmp_assign_source_26 = MAKE_FUNCTION_function_20_add_representer_of_module_yaml( tmp_defaults_18 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_representer, tmp_assign_source_26 );
    tmp_defaults_19 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_defaults_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56397 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_defaults_19, 0, tmp_tuple_element_17 );
    tmp_assign_source_27 = MAKE_FUNCTION_function_21_add_multi_representer_of_module_yaml( tmp_defaults_19 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_multi_representer, tmp_assign_source_27 );
    // Tried code
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_18 = LOOKUP_BUILTIN( const_str_plain_type );
    if ( tmp_tuple_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 276;
        goto try_finally_handler_1;
    }
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_28;

    tmp_assign_source_29 = impl_class_22_YAMLObjectMetaclass_of_module_yaml(  );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 276;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_29;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 276;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dget_dict_1 = tmp_class_creation_1__class_dict.object;

    tmp_dget_key_1 = const_str_plain___metaclass__;
    tmp_assign_source_30 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 276;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_30 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_30;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_YAMLObjectMetaclass;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 276;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 276;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_31;

    tmp_assign_source_32 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass, tmp_assign_source_32 );
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

    tmp_tried_lineno_1 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_1__class.object );
    tmp_class_creation_1__class.object = NULL;

    Py_XDECREF( tmp_class_creation_1__bases.object );
    tmp_class_creation_1__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict.object );
    tmp_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass.object );
    tmp_class_creation_1__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_1;
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
    // Tried code
    tmp_assign_source_33 = PyTuple_New( 1 );
    tmp_tuple_element_19 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 286;
        goto try_finally_handler_2;
    }
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_19 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_33;

    tmp_assign_source_34 = impl_class_23_YAMLObject_of_module_yaml(  );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 286;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_34;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 286;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dget_dict_2 = tmp_class_creation_2__class_dict.object;

    tmp_dget_key_2 = const_str_plain___metaclass__;
    tmp_assign_source_35 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 286;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_35 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_35;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_YAMLObject;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 286;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 286;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_36;

    tmp_assign_source_37 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObject, tmp_assign_source_37 );
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_2__class.object );
    tmp_class_creation_2__class.object = NULL;

    Py_XDECREF( tmp_class_creation_2__bases.object );
    tmp_class_creation_2__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict.object );
    tmp_class_creation_2__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass.object );
    tmp_class_creation_2__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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

    return MOD_RETURN_VALUE( module_yaml );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

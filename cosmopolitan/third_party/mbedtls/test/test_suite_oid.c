/* clang-format off */
/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#include "third_party/mbedtls/test/test.inc"
/*
 * *** THIS FILE WAS MACHINE GENERATED ***
 *
 * This file has been machine generated using the script:
 * generate_test_code.py and then mbedtls_test_suite.sh and then mbedtls_test_suite.sh
 *
 * Test file      : ./test_suite_oid.c
 *
 * The following files were used to create this file.
 *
 *      Main code file      : suites/main_test.function
 *      Platform code file  : suites/host_test.function
 *      Helper file         : suites/helpers.function
 *      Test suite file     : suites/test_suite_oid.function
 *      Test suite data     : suites/test_suite_oid.data
 *
 */


#define TEST_SUITE_ACTIVE

#if defined(MBEDTLS_OID_C)
#include "third_party/mbedtls/oid.h"
#include "third_party/mbedtls/asn1.h"
#include "third_party/mbedtls/asn1write.h"
void test_oid_get_certificate_policies( data_t *oid, char *result_str )
{
    mbedtls_asn1_buf asn1_buf = { 0, 0, NULL };
    int ret;
    const char *desc;

    asn1_buf.tag = MBEDTLS_ASN1_OID;
    asn1_buf.p = oid->x;
    asn1_buf.len = oid->len;

    ret = mbedtls_oid_get_certificate_policies( &asn1_buf, &desc );
    if( strlen( result_str ) == 0 )
    {
        TEST_ASSERT( ret == MBEDTLS_ERR_OID_NOT_FOUND );
    }
    else
    {
        TEST_ASSERT( ret == 0 );
        TEST_ASSERT( strcmp( ( char* )desc, result_str ) == 0 );
    }
exit:
    ;
}

void test_oid_get_certificate_policies_wrapper( void ** params )
{
    data_t data0 = {(uint8_t *) params[0], *( (uint32_t *) params[1] )};

    test_oid_get_certificate_policies( &data0, (char *) params[2] );
}
void test_oid_get_extended_key_usage( data_t *oid, char *result_str )
{
    mbedtls_asn1_buf asn1_buf = { 0, 0, NULL };
    int ret;
    const char *desc;

    asn1_buf.tag = MBEDTLS_ASN1_OID;
    asn1_buf.p = oid->x;
    asn1_buf.len = oid->len;

    ret = mbedtls_oid_get_extended_key_usage( &asn1_buf, &desc );
    if( strlen( result_str ) == 0 )
    {
        TEST_ASSERT( ret == MBEDTLS_ERR_OID_NOT_FOUND );
    }
    else
    {
        TEST_ASSERT( ret == 0 );
        TEST_ASSERT( strcmp( ( char * )desc, result_str ) == 0 );
    }
exit:
    ;
}

void test_oid_get_extended_key_usage_wrapper( void ** params )
{
    data_t data0 = {(uint8_t *) params[0], *( (uint32_t *) params[1] )};

    test_oid_get_extended_key_usage( &data0, (char *) params[2] );
}
void test_oid_get_x509_extension( data_t *oid, int exp_type )
{
    mbedtls_asn1_buf ext_oid = { 0, 0, NULL };
    int ret;
    int ext_type;

    ext_oid.tag = MBEDTLS_ASN1_OID;
    ext_oid.p = oid->x;
    ext_oid.len = oid->len;

    ret = mbedtls_oid_get_x509_ext_type( &ext_oid, &ext_type );
    if( exp_type == 0 )
    {
        TEST_ASSERT( ret == MBEDTLS_ERR_OID_NOT_FOUND );
    }
    else
    {
        TEST_ASSERT( ret == 0 );
        TEST_ASSERT( ext_type == exp_type );
    }
exit:
    ;
}

void test_oid_get_x509_extension_wrapper( void ** params )
{
    data_t data0 = {(uint8_t *) params[0], *( (uint32_t *) params[1] )};

    test_oid_get_x509_extension( &data0, *( (int *) params[2] ) );
}
void test_oid_get_md_alg_id( data_t *oid, int exp_md_id )
{
    mbedtls_asn1_buf md_oid = { 0, 0, NULL };
    int ret;
    mbedtls_md_type_t md_id = 0;

    md_oid.tag = MBEDTLS_ASN1_OID;
    md_oid.p = oid->x;
    md_oid.len = oid->len;

    ret = mbedtls_oid_get_md_alg( &md_oid, &md_id );

    if( exp_md_id < 0 )
    {
        TEST_ASSERT( ret == MBEDTLS_ERR_OID_NOT_FOUND );
        TEST_ASSERT( md_id == 0);
    }
    else
    {
        TEST_ASSERT( ret == 0 );
        TEST_ASSERT( (mbedtls_md_type_t)exp_md_id == md_id );
    }
exit:
    ;
}

void test_oid_get_md_alg_id_wrapper( void ** params )
{
    data_t data0 = {(uint8_t *) params[0], *( (uint32_t *) params[1] )};

    test_oid_get_md_alg_id( &data0, *( (int *) params[2] ) );
}
#endif /* MBEDTLS_OID_C */

/*----------------------------------------------------------------------------*/
/* Test dispatch code */


/**
 * \brief       Evaluates an expression/macro into its literal integer value.
 *              For optimizing space for embedded targets each expression/macro
 *              is identified by a unique identifier instead of string literals.
 *              Identifiers and evaluation code is generated by script:
 *              generate_test_code.py and then mbedtls_test_suite.sh and then mbedtls_test_suite.sh
 *
 * \param exp_id    Expression identifier.
 * \param out_value Pointer to int to hold the integer.
 *
 * \return       0 if exp_id is found. 1 otherwise.
 */
int get_expression( int32_t exp_id, int32_t * out_value )
{
    int ret = KEY_VALUE_MAPPING_FOUND;

    (void) exp_id;
    (void) out_value;

    switch( exp_id )
    {

#if defined(MBEDTLS_OID_C)

        case 0:
            {
                *out_value = MBEDTLS_OID_X509_EXT_BASIC_CONSTRAINTS;
            }
            break;
        case 1:
            {
                *out_value = MBEDTLS_OID_X509_EXT_KEY_USAGE;
            }
            break;
        case 2:
            {
                *out_value = MBEDTLS_OID_X509_EXT_EXTENDED_KEY_USAGE;
            }
            break;
        case 3:
            {
                *out_value = MBEDTLS_OID_X509_EXT_SUBJECT_ALT_NAME;
            }
            break;
        case 4:
            {
                *out_value = MBEDTLS_OID_X509_EXT_NS_CERT_TYPE;
            }
            break;
        case 5:
            {
                *out_value = MBEDTLS_OID_X509_EXT_CERTIFICATE_POLICIES;
            }
            break;
        case 6:
            {
                *out_value = MBEDTLS_MD_MD5;
            }
            break;
        case 7:
            {
                *out_value = MBEDTLS_MD_SHA1;
            }
            break;
        case 8:
            {
                *out_value = MBEDTLS_MD_SHA224;
            }
            break;
        case 9:
            {
                *out_value = MBEDTLS_MD_SHA256;
            }
            break;
        case 10:
            {
                *out_value = MBEDTLS_MD_SHA384;
            }
            break;
        case 11:
            {
                *out_value = MBEDTLS_MD_SHA512;
            }
            break;
        case 12:
            {
                *out_value = MBEDTLS_MD_RIPEMD160;
            }
            break;
        case 13:
            {
                *out_value = -1;
            }
            break;
#endif

        default:
           {
                ret = KEY_VALUE_MAPPING_NOT_FOUND;
           }
           break;
    }
    return( ret );
}


/**
 * \brief       Checks if the dependency i.e. the compile flag is set.
 *              For optimizing space for embedded targets each dependency
 *              is identified by a unique identifier instead of string literals.
 *              Identifiers and check code is generated by script:
 *              generate_test_code.py and then mbedtls_test_suite.sh and then mbedtls_test_suite.sh
 *
 * \param dep_id    Dependency identifier.
 *
 * \return       DEPENDENCY_SUPPORTED if set else DEPENDENCY_NOT_SUPPORTED
 */
int dep_check( int dep_id )
{
    int ret = DEPENDENCY_NOT_SUPPORTED;

    (void) dep_id;

    switch( dep_id )
    {

#if defined(MBEDTLS_OID_C)

        case 0:
            {
#if defined(MBEDTLS_MD5_C)
                ret = DEPENDENCY_SUPPORTED;
#else
                ret = DEPENDENCY_NOT_SUPPORTED;
#endif
            }
            break;
        case 1:
            {
#if defined(MBEDTLS_SHA1_C)
                ret = DEPENDENCY_SUPPORTED;
#else
                ret = DEPENDENCY_NOT_SUPPORTED;
#endif
            }
            break;
        case 2:
            {
#if defined(MBEDTLS_SHA256_C)
                ret = DEPENDENCY_SUPPORTED;
#else
                ret = DEPENDENCY_NOT_SUPPORTED;
#endif
            }
            break;
        case 3:
            {
#if defined(MBEDTLS_SHA512_C)
                ret = DEPENDENCY_SUPPORTED;
#else
                ret = DEPENDENCY_NOT_SUPPORTED;
#endif
            }
            break;
        case 4:
            {
#if defined(MBEDTLS_RIPEMD160_C)
                ret = DEPENDENCY_SUPPORTED;
#else
                ret = DEPENDENCY_NOT_SUPPORTED;
#endif
            }
            break;
#endif

        default:
            break;
    }
    return( ret );
}


/**
 * \brief       Function pointer type for test function wrappers.
 *
 * A test function wrapper decodes the parameters and passes them to the
 * underlying test function. Both the wrapper and the underlying function
 * return void. Test wrappers assume that they are passed a suitable
 * parameter array and do not perform any error detection.
 *
 * \param param_array   The array of parameters. Each element is a `void *`
 *                      which the wrapper casts to the correct type and
 *                      dereferences. Each wrapper function hard-codes the
 *                      number and types of the parameters.
 */
typedef void (*TestWrapper_t)( void **param_array );


/**
 * \brief       Table of test function wrappers. Used by dispatch_test().
 *              This table is populated by script:
 *              generate_test_code.py and then mbedtls_test_suite.sh and then mbedtls_test_suite.sh
 *
 */
TestWrapper_t test_funcs[] =
{
/* Function Id: 0 */

#if defined(MBEDTLS_OID_C)
    test_oid_get_certificate_policies_wrapper,
#else
    NULL,
#endif
/* Function Id: 1 */

#if defined(MBEDTLS_OID_C)
    test_oid_get_extended_key_usage_wrapper,
#else
    NULL,
#endif
/* Function Id: 2 */

#if defined(MBEDTLS_OID_C)
    test_oid_get_x509_extension_wrapper,
#else
    NULL,
#endif
/* Function Id: 3 */

#if defined(MBEDTLS_OID_C)
    test_oid_get_md_alg_id_wrapper,
#else
    NULL,
#endif

};

/**
 * \brief        Execute the test function.
 *
 *               This is a wrapper function around the test function execution
 *               to allow the setjmp() call used to catch any calls to the
 *               parameter failure callback, to be used. Calls to setjmp()
 *               can invalidate the state of any local auto variables.
 *
 * \param fp     Function pointer to the test function.
 * \param params Parameters to pass to the #TestWrapper_t wrapper function.
 *
 */
void execute_function_ptr(TestWrapper_t fp, void **params)
{
#if defined(MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG)
    mbedtls_test_enable_insecure_external_rng( );
#endif

#if defined(MBEDTLS_CHECK_PARAMS)
    mbedtls_test_param_failed_location_record_t location_record;

    if ( setjmp( mbedtls_test_param_failed_get_state_buf( ) ) == 0 )
    {
        fp( params );
    }
    else
    {
        /* Unexpected parameter validation error */
        mbedtls_test_param_failed_get_location_record( &location_record );
        mbedtls_test_fail( location_record.failure_condition,
                           location_record.line,
                           location_record.file );
    }

    mbedtls_test_param_failed_reset_state( );
#else
    fp( params );
#endif

#if defined(MBEDTLS_TEST_MUTEX_USAGE)
    mbedtls_test_mutex_usage_check( );
#endif /* MBEDTLS_TEST_MUTEX_USAGE */
}

/**
 * \brief        Dispatches test functions based on function index.
 *
 * \param func_idx    Test function index.
 * \param params      The array of parameters to pass to the test function.
 *                    It will be decoded by the #TestWrapper_t wrapper function.
 *
 * \return       DISPATCH_TEST_SUCCESS if found
 *               DISPATCH_TEST_FN_NOT_FOUND if not found
 *               DISPATCH_UNSUPPORTED_SUITE if not compile time enabled.
 */
int dispatch_test( size_t func_idx, void ** params )
{
    int ret = DISPATCH_TEST_SUCCESS;
    TestWrapper_t fp = NULL;

    if ( func_idx < (int)( sizeof( test_funcs ) / sizeof( TestWrapper_t ) ) )
    {
        fp = test_funcs[func_idx];
        if ( fp )
            execute_function_ptr(fp, params);
        else
            ret = DISPATCH_UNSUPPORTED_SUITE;
    }
    else
    {
        ret = DISPATCH_TEST_FN_NOT_FOUND;
    }

    return( ret );
}


/**
 * \brief       Checks if test function is supported in this build-time
 *              configuration.
 *
 * \param func_idx    Test function index.
 *
 * \return       DISPATCH_TEST_SUCCESS if found
 *               DISPATCH_TEST_FN_NOT_FOUND if not found
 *               DISPATCH_UNSUPPORTED_SUITE if not compile time enabled.
 */
int check_test( size_t func_idx )
{
    int ret = DISPATCH_TEST_SUCCESS;
    TestWrapper_t fp = NULL;

    if ( func_idx < (int)( sizeof(test_funcs)/sizeof( TestWrapper_t ) ) )
    {
        fp = test_funcs[func_idx];
        if ( fp == NULL )
            ret = DISPATCH_UNSUPPORTED_SUITE;
    }
    else
    {
        ret = DISPATCH_TEST_FN_NOT_FOUND;
    }

    return( ret );
}

int main( int argc, const char *argv[] )
{
    int ret;
    mbedtls_test_platform_setup();
    ret = execute_tests( argc, argv, "/zip/third_party/mbedtls/test/test_suite_oid.datax" );
    mbedtls_test_platform_teardown();
    return( ret );
}

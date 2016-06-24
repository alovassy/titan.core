/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Lovassy, Arpad
 *
 ******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_eclipse_titan_executor_jni_JNIMiddleWare */

#ifndef _Included_org_eclipse_titan_executor_jni_JNIMiddleWare
#define _Included_org_eclipse_titan_executor_jni_JNIMiddleWare
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    init
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_init
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    terminate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_terminate
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    add_host
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_add_1host
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    assign_component
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_assign_1component
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    destroy_host_groups
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_destroy_1host_1groups
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    set_kill_timer
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_set_1kill_1timer
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    start_session
 * Signature: (Ljava/lang/String;IZ)I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_start_1session
  (JNIEnv *, jobject, jstring, jint, jboolean);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    shutdown_session
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_shutdown_1session
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    configure
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_configure
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    set_cfg_file
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_set_1cfg_1file
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_mc_host
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1mc_1host
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_port
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1port
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    create_mtc
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_create_1mtc
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    exit_mtc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_exit_1mtc
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    execute_control
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_execute_1control
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    execute_testcase
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_execute_1testcase
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_execute_cfg_len
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1execute_1cfg_1len
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    execute_cfg
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_execute_1cfg
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    stop_after_testcase
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_stop_1after_1testcase
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    continue_testcase
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_continue_1testcase
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    stop_execution
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_stop_1execution
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_state
 * Signature: ()Lorg/eclipse/titan/executor/jni/McStateEnum;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1state
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_stop_after_testcase
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1stop_1after_1testcase
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_nof_hosts
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1nof_1hosts
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_host_data
 * Signature: (I)Lorg/eclipse/titan/executor/jni/HostStruct;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1host_1data
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_component_data
 * Signature: (I)Lorg/eclipse/titan/executor/jni/ComponentStruct;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1component_1data
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    release_data
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_release_1data
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_mc_state_name
 * Signature: (Lorg/eclipse/titan/executor/jni/McStateEnum;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1mc_1state_1name
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_hc_state_name
 * Signature: (Lorg/eclipse/titan/executor/jni/HcStateEnum;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1hc_1state_1name
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_tc_state_name
 * Signature: (Lorg/eclipse/titan/executor/jni/TcStateEnum;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1tc_1state_1name
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    get_transport_name
 * Signature: (Lorg/eclipse/titan/executor/jni/TransportTypeEnum;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_get_1transport_1name
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    check_mem_leak
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_check_1mem_1leak
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    print_license_info
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_print_1license_1info
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    check_license
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_check_1license
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    readPipe
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_readPipe
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    isPipeReadable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_isPipeReadable
  (JNIEnv *, jobject);

/*
 * Class:     org_eclipse_titan_executor_jni_JNIMiddleWare
 * Method:    getSharedLibraryVersion
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_eclipse_titan_executor_jni_JNIMiddleWare_getSharedLibraryVersion
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
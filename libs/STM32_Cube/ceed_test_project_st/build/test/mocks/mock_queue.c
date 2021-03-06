/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_queue.h"

static const char* CMockString_pucQueueStorage = "pucQueueStorage";
static const char* CMockString_pxStaticQueue = "pxStaticQueue";
static const char* CMockString_ucQueueType = "ucQueueType";
static const char* CMockString_uxItemSize = "uxItemSize";
static const char* CMockString_uxQueueLength = "uxQueueLength";
static const char* CMockString_xQueueGenericCreateStatic = "xQueueGenericCreateStatic";

typedef struct _CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  QueueHandle_t ReturnVal;
  int CallOrder;
  UBaseType_t Expected_uxQueueLength;
  UBaseType_t Expected_uxItemSize;
  uint8_t* Expected_pucQueueStorage;
  StaticQueue_t* Expected_pxStaticQueue;
  uint8_t Expected_ucQueueType;

} CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE;

static struct mock_queueInstance
{
  char xQueueGenericCreateStatic_IgnoreBool;
  QueueHandle_t xQueueGenericCreateStatic_FinalReturn;
  char xQueueGenericCreateStatic_CallbackBool;
  CMOCK_xQueueGenericCreateStatic_CALLBACK xQueueGenericCreateStatic_CallbackFunctionPointer;
  int xQueueGenericCreateStatic_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE xQueueGenericCreateStatic_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_queue_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.xQueueGenericCreateStatic_CallInstance;
  if (Mock.xQueueGenericCreateStatic_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_xQueueGenericCreateStatic);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.xQueueGenericCreateStatic_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_queue_Init(void)
{
  mock_queue_Destroy();
}

void mock_queue_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

QueueHandle_t xQueueGenericCreateStatic(const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t* pucQueueStorage, StaticQueue_t* pxStaticQueue, const uint8_t ucQueueType)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_xQueueGenericCreateStatic);
  cmock_call_instance = (CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.xQueueGenericCreateStatic_CallInstance);
  Mock.xQueueGenericCreateStatic_CallInstance = CMock_Guts_MemNext(Mock.xQueueGenericCreateStatic_CallInstance);
  if (Mock.xQueueGenericCreateStatic_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.xQueueGenericCreateStatic_FinalReturn;
    memcpy((void*)(&Mock.xQueueGenericCreateStatic_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(QueueHandle_t[sizeof(cmock_call_instance->ReturnVal) == sizeof(QueueHandle_t) ? 1 : -1])); /* add QueueHandle_t to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.xQueueGenericCreateStatic_CallbackBool &&
      Mock.xQueueGenericCreateStatic_CallbackFunctionPointer != NULL)
  {
    QueueHandle_t cmock_cb_ret = Mock.xQueueGenericCreateStatic_CallbackFunctionPointer(uxQueueLength, uxItemSize, pucQueueStorage, pxStaticQueue, ucQueueType, Mock.xQueueGenericCreateStatic_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_xQueueGenericCreateStatic,CMockString_uxQueueLength);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uxQueueLength), (void*)(&uxQueueLength), sizeof(UBaseType_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_xQueueGenericCreateStatic,CMockString_uxItemSize);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uxItemSize), (void*)(&uxItemSize), sizeof(UBaseType_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_xQueueGenericCreateStatic,CMockString_pucQueueStorage);
    if (cmock_call_instance->Expected_pucQueueStorage == NULL)
      { UNITY_TEST_ASSERT_NULL(pucQueueStorage, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_pucQueueStorage, pucQueueStorage, 1, cmock_line, CMockStringMismatch); }
  }
  {
    UNITY_SET_DETAILS(CMockString_xQueueGenericCreateStatic,CMockString_pxStaticQueue);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_pxStaticQueue), (void*)(pxStaticQueue), sizeof(StaticQueue_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_xQueueGenericCreateStatic,CMockString_ucQueueType);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_ucQueueType, ucQueueType, cmock_line, CMockStringMismatch);
  }
  if (Mock.xQueueGenericCreateStatic_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.xQueueGenericCreateStatic_CallbackFunctionPointer(uxQueueLength, uxItemSize, pucQueueStorage, pxStaticQueue, ucQueueType, Mock.xQueueGenericCreateStatic_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_xQueueGenericCreateStatic(CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE* cmock_call_instance, const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t* pucQueueStorage, StaticQueue_t* pxStaticQueue, const uint8_t ucQueueType);
void CMockExpectParameters_xQueueGenericCreateStatic(CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE* cmock_call_instance, const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t* pucQueueStorage, StaticQueue_t* pxStaticQueue, const uint8_t ucQueueType)
{
  memcpy((void*)(&cmock_call_instance->Expected_uxQueueLength), (void*)(&uxQueueLength),
         sizeof(UBaseType_t[sizeof(uxQueueLength) == sizeof(UBaseType_t) ? 1 : -1])); /* add UBaseType_t to :treat_as_array if this causes an error */
  memcpy((void*)(&cmock_call_instance->Expected_uxItemSize), (void*)(&uxItemSize),
         sizeof(UBaseType_t[sizeof(uxItemSize) == sizeof(UBaseType_t) ? 1 : -1])); /* add UBaseType_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_pucQueueStorage = pucQueueStorage;
  cmock_call_instance->Expected_pxStaticQueue = pxStaticQueue;
  cmock_call_instance->Expected_ucQueueType = ucQueueType;
}

void xQueueGenericCreateStatic_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, QueueHandle_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE));
  CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE* cmock_call_instance = (CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xQueueGenericCreateStatic_CallInstance = CMock_Guts_MemChain(Mock.xQueueGenericCreateStatic_CallInstance, cmock_guts_index);
  Mock.xQueueGenericCreateStatic_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.xQueueGenericCreateStatic_IgnoreBool = (char)1;
}

void xQueueGenericCreateStatic_CMockStopIgnore(void)
{
  if(Mock.xQueueGenericCreateStatic_IgnoreBool)
    Mock.xQueueGenericCreateStatic_CallInstance = CMock_Guts_MemNext(Mock.xQueueGenericCreateStatic_CallInstance);
  Mock.xQueueGenericCreateStatic_IgnoreBool = (char)0;
}

void xQueueGenericCreateStatic_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t* pucQueueStorage, StaticQueue_t* pxStaticQueue, const uint8_t ucQueueType, QueueHandle_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE));
  CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE* cmock_call_instance = (CMOCK_xQueueGenericCreateStatic_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xQueueGenericCreateStatic_CallInstance = CMock_Guts_MemChain(Mock.xQueueGenericCreateStatic_CallInstance, cmock_guts_index);
  Mock.xQueueGenericCreateStatic_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_xQueueGenericCreateStatic(cmock_call_instance, uxQueueLength, uxItemSize, pucQueueStorage, pxStaticQueue, ucQueueType);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(QueueHandle_t[sizeof(cmock_to_return) == sizeof(QueueHandle_t) ? 1 : -1])); /* add QueueHandle_t to :treat_as_array if this causes an error */
}

void xQueueGenericCreateStatic_AddCallback(CMOCK_xQueueGenericCreateStatic_CALLBACK Callback)
{
  Mock.xQueueGenericCreateStatic_IgnoreBool = (char)0;
  Mock.xQueueGenericCreateStatic_CallbackBool = (char)1;
  Mock.xQueueGenericCreateStatic_CallbackFunctionPointer = Callback;
}

void xQueueGenericCreateStatic_Stub(CMOCK_xQueueGenericCreateStatic_CALLBACK Callback)
{
  Mock.xQueueGenericCreateStatic_IgnoreBool = (char)0;
  Mock.xQueueGenericCreateStatic_CallbackBool = (char)0;
  Mock.xQueueGenericCreateStatic_CallbackFunctionPointer = Callback;
}


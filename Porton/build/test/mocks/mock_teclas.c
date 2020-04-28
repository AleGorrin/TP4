/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_teclas.h"

static const char* CMockString_TEC_antirebote_MEF = "TEC_antirebote_MEF";
static const char* CMockString_TEC_inicializar_MEF = "TEC_inicializar_MEF";
static const char* CMockString_raisingtecla = "raisingtecla";
static const char* CMockString_tecla = "tecla";

typedef struct _CMOCK_TEC_inicializar_MEF_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_TEC_inicializar_MEF_CALL_INSTANCE;

typedef struct _CMOCK_TEC_antirebote_MEF_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_TEC_antirebote_MEF_CALL_INSTANCE;

typedef struct _CMOCK_raisingtecla_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uint8_t Expected_tecla;
  int IgnoreArg_tecla;

} CMOCK_raisingtecla_CALL_INSTANCE;

static struct mock_teclasInstance
{
  int TEC_inicializar_MEF_IgnoreBool;
  int TEC_inicializar_MEF_CallbackBool;
  CMOCK_TEC_inicializar_MEF_CALLBACK TEC_inicializar_MEF_CallbackFunctionPointer;
  int TEC_inicializar_MEF_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE TEC_inicializar_MEF_CallInstance;
  int TEC_antirebote_MEF_IgnoreBool;
  int TEC_antirebote_MEF_CallbackBool;
  CMOCK_TEC_antirebote_MEF_CALLBACK TEC_antirebote_MEF_CallbackFunctionPointer;
  int TEC_antirebote_MEF_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE TEC_antirebote_MEF_CallInstance;
  int raisingtecla_IgnoreBool;
  int raisingtecla_CallbackBool;
  CMOCK_raisingtecla_CALLBACK raisingtecla_CallbackFunctionPointer;
  int raisingtecla_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE raisingtecla_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_teclas_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.TEC_inicializar_MEF_CallInstance;
  if (Mock.TEC_inicializar_MEF_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_TEC_inicializar_MEF);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == call_instance, cmock_line, CMockStringCalledLess);
  UNITY_CLR_DETAILS();
  if (Mock.TEC_inicializar_MEF_CallbackFunctionPointer != NULL)
    call_instance = CMOCK_GUTS_NONE;
  call_instance = Mock.TEC_antirebote_MEF_CallInstance;
  if (Mock.TEC_antirebote_MEF_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_TEC_antirebote_MEF);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == call_instance, cmock_line, CMockStringCalledLess);
  UNITY_CLR_DETAILS();
  if (Mock.TEC_antirebote_MEF_CallbackFunctionPointer != NULL)
    call_instance = CMOCK_GUTS_NONE;
  call_instance = Mock.raisingtecla_CallInstance;
  if (Mock.raisingtecla_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_raisingtecla);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == call_instance, cmock_line, CMockStringCalledLess);
  UNITY_CLR_DETAILS();
  if (Mock.raisingtecla_CallbackFunctionPointer != NULL)
    call_instance = CMOCK_GUTS_NONE;
}

void mock_teclas_Init(void)
{
  mock_teclas_Destroy();
}

void mock_teclas_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void TEC_inicializar_MEF(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TEC_inicializar_MEF_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TEC_inicializar_MEF);
  cmock_call_instance = (CMOCK_TEC_inicializar_MEF_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TEC_inicializar_MEF_CallInstance);
  Mock.TEC_inicializar_MEF_CallInstance = CMock_Guts_MemNext(Mock.TEC_inicializar_MEF_CallInstance);
  if (Mock.TEC_inicializar_MEF_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.TEC_inicializar_MEF_CallbackBool &&
      Mock.TEC_inicializar_MEF_CallbackFunctionPointer != NULL)
  {
    Mock.TEC_inicializar_MEF_CallbackFunctionPointer(Mock.TEC_inicializar_MEF_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.TEC_inicializar_MEF_CallbackFunctionPointer != NULL)
  {
    Mock.TEC_inicializar_MEF_CallbackFunctionPointer(Mock.TEC_inicializar_MEF_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void TEC_inicializar_MEF_CMockIgnore(void)
{
  Mock.TEC_inicializar_MEF_IgnoreBool = (int)1;
}

void TEC_inicializar_MEF_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TEC_inicializar_MEF_CALL_INSTANCE));
  CMOCK_TEC_inicializar_MEF_CALL_INSTANCE* cmock_call_instance = (CMOCK_TEC_inicializar_MEF_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TEC_inicializar_MEF_CallInstance = CMock_Guts_MemChain(Mock.TEC_inicializar_MEF_CallInstance, cmock_guts_index);
  Mock.TEC_inicializar_MEF_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void TEC_inicializar_MEF_AddCallback(CMOCK_TEC_inicializar_MEF_CALLBACK Callback)
{
  Mock.TEC_inicializar_MEF_IgnoreBool = (int)0;
  Mock.TEC_inicializar_MEF_CallbackBool = (int)1;
  Mock.TEC_inicializar_MEF_CallbackFunctionPointer = Callback;
}

void TEC_inicializar_MEF_Stub(CMOCK_TEC_inicializar_MEF_CALLBACK Callback)
{
  Mock.TEC_inicializar_MEF_IgnoreBool = (int)0;
  Mock.TEC_inicializar_MEF_CallbackBool = (int)0;
  Mock.TEC_inicializar_MEF_CallbackFunctionPointer = Callback;
}

void TEC_antirebote_MEF(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TEC_antirebote_MEF_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TEC_antirebote_MEF);
  cmock_call_instance = (CMOCK_TEC_antirebote_MEF_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TEC_antirebote_MEF_CallInstance);
  Mock.TEC_antirebote_MEF_CallInstance = CMock_Guts_MemNext(Mock.TEC_antirebote_MEF_CallInstance);
  if (Mock.TEC_antirebote_MEF_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.TEC_antirebote_MEF_CallbackBool &&
      Mock.TEC_antirebote_MEF_CallbackFunctionPointer != NULL)
  {
    Mock.TEC_antirebote_MEF_CallbackFunctionPointer(Mock.TEC_antirebote_MEF_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.TEC_antirebote_MEF_CallbackFunctionPointer != NULL)
  {
    Mock.TEC_antirebote_MEF_CallbackFunctionPointer(Mock.TEC_antirebote_MEF_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void TEC_antirebote_MEF_CMockIgnore(void)
{
  Mock.TEC_antirebote_MEF_IgnoreBool = (int)1;
}

void TEC_antirebote_MEF_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TEC_antirebote_MEF_CALL_INSTANCE));
  CMOCK_TEC_antirebote_MEF_CALL_INSTANCE* cmock_call_instance = (CMOCK_TEC_antirebote_MEF_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TEC_antirebote_MEF_CallInstance = CMock_Guts_MemChain(Mock.TEC_antirebote_MEF_CallInstance, cmock_guts_index);
  Mock.TEC_antirebote_MEF_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void TEC_antirebote_MEF_AddCallback(CMOCK_TEC_antirebote_MEF_CALLBACK Callback)
{
  Mock.TEC_antirebote_MEF_IgnoreBool = (int)0;
  Mock.TEC_antirebote_MEF_CallbackBool = (int)1;
  Mock.TEC_antirebote_MEF_CallbackFunctionPointer = Callback;
}

void TEC_antirebote_MEF_Stub(CMOCK_TEC_antirebote_MEF_CALLBACK Callback)
{
  Mock.TEC_antirebote_MEF_IgnoreBool = (int)0;
  Mock.TEC_antirebote_MEF_CallbackBool = (int)0;
  Mock.TEC_antirebote_MEF_CallbackFunctionPointer = Callback;
}

void raisingtecla(uint8_t tecla)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_raisingtecla_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_raisingtecla);
  cmock_call_instance = (CMOCK_raisingtecla_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.raisingtecla_CallInstance);
  Mock.raisingtecla_CallInstance = CMock_Guts_MemNext(Mock.raisingtecla_CallInstance);
  if (Mock.raisingtecla_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.raisingtecla_CallbackBool &&
      Mock.raisingtecla_CallbackFunctionPointer != NULL)
  {
    Mock.raisingtecla_CallbackFunctionPointer(tecla, Mock.raisingtecla_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->IgnoreArg_tecla)
  {
    UNITY_SET_DETAILS(CMockString_raisingtecla,CMockString_tecla);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_tecla, tecla, cmock_line, CMockStringMismatch);
  }
  if (Mock.raisingtecla_CallbackFunctionPointer != NULL)
  {
    Mock.raisingtecla_CallbackFunctionPointer(tecla, Mock.raisingtecla_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_raisingtecla(CMOCK_raisingtecla_CALL_INSTANCE* cmock_call_instance, uint8_t tecla);
void CMockExpectParameters_raisingtecla(CMOCK_raisingtecla_CALL_INSTANCE* cmock_call_instance, uint8_t tecla)
{
  cmock_call_instance->Expected_tecla = tecla;
  cmock_call_instance->IgnoreArg_tecla = 0;
}

void raisingtecla_CMockIgnore(void)
{
  Mock.raisingtecla_IgnoreBool = (int)1;
}

void raisingtecla_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t tecla)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_raisingtecla_CALL_INSTANCE));
  CMOCK_raisingtecla_CALL_INSTANCE* cmock_call_instance = (CMOCK_raisingtecla_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.raisingtecla_CallInstance = CMock_Guts_MemChain(Mock.raisingtecla_CallInstance, cmock_guts_index);
  Mock.raisingtecla_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_raisingtecla(cmock_call_instance, tecla);
}

void raisingtecla_AddCallback(CMOCK_raisingtecla_CALLBACK Callback)
{
  Mock.raisingtecla_IgnoreBool = (int)0;
  Mock.raisingtecla_CallbackBool = (int)1;
  Mock.raisingtecla_CallbackFunctionPointer = Callback;
}

void raisingtecla_Stub(CMOCK_raisingtecla_CALLBACK Callback)
{
  Mock.raisingtecla_IgnoreBool = (int)0;
  Mock.raisingtecla_CallbackBool = (int)0;
  Mock.raisingtecla_CallbackFunctionPointer = Callback;
}

void raisingtecla_CMockIgnoreArg_tecla(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_raisingtecla_CALL_INSTANCE* cmock_call_instance = (CMOCK_raisingtecla_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.raisingtecla_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_tecla = 1;
}


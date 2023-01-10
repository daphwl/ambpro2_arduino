/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SPEECHRPCBASEDS_DATA_H_RPCGEN
#define _SPEECHRPCBASEDS_DATA_H_RPCGEN

#include <base/RPCBaseDS.h>

struct SPEECH_RPC_STATE {
	long instanceID;
	long state;
};
typedef struct SPEECH_RPC_STATE SPEECH_RPC_STATE;

struct SPEECH_RPC_VAD_STATUS {
	long instanceID;
	long vadStatus;
};
typedef struct SPEECH_RPC_VAD_STATUS SPEECH_RPC_VAD_STATUS;

struct SPEECH_RPC_KWS_STATUS {
	long kwsStatus;
	long source;
	long length;
};
typedef struct SPEECH_RPC_KWS_STATUS SPEECH_RPC_KWS_STATUS;

struct SPEECH_RPC_KEYWORD {
	long instanceID;
	char keyword[20];
};
typedef struct SPEECH_RPC_KEYWORD SPEECH_RPC_KEYWORD;

struct SPEECH_RPC_CMD {
	long asrStatus;
	long source;
	long length;
	long cmd;
};
typedef struct SPEECH_RPC_CMD SPEECH_RPC_CMD;

struct SPEECH_RPC_INSTANCE {
	long instanceID;
	long type;
};
typedef struct SPEECH_RPC_INSTANCE SPEECH_RPC_INSTANCE;

struct SPEECH_RPC_DATA {
	uint32_t dataAddr;
	long length;
	long index;
};
typedef struct SPEECH_RPC_DATA SPEECH_RPC_DATA;

struct SPEECH_RPC_SEND_LONG {
	long instanceID;
	long data;
};
typedef struct SPEECH_RPC_SEND_LONG SPEECH_RPC_SEND_LONG;

struct TEST_RPC_CONNECTION {
	long srcInstanceID;
	long srcPinID;
	long desInstanceID;
	long desPinID;
	long mediaType;
};
typedef struct TEST_RPC_CONNECTION TEST_RPC_CONNECTION;

struct SPEECH_DEMO_DATA {
	long data0;
	long data1;
	long data2;
	long data3;
};
typedef struct SPEECH_DEMO_DATA SPEECH_DEMO_DATA;

struct SPEECH_HANDLER {
	long instanceID;
};
typedef struct SPEECH_HANDLER SPEECH_HANDLER;

struct SPEECH_KWS_IN_DATA {
	long instanceID;
	uint32_t data_addr;
	long length;
};
typedef struct SPEECH_KWS_IN_DATA SPEECH_KWS_IN_DATA;

struct SPEECH_VAD_DATA {
	long instanceID;
	uint32_t in_data_addr;
	uint32_t out_data_addr;
	long length;
};
typedef struct SPEECH_VAD_DATA SPEECH_VAD_DATA;

struct RPCRES_FEED {
	HRESULT result;
	long data1;
	long data2;
};
typedef struct RPCRES_FEED RPCRES_FEED;

struct SPEECH_ASR_IN_DATA {
	long instanceID;
	uint32_t data_addr;
	long length;
};
typedef struct SPEECH_ASR_IN_DATA SPEECH_ASR_IN_DATA;

struct SPEECH_ASR_CMD {
	HRESULT result;
	long asrStatus;
	long source;
	long length;
	long cmd_index;
	char cmd[20];
};
typedef struct SPEECH_ASR_CMD SPEECH_ASR_CMD;

struct SPEECH_INIT_SEND {
	long instanceID;
	uint32_t switch_addr;
};
typedef struct SPEECH_INIT_SEND SPEECH_INIT_SEND;

#endif /* !_SPEECHRPCBASEDS_DATA_H_RPCGEN */
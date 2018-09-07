/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: session.proto */

#ifndef PROTOBUF_C_session_2eproto__INCLUDED
#define PROTOBUF_C_session_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "sec0.pb-c.h"
#include "sec1.pb-c.h"

typedef struct _SessionData SessionData;


/* --- enums --- */

typedef enum _SecSchemeVersion {
  /*
   * Unsecured - plaintext communication 
   */
  SEC_SCHEME_VERSION__SecScheme0 = 0,
  /*
   * Security scheme 1 - Curve25519 + AES-256-CTR
   */
  SEC_SCHEME_VERSION__SecScheme1 = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SEC_SCHEME_VERSION)
} SecSchemeVersion;

/* --- messages --- */

typedef enum {
  SESSION_DATA__PROTO__NOT_SET = 0,
  SESSION_DATA__PROTO_SEC0 = 10,
  SESSION_DATA__PROTO_SEC1 = 11
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SESSION_DATA__PROTO)
} SessionData__ProtoCase;

struct  _SessionData
{
  ProtobufCMessage base;
  SecSchemeVersion sec_ver;
  SessionData__ProtoCase proto_case;
  union {
    Sec0Payload *sec0;
    Sec1Payload *sec1;
  };
};
#define SESSION_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&session_data__descriptor) \
    , SEC_SCHEME_VERSION__SecScheme0, SESSION_DATA__PROTO__NOT_SET, {0} }


/* SessionData methods */
void   session_data__init
                     (SessionData         *message);
size_t session_data__get_packed_size
                     (const SessionData   *message);
size_t session_data__pack
                     (const SessionData   *message,
                      uint8_t             *out);
size_t session_data__pack_to_buffer
                     (const SessionData   *message,
                      ProtobufCBuffer     *buffer);
SessionData *
       session_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   session_data__free_unpacked
                     (SessionData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SessionData_Closure)
                 (const SessionData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    sec_scheme_version__descriptor;
extern const ProtobufCMessageDescriptor session_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_session_2eproto__INCLUDED */

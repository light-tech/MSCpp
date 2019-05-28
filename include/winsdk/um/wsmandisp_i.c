

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_WSManAutomation,0xF010BE25,0x296D,0x4036,0x98,0x0F,0x5A,0x06,0x69,0xA1,0x75,0x77);


MIDL_DEFINE_GUID(IID, IID_IWSMan,0x190D8637,0x5CD3,0x496d,0xAD,0x24,0x69,0x63,0x6B,0xB5,0xA3,0xB5);


MIDL_DEFINE_GUID(IID, IID_IWSManEx,0x2D53BDAA,0x798E,0x49e6,0xA1,0xAA,0x74,0xD0,0x12,0x56,0xF4,0x11);


MIDL_DEFINE_GUID(IID, IID_IWSManEx2,0x1D1B5AE0,0x42D9,0x4021,0x82,0x61,0x39,0x87,0x61,0x95,0x12,0xE9);


MIDL_DEFINE_GUID(IID, IID_IWSManEx3,0x6400E966,0x011D,0x4eac,0x84,0x74,0x04,0x9E,0x08,0x48,0xAF,0xAD);


MIDL_DEFINE_GUID(IID, IID_IWSManConnectionOptions,0xF704E861,0x9E52,0x464f,0xB7,0x86,0xDA,0x5E,0xB2,0x32,0x0F,0xDD);


MIDL_DEFINE_GUID(IID, IID_IWSManConnectionOptionsEx,0xEF43EDF7,0x2A48,0x4d93,0x95,0x26,0x8B,0xD6,0xAB,0x6D,0x4A,0x6B);


MIDL_DEFINE_GUID(IID, IID_IWSManConnectionOptionsEx2,0xF500C9EC,0x24EE,0x48ab,0xB3,0x8D,0xFC,0x9A,0x16,0x4C,0x65,0x8E);


MIDL_DEFINE_GUID(IID, IID_IWSManSession,0xFC84FC58,0x1286,0x40c4,0x9D,0xA0,0xC8,0xEF,0x6E,0xC2,0x41,0xE0);


MIDL_DEFINE_GUID(IID, IID_IWSManEnumerator,0xF3457CA9,0xABB9,0x4fa5,0xB8,0x50,0x90,0xE8,0xCA,0x30,0x0E,0x7F);


MIDL_DEFINE_GUID(IID, IID_IWSManResourceLocator,0xA7A1BA28,0xDE41,0x466a,0xAD,0x0A,0xC4,0x05,0x9E,0xAD,0x74,0x28);


MIDL_DEFINE_GUID(IID, IID_IWSManResourceLocatorInternal,0xEFFAEAD7,0x7EC8,0x4716,0xB9,0xBE,0xF2,0xE7,0xE9,0xFB,0x4A,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_WSMan,0xBCED617B,0xEC03,0x420b,0x85,0x08,0x97,0x7D,0xC7,0xA6,0x86,0xBD);


MIDL_DEFINE_GUID(IID, IID_IWSManInternal,0x04AE2B1D,0x9954,0x4D99,0x94,0xA9,0xA9,0x61,0xE7,0x2C,0x3A,0x13);


MIDL_DEFINE_GUID(CLSID, CLSID_WSManInternal,0x7DE087A5,0x5DCB,0x4df7,0xBB,0x12,0x09,0x24,0xAD,0x8F,0xBD,0x9A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif




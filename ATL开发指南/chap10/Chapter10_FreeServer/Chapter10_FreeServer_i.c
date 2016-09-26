/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.01.75 */
/* at Sat Nov 29 03:17:34 1997
 */
/* Compiler settings for Chapter10_FreeServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C" {
#endif


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID {
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

const IID IID_IMath = {0xF7435681, 0x6868, 0x11D1, {0x80, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};


const IID LIBID_CHAPTER10_FREESERVERLib = {0xF7435674, 0x6868, 0x11D1, {0x80, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};


const CLSID CLSID_Math = {0xF7435682, 0x6868, 0x11D1, {0x80, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};


#ifdef __cplusplus
}
#endif


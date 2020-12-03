

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Mar 25 02:52:57 2011
 */
/* Compiler settings for .\libInterfaces.odl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __kAPI2D5COM_h__
#define __kAPI2D5COM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKompasNotify_FWD_DEFINED__
#define __IKompasNotify_FWD_DEFINED__
typedef interface IKompasNotify IKompasNotify;
#endif 	/* __IKompasNotify_FWD_DEFINED__ */


#ifndef __IKompasObjectNotify_FWD_DEFINED__
#define __IKompasObjectNotify_FWD_DEFINED__
typedef interface IKompasObjectNotify IKompasObjectNotify;
#endif 	/* __IKompasObjectNotify_FWD_DEFINED__ */


#ifndef __IDocumentFileNotify_FWD_DEFINED__
#define __IDocumentFileNotify_FWD_DEFINED__
typedef interface IDocumentFileNotify IDocumentFileNotify;
#endif 	/* __IDocumentFileNotify_FWD_DEFINED__ */


#ifndef __IStampNotify_FWD_DEFINED__
#define __IStampNotify_FWD_DEFINED__
typedef interface IStampNotify IStampNotify;
#endif 	/* __IStampNotify_FWD_DEFINED__ */


#ifndef __IObject2DNotify_FWD_DEFINED__
#define __IObject2DNotify_FWD_DEFINED__
typedef interface IObject2DNotify IObject2DNotify;
#endif 	/* __IObject2DNotify_FWD_DEFINED__ */


#ifndef __IObject2DNotifyResult_FWD_DEFINED__
#define __IObject2DNotifyResult_FWD_DEFINED__
typedef interface IObject2DNotifyResult IObject2DNotifyResult;
#endif 	/* __IObject2DNotifyResult_FWD_DEFINED__ */


#ifndef __ISelectionMngNotify_FWD_DEFINED__
#define __ISelectionMngNotify_FWD_DEFINED__
typedef interface ISelectionMngNotify ISelectionMngNotify;
#endif 	/* __ISelectionMngNotify_FWD_DEFINED__ */


#ifndef __ISpcObjectNotify_FWD_DEFINED__
#define __ISpcObjectNotify_FWD_DEFINED__
typedef interface ISpcObjectNotify ISpcObjectNotify;
#endif 	/* __ISpcObjectNotify_FWD_DEFINED__ */


#ifndef __ISpcDocumentNotify_FWD_DEFINED__
#define __ISpcDocumentNotify_FWD_DEFINED__
typedef interface ISpcDocumentNotify ISpcDocumentNotify;
#endif 	/* __ISpcDocumentNotify_FWD_DEFINED__ */


#ifndef __ISpecificationNotify_FWD_DEFINED__
#define __ISpecificationNotify_FWD_DEFINED__
typedef interface ISpecificationNotify ISpecificationNotify;
#endif 	/* __ISpecificationNotify_FWD_DEFINED__ */


#ifndef __IDocument2DNotify_FWD_DEFINED__
#define __IDocument2DNotify_FWD_DEFINED__
typedef interface IDocument2DNotify IDocument2DNotify;
#endif 	/* __IDocument2DNotify_FWD_DEFINED__ */


#ifndef __IPropertyManagerNotify_FWD_DEFINED__
#define __IPropertyManagerNotify_FWD_DEFINED__
typedef interface IPropertyManagerNotify IPropertyManagerNotify;
#endif 	/* __IPropertyManagerNotify_FWD_DEFINED__ */


#ifndef __IDocumentFrameNotify_FWD_DEFINED__
#define __IDocumentFrameNotify_FWD_DEFINED__
typedef interface IDocumentFrameNotify IDocumentFrameNotify;
#endif 	/* __IDocumentFrameNotify_FWD_DEFINED__ */


#ifndef __IViewsAndLayersManagerNotify_FWD_DEFINED__
#define __IViewsAndLayersManagerNotify_FWD_DEFINED__
typedef interface IViewsAndLayersManagerNotify IViewsAndLayersManagerNotify;
#endif 	/* __IViewsAndLayersManagerNotify_FWD_DEFINED__ */


#ifndef __ILibraryManagerNotify_FWD_DEFINED__
#define __ILibraryManagerNotify_FWD_DEFINED__
typedef interface ILibraryManagerNotify ILibraryManagerNotify;
#endif 	/* __ILibraryManagerNotify_FWD_DEFINED__ */


#ifndef __IParametrizationParam_FWD_DEFINED__
#define __IParametrizationParam_FWD_DEFINED__
typedef interface IParametrizationParam IParametrizationParam;
#endif 	/* __IParametrizationParam_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __Kompas6API2D5COM_LIBRARY_DEFINED__
#define __Kompas6API2D5COM_LIBRARY_DEFINED__

/* library Kompas6API2D5COM */
/* [version][uuid] */ 

















typedef IKompasNotify *LPKOMPASNOTIFY;

typedef IKompasObjectNotify *LPKOMPASOBJECTNOTIFY;

typedef IDocumentFileNotify *LPDOCUMENTFILENOTIFY;

typedef IStampNotify *LPSTAMPNOTIFY;

typedef IObject2DNotify *LPOBJECT2DNOTIFY;

typedef IObject2DNotifyResult *LPOBJECT2DNOTIFYRESULT;

typedef ISelectionMngNotify *LPSELECTIONMNGNOTIFY;

typedef ISpcObjectNotify *LPSPCOBJECTNOTIFY;

typedef ISpcDocumentNotify *LPSPCDOCUMENTNOTIFY;

typedef ISpecificationNotify *LPSPECIFICATIONNOTIFY;

typedef IDocument2DNotify *LPDOCUMENT2DNOTIFY;

typedef IPropertyManagerNotify *LPPROPERTYMANAGERNOTIFY;

typedef IDocumentFrameNotify *LPDOCUMENTFRAMENOTIFY;

typedef IParametrizationParam *LPPARAMETRIZATIONPARAM;

typedef IViewsAndLayersManagerNotify *LPVIEWSANDLAYERSMANAGERNOTIFY;

typedef ILibraryManagerNotify *LPLIBRARYMANAGERNOTIFY;


DEFINE_GUID(LIBID_Kompas6API2D5COM,0x0F4AB6C5,0x1420,0x4848,0xAF,0xCE,0x18,0xCB,0xE7,0x01,0xBE,0x1A);

#ifndef __IKompasNotify_INTERFACE_DEFINED__
#define __IKompasNotify_INTERFACE_DEFINED__

/* interface IKompasNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IKompasNotify,0xC89A8C15,0x2DE0,0x408b,0x8C,0x89,0xB1,0xCF,0x4E,0xAE,0x12,0x63);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C89A8C15-2DE0-408b-8C89-B1CF4EAE1263")
    IKompasNotify : public IUnknown
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IsNotifyProcess( 
            int notifyType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKompasNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKompasNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKompasNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKompasNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IKompasNotify * This,
            int notifyType);
        
        END_INTERFACE
    } IKompasNotifyVtbl;

    interface IKompasNotify
    {
        CONST_VTBL struct IKompasNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKompasNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IKompasNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IKompasNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IKompasNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasNotify_IsNotifyProcess_Proxy( 
    IKompasNotify * This,
    int notifyType);


void __RPC_STUB IKompasNotify_IsNotifyProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IKompasNotify_INTERFACE_DEFINED__ */


#ifndef __IKompasObjectNotify_INTERFACE_DEFINED__
#define __IKompasObjectNotify_INTERFACE_DEFINED__

/* interface IKompasObjectNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IKompasObjectNotify,0xEBF88CAE,0x07D4,0x4fd3,0x80,0x69,0xA0,0xEF,0x15,0xF5,0x66,0x72);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBF88CAE-07D4-4fd3-8069-A0EF15F56672")
    IKompasObjectNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateDocument( 
            long pDoc,
            int docType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginOpenDocument( 
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE OpenDocument( 
            long pDoc,
            int docType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeActiveDocument( 
            long pDoc,
            int docType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ApplicationDestroy( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCreate( 
            long docType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginOpenFile( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCloseAllDocument( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE KeyDown( 
            long *key,
            long flags,
            VARIANT_BOOL sysKey) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE KeyUp( 
            long *key,
            long flags,
            VARIANT_BOOL sysKey) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE KeyPress( 
            long *key,
            VARIANT_BOOL sysKey) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginRequestFiles( 
            long requestID,
            VARIANT *files) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKompasObjectNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKompasObjectNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKompasObjectNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKompasObjectNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IKompasObjectNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateDocument )( 
            IKompasObjectNotify * This,
            long pDoc,
            int docType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginOpenDocument )( 
            IKompasObjectNotify * This,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *OpenDocument )( 
            IKompasObjectNotify * This,
            long pDoc,
            int docType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeActiveDocument )( 
            IKompasObjectNotify * This,
            long pDoc,
            int docType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ApplicationDestroy )( 
            IKompasObjectNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCreate )( 
            IKompasObjectNotify * This,
            long docType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginOpenFile )( 
            IKompasObjectNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCloseAllDocument )( 
            IKompasObjectNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *KeyDown )( 
            IKompasObjectNotify * This,
            long *key,
            long flags,
            VARIANT_BOOL sysKey);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *KeyUp )( 
            IKompasObjectNotify * This,
            long *key,
            long flags,
            VARIANT_BOOL sysKey);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *KeyPress )( 
            IKompasObjectNotify * This,
            long *key,
            VARIANT_BOOL sysKey);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginRequestFiles )( 
            IKompasObjectNotify * This,
            long requestID,
            VARIANT *files);
        
        END_INTERFACE
    } IKompasObjectNotifyVtbl;

    interface IKompasObjectNotify
    {
        CONST_VTBL struct IKompasObjectNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKompasObjectNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IKompasObjectNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IKompasObjectNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IKompasObjectNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IKompasObjectNotify_CreateDocument(This,pDoc,docType)	\
    (This)->lpVtbl -> CreateDocument(This,pDoc,docType)

#define IKompasObjectNotify_BeginOpenDocument(This,docName)	\
    (This)->lpVtbl -> BeginOpenDocument(This,docName)

#define IKompasObjectNotify_OpenDocument(This,pDoc,docType)	\
    (This)->lpVtbl -> OpenDocument(This,pDoc,docType)

#define IKompasObjectNotify_ChangeActiveDocument(This,pDoc,docType)	\
    (This)->lpVtbl -> ChangeActiveDocument(This,pDoc,docType)

#define IKompasObjectNotify_ApplicationDestroy(This)	\
    (This)->lpVtbl -> ApplicationDestroy(This)

#define IKompasObjectNotify_BeginCreate(This,docType)	\
    (This)->lpVtbl -> BeginCreate(This,docType)

#define IKompasObjectNotify_BeginOpenFile(This)	\
    (This)->lpVtbl -> BeginOpenFile(This)

#define IKompasObjectNotify_BeginCloseAllDocument(This)	\
    (This)->lpVtbl -> BeginCloseAllDocument(This)

#define IKompasObjectNotify_KeyDown(This,key,flags,sysKey)	\
    (This)->lpVtbl -> KeyDown(This,key,flags,sysKey)

#define IKompasObjectNotify_KeyUp(This,key,flags,sysKey)	\
    (This)->lpVtbl -> KeyUp(This,key,flags,sysKey)

#define IKompasObjectNotify_KeyPress(This,key,sysKey)	\
    (This)->lpVtbl -> KeyPress(This,key,sysKey)

#define IKompasObjectNotify_BeginRequestFiles(This,requestID,files)	\
    (This)->lpVtbl -> BeginRequestFiles(This,requestID,files)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_CreateDocument_Proxy( 
    IKompasObjectNotify * This,
    long pDoc,
    int docType);


void __RPC_STUB IKompasObjectNotify_CreateDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_BeginOpenDocument_Proxy( 
    IKompasObjectNotify * This,
    LPCSTR docName);


void __RPC_STUB IKompasObjectNotify_BeginOpenDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_OpenDocument_Proxy( 
    IKompasObjectNotify * This,
    long pDoc,
    int docType);


void __RPC_STUB IKompasObjectNotify_OpenDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_ChangeActiveDocument_Proxy( 
    IKompasObjectNotify * This,
    long pDoc,
    int docType);


void __RPC_STUB IKompasObjectNotify_ChangeActiveDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_ApplicationDestroy_Proxy( 
    IKompasObjectNotify * This);


void __RPC_STUB IKompasObjectNotify_ApplicationDestroy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_BeginCreate_Proxy( 
    IKompasObjectNotify * This,
    long docType);


void __RPC_STUB IKompasObjectNotify_BeginCreate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_BeginOpenFile_Proxy( 
    IKompasObjectNotify * This);


void __RPC_STUB IKompasObjectNotify_BeginOpenFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_BeginCloseAllDocument_Proxy( 
    IKompasObjectNotify * This);


void __RPC_STUB IKompasObjectNotify_BeginCloseAllDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_KeyDown_Proxy( 
    IKompasObjectNotify * This,
    long *key,
    long flags,
    VARIANT_BOOL sysKey);


void __RPC_STUB IKompasObjectNotify_KeyDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_KeyUp_Proxy( 
    IKompasObjectNotify * This,
    long *key,
    long flags,
    VARIANT_BOOL sysKey);


void __RPC_STUB IKompasObjectNotify_KeyUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_KeyPress_Proxy( 
    IKompasObjectNotify * This,
    long *key,
    VARIANT_BOOL sysKey);


void __RPC_STUB IKompasObjectNotify_KeyPress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IKompasObjectNotify_BeginRequestFiles_Proxy( 
    IKompasObjectNotify * This,
    long requestID,
    VARIANT *files);


void __RPC_STUB IKompasObjectNotify_BeginRequestFiles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IKompasObjectNotify_INTERFACE_DEFINED__ */


#ifndef __IDocumentFileNotify_INTERFACE_DEFINED__
#define __IDocumentFileNotify_INTERFACE_DEFINED__

/* interface IDocumentFileNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDocumentFileNotify,0x0C11E121,0x22C4,0x40fb,0x95,0x59,0xBE,0xCB,0x12,0x26,0x9D,0xCB);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C11E121-22C4-40fb-9559-BECB12269DCB")
    IDocumentFileNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCloseDocument( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CloseDocument( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginSaveDocument( 
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SaveDocument( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginSaveAsDocument( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentFrameOpen( 
            LPUNKNOWN v) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ProcessActivate( 
            long Id) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ProcessDeactivate( 
            long Id) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginProcess( 
            long Id) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndProcess( 
            long Id,
            VARIANT_BOOL Success) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDocumentFileNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocumentFileNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocumentFileNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IDocumentFileNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCloseDocument )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CloseDocument )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginSaveDocument )( 
            IDocumentFileNotify * This,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SaveDocument )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Activate )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Deactivate )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginSaveAsDocument )( 
            IDocumentFileNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentFrameOpen )( 
            IDocumentFileNotify * This,
            LPUNKNOWN v);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ProcessActivate )( 
            IDocumentFileNotify * This,
            long Id);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ProcessDeactivate )( 
            IDocumentFileNotify * This,
            long Id);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginProcess )( 
            IDocumentFileNotify * This,
            long Id);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndProcess )( 
            IDocumentFileNotify * This,
            long Id,
            VARIANT_BOOL Success);
        
        END_INTERFACE
    } IDocumentFileNotifyVtbl;

    interface IDocumentFileNotify
    {
        CONST_VTBL struct IDocumentFileNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocumentFileNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDocumentFileNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDocumentFileNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDocumentFileNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IDocumentFileNotify_BeginCloseDocument(This)	\
    (This)->lpVtbl -> BeginCloseDocument(This)

#define IDocumentFileNotify_CloseDocument(This)	\
    (This)->lpVtbl -> CloseDocument(This)

#define IDocumentFileNotify_BeginSaveDocument(This,docName)	\
    (This)->lpVtbl -> BeginSaveDocument(This,docName)

#define IDocumentFileNotify_SaveDocument(This)	\
    (This)->lpVtbl -> SaveDocument(This)

#define IDocumentFileNotify_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#define IDocumentFileNotify_Deactivate(This)	\
    (This)->lpVtbl -> Deactivate(This)

#define IDocumentFileNotify_BeginSaveAsDocument(This)	\
    (This)->lpVtbl -> BeginSaveAsDocument(This)

#define IDocumentFileNotify_DocumentFrameOpen(This,v)	\
    (This)->lpVtbl -> DocumentFrameOpen(This,v)

#define IDocumentFileNotify_ProcessActivate(This,Id)	\
    (This)->lpVtbl -> ProcessActivate(This,Id)

#define IDocumentFileNotify_ProcessDeactivate(This,Id)	\
    (This)->lpVtbl -> ProcessDeactivate(This,Id)

#define IDocumentFileNotify_BeginProcess(This,Id)	\
    (This)->lpVtbl -> BeginProcess(This,Id)

#define IDocumentFileNotify_EndProcess(This,Id,Success)	\
    (This)->lpVtbl -> EndProcess(This,Id,Success)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_BeginCloseDocument_Proxy( 
    IDocumentFileNotify * This);


void __RPC_STUB IDocumentFileNotify_BeginCloseDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_CloseDocument_Proxy( 
    IDocumentFileNotify * This);


void __RPC_STUB IDocumentFileNotify_CloseDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_BeginSaveDocument_Proxy( 
    IDocumentFileNotify * This,
    LPCSTR docName);


void __RPC_STUB IDocumentFileNotify_BeginSaveDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_SaveDocument_Proxy( 
    IDocumentFileNotify * This);


void __RPC_STUB IDocumentFileNotify_SaveDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_Activate_Proxy( 
    IDocumentFileNotify * This);


void __RPC_STUB IDocumentFileNotify_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_Deactivate_Proxy( 
    IDocumentFileNotify * This);


void __RPC_STUB IDocumentFileNotify_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_BeginSaveAsDocument_Proxy( 
    IDocumentFileNotify * This);


void __RPC_STUB IDocumentFileNotify_BeginSaveAsDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_DocumentFrameOpen_Proxy( 
    IDocumentFileNotify * This,
    LPUNKNOWN v);


void __RPC_STUB IDocumentFileNotify_DocumentFrameOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_ProcessActivate_Proxy( 
    IDocumentFileNotify * This,
    long Id);


void __RPC_STUB IDocumentFileNotify_ProcessActivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_ProcessDeactivate_Proxy( 
    IDocumentFileNotify * This,
    long Id);


void __RPC_STUB IDocumentFileNotify_ProcessDeactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_BeginProcess_Proxy( 
    IDocumentFileNotify * This,
    long Id);


void __RPC_STUB IDocumentFileNotify_BeginProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFileNotify_EndProcess_Proxy( 
    IDocumentFileNotify * This,
    long Id,
    VARIANT_BOOL Success);


void __RPC_STUB IDocumentFileNotify_EndProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDocumentFileNotify_INTERFACE_DEFINED__ */


#ifndef __IStampNotify_INTERFACE_DEFINED__
#define __IStampNotify_INTERFACE_DEFINED__

/* interface IStampNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IStampNotify,0x704FBFC9,0x7EDD,0x42d0,0xBD,0xB5,0xC2,0x42,0xD0,0x6C,0x18,0xF9);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("704FBFC9-7EDD-42d0-BDB5-C242D06C18F9")
    IStampNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginEditStamp( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndEditStamp( 
            VARIANT_BOOL editResult) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE StampCellDblClick( 
            long number) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE StampCellBeginEdit( 
            long number) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE StampBeginClearCells( 
            VARIANT numbers) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStampNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStampNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStampNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStampNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IStampNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginEditStamp )( 
            IStampNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndEditStamp )( 
            IStampNotify * This,
            VARIANT_BOOL editResult);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *StampCellDblClick )( 
            IStampNotify * This,
            long number);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *StampCellBeginEdit )( 
            IStampNotify * This,
            long number);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *StampBeginClearCells )( 
            IStampNotify * This,
            VARIANT numbers);
        
        END_INTERFACE
    } IStampNotifyVtbl;

    interface IStampNotify
    {
        CONST_VTBL struct IStampNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStampNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStampNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStampNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStampNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IStampNotify_BeginEditStamp(This)	\
    (This)->lpVtbl -> BeginEditStamp(This)

#define IStampNotify_EndEditStamp(This,editResult)	\
    (This)->lpVtbl -> EndEditStamp(This,editResult)

#define IStampNotify_StampCellDblClick(This,number)	\
    (This)->lpVtbl -> StampCellDblClick(This,number)

#define IStampNotify_StampCellBeginEdit(This,number)	\
    (This)->lpVtbl -> StampCellBeginEdit(This,number)

#define IStampNotify_StampBeginClearCells(This,numbers)	\
    (This)->lpVtbl -> StampBeginClearCells(This,numbers)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IStampNotify_BeginEditStamp_Proxy( 
    IStampNotify * This);


void __RPC_STUB IStampNotify_BeginEditStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IStampNotify_EndEditStamp_Proxy( 
    IStampNotify * This,
    VARIANT_BOOL editResult);


void __RPC_STUB IStampNotify_EndEditStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IStampNotify_StampCellDblClick_Proxy( 
    IStampNotify * This,
    long number);


void __RPC_STUB IStampNotify_StampCellDblClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IStampNotify_StampCellBeginEdit_Proxy( 
    IStampNotify * This,
    long number);


void __RPC_STUB IStampNotify_StampCellBeginEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IStampNotify_StampBeginClearCells_Proxy( 
    IStampNotify * This,
    VARIANT numbers);


void __RPC_STUB IStampNotify_StampBeginClearCells_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStampNotify_INTERFACE_DEFINED__ */


#ifndef __IObject2DNotify_INTERFACE_DEFINED__
#define __IObject2DNotify_INTERFACE_DEFINED__

/* interface IObject2DNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IObject2DNotify,0x1F02922E,0xEAF8,0x4462,0xAA,0xFB,0x47,0x27,0x37,0x82,0xFD,0x31);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1F02922E-EAF8-4462-AAFB-47273782FD31")
    IObject2DNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeActive( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginDelete( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Delete( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginMove( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Move( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginRotate( 
            long obgRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Rotate( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginScale( 
            long obgRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Scale( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginTransform( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Transform( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCopy( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Copy( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginSymmetry( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Symmetry( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginProcess( 
            long pType,
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndProcess( 
            long pType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateObject( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE UpdateObject( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginDestroyObject( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DestroyObject( 
            long objRef) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObject2DNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObject2DNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObject2DNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObject2DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IObject2DNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeActive )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginDelete )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Delete )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginMove )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Move )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginRotate )( 
            IObject2DNotify * This,
            long obgRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Rotate )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginScale )( 
            IObject2DNotify * This,
            long obgRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Scale )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginTransform )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Transform )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCopy )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Copy )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginSymmetry )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Symmetry )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginProcess )( 
            IObject2DNotify * This,
            long pType,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndProcess )( 
            IObject2DNotify * This,
            long pType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateObject )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *UpdateObject )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginDestroyObject )( 
            IObject2DNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DestroyObject )( 
            IObject2DNotify * This,
            long objRef);
        
        END_INTERFACE
    } IObject2DNotifyVtbl;

    interface IObject2DNotify
    {
        CONST_VTBL struct IObject2DNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObject2DNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObject2DNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObject2DNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObject2DNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IObject2DNotify_ChangeActive(This,objRef)	\
    (This)->lpVtbl -> ChangeActive(This,objRef)

#define IObject2DNotify_BeginDelete(This,objRef)	\
    (This)->lpVtbl -> BeginDelete(This,objRef)

#define IObject2DNotify_Delete(This,objRef)	\
    (This)->lpVtbl -> Delete(This,objRef)

#define IObject2DNotify_BeginMove(This,objRef)	\
    (This)->lpVtbl -> BeginMove(This,objRef)

#define IObject2DNotify_Move(This,objRef)	\
    (This)->lpVtbl -> Move(This,objRef)

#define IObject2DNotify_BeginRotate(This,obgRef)	\
    (This)->lpVtbl -> BeginRotate(This,obgRef)

#define IObject2DNotify_Rotate(This,objRef)	\
    (This)->lpVtbl -> Rotate(This,objRef)

#define IObject2DNotify_BeginScale(This,obgRef)	\
    (This)->lpVtbl -> BeginScale(This,obgRef)

#define IObject2DNotify_Scale(This,objRef)	\
    (This)->lpVtbl -> Scale(This,objRef)

#define IObject2DNotify_BeginTransform(This,objRef)	\
    (This)->lpVtbl -> BeginTransform(This,objRef)

#define IObject2DNotify_Transform(This,objRef)	\
    (This)->lpVtbl -> Transform(This,objRef)

#define IObject2DNotify_BeginCopy(This,objRef)	\
    (This)->lpVtbl -> BeginCopy(This,objRef)

#define IObject2DNotify_Copy(This,objRef)	\
    (This)->lpVtbl -> Copy(This,objRef)

#define IObject2DNotify_BeginSymmetry(This,objRef)	\
    (This)->lpVtbl -> BeginSymmetry(This,objRef)

#define IObject2DNotify_Symmetry(This,objRef)	\
    (This)->lpVtbl -> Symmetry(This,objRef)

#define IObject2DNotify_BeginProcess(This,pType,objRef)	\
    (This)->lpVtbl -> BeginProcess(This,pType,objRef)

#define IObject2DNotify_EndProcess(This,pType)	\
    (This)->lpVtbl -> EndProcess(This,pType)

#define IObject2DNotify_CreateObject(This,objRef)	\
    (This)->lpVtbl -> CreateObject(This,objRef)

#define IObject2DNotify_UpdateObject(This,objRef)	\
    (This)->lpVtbl -> UpdateObject(This,objRef)

#define IObject2DNotify_BeginDestroyObject(This,objRef)	\
    (This)->lpVtbl -> BeginDestroyObject(This,objRef)

#define IObject2DNotify_DestroyObject(This,objRef)	\
    (This)->lpVtbl -> DestroyObject(This,objRef)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_ChangeActive_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_ChangeActive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginDelete_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginDelete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Delete_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginMove_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Move_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginRotate_Proxy( 
    IObject2DNotify * This,
    long obgRef);


void __RPC_STUB IObject2DNotify_BeginRotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Rotate_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Rotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginScale_Proxy( 
    IObject2DNotify * This,
    long obgRef);


void __RPC_STUB IObject2DNotify_BeginScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Scale_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Scale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginTransform_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginTransform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Transform_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginCopy_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Copy_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginSymmetry_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginSymmetry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_Symmetry_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_Symmetry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginProcess_Proxy( 
    IObject2DNotify * This,
    long pType,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_EndProcess_Proxy( 
    IObject2DNotify * This,
    long pType);


void __RPC_STUB IObject2DNotify_EndProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_CreateObject_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_CreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_UpdateObject_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_UpdateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_BeginDestroyObject_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_BeginDestroyObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotify_DestroyObject_Proxy( 
    IObject2DNotify * This,
    long objRef);


void __RPC_STUB IObject2DNotify_DestroyObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObject2DNotify_INTERFACE_DEFINED__ */


#ifndef __IObject2DNotifyResult_INTERFACE_DEFINED__
#define __IObject2DNotifyResult_INTERFACE_DEFINED__

/* interface IObject2DNotifyResult */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IObject2DNotifyResult,0xB17BA3C2,0x9697,0x493b,0xBA,0xA5,0x17,0x12,0xF3,0x49,0xEE,0x53);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B17BA3C2-9697-493b-BAA5-1712F349EE53")
    IObject2DNotifyResult : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetNotifyType( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IsCopy( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetSheetPoint( 
            VARIANT_BOOL from,
            double *x,
            double *y) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCopyObject( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetScale( 
            double *sx,
            double *sy) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetProcessType( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IsUndoMode( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IsRedoMode( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObject2DNotifyResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObject2DNotifyResult * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObject2DNotifyResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetNotifyType )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsCopy )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetSheetPoint )( 
            IObject2DNotifyResult * This,
            VARIANT_BOOL from,
            double *x,
            double *y);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCopyObject )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetScale )( 
            IObject2DNotifyResult * This,
            double *sx,
            double *sy);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetProcessType )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsUndoMode )( 
            IObject2DNotifyResult * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsRedoMode )( 
            IObject2DNotifyResult * This);
        
        END_INTERFACE
    } IObject2DNotifyResultVtbl;

    interface IObject2DNotifyResult
    {
        CONST_VTBL struct IObject2DNotifyResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObject2DNotifyResult_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObject2DNotifyResult_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObject2DNotifyResult_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObject2DNotifyResult_GetNotifyType(This)	\
    (This)->lpVtbl -> GetNotifyType(This)

#define IObject2DNotifyResult_IsCopy(This)	\
    (This)->lpVtbl -> IsCopy(This)

#define IObject2DNotifyResult_GetSheetPoint(This,from,x,y)	\
    (This)->lpVtbl -> GetSheetPoint(This,from,x,y)

#define IObject2DNotifyResult_GetCopyObject(This)	\
    (This)->lpVtbl -> GetCopyObject(This)

#define IObject2DNotifyResult_GetAngle(This)	\
    (This)->lpVtbl -> GetAngle(This)

#define IObject2DNotifyResult_GetScale(This,sx,sy)	\
    (This)->lpVtbl -> GetScale(This,sx,sy)

#define IObject2DNotifyResult_GetProcessType(This)	\
    (This)->lpVtbl -> GetProcessType(This)

#define IObject2DNotifyResult_IsUndoMode(This)	\
    (This)->lpVtbl -> IsUndoMode(This)

#define IObject2DNotifyResult_IsRedoMode(This)	\
    (This)->lpVtbl -> IsRedoMode(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ long STDMETHODCALLTYPE IObject2DNotifyResult_GetNotifyType_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_GetNotifyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotifyResult_IsCopy_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_IsCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotifyResult_GetSheetPoint_Proxy( 
    IObject2DNotifyResult * This,
    VARIANT_BOOL from,
    double *x,
    double *y);


void __RPC_STUB IObject2DNotifyResult_GetSheetPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ long STDMETHODCALLTYPE IObject2DNotifyResult_GetCopyObject_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_GetCopyObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ double STDMETHODCALLTYPE IObject2DNotifyResult_GetAngle_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_GetAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotifyResult_GetScale_Proxy( 
    IObject2DNotifyResult * This,
    double *sx,
    double *sy);


void __RPC_STUB IObject2DNotifyResult_GetScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ long STDMETHODCALLTYPE IObject2DNotifyResult_GetProcessType_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_GetProcessType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotifyResult_IsUndoMode_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_IsUndoMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IObject2DNotifyResult_IsRedoMode_Proxy( 
    IObject2DNotifyResult * This);


void __RPC_STUB IObject2DNotifyResult_IsRedoMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObject2DNotifyResult_INTERFACE_DEFINED__ */


#ifndef __ISelectionMngNotify_INTERFACE_DEFINED__
#define __ISelectionMngNotify_INTERFACE_DEFINED__

/* interface ISelectionMngNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISelectionMngNotify,0xBAF64B25,0xB405,0x478d,0x80,0x19,0x65,0x10,0x2E,0x45,0xE2,0xD5);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAF64B25-B405-478d-8019-65102E45E2D5")
    ISelectionMngNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Select( 
            VARIANT obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Unselect( 
            VARIANT obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE UnselectAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISelectionMngNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISelectionMngNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISelectionMngNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISelectionMngNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            ISelectionMngNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Select )( 
            ISelectionMngNotify * This,
            VARIANT obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Unselect )( 
            ISelectionMngNotify * This,
            VARIANT obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *UnselectAll )( 
            ISelectionMngNotify * This);
        
        END_INTERFACE
    } ISelectionMngNotifyVtbl;

    interface ISelectionMngNotify
    {
        CONST_VTBL struct ISelectionMngNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISelectionMngNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISelectionMngNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISelectionMngNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISelectionMngNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define ISelectionMngNotify_Select(This,obj)	\
    (This)->lpVtbl -> Select(This,obj)

#define ISelectionMngNotify_Unselect(This,obj)	\
    (This)->lpVtbl -> Unselect(This,obj)

#define ISelectionMngNotify_UnselectAll(This)	\
    (This)->lpVtbl -> UnselectAll(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISelectionMngNotify_Select_Proxy( 
    ISelectionMngNotify * This,
    VARIANT obj);


void __RPC_STUB ISelectionMngNotify_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISelectionMngNotify_Unselect_Proxy( 
    ISelectionMngNotify * This,
    VARIANT obj);


void __RPC_STUB ISelectionMngNotify_Unselect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISelectionMngNotify_UnselectAll_Proxy( 
    ISelectionMngNotify * This);


void __RPC_STUB ISelectionMngNotify_UnselectAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISelectionMngNotify_INTERFACE_DEFINED__ */


#ifndef __ISpcObjectNotify_INTERFACE_DEFINED__
#define __ISpcObjectNotify_INTERFACE_DEFINED__

/* interface ISpcObjectNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISpcObjectNotify,0x926B6F36,0x0BAB,0x44c3,0x8C,0xB8,0x2F,0x89,0xDE,0x9D,0xDC,0xED);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("926B6F36-0BAB-44c3-8CB8-2F89DE9DDCED")
    ISpcObjectNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginDelete( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Delete( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CellDblClick( 
            long objRef,
            long number) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CellBeginEdit( 
            long objRef,
            long number) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeCurrent( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentBeginAdd( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentAdd( 
            long objRef,
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentRemove( 
            long objRef,
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginGeomChange( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GeomChange( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginProcess( 
            long pType,
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndProcess( 
            long pType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateObject( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE UpdateObject( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCopy( 
            long objRef) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Copy( 
            long objRef) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISpcObjectNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpcObjectNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpcObjectNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpcObjectNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            ISpcObjectNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginDelete )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Delete )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CellDblClick )( 
            ISpcObjectNotify * This,
            long objRef,
            long number);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CellBeginEdit )( 
            ISpcObjectNotify * This,
            long objRef,
            long number);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeCurrent )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentBeginAdd )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentAdd )( 
            ISpcObjectNotify * This,
            long objRef,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentRemove )( 
            ISpcObjectNotify * This,
            long objRef,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginGeomChange )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GeomChange )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginProcess )( 
            ISpcObjectNotify * This,
            long pType,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndProcess )( 
            ISpcObjectNotify * This,
            long pType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateObject )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *UpdateObject )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCopy )( 
            ISpcObjectNotify * This,
            long objRef);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Copy )( 
            ISpcObjectNotify * This,
            long objRef);
        
        END_INTERFACE
    } ISpcObjectNotifyVtbl;

    interface ISpcObjectNotify
    {
        CONST_VTBL struct ISpcObjectNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpcObjectNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISpcObjectNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISpcObjectNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISpcObjectNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define ISpcObjectNotify_BeginDelete(This,objRef)	\
    (This)->lpVtbl -> BeginDelete(This,objRef)

#define ISpcObjectNotify_Delete(This,objRef)	\
    (This)->lpVtbl -> Delete(This,objRef)

#define ISpcObjectNotify_CellDblClick(This,objRef,number)	\
    (This)->lpVtbl -> CellDblClick(This,objRef,number)

#define ISpcObjectNotify_CellBeginEdit(This,objRef,number)	\
    (This)->lpVtbl -> CellBeginEdit(This,objRef,number)

#define ISpcObjectNotify_ChangeCurrent(This,objRef)	\
    (This)->lpVtbl -> ChangeCurrent(This,objRef)

#define ISpcObjectNotify_DocumentBeginAdd(This,objRef)	\
    (This)->lpVtbl -> DocumentBeginAdd(This,objRef)

#define ISpcObjectNotify_DocumentAdd(This,objRef,docName)	\
    (This)->lpVtbl -> DocumentAdd(This,objRef,docName)

#define ISpcObjectNotify_DocumentRemove(This,objRef,docName)	\
    (This)->lpVtbl -> DocumentRemove(This,objRef,docName)

#define ISpcObjectNotify_BeginGeomChange(This,objRef)	\
    (This)->lpVtbl -> BeginGeomChange(This,objRef)

#define ISpcObjectNotify_GeomChange(This,objRef)	\
    (This)->lpVtbl -> GeomChange(This,objRef)

#define ISpcObjectNotify_BeginProcess(This,pType,objRef)	\
    (This)->lpVtbl -> BeginProcess(This,pType,objRef)

#define ISpcObjectNotify_EndProcess(This,pType)	\
    (This)->lpVtbl -> EndProcess(This,pType)

#define ISpcObjectNotify_CreateObject(This,objRef)	\
    (This)->lpVtbl -> CreateObject(This,objRef)

#define ISpcObjectNotify_UpdateObject(This,objRef)	\
    (This)->lpVtbl -> UpdateObject(This,objRef)

#define ISpcObjectNotify_BeginCopy(This,objRef)	\
    (This)->lpVtbl -> BeginCopy(This,objRef)

#define ISpcObjectNotify_Copy(This,objRef)	\
    (This)->lpVtbl -> Copy(This,objRef)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_BeginDelete_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_BeginDelete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_Delete_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_CellDblClick_Proxy( 
    ISpcObjectNotify * This,
    long objRef,
    long number);


void __RPC_STUB ISpcObjectNotify_CellDblClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_CellBeginEdit_Proxy( 
    ISpcObjectNotify * This,
    long objRef,
    long number);


void __RPC_STUB ISpcObjectNotify_CellBeginEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_ChangeCurrent_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_ChangeCurrent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_DocumentBeginAdd_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_DocumentBeginAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_DocumentAdd_Proxy( 
    ISpcObjectNotify * This,
    long objRef,
    LPCSTR docName);


void __RPC_STUB ISpcObjectNotify_DocumentAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_DocumentRemove_Proxy( 
    ISpcObjectNotify * This,
    long objRef,
    LPCSTR docName);


void __RPC_STUB ISpcObjectNotify_DocumentRemove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_BeginGeomChange_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_BeginGeomChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_GeomChange_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_GeomChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_BeginProcess_Proxy( 
    ISpcObjectNotify * This,
    long pType,
    long objRef);


void __RPC_STUB ISpcObjectNotify_BeginProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_EndProcess_Proxy( 
    ISpcObjectNotify * This,
    long pType);


void __RPC_STUB ISpcObjectNotify_EndProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_CreateObject_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_CreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_UpdateObject_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_UpdateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_BeginCopy_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_BeginCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcObjectNotify_Copy_Proxy( 
    ISpcObjectNotify * This,
    long objRef);


void __RPC_STUB ISpcObjectNotify_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISpcObjectNotify_INTERFACE_DEFINED__ */


#ifndef __ISpcDocumentNotify_INTERFACE_DEFINED__
#define __ISpcDocumentNotify_INTERFACE_DEFINED__

/* interface ISpcDocumentNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISpcDocumentNotify,0x05586FAB,0xFB5C,0x4e15,0xB7,0xC0,0x66,0x39,0x10,0x6A,0x00,0x5D);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05586FAB-FB5C-4e15-B7C0-6639106A005D")
    ISpcDocumentNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentBeginAdd( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentAdd( 
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentBeginRemove( 
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DocumentRemove( 
            LPCSTR docName) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SpcStyleBeginChange( 
            LPCSTR libName,
            long numb) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SpcStyleChange( 
            LPCSTR libName,
            long numb) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISpcDocumentNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpcDocumentNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpcDocumentNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpcDocumentNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            ISpcDocumentNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentBeginAdd )( 
            ISpcDocumentNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentAdd )( 
            ISpcDocumentNotify * This,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentBeginRemove )( 
            ISpcDocumentNotify * This,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DocumentRemove )( 
            ISpcDocumentNotify * This,
            LPCSTR docName);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SpcStyleBeginChange )( 
            ISpcDocumentNotify * This,
            LPCSTR libName,
            long numb);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SpcStyleChange )( 
            ISpcDocumentNotify * This,
            LPCSTR libName,
            long numb);
        
        END_INTERFACE
    } ISpcDocumentNotifyVtbl;

    interface ISpcDocumentNotify
    {
        CONST_VTBL struct ISpcDocumentNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpcDocumentNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISpcDocumentNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISpcDocumentNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISpcDocumentNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define ISpcDocumentNotify_DocumentBeginAdd(This)	\
    (This)->lpVtbl -> DocumentBeginAdd(This)

#define ISpcDocumentNotify_DocumentAdd(This,docName)	\
    (This)->lpVtbl -> DocumentAdd(This,docName)

#define ISpcDocumentNotify_DocumentBeginRemove(This,docName)	\
    (This)->lpVtbl -> DocumentBeginRemove(This,docName)

#define ISpcDocumentNotify_DocumentRemove(This,docName)	\
    (This)->lpVtbl -> DocumentRemove(This,docName)

#define ISpcDocumentNotify_SpcStyleBeginChange(This,libName,numb)	\
    (This)->lpVtbl -> SpcStyleBeginChange(This,libName,numb)

#define ISpcDocumentNotify_SpcStyleChange(This,libName,numb)	\
    (This)->lpVtbl -> SpcStyleChange(This,libName,numb)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcDocumentNotify_DocumentBeginAdd_Proxy( 
    ISpcDocumentNotify * This);


void __RPC_STUB ISpcDocumentNotify_DocumentBeginAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcDocumentNotify_DocumentAdd_Proxy( 
    ISpcDocumentNotify * This,
    LPCSTR docName);


void __RPC_STUB ISpcDocumentNotify_DocumentAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcDocumentNotify_DocumentBeginRemove_Proxy( 
    ISpcDocumentNotify * This,
    LPCSTR docName);


void __RPC_STUB ISpcDocumentNotify_DocumentBeginRemove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcDocumentNotify_DocumentRemove_Proxy( 
    ISpcDocumentNotify * This,
    LPCSTR docName);


void __RPC_STUB ISpcDocumentNotify_DocumentRemove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcDocumentNotify_SpcStyleBeginChange_Proxy( 
    ISpcDocumentNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpcDocumentNotify_SpcStyleBeginChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpcDocumentNotify_SpcStyleChange_Proxy( 
    ISpcDocumentNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpcDocumentNotify_SpcStyleChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISpcDocumentNotify_INTERFACE_DEFINED__ */


#ifndef __ISpecificationNotify_INTERFACE_DEFINED__
#define __ISpecificationNotify_INTERFACE_DEFINED__

/* interface ISpecificationNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISpecificationNotify,0x46D9F0CA,0xC094,0x41c8,0xB8,0x51,0xF8,0x6C,0xF5,0x65,0x48,0x1E);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46D9F0CA-C094-41c8-B851-F86CF565481E")
    ISpecificationNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE TuningSpcStyleBeginChange( 
            LPCSTR libName,
            long numb) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE TuningSpcStyleChange( 
            LPCSTR libName,
            long numb,
            VARIANT_BOOL isOk) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeCurrentSpcDescription( 
            LPCSTR libName,
            long numb) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SpcDescriptionAdd( 
            LPCSTR libName,
            long numb) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SpcDescriptionRemove( 
            LPCSTR libName,
            long numb) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SpcDescriptionBeginEdit( 
            LPCSTR libName,
            long numb) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SpcDescriptionEdit( 
            LPCSTR libName,
            long numb,
            VARIANT_BOOL isOk) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SynchronizationBegin( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Synchronization( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCalcPositions( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CalcPositions( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCreateObject( 
            long typeObj) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISpecificationNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpecificationNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpecificationNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpecificationNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            ISpecificationNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *TuningSpcStyleBeginChange )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *TuningSpcStyleChange )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb,
            VARIANT_BOOL isOk);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeCurrentSpcDescription )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SpcDescriptionAdd )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SpcDescriptionRemove )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SpcDescriptionBeginEdit )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SpcDescriptionEdit )( 
            ISpecificationNotify * This,
            LPCSTR libName,
            long numb,
            VARIANT_BOOL isOk);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SynchronizationBegin )( 
            ISpecificationNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Synchronization )( 
            ISpecificationNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCalcPositions )( 
            ISpecificationNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CalcPositions )( 
            ISpecificationNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCreateObject )( 
            ISpecificationNotify * This,
            long typeObj);
        
        END_INTERFACE
    } ISpecificationNotifyVtbl;

    interface ISpecificationNotify
    {
        CONST_VTBL struct ISpecificationNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpecificationNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISpecificationNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISpecificationNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISpecificationNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define ISpecificationNotify_TuningSpcStyleBeginChange(This,libName,numb)	\
    (This)->lpVtbl -> TuningSpcStyleBeginChange(This,libName,numb)

#define ISpecificationNotify_TuningSpcStyleChange(This,libName,numb,isOk)	\
    (This)->lpVtbl -> TuningSpcStyleChange(This,libName,numb,isOk)

#define ISpecificationNotify_ChangeCurrentSpcDescription(This,libName,numb)	\
    (This)->lpVtbl -> ChangeCurrentSpcDescription(This,libName,numb)

#define ISpecificationNotify_SpcDescriptionAdd(This,libName,numb)	\
    (This)->lpVtbl -> SpcDescriptionAdd(This,libName,numb)

#define ISpecificationNotify_SpcDescriptionRemove(This,libName,numb)	\
    (This)->lpVtbl -> SpcDescriptionRemove(This,libName,numb)

#define ISpecificationNotify_SpcDescriptionBeginEdit(This,libName,numb)	\
    (This)->lpVtbl -> SpcDescriptionBeginEdit(This,libName,numb)

#define ISpecificationNotify_SpcDescriptionEdit(This,libName,numb,isOk)	\
    (This)->lpVtbl -> SpcDescriptionEdit(This,libName,numb,isOk)

#define ISpecificationNotify_SynchronizationBegin(This)	\
    (This)->lpVtbl -> SynchronizationBegin(This)

#define ISpecificationNotify_Synchronization(This)	\
    (This)->lpVtbl -> Synchronization(This)

#define ISpecificationNotify_BeginCalcPositions(This)	\
    (This)->lpVtbl -> BeginCalcPositions(This)

#define ISpecificationNotify_CalcPositions(This)	\
    (This)->lpVtbl -> CalcPositions(This)

#define ISpecificationNotify_BeginCreateObject(This,typeObj)	\
    (This)->lpVtbl -> BeginCreateObject(This,typeObj)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_TuningSpcStyleBeginChange_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpecificationNotify_TuningSpcStyleBeginChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_TuningSpcStyleChange_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb,
    VARIANT_BOOL isOk);


void __RPC_STUB ISpecificationNotify_TuningSpcStyleChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_ChangeCurrentSpcDescription_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpecificationNotify_ChangeCurrentSpcDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_SpcDescriptionAdd_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpecificationNotify_SpcDescriptionAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_SpcDescriptionRemove_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpecificationNotify_SpcDescriptionRemove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_SpcDescriptionBeginEdit_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb);


void __RPC_STUB ISpecificationNotify_SpcDescriptionBeginEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_SpcDescriptionEdit_Proxy( 
    ISpecificationNotify * This,
    LPCSTR libName,
    long numb,
    VARIANT_BOOL isOk);


void __RPC_STUB ISpecificationNotify_SpcDescriptionEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_SynchronizationBegin_Proxy( 
    ISpecificationNotify * This);


void __RPC_STUB ISpecificationNotify_SynchronizationBegin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_Synchronization_Proxy( 
    ISpecificationNotify * This);


void __RPC_STUB ISpecificationNotify_Synchronization_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_BeginCalcPositions_Proxy( 
    ISpecificationNotify * This);


void __RPC_STUB ISpecificationNotify_BeginCalcPositions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_CalcPositions_Proxy( 
    ISpecificationNotify * This);


void __RPC_STUB ISpecificationNotify_CalcPositions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ISpecificationNotify_BeginCreateObject_Proxy( 
    ISpecificationNotify * This,
    long typeObj);


void __RPC_STUB ISpecificationNotify_BeginCreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISpecificationNotify_INTERFACE_DEFINED__ */


#ifndef __IDocument2DNotify_INTERFACE_DEFINED__
#define __IDocument2DNotify_INTERFACE_DEFINED__

/* interface IDocument2DNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDocument2DNotify,0x3A1D1701,0xBA12,0x4d88,0x9C,0x29,0x7C,0x0F,0xAF,0x7A,0x28,0x00);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A1D1701-BA12-4d88-9C29-7C0FAF7A2800")
    IDocument2DNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginRebuild( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Rebuild( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginChoiceMaterial( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChoiceMaterial( 
            LPCSTR material,
            double density) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginInsertFragment( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE LocalFragmentEdit( 
            long pDoc,
            VARIANT_BOOL newFrw) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginChoiceProperty( 
            long objRef,
            double propID) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChoiceProperty( 
            long objRef,
            double propID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDocument2DNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocument2DNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocument2DNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocument2DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IDocument2DNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginRebuild )( 
            IDocument2DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Rebuild )( 
            IDocument2DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginChoiceMaterial )( 
            IDocument2DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChoiceMaterial )( 
            IDocument2DNotify * This,
            LPCSTR material,
            double density);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginInsertFragment )( 
            IDocument2DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *LocalFragmentEdit )( 
            IDocument2DNotify * This,
            long pDoc,
            VARIANT_BOOL newFrw);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginChoiceProperty )( 
            IDocument2DNotify * This,
            long objRef,
            double propID);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChoiceProperty )( 
            IDocument2DNotify * This,
            long objRef,
            double propID);
        
        END_INTERFACE
    } IDocument2DNotifyVtbl;

    interface IDocument2DNotify
    {
        CONST_VTBL struct IDocument2DNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocument2DNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDocument2DNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDocument2DNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDocument2DNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IDocument2DNotify_BeginRebuild(This)	\
    (This)->lpVtbl -> BeginRebuild(This)

#define IDocument2DNotify_Rebuild(This)	\
    (This)->lpVtbl -> Rebuild(This)

#define IDocument2DNotify_BeginChoiceMaterial(This)	\
    (This)->lpVtbl -> BeginChoiceMaterial(This)

#define IDocument2DNotify_ChoiceMaterial(This,material,density)	\
    (This)->lpVtbl -> ChoiceMaterial(This,material,density)

#define IDocument2DNotify_BeginInsertFragment(This)	\
    (This)->lpVtbl -> BeginInsertFragment(This)

#define IDocument2DNotify_LocalFragmentEdit(This,pDoc,newFrw)	\
    (This)->lpVtbl -> LocalFragmentEdit(This,pDoc,newFrw)

#define IDocument2DNotify_BeginChoiceProperty(This,objRef,propID)	\
    (This)->lpVtbl -> BeginChoiceProperty(This,objRef,propID)

#define IDocument2DNotify_ChoiceProperty(This,objRef,propID)	\
    (This)->lpVtbl -> ChoiceProperty(This,objRef,propID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_BeginRebuild_Proxy( 
    IDocument2DNotify * This);


void __RPC_STUB IDocument2DNotify_BeginRebuild_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_Rebuild_Proxy( 
    IDocument2DNotify * This);


void __RPC_STUB IDocument2DNotify_Rebuild_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_BeginChoiceMaterial_Proxy( 
    IDocument2DNotify * This);


void __RPC_STUB IDocument2DNotify_BeginChoiceMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_ChoiceMaterial_Proxy( 
    IDocument2DNotify * This,
    LPCSTR material,
    double density);


void __RPC_STUB IDocument2DNotify_ChoiceMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_BeginInsertFragment_Proxy( 
    IDocument2DNotify * This);


void __RPC_STUB IDocument2DNotify_BeginInsertFragment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_LocalFragmentEdit_Proxy( 
    IDocument2DNotify * This,
    long pDoc,
    VARIANT_BOOL newFrw);


void __RPC_STUB IDocument2DNotify_LocalFragmentEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_BeginChoiceProperty_Proxy( 
    IDocument2DNotify * This,
    long objRef,
    double propID);


void __RPC_STUB IDocument2DNotify_BeginChoiceProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocument2DNotify_ChoiceProperty_Proxy( 
    IDocument2DNotify * This,
    long objRef,
    double propID);


void __RPC_STUB IDocument2DNotify_ChoiceProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDocument2DNotify_INTERFACE_DEFINED__ */


#ifndef __IPropertyManagerNotify_INTERFACE_DEFINED__
#define __IPropertyManagerNotify_INTERFACE_DEFINED__

/* interface IPropertyManagerNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPropertyManagerNotify,0x9AB42E3B,0x7437,0x407e,0x96,0x0A,0x4F,0x50,0x98,0x12,0xAB,0x11);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9AB42E3B-7437-407e-960A-4F509812AB11")
    IPropertyManagerNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ButtonClick( 
            long buttonID) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeControlValue( 
            LPUNKNOWN ctrl) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ControlCommand( 
            LPUNKNOWN ctrl,
            long buttonID) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ButtonUpdate( 
            long buttonID,
            long *check,
            VARIANT_BOOL *_enable) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ProcessActivate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ProcessDeactivate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CommandHelp( 
            long ID) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SelectItem( 
            LPUNKNOWN Control,
            long Index,
            VARIANT_BOOL Select) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CheckItem( 
            LPUNKNOWN Control,
            long Index,
            VARIANT_BOOL Check) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeActiveTab( 
            long TabIndex) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EditFocus( 
            LPUNKNOWN ctrl,
            VARIANT_BOOL Set) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE UserMenuCommand( 
            LPUNKNOWN ctrl,
            long menuID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyManagerNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IPropertyManagerNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ButtonClick )( 
            IPropertyManagerNotify * This,
            long buttonID);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeControlValue )( 
            IPropertyManagerNotify * This,
            LPUNKNOWN ctrl);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ControlCommand )( 
            IPropertyManagerNotify * This,
            LPUNKNOWN ctrl,
            long buttonID);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ButtonUpdate )( 
            IPropertyManagerNotify * This,
            long buttonID,
            long *check,
            VARIANT_BOOL *_enable);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ProcessActivate )( 
            IPropertyManagerNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ProcessDeactivate )( 
            IPropertyManagerNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CommandHelp )( 
            IPropertyManagerNotify * This,
            long ID);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SelectItem )( 
            IPropertyManagerNotify * This,
            LPUNKNOWN Control,
            long Index,
            VARIANT_BOOL Select);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CheckItem )( 
            IPropertyManagerNotify * This,
            LPUNKNOWN Control,
            long Index,
            VARIANT_BOOL Check);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeActiveTab )( 
            IPropertyManagerNotify * This,
            long TabIndex);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EditFocus )( 
            IPropertyManagerNotify * This,
            LPUNKNOWN ctrl,
            VARIANT_BOOL Set);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *UserMenuCommand )( 
            IPropertyManagerNotify * This,
            LPUNKNOWN ctrl,
            long menuID);
        
        END_INTERFACE
    } IPropertyManagerNotifyVtbl;

    interface IPropertyManagerNotify
    {
        CONST_VTBL struct IPropertyManagerNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyManagerNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyManagerNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyManagerNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IPropertyManagerNotify_ButtonClick(This,buttonID)	\
    (This)->lpVtbl -> ButtonClick(This,buttonID)

#define IPropertyManagerNotify_ChangeControlValue(This,ctrl)	\
    (This)->lpVtbl -> ChangeControlValue(This,ctrl)

#define IPropertyManagerNotify_ControlCommand(This,ctrl,buttonID)	\
    (This)->lpVtbl -> ControlCommand(This,ctrl,buttonID)

#define IPropertyManagerNotify_ButtonUpdate(This,buttonID,check,_enable)	\
    (This)->lpVtbl -> ButtonUpdate(This,buttonID,check,_enable)

#define IPropertyManagerNotify_ProcessActivate(This)	\
    (This)->lpVtbl -> ProcessActivate(This)

#define IPropertyManagerNotify_ProcessDeactivate(This)	\
    (This)->lpVtbl -> ProcessDeactivate(This)

#define IPropertyManagerNotify_CommandHelp(This,ID)	\
    (This)->lpVtbl -> CommandHelp(This,ID)

#define IPropertyManagerNotify_SelectItem(This,Control,Index,Select)	\
    (This)->lpVtbl -> SelectItem(This,Control,Index,Select)

#define IPropertyManagerNotify_CheckItem(This,Control,Index,Check)	\
    (This)->lpVtbl -> CheckItem(This,Control,Index,Check)

#define IPropertyManagerNotify_ChangeActiveTab(This,TabIndex)	\
    (This)->lpVtbl -> ChangeActiveTab(This,TabIndex)

#define IPropertyManagerNotify_EditFocus(This,ctrl,Set)	\
    (This)->lpVtbl -> EditFocus(This,ctrl,Set)

#define IPropertyManagerNotify_UserMenuCommand(This,ctrl,menuID)	\
    (This)->lpVtbl -> UserMenuCommand(This,ctrl,menuID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ButtonClick_Proxy( 
    IPropertyManagerNotify * This,
    long buttonID);


void __RPC_STUB IPropertyManagerNotify_ButtonClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ChangeControlValue_Proxy( 
    IPropertyManagerNotify * This,
    LPUNKNOWN ctrl);


void __RPC_STUB IPropertyManagerNotify_ChangeControlValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ControlCommand_Proxy( 
    IPropertyManagerNotify * This,
    LPUNKNOWN ctrl,
    long buttonID);


void __RPC_STUB IPropertyManagerNotify_ControlCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ButtonUpdate_Proxy( 
    IPropertyManagerNotify * This,
    long buttonID,
    long *check,
    VARIANT_BOOL *_enable);


void __RPC_STUB IPropertyManagerNotify_ButtonUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ProcessActivate_Proxy( 
    IPropertyManagerNotify * This);


void __RPC_STUB IPropertyManagerNotify_ProcessActivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ProcessDeactivate_Proxy( 
    IPropertyManagerNotify * This);


void __RPC_STUB IPropertyManagerNotify_ProcessDeactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_CommandHelp_Proxy( 
    IPropertyManagerNotify * This,
    long ID);


void __RPC_STUB IPropertyManagerNotify_CommandHelp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_SelectItem_Proxy( 
    IPropertyManagerNotify * This,
    LPUNKNOWN Control,
    long Index,
    VARIANT_BOOL Select);


void __RPC_STUB IPropertyManagerNotify_SelectItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_CheckItem_Proxy( 
    IPropertyManagerNotify * This,
    LPUNKNOWN Control,
    long Index,
    VARIANT_BOOL Check);


void __RPC_STUB IPropertyManagerNotify_CheckItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_ChangeActiveTab_Proxy( 
    IPropertyManagerNotify * This,
    long TabIndex);


void __RPC_STUB IPropertyManagerNotify_ChangeActiveTab_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_EditFocus_Proxy( 
    IPropertyManagerNotify * This,
    LPUNKNOWN ctrl,
    VARIANT_BOOL Set);


void __RPC_STUB IPropertyManagerNotify_EditFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IPropertyManagerNotify_UserMenuCommand_Proxy( 
    IPropertyManagerNotify * This,
    LPUNKNOWN ctrl,
    long menuID);


void __RPC_STUB IPropertyManagerNotify_UserMenuCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyManagerNotify_INTERFACE_DEFINED__ */


#ifndef __IDocumentFrameNotify_INTERFACE_DEFINED__
#define __IDocumentFrameNotify_INTERFACE_DEFINED__

/* interface IDocumentFrameNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDocumentFrameNotify,0xA715A2F6,0x3210,0x4890,0x9E,0xB4,0x32,0x7A,0x06,0xF9,0x0E,0xB6);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A715A2F6-3210-4890-9EB4-327A06F90EB6")
    IDocumentFrameNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginPaint( 
            IUnknown *paintObj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ClosePaint( 
            IUnknown *paintObj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE MouseDown( 
            short nButton,
            short nShiftState,
            long x,
            long y) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE MouseUp( 
            short nButton,
            short nShiftState,
            long x,
            long y) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE MouseDblClick( 
            short nButton,
            short nShiftState,
            long x,
            long y) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginPaintGL( 
            long drawMode) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ClosePaintGL( 
            long drawMode) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE AddGabarit( 
            IUnknown *gabObj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CloseFrame( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE MouseMove( 
            short nShiftState,
            long x,
            long y) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ShowOcxTree( 
            IUnknown *tree,
            VARIANT_BOOL show) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDocumentFrameNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocumentFrameNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocumentFrameNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocumentFrameNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IDocumentFrameNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginPaint )( 
            IDocumentFrameNotify * This,
            IUnknown *paintObj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ClosePaint )( 
            IDocumentFrameNotify * This,
            IUnknown *paintObj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *MouseDown )( 
            IDocumentFrameNotify * This,
            short nButton,
            short nShiftState,
            long x,
            long y);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *MouseUp )( 
            IDocumentFrameNotify * This,
            short nButton,
            short nShiftState,
            long x,
            long y);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *MouseDblClick )( 
            IDocumentFrameNotify * This,
            short nButton,
            short nShiftState,
            long x,
            long y);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginPaintGL )( 
            IDocumentFrameNotify * This,
            long drawMode);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ClosePaintGL )( 
            IDocumentFrameNotify * This,
            long drawMode);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *AddGabarit )( 
            IDocumentFrameNotify * This,
            IUnknown *gabObj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Activate )( 
            IDocumentFrameNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Deactivate )( 
            IDocumentFrameNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CloseFrame )( 
            IDocumentFrameNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *MouseMove )( 
            IDocumentFrameNotify * This,
            short nShiftState,
            long x,
            long y);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ShowOcxTree )( 
            IDocumentFrameNotify * This,
            IUnknown *tree,
            VARIANT_BOOL show);
        
        END_INTERFACE
    } IDocumentFrameNotifyVtbl;

    interface IDocumentFrameNotify
    {
        CONST_VTBL struct IDocumentFrameNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocumentFrameNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDocumentFrameNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDocumentFrameNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDocumentFrameNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IDocumentFrameNotify_BeginPaint(This,paintObj)	\
    (This)->lpVtbl -> BeginPaint(This,paintObj)

#define IDocumentFrameNotify_ClosePaint(This,paintObj)	\
    (This)->lpVtbl -> ClosePaint(This,paintObj)

#define IDocumentFrameNotify_MouseDown(This,nButton,nShiftState,x,y)	\
    (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,x,y)

#define IDocumentFrameNotify_MouseUp(This,nButton,nShiftState,x,y)	\
    (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,x,y)

#define IDocumentFrameNotify_MouseDblClick(This,nButton,nShiftState,x,y)	\
    (This)->lpVtbl -> MouseDblClick(This,nButton,nShiftState,x,y)

#define IDocumentFrameNotify_BeginPaintGL(This,drawMode)	\
    (This)->lpVtbl -> BeginPaintGL(This,drawMode)

#define IDocumentFrameNotify_ClosePaintGL(This,drawMode)	\
    (This)->lpVtbl -> ClosePaintGL(This,drawMode)

#define IDocumentFrameNotify_AddGabarit(This,gabObj)	\
    (This)->lpVtbl -> AddGabarit(This,gabObj)

#define IDocumentFrameNotify_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#define IDocumentFrameNotify_Deactivate(This)	\
    (This)->lpVtbl -> Deactivate(This)

#define IDocumentFrameNotify_CloseFrame(This)	\
    (This)->lpVtbl -> CloseFrame(This)

#define IDocumentFrameNotify_MouseMove(This,nShiftState,x,y)	\
    (This)->lpVtbl -> MouseMove(This,nShiftState,x,y)

#define IDocumentFrameNotify_ShowOcxTree(This,tree,show)	\
    (This)->lpVtbl -> ShowOcxTree(This,tree,show)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_BeginPaint_Proxy( 
    IDocumentFrameNotify * This,
    IUnknown *paintObj);


void __RPC_STUB IDocumentFrameNotify_BeginPaint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_ClosePaint_Proxy( 
    IDocumentFrameNotify * This,
    IUnknown *paintObj);


void __RPC_STUB IDocumentFrameNotify_ClosePaint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_MouseDown_Proxy( 
    IDocumentFrameNotify * This,
    short nButton,
    short nShiftState,
    long x,
    long y);


void __RPC_STUB IDocumentFrameNotify_MouseDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_MouseUp_Proxy( 
    IDocumentFrameNotify * This,
    short nButton,
    short nShiftState,
    long x,
    long y);


void __RPC_STUB IDocumentFrameNotify_MouseUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_MouseDblClick_Proxy( 
    IDocumentFrameNotify * This,
    short nButton,
    short nShiftState,
    long x,
    long y);


void __RPC_STUB IDocumentFrameNotify_MouseDblClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_BeginPaintGL_Proxy( 
    IDocumentFrameNotify * This,
    long drawMode);


void __RPC_STUB IDocumentFrameNotify_BeginPaintGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_ClosePaintGL_Proxy( 
    IDocumentFrameNotify * This,
    long drawMode);


void __RPC_STUB IDocumentFrameNotify_ClosePaintGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_AddGabarit_Proxy( 
    IDocumentFrameNotify * This,
    IUnknown *gabObj);


void __RPC_STUB IDocumentFrameNotify_AddGabarit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_Activate_Proxy( 
    IDocumentFrameNotify * This);


void __RPC_STUB IDocumentFrameNotify_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_Deactivate_Proxy( 
    IDocumentFrameNotify * This);


void __RPC_STUB IDocumentFrameNotify_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_CloseFrame_Proxy( 
    IDocumentFrameNotify * This);


void __RPC_STUB IDocumentFrameNotify_CloseFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_MouseMove_Proxy( 
    IDocumentFrameNotify * This,
    short nShiftState,
    long x,
    long y);


void __RPC_STUB IDocumentFrameNotify_MouseMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IDocumentFrameNotify_ShowOcxTree_Proxy( 
    IDocumentFrameNotify * This,
    IUnknown *tree,
    VARIANT_BOOL show);


void __RPC_STUB IDocumentFrameNotify_ShowOcxTree_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDocumentFrameNotify_INTERFACE_DEFINED__ */


#ifndef __IViewsAndLayersManagerNotify_INTERFACE_DEFINED__
#define __IViewsAndLayersManagerNotify_INTERFACE_DEFINED__

/* interface IViewsAndLayersManagerNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IViewsAndLayersManagerNotify,0x341D4571,0x16F4,0x4928,0x90,0x3E,0x69,0x06,0xE5,0x6D,0xAC,0xD1);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("341D4571-16F4-4928-903E-6906E56DACD1")
    IViewsAndLayersManagerNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginEdit( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndEdit( 
            VARIANT_BOOL isOk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IViewsAndLayersManagerNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewsAndLayersManagerNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewsAndLayersManagerNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewsAndLayersManagerNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IViewsAndLayersManagerNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginEdit )( 
            IViewsAndLayersManagerNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndEdit )( 
            IViewsAndLayersManagerNotify * This,
            VARIANT_BOOL isOk);
        
        END_INTERFACE
    } IViewsAndLayersManagerNotifyVtbl;

    interface IViewsAndLayersManagerNotify
    {
        CONST_VTBL struct IViewsAndLayersManagerNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewsAndLayersManagerNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IViewsAndLayersManagerNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IViewsAndLayersManagerNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IViewsAndLayersManagerNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define IViewsAndLayersManagerNotify_BeginEdit(This)	\
    (This)->lpVtbl -> BeginEdit(This)

#define IViewsAndLayersManagerNotify_EndEdit(This,isOk)	\
    (This)->lpVtbl -> EndEdit(This,isOk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IViewsAndLayersManagerNotify_BeginEdit_Proxy( 
    IViewsAndLayersManagerNotify * This);


void __RPC_STUB IViewsAndLayersManagerNotify_BeginEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IViewsAndLayersManagerNotify_EndEdit_Proxy( 
    IViewsAndLayersManagerNotify * This,
    VARIANT_BOOL isOk);


void __RPC_STUB IViewsAndLayersManagerNotify_EndEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IViewsAndLayersManagerNotify_INTERFACE_DEFINED__ */


#ifndef __ILibraryManagerNotify_INTERFACE_DEFINED__
#define __ILibraryManagerNotify_INTERFACE_DEFINED__

/* interface ILibraryManagerNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ILibraryManagerNotify,0x30265782,0x7631,0x4957,0xAF,0x51,0x45,0x8C,0xAA,0x9A,0x76,0xEC);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30265782-7631-4957-AF51-458CAA9A76EC")
    ILibraryManagerNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginAttach( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Attach( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginDetach( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Detach( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginExecute( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndExecute( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SystemControlStop( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SystemControlStart( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE AddLibraryDescription( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DeleteLibraryDescription( 
            IUnknown *PLibrary) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE AddInsert( 
            IUnknown *PInsert,
            VARIANT_BOOL create) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DeleteInsert( 
            IUnknown *PInsert) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EditInsert( 
            IUnknown *PLibrary,
            long pDoc,
            VARIANT_BOOL newFrw) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILibraryManagerNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILibraryManagerNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILibraryManagerNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILibraryManagerNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            ILibraryManagerNotify * This,
            int notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginAttach )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Attach )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginDetach )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Detach )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginExecute )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndExecute )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SystemControlStop )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SystemControlStart )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *AddLibraryDescription )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DeleteLibraryDescription )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *AddInsert )( 
            ILibraryManagerNotify * This,
            IUnknown *PInsert,
            VARIANT_BOOL create);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DeleteInsert )( 
            ILibraryManagerNotify * This,
            IUnknown *PInsert);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EditInsert )( 
            ILibraryManagerNotify * This,
            IUnknown *PLibrary,
            long pDoc,
            VARIANT_BOOL newFrw);
        
        END_INTERFACE
    } ILibraryManagerNotifyVtbl;

    interface ILibraryManagerNotify
    {
        CONST_VTBL struct ILibraryManagerNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILibraryManagerNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILibraryManagerNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILibraryManagerNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILibraryManagerNotify_IsNotifyProcess(This,notifyType)	\
    (This)->lpVtbl -> IsNotifyProcess(This,notifyType)


#define ILibraryManagerNotify_BeginAttach(This,PLibrary)	\
    (This)->lpVtbl -> BeginAttach(This,PLibrary)

#define ILibraryManagerNotify_Attach(This,PLibrary)	\
    (This)->lpVtbl -> Attach(This,PLibrary)

#define ILibraryManagerNotify_BeginDetach(This,PLibrary)	\
    (This)->lpVtbl -> BeginDetach(This,PLibrary)

#define ILibraryManagerNotify_Detach(This,PLibrary)	\
    (This)->lpVtbl -> Detach(This,PLibrary)

#define ILibraryManagerNotify_BeginExecute(This,PLibrary)	\
    (This)->lpVtbl -> BeginExecute(This,PLibrary)

#define ILibraryManagerNotify_EndExecute(This,PLibrary)	\
    (This)->lpVtbl -> EndExecute(This,PLibrary)

#define ILibraryManagerNotify_SystemControlStop(This,PLibrary)	\
    (This)->lpVtbl -> SystemControlStop(This,PLibrary)

#define ILibraryManagerNotify_SystemControlStart(This,PLibrary)	\
    (This)->lpVtbl -> SystemControlStart(This,PLibrary)

#define ILibraryManagerNotify_AddLibraryDescription(This,PLibrary)	\
    (This)->lpVtbl -> AddLibraryDescription(This,PLibrary)

#define ILibraryManagerNotify_DeleteLibraryDescription(This,PLibrary)	\
    (This)->lpVtbl -> DeleteLibraryDescription(This,PLibrary)

#define ILibraryManagerNotify_AddInsert(This,PInsert,create)	\
    (This)->lpVtbl -> AddInsert(This,PInsert,create)

#define ILibraryManagerNotify_DeleteInsert(This,PInsert)	\
    (This)->lpVtbl -> DeleteInsert(This,PInsert)

#define ILibraryManagerNotify_EditInsert(This,PLibrary,pDoc,newFrw)	\
    (This)->lpVtbl -> EditInsert(This,PLibrary,pDoc,newFrw)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_BeginAttach_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_BeginAttach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_Attach_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_Attach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_BeginDetach_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_BeginDetach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_Detach_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_Detach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_BeginExecute_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_BeginExecute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_EndExecute_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_EndExecute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_SystemControlStop_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_SystemControlStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_SystemControlStart_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_SystemControlStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_AddLibraryDescription_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_AddLibraryDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_DeleteLibraryDescription_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary);


void __RPC_STUB ILibraryManagerNotify_DeleteLibraryDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_AddInsert_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PInsert,
    VARIANT_BOOL create);


void __RPC_STUB ILibraryManagerNotify_AddInsert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_DeleteInsert_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PInsert);


void __RPC_STUB ILibraryManagerNotify_DeleteInsert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ILibraryManagerNotify_EditInsert_Proxy( 
    ILibraryManagerNotify * This,
    IUnknown *PLibrary,
    long pDoc,
    VARIANT_BOOL newFrw);


void __RPC_STUB ILibraryManagerNotify_EditInsert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILibraryManagerNotify_INTERFACE_DEFINED__ */


#ifndef __IParametrizationParam_INTERFACE_DEFINED__
#define __IParametrizationParam_INTERFACE_DEFINED__

/* interface IParametrizationParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IParametrizationParam,0xABBA6CE0,0xCB4C,0x4a32,0x98,0xB4,0xB6,0x39,0x35,0x2C,0x75,0xCC);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ABBA6CE0-CB4C-4a32-98B4-B639352C75CC")
    IParametrizationParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetNearestPoints( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetNearestPoints( 
            VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetPointsLimit( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetPointsLimit( 
            double value) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetHorizontal( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetHorizontal( 
            VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetVertical( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetVertical( 
            VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetParallel( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetParallel( 
            VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE GetPerpendicular( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetPerpendicular( 
            VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngleLimit( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE SetAngleLimit( 
            double value) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Init( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IParametrizationParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IParametrizationParam * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IParametrizationParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetNearestPoints )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetNearestPoints )( 
            IParametrizationParam * This,
            VARIANT_BOOL value);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetPointsLimit )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetPointsLimit )( 
            IParametrizationParam * This,
            double value);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetHorizontal )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetHorizontal )( 
            IParametrizationParam * This,
            VARIANT_BOOL value);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetVertical )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetVertical )( 
            IParametrizationParam * This,
            VARIANT_BOOL value);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetParallel )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetParallel )( 
            IParametrizationParam * This,
            VARIANT_BOOL value);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *GetPerpendicular )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetPerpendicular )( 
            IParametrizationParam * This,
            VARIANT_BOOL value);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngleLimit )( 
            IParametrizationParam * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *SetAngleLimit )( 
            IParametrizationParam * This,
            double value);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Init )( 
            IParametrizationParam * This);
        
        END_INTERFACE
    } IParametrizationParamVtbl;

    interface IParametrizationParam
    {
        CONST_VTBL struct IParametrizationParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParametrizationParam_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IParametrizationParam_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IParametrizationParam_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IParametrizationParam_GetNearestPoints(This)	\
    (This)->lpVtbl -> GetNearestPoints(This)

#define IParametrizationParam_SetNearestPoints(This,value)	\
    (This)->lpVtbl -> SetNearestPoints(This,value)

#define IParametrizationParam_GetPointsLimit(This)	\
    (This)->lpVtbl -> GetPointsLimit(This)

#define IParametrizationParam_SetPointsLimit(This,value)	\
    (This)->lpVtbl -> SetPointsLimit(This,value)

#define IParametrizationParam_GetHorizontal(This)	\
    (This)->lpVtbl -> GetHorizontal(This)

#define IParametrizationParam_SetHorizontal(This,value)	\
    (This)->lpVtbl -> SetHorizontal(This,value)

#define IParametrizationParam_GetVertical(This)	\
    (This)->lpVtbl -> GetVertical(This)

#define IParametrizationParam_SetVertical(This,value)	\
    (This)->lpVtbl -> SetVertical(This,value)

#define IParametrizationParam_GetParallel(This)	\
    (This)->lpVtbl -> GetParallel(This)

#define IParametrizationParam_SetParallel(This,value)	\
    (This)->lpVtbl -> SetParallel(This,value)

#define IParametrizationParam_GetPerpendicular(This)	\
    (This)->lpVtbl -> GetPerpendicular(This)

#define IParametrizationParam_SetPerpendicular(This,value)	\
    (This)->lpVtbl -> SetPerpendicular(This,value)

#define IParametrizationParam_GetAngleLimit(This)	\
    (This)->lpVtbl -> GetAngleLimit(This)

#define IParametrizationParam_SetAngleLimit(This,value)	\
    (This)->lpVtbl -> SetAngleLimit(This,value)

#define IParametrizationParam_Init(This)	\
    (This)->lpVtbl -> Init(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_GetNearestPoints_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetNearestPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetNearestPoints_Proxy( 
    IParametrizationParam * This,
    VARIANT_BOOL value);


void __RPC_STUB IParametrizationParam_SetNearestPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ double STDMETHODCALLTYPE IParametrizationParam_GetPointsLimit_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetPointsLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetPointsLimit_Proxy( 
    IParametrizationParam * This,
    double value);


void __RPC_STUB IParametrizationParam_SetPointsLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_GetHorizontal_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetHorizontal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetHorizontal_Proxy( 
    IParametrizationParam * This,
    VARIANT_BOOL value);


void __RPC_STUB IParametrizationParam_SetHorizontal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_GetVertical_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetVertical_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetVertical_Proxy( 
    IParametrizationParam * This,
    VARIANT_BOOL value);


void __RPC_STUB IParametrizationParam_SetVertical_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_GetParallel_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetParallel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetParallel_Proxy( 
    IParametrizationParam * This,
    VARIANT_BOOL value);


void __RPC_STUB IParametrizationParam_SetParallel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_GetPerpendicular_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetPerpendicular_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetPerpendicular_Proxy( 
    IParametrizationParam * This,
    VARIANT_BOOL value);


void __RPC_STUB IParametrizationParam_SetPerpendicular_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ double STDMETHODCALLTYPE IParametrizationParam_GetAngleLimit_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_GetAngleLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_SetAngleLimit_Proxy( 
    IParametrizationParam * This,
    double value);


void __RPC_STUB IParametrizationParam_SetAngleLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE IParametrizationParam_Init_Proxy( 
    IParametrizationParam * This);


void __RPC_STUB IParametrizationParam_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IParametrizationParam_INTERFACE_DEFINED__ */

#endif /* __Kompas6API2D5COM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



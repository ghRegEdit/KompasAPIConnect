

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Mar 25 02:52:57 2011
 */
/* Compiler settings for .\ConvertLibInterfaces.odl:
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


#ifndef __ConvertLibIntDual_h__
#define __ConvertLibIntDual_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKompasConverter_FWD_DEFINED__
#define __IKompasConverter_FWD_DEFINED__
typedef interface IKompasConverter IKompasConverter;
#endif 	/* __IKompasConverter_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __CONVERTLIBINTERFACES_LIBRARY_DEFINED__
#define __CONVERTLIBINTERFACES_LIBRARY_DEFINED__

/* library CONVERTLIBINTERFACES */
/* [helpfile][version][uuid] */ 


typedef IKompasConverter *LPKOMPASCONVERTER;


DEFINE_GUID(LIBID_CONVERTLIBINTERFACES,0xBC89C6E1,0x8016,0x429c,0xA0,0x93,0x30,0x0B,0x3F,0x18,0xDB,0x21);

#ifndef __IKompasConverter_INTERFACE_DEFINED__
#define __IKompasConverter_INTERFACE_DEFINED__

/* interface IKompasConverter */
/* [object][helpstring][nonextensible][unique][dual][oleautomation][uuid] */ 


DEFINE_GUID(IID_IKompasConverter,0x735140E9,0xF6B5,0x42e9,0x90,0x08,0x71,0x73,0x0C,0x61,0x70,0x67);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("735140E9-F6B5-42e9-9008-71730C617067")
    IKompasConverter : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConverterParameters( 
            /* [in] */ long command,
            /* [retval][out] */ IUnknown **iParam) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanUnloadLibrary( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilter( 
            /* [in] */ long docType,
            /* [in] */ VARIANT_BOOL saveAs,
            /* [out] */ long *command,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Convert( 
            /* [in] */ BSTR inputFile,
            /* [in] */ BSTR outfile,
            /* [in] */ long command,
            /* [in] */ VARIANT_BOOL showParam,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VisualEditConvertParam( 
            /* [in] */ /* external definition not present */ OLE_HANDLE parentHwnd,
            /* [in] */ long command,
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKompasConverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKompasConverter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKompasConverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKompasConverter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKompasConverter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKompasConverter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKompasConverter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKompasConverter * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConverterParameters )( 
            IKompasConverter * This,
            /* [in] */ long command,
            /* [retval][out] */ IUnknown **iParam);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanUnloadLibrary )( 
            IKompasConverter * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilter )( 
            IKompasConverter * This,
            /* [in] */ long docType,
            /* [in] */ VARIANT_BOOL saveAs,
            /* [out] */ long *command,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Convert )( 
            IKompasConverter * This,
            /* [in] */ BSTR inputFile,
            /* [in] */ BSTR outfile,
            /* [in] */ long command,
            /* [in] */ VARIANT_BOOL showParam,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VisualEditConvertParam )( 
            IKompasConverter * This,
            /* [in] */ /* external definition not present */ OLE_HANDLE parentHwnd,
            /* [in] */ long command,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        END_INTERFACE
    } IKompasConverterVtbl;

    interface IKompasConverter
    {
        CONST_VTBL struct IKompasConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKompasConverter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IKompasConverter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IKompasConverter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IKompasConverter_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IKompasConverter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IKompasConverter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IKompasConverter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IKompasConverter_ConverterParameters(This,command,iParam)	\
    (This)->lpVtbl -> ConverterParameters(This,command,iParam)

#define IKompasConverter_get_CanUnloadLibrary(This,val)	\
    (This)->lpVtbl -> get_CanUnloadLibrary(This,val)

#define IKompasConverter_GetFilter(This,docType,saveAs,command,Result)	\
    (This)->lpVtbl -> GetFilter(This,docType,saveAs,command,Result)

#define IKompasConverter_Convert(This,inputFile,outfile,command,showParam,Result)	\
    (This)->lpVtbl -> Convert(This,inputFile,outfile,command,showParam,Result)

#define IKompasConverter_VisualEditConvertParam(This,parentHwnd,command,val)	\
    (This)->lpVtbl -> VisualEditConvertParam(This,parentHwnd,command,val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IKompasConverter_ConverterParameters_Proxy( 
    IKompasConverter * This,
    /* [in] */ long command,
    /* [retval][out] */ IUnknown **iParam);


void __RPC_STUB IKompasConverter_ConverterParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IKompasConverter_get_CanUnloadLibrary_Proxy( 
    IKompasConverter * This,
    /* [retval][out] */ VARIANT_BOOL *val);


void __RPC_STUB IKompasConverter_get_CanUnloadLibrary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IKompasConverter_GetFilter_Proxy( 
    IKompasConverter * This,
    /* [in] */ long docType,
    /* [in] */ VARIANT_BOOL saveAs,
    /* [out] */ long *command,
    /* [retval][out] */ BSTR *Result);


void __RPC_STUB IKompasConverter_GetFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IKompasConverter_Convert_Proxy( 
    IKompasConverter * This,
    /* [in] */ BSTR inputFile,
    /* [in] */ BSTR outfile,
    /* [in] */ long command,
    /* [in] */ VARIANT_BOOL showParam,
    /* [retval][out] */ long *Result);


void __RPC_STUB IKompasConverter_Convert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IKompasConverter_VisualEditConvertParam_Proxy( 
    IKompasConverter * This,
    /* [in] */ /* external definition not present */ OLE_HANDLE parentHwnd,
    /* [in] */ long command,
    /* [retval][out] */ VARIANT_BOOL *val);


void __RPC_STUB IKompasConverter_VisualEditConvertParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IKompasConverter_INTERFACE_DEFINED__ */

#endif /* __CONVERTLIBINTERFACES_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



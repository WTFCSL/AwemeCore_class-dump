//
//     Generated by private class-dump
//

@class NSString, WKWebView;
@protocol CJPayWebViewUADelegate, CJBizWebDelegate;

@interface CJPayWebViewUtil : NSObject <CJPayWebViewService, CJBizWebDelegate> {
    id<CJBizWebDelegate> _delegate;
    id<CJPayWebViewUADelegate> _uaDelegate;
    NSString *_host;
    WKWebView *_wkWebView;
    Class _klass;
}

@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) WKWebView *wkWebView;
@property (retain, nonatomic) Class klass;
@property (retain, nonatomic) id<CJBizWebDelegate> delegate;
@property (weak, nonatomic) id<CJPayWebViewUADelegate> uaDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedUtil;

- (id)wkWebView;
- (void)openH5ModalViewFrom:(id)arg0 toUrl:(id)arg1;
- (void)setPiperClass:(Class)arg0;
- (void)needLogin:(id /* block */)arg0;
- (void)openCJScheme:(id)arg0;
- (void)openCJScheme:(id)arg0 fromVC:(id)arg1 useModal:(BOOL)arg2;
- (void)gotoWebViewControllerFrom:(id)arg0 toUrl:(id)arg1 params:(id)arg2 nativeStyleParams:(id)arg3 closeCallBack:(id /* block */)arg4;
- (void)setWkWebView:(id)arg0;
- (void)setUaDelegate:(id)arg0;
- (void)gotoWebViewControllerFrom:(id)arg0 toUrl:(id)arg1;
- (void)openH5ModalViewFrom:(id)arg0 toUrl:(id)arg1 style:(long long)arg2 showLoading:(BOOL)arg3 backgroundColor:(id)arg4 animated:(BOOL)arg5 closeCallBack:(id /* block */)arg6 backBlock:(id /* block */)arg7 justCloseBlock:(id /* block */)arg8;
- (id)getWebViewUA;
- (id)obtainSystemUAAndCJPayUAFromCache;
- (BOOL)openPath:(id)arg0 withParams:(id)arg1;
- (void)i_openScheme:(id)arg0 withDelegate:(id)arg1;
- (void)i_openScheme:(id)arg0 callBack:(id /* block */)arg1;
- (void)i_openSchemeByNtvVC:(id)arg0 fromVC:(id)arg1 withInfo:(id)arg2 withDelegate:(id)arg3;
- (void)i_registerBizDelegate:(id)arg0;
- (void)i_openCjSchemaByHost:(id)arg0;
- (void)i_openCjSchemaByHost:(id)arg0 fromVC:(id)arg1 useModal:(BOOL)arg2;
- (void)i_gotoIMServiceWithAppID:(id)arg0 fromVC:(id)arg1;
- (void)gotoWebViewControllerFrom:(id)arg0 toScheme:(id)arg1;
- (void)gotoWebViewControllerFrom:(id)arg0 toUrl:(id)arg1 params:(id)arg2;
- (void)setKlass:(Class)arg0;
- (void)setupUAWithCompletion:(id /* block */)arg0;
- (Class)klass;
- (void)openH5ModalViewFrom:(id)arg0 toUrl:(id)arg1 style:(long long)arg2 showLoading:(BOOL)arg3 backgroundColor:(id)arg4 animated:(BOOL)arg5 closeCallBack:(id /* block */)arg6;
- (id)buildWebViewControllerWithUrl:(id)arg0 fromVC:(id)arg1 params:(id)arg2 nativeStyleParams:(id)arg3 closeCallBack:(id /* block */)arg4;
- (void)gotoWebViewControllerFrom:(id)arg0 toUrl:(id)arg1 params:(id)arg2 nativeStyleParams:(id)arg3;
- (void)gotoWebViewControllerFrom:(id)arg0 useNewNavi:(BOOL)arg1 toUrl:(id)arg2 params:(id)arg3 nativeStyleParams:(id)arg4 closeCallBack:(id /* block */)arg5;
- (void)gotoWebViewControllerFrom:(id)arg0 toUrl:(id)arg1 params:(id)arg2 closeCallBack:(id /* block */)arg3;
- (id)p_extraInfoParam;
- (void)p_openScheme:(id)arg0 callBack:(id /* block */)arg1;
- (id)prepareBeforeGotoWebVCWithURL:(id)arg0;
- (id)p_originalCJPayUserAgent;
- (id)uaDelegate;
- (long long)p_getWebviewContainerStyle:(id)arg0;
- (BOOL)handlesURL:(id)arg0;
- (void)gotoWebViewController:(id)arg0 webviewStyle:(id)arg1 closeCallback:(id /* block */)arg2;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)logoutAccount;

@end
//
//     Generated by private class-dump
//

@class NSString, WKWebView, BDCTImageManager, BDCTFlow;

@interface BDCTCorePiperHandler : NSObject <WKNavigationDelegate, UIScrollViewDelegate, BDCTPiperHandlerProtocol> {
    BDCTFlow *_flow;
    BDCTImageManager *_imageManager;
    WKWebView *_webView;
}

@property (retain, nonatomic) BDCTImageManager *imageManager;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) BDCTFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsbCallbackResultWithParams:(id)arg0 error:(id)arg1;

- (void)fireEvent:(id)arg0 params:(id)arg1;
- (void)registerShowLoading;
- (void)registerHandlerWithWebView:(id)arg0;
- (void)registerSendLog;
- (void)registerWebEvent;
- (void)registerUploadEvent;
- (void)registerSetCertStatusEvent;
- (BOOL)isRuningLiveCert;
- (void)doFaceLivenessWithLivenessType:(id)arg0 piperParams:(id)arg1 jsbCallback:(id /* block */)arg2;
- (void)setIsRuningLiveCert:(BOOL)arg0;
- (void)registerOpenLiveCert;
- (void)registerOpenVideoCert;
- (void)registerAppFetch;
- (void)registerDoRequest;
- (void)registerAppUpload;
- (void)registerTakePhoto;
- (void)registerUploadPhoto;
- (void)registerOCRV2;
- (void)registerTakeOCRPhoto;
- (void)registerManualVerify;
- (void)registerPreManualVerify;
- (void)registerOpenVideoRecord;
- (void)registerDialogShow;
- (void)registerHideLoading;
- (void)registeJSBWithName:(id)arg0 handler:(id /* block */)arg1;
- (void)registerOpenPage;
- (void)registerClosePage;
- (void)registerOpenLoginPage;
- (void)registerlaunchFlow;
- (void)registerStartNFC;
- (void)registerStopNFC;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg0;
- (id)imageManager;
- (void)setImageManager:(id)arg0;
- (id)flow;
- (void)setFlow:(id)arg0;

@end

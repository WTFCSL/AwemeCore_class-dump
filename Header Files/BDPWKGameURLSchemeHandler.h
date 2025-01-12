//
//     Generated by private class-dump
//

@class BDPWKGamePage, NSMutableDictionary, NSString, NSRecursiveLock, NSObject;
@protocol BDPWebViewImplInterface, OS_dispatch_queue;

@interface BDPWKGameURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    id<BDPWebViewImplInterface> _bridgeImpl;
    BDPWKGamePage *_webview;
    NSMutableDictionary *_holdUrlSchemeTasks;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_polyfillStr;
    NSRecursiveLock *_polyfillFileLock;
}

@property (weak, nonatomic) id<BDPWebViewImplInterface> bridgeImpl;
@property (weak, nonatomic) BDPWKGamePage *webview;
@property (retain, nonatomic) NSMutableDictionary *holdUrlSchemeTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) NSString *polyfillStr;
@property (retain, nonatomic) NSRecursiveLock *polyfillFileLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBridgeImpl:(id)arg0;
- (id)bridgeImpl;
- (void)setHoldUrlSchemeTasks:(id)arg0;
- (id)holdUrlSchemeTasks;
- (id)createResponse:(id)arg0 statusCode:(long long)arg1 contentLength:(long long)arg2 contentType:(id)arg3;
- (id)initWithBridgeImpl:(id)arg0 andWebview:(id)arg1;
- (void)handleBridgeRequest:(id)arg0 withWebview:(id)arg1;
- (void)handleEnvRequest:(id)arg0 withUniqueID:(id)arg1;
- (void)handleFetchPredefineFilesRequest:(id)arg0 withUniqueID:(id)arg1;
- (void)handleEnablePredefineRequest:(id)arg0 withUniqueID:(id)arg1;
- (void)handleTTFileRequest:(id)arg0 withUniqueID:(id)arg1;
- (void)handleRealHTTPRequest:(id)arg0 withUniqueID:(id)arg1;
- (void)handleBDPFileRequest:(id)arg0 withUniqueID:(id)arg1;
- (void)handleBufferBridgeRequest:(id)arg0 withWebview:(id)arg1;
- (void)handleSubscribeBridgeData:(id)arg0 withUniqueID:(id)arg1;
- (void)didFinish:(id)arg0 statusCode:(long long)arg1 message:(id)arg2 mimeType:(id)arg3;
- (id)polyfillFileLock;
- (id)polyfillStr;
- (void)setPolyfillStr:(id)arg0;
- (void)didFinish:(id)arg0 statusCode:(long long)arg1 data:(id)arg2 mimeType:(id)arg3;
- (id)polyfillGameFiles:(id)arg0;
- (void)setPolyfillFileLock:(id)arg0;
- (void)webView:(id)arg0 stopURLSchemeTask:(id)arg1;
- (void).cxx_destruct;
- (void)setDispatchQueue:(id)arg0;
- (id)dispatchQueue;
- (void)webView:(id)arg0 startURLSchemeTask:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg0;

@end

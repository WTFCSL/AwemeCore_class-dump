//
//     Generated by private class-dump
//

@class LynxView, NSMutableDictionary, BDXContext, IESForestKit, NSString, NSLock, BDXLynxKitParams;
@protocol BDXLynxResourceProviderDelegate, LynxTemplateProvider;

@interface BDXForestLynxResourceProvider : NSObject <BDXLynxResourceProviderProtocol> {
    id<BDXLynxResourceProviderDelegate> _delegate;
    BDXLynxKitParams *_lynxKitParams;
    id<LynxTemplateProvider> _customTemplateProvider;
    BDXContext *_context;
    LynxView *_lynxView;
    IESForestKit *_forestKit;
    NSMutableDictionary *_requestOperations;
    NSLock *_requestOperationsLock;
}

@property (retain, nonatomic) IESForestKit *forestKit;
@property (retain, nonatomic) NSMutableDictionary *requestOperations;
@property (retain, nonatomic) NSLock *requestOperationsLock;
@property (weak, nonatomic) id<BDXLynxResourceProviderDelegate> delegate;
@property (retain, nonatomic) BDXLynxKitParams *lynxKitParams;
@property (weak, nonatomic) id<LynxTemplateProvider> customTemplateProvider;
@property (weak, nonatomic) BDXContext *context;
@property (weak, nonatomic) LynxView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxView;
- (void)loadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (void)loadDynamicComponent:(id)arg0 withLoadedBlock:(id /* block */)arg1;
- (id /* block */)loadImageWithURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)loadCanvasImageWithURL:(id)arg0 contextInfo:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)loadResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id)redirectURL:(id)arg0;
- (void)fetchResourceDataWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLocalFileWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)request:(id)arg0 onComplete:(id /* block */)arg1;
- (void)setLynxView:(id)arg0;
- (void)updateLoaderConfig:(id)arg0;
- (id)lynxKitParams;
- (id)forestKit;
- (void)setLynxKitParams:(id)arg0;
- (void)updateWithLynxParams:(id)arg0;
- (void)logInfo:(id)arg0 urlString:(id)arg1;
- (id)customTemplateProvider;
- (void)logInfo:(id)arg0 urlString:(id)arg1 extras:(id)arg2;
- (id)createRequestParamsWithLynxParams:(id)arg0;
- (void)handleTemplateResponse:(id)arg0 callback:(id /* block */)arg1 error:(id)arg2;
- (id)annieXMonitor;
- (void)logError:(id)arg0 urlString:(id)arg1 error:(id)arg2;
- (long long)resourceStatusWithSourceType:(long long)arg0;
- (id)requestOperationsLock;
- (id)initWithLynxParams:(id)arg0;
- (void)setCustomTemplateProvider:(id)arg0;
- (BOOL)waitGeckoUpdateWithDynamic:(long long)arg0;
- (void)setForestKit:(id)arg0;
- (void)setRequestOperationsLock:(id)arg0;
- (id)init;
- (void)cancel:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setRequestOperations:(id)arg0;
- (id)requestOperations;
- (void)setDelegate:(id)arg0;
- (id)unknownError;

@end
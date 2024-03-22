//
//     Generated by private class-dump
//

@class BDXBridgeEventSubscriber, NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface BDUGLuckyScreenShotXBridge : BDUGLuckyXBridgeMethod <BDXContainerLifecycleProtocol> {
    UIView<BDXViewContainerProtocol> *_lynxView;
    BDXBridgeEventSubscriber *_subscriber;
}

@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (id)lynxView;
- (Class)resultModelClass;
- (void)setLynxView:(id)arg0;
- (id)replaceSchemeHostPathWithURLString:(id)arg0;
- (void)takeScreenshotToAlbumWithScreenshotImage:(id)arg0 completion:(id /* block */)arg1;
- (void)takeScreenshotToFilename:(id)arg0 completion:(id /* block */)arg1;
- (void)takeScreenshotToAlbumWithCompletion:(id /* block */)arg0;
- (void)saveToFilename:(id)arg0 withImage:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)takeScreenshot;
- (id)subscriber;
- (void)reset;
- (void)setSubscriber:(id)arg0;
- (id)methodName;

@end
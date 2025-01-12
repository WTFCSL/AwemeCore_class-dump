//
//     Generated by private class-dump
//

@class IESMMCameraConfig, NSString, NSHashTable, UIView;
@protocol AFDMomentCameraPreviewProtocol, VERecorderPublicProtocol;

@interface AFDMomentCameraFactoryImpls : NSObject <AFDMomentCameraFactory> {
    UIView<AFDMomentCameraPreviewProtocol> *_preview;
    id<VERecorderPublicProtocol> _camera;
    IESMMCameraConfig *_config;
    NSHashTable *_subscribers;
}

@property (retain, nonatomic) IESMMCameraConfig *config;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) UIView<AFDMomentCameraPreviewProtocol> *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCameraListener:(id)arg0;
- (id)createCameraWithContext:(const void *)arg0 config:(id)arg1 completion:(id /* block */)arg2;
- (id)buildCameraWithContext:(const void *)arg0 config:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)camera;
- (void)setConfig:(id)arg0;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (id)preview;
- (id)config;
- (id)subscribers;
- (void)setPreview:(id)arg0;
- (id)initWithPreview:(id)arg0;
- (void)setSubscribers:(id)arg0;

@end

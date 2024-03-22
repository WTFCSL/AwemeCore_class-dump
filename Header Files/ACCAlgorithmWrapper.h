//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString;
@protocol VERecorderPublicProtocol;

@interface ACCAlgorithmWrapper : NSObject <ACCCameraBuildListener, ACCAlgorithmProtocol> {
    BOOL _lastRedPacketRecognised;
    BOOL _hasDetectMale;
    id<VERecorderPublicProtocol> _camera;
    void *_cameraContext;
    ACCCameraSubscription *_subscription;
    unsigned long long _externalAlgorithm;
    unsigned long long _algorithmParam;
}

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) unsigned long long externalAlgorithm;
@property (nonatomic) unsigned long long algorithmParam;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL lastRedPacketRecognised;
@property (nonatomic) BOOL hasDetectMale;

- (void)forceDetectBuffer:(long long)arg0;
- (void *)cameraContext;
- (void)setCameraContext:(void *)arg0;
- (void)getFaceResult:(id /* block */)arg0;
- (BOOL)hasDetectMale;
- (void)appendAlgorithm:(unsigned long long)arg0;
- (void)setHasDetectMale:(BOOL)arg0;
- (void)enableEffectExternalAlgorithm:(BOOL)arg0;
- (void)setCameraProvider:(id)arg0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)arg0;
- (unsigned long long)externalAlgorithm;
- (void)setExternalAlgorithm:(unsigned long long)arg0;
- (unsigned long long)algorithmParam;
- (void)setAlgorithmParam:(unsigned long long)arg0;
- (void)updateAlgorithmAndCallBack;
- (BOOL)lastRedPacketRecognised;
- (void)setLastRedPacketRecognised:(BOOL)arg0;
- (id)init;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end
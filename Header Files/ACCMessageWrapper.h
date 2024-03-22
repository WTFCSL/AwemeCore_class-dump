//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString;
@protocol ACCMessageFilterDelegate, VERecorderPublicProtocol;

@interface ACCMessageWrapper : NSObject <ACCCameraBuildListener, ACCMessageFilterable, ACCMessageProtocol> {
    id<VERecorderPublicProtocol> _camera;
    id<ACCMessageFilterDelegate> _messageFilter;
    void *_cameraContext;
    ACCCameraSubscription *_subscription;
}

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCMessageFilterDelegate> messageFilter;

- (void)sendMessageToEffect:(id)arg0;
- (void *)cameraContext;
- (void)setCameraContext:(void *)arg0;
- (void)bindEffectMessage;
- (void)setCameraProvider:(id)arg0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)arg0;
- (id)messageFilter;
- (void)setMessageFilter:(id)arg0;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end

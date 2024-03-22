//
//     Generated by private class-dump
//

@protocol RTVXRCaptureController <RTVXRControllerInterface>

@property (nonatomic, getter=isActive) BOOL active;

- (BOOL)isCameraOff;
- (id)enableVideoWithToken:(id)arg0 reason:(id)arg1;
- (id)disableVideoWithReason:(id)arg0;
- (id)enableAudioWithToken:(id)arg0 reason:(id)arg1;
- (id)disableAudioWithReason:(id)arg0;
- (id)openCameraWithToken:(id)arg0 reason:(id)arg1;
- (id)closeCameraWithReason:(id)arg0;
- (id)openMicrophoneWithToken:(id)arg0 reason:(id)arg1;
- (id)closeMicrophoneWithReason:(id)arg0;
- (id)requestPrivilegeForOpenCaptureWithReason:(id)arg0 captureType:(long long)arg1;
- (id)checkHasPrivilegeForOpenCaptureWithToken:(id)arg0 captureType:(long long)arg1;
- (void)enableAudioVolumeReport:(BOOL)arg0;
- (void)setRTCEngineParameters:(id)arg0;
- (id)isCameraOffOrMutedOfUID:(id)arg0;
- (id)isVideoInShowStateOfUID:(id)arg0;
- (id)isVideoShowStateUpdateOfUID:(id)arg0;
- (BOOL)isActive;
- (void)addObserver:(id)arg0;
- (void)setActive:(BOOL)arg0;
- (void)removeObserver:(id)arg0;
- (BOOL)isMicrophoneMuted;

@end
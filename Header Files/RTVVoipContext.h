//
//     Generated by private class-dump
//

@class NSString, RTVSessionContextCaptureOperation;
@protocol RxInjector;

@interface RTVVoipContext : NSObject <RTVSessionContextPreviewProcotol> {
    BOOL _muteOnAudio;
    BOOL _muteOnVideo;
    BOOL _handsfreeOn;
    BOOL _onTheCall;
    BOOL _disableHandsfree;
    RTVSessionContextCaptureOperation *_microphone;
    RTVSessionContextCaptureOperation *_camera;
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) BOOL muteOnAudio;
@property (nonatomic) BOOL muteOnVideo;
@property (retain) RTVSessionContextCaptureOperation *microphone;
@property (retain) RTVSessionContextCaptureOperation *camera;
@property (nonatomic) BOOL handsfreeOn;
@property (nonatomic) BOOL onTheCall;
@property (nonatomic) BOOL disableHandsfree;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)muteOnVideo;
- (void)applyMicrophoneOperation:(id)arg0;
- (void)applyCameraOperation:(id)arg0;
- (BOOL)onTheCall;
- (void)setOnTheCall:(BOOL)arg0;
- (BOOL)handsfreeOn;
- (void)setHandsfreeOn:(BOOL)arg0;
- (BOOL)disableHandsfree;
- (void)setDisableHandsfree:(BOOL)arg0;
- (BOOL)muteOnAudio;
- (void)setMuteOnVideo:(BOOL)arg0;
- (void)setMuteOnAudio:(BOOL)arg0;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (id)injector;
- (id)microphone;
- (void)setMicrophone:(id)arg0;

@end

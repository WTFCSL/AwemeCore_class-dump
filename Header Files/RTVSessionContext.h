//
//     Generated by private class-dump
//

@class NSString, RTVSessionContextCaptureOperation;

@interface RTVSessionContext : NSObject <RTVSessionContextPreviewProcotol> {
    BOOL _onTheCall;
    BOOL _handsfreeOn;
    BOOL _disableHandsfree;
    BOOL _muteOnAudio;
    BOOL _muteOnVideo;
    RTVSessionContextCaptureOperation *_microphone;
    RTVSessionContextCaptureOperation *_camera;
}

@property (nonatomic) BOOL onTheCall;
@property (nonatomic) BOOL handsfreeOn;
@property (nonatomic) BOOL disableHandsfree;
@property (readonly, nonatomic) BOOL muteOnAudio;
@property (readonly, nonatomic) BOOL muteOnVideo;
@property (readonly) RTVSessionContextCaptureOperation *microphone;
@property (readonly) RTVSessionContextCaptureOperation *camera;
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
- (id)camera;
- (void).cxx_destruct;
- (id)microphone;

@end
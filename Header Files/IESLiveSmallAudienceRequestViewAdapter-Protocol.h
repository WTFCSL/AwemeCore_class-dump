//
//     Generated by private class-dump
//

@class IESLiveInteractiveAudioView, UIView;
@protocol IESLiveInteractionGuestPreviewViewAdapter, HTSLivePixelBufferCapturer, IESLiveRecoder;

@protocol IESLiveSmallAudienceRequestViewAdapter <NSObject>

@property (readonly, nonatomic) BOOL isAudioModeOn;
@property (weak, nonatomic) id delegate;
@property (nonatomic) double previewCornerRadius;
@property (readonly, weak, nonatomic) id<IESLiveRecoder> camera;
@property (retain, nonatomic) UIView<IESLiveInteractionGuestPreviewViewAdapter> *cameraPreview;
@property (readonly, nonatomic) id<HTSLivePixelBufferCapturer> capturer;
@property (retain, nonatomic) IESLiveInteractiveAudioView *audioBackView;

- (void)switchCameraSource;
- (id)cameraPreview;
- (void)setCameraPreview:(id)arg0;
- (id)audioBackView;
- (void)setAudioBackView:(id)arg0;
- (BOOL)isAudioModeOn;
- (void)setupViewsOnisAudio:(BOOL)arg0;
- (id)capturer;
- (void)updateAudioAnimation:(BOOL)arg0;
- (void)updateVoiceWaveWithMicDress:(id)arg0 userID:(id)arg1;
- (void)updateAvatarURLList:(id)arg0;
- (void)switchConnectMode;
- (void)stopAndHidePreView;
- (void)addCameraPreview:(id)arg0;
- (id)removeCameraPreview;
- (void)setPreviewCornerRadius:(double)arg0;
- (long long)cameraPosition;
- (id)camera;
- (void)stopCapture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })previewSize;
- (void)startPreview;
- (void)stopPreview;
- (double)previewCornerRadius;
- (void)showCameraPreview;
- (unsigned long long)previewFrameRate;

@end
//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractiveAudioView, UIView, IESLiveInteractionGuestPreviewView;
@protocol IESLiveSmallAudienceRequestViewDelegate, HTSLivePixelBufferCapturer, IESLiveRecoder;

@interface IESLiveSmallAudienceRequestView : UIView <IESLiveSmallAudienceRequestViewAdapter> {
    BOOL _waitingForConnect;
    BOOL _isAudioModeOn;
    UIView *_controlContainer;
    id /* block */ _onClose;
    id<IESLiveSmallAudienceRequestViewDelegate> _delegate;
    id<HTSLivePixelBufferCapturer> _capturer;
    IESLiveInteractiveAudioView *_audioBackView;
    IESLiveInteractionGuestPreviewView *_cameraPreview;
    double _previewCornerRadius;
}

@property (nonatomic) BOOL isAudioModeOn;
@property (retain, nonatomic) id<HTSLivePixelBufferCapturer> capturer;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL waitingForConnect;
@property (readonly, weak, nonatomic) id<IESLiveRecoder> camera;
@property (weak, nonatomic) UIView *controlContainer;
@property (weak, nonatomic) id<IESLiveSmallAudienceRequestViewDelegate> delegate;
@property (retain, nonatomic) IESLiveInteractiveAudioView *audioBackView;
@property (retain, nonatomic) IESLiveInteractionGuestPreviewView *cameraPreview;
@property (nonatomic) double previewCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)switchCameraSource;
- (id)cameraPreview;
- (void)setCameraPreview:(id)arg0;
- (id)controlContainer;
- (void)setControlContainer:(id)arg0;
- (void)loadBeautyResource;
- (void)setIsAudioModeOn:(BOOL)arg0;
- (void)setWaitingForConnect:(BOOL)arg0;
- (id)audioBackView;
- (void)setAudioBackView:(id)arg0;
- (BOOL)isAudioModeOn;
- (void)setupViewsOnisAudio:(BOOL)arg0;
- (id)capturer;
- (void)updateAudioAnimation:(BOOL)arg0;
- (void)updateVoiceWaveWithMicDress:(id)arg0 userID:(id)arg1;
- (void)updateAvatarURLList:(id)arg0;
- (BOOL)waitingForConnect;
- (void)switchConnectMode;
- (void)stopAndHidePreView;
- (void)addCameraPreview:(id)arg0;
- (id)removeCameraPreview;
- (void)setPreviewCornerRadius:(double)arg0;
- (void)setCapturer:(id)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (long long)cameraPosition;
- (id)init;
- (id)camera;
- (void).cxx_destruct;
- (void)stopCapture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })previewSize;
- (void)startPreview;
- (void)stopPreview;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (double)previewCornerRadius;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;
- (void)showCameraPreview;
- (unsigned long long)previewFrameRate;

@end
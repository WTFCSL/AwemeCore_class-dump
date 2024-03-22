//
//     Generated by private class-dump
//

@class UIImage, NSString, HTSVideoData;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentContextService, AFDMomentCameraService;

@interface AFDMomentCameraPreviewViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraLifeCircleEvent, AFDMomentCameraFlowServiceSubscriber> {
    BOOL _shouldShowBlurView;
    BOOL _shouldShowResultImagePreview;
    BOOL _shouldShowResultVideoPreview;
    BOOL _isDisabled;
    BOOL _haveCameraAuth;
    BOOL _haveMicAuth;
    BOOL _isPreviewing;
    BOOL _shouldShowUploadResultPreview;
    BOOL _shouldShowUploadResultPreviewGuide;
    BOOL _shouldDelayDismissUploadResultPreview;
    UIImage *_blurredImage;
    HTSVideoData *_videoData;
    id<AFDMomentCameraService> _cameraService;
    id<AFDMomentCameraFlowService> _flowService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
    UIImage *_resultPreviewImageForUpload;
    id<AFDMomentContextService> _contextService;
    struct CGSize { double width; double height; } _uploadImageVisibileSize;
}

@property (retain, nonatomic) UIImage *blurredImage;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL shouldShowBlurView;
@property (nonatomic) BOOL shouldShowResultImagePreview;
@property (nonatomic) BOOL shouldShowResultVideoPreview;
@property (nonatomic) BOOL isPreviewing;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL haveCameraAuth;
@property (nonatomic) BOOL haveMicAuth;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) UIImage *resultPreviewImageForUpload;
@property (nonatomic) BOOL shouldShowUploadResultPreview;
@property (nonatomic) BOOL shouldShowUploadResultPreviewGuide;
@property (nonatomic) struct CGSize { double width; double height; } uploadImageVisibileSize;
@property (nonatomic) BOOL shouldDelayDismissUploadResultPreview;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)videoData;
- (void)setVideoData:(id)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)onCameraFirstFrameDidRender:(id)arg0;
- (void)cameraService:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (id)contextService;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)setContextService:(id)arg0;
- (BOOL)shouldShowBlurView;
- (id)applyGaussianBlur:(id)arg0 radius:(long long)arg1;
- (void)setBlurredImage:(id)arg0;
- (void)showBlurViewIfCould;
- (void)hideBlurView;
- (void)didTapCameraAuthorizeButton;
- (void)didTapMicAuthorizeButton;
- (void)startVideoCaptureWithStateCheck;
- (void)stopVideoCaptureWithStateCheck;
- (BOOL)shouldDelayDismissUploadResultPreview;
- (void)updateUploadImageVisibileSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)shouldShowUploadResultPreview;
- (void)hiddenUploadResultPreviewGuide;
- (void)updateUploadPreviewDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHaveCameraAuth:(BOOL)arg0;
- (void)setHaveMicAuth:(BOOL)arg0;
- (void)setShouldShowUploadResultPreviewGuide:(BOOL)arg0;
- (void)setUploadImageVisibileSize:(struct CGSize { double x0; double x1; })arg0;
- (void)p_saveBlurImage:(id)arg0;
- (void)setShouldShowBlurView:(BOOL)arg0;
- (void)setShouldShowResultImagePreview:(BOOL)arg0;
- (void)setShouldShowResultVideoPreview:(BOOL)arg0;
- (void)setShouldShowUploadResultPreview:(BOOL)arg0;
- (void)setShouldDelayDismissUploadResultPreview:(BOOL)arg0;
- (BOOL)shouldShowResultVideoPreview;
- (void)p_showCropViewGuideIfNeed;
- (BOOL)shouldShowResultImagePreview;
- (BOOL)shouldShowUploadResultPreviewGuide;
- (BOOL)haveCameraAuth;
- (BOOL)haveMicAuth;
- (id)resultPreviewImageForUpload;
- (void)setResultPreviewImageForUpload:(id)arg0;
- (struct CGSize { double x0; double x1; })uploadImageVisibileSize;
- (void)setIsDisabled:(BOOL)arg0;
- (BOOL)isPreviewing;
- (id)blurredImage;
- (void).cxx_destruct;
- (BOOL)isDisabled;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (void)setIsPreviewing:(BOOL)arg0;

@end
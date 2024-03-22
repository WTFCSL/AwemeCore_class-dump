//
//     Generated by private class-dump
//

@class UIView, NSString, UIImageView, UIButton, AWEMCEditViewPlayer, NSObject, AFDMomentCameraPreviewViewModel, AFDMomentCameraPreviewCropView;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentCameraService, AFDMCEditService, OS_dispatch_queue;

@interface AFDMomentCameraPreviewComponent : AFDMomentCameraBaseComponent <AFDMomentCameraFlowServiceSubscriber, AFDMomentCameraPreviewCropViewDelegate> {
    BOOL _isAppeared;
    AFDMomentCameraPreviewViewModel *_viewModel;
    UIView *_preview;
    UIImageView *_previewImageView;
    AFDMomentCameraPreviewCropView *_previewCropView;
    UIImageView *_previewBlurView;
    UIButton *_cameraAuthorizeButton;
    UIButton *_micAuthorizeButton;
    UIView *_videoPreviewView;
    UIView *_disabledView;
    NSObject<OS_dispatch_queue> *_cameraOperationQueue;
    id /* block */ _startPreviewBlock;
    id /* block */ _stopPreviewBlock;
    AWEMCEditViewPlayer *_player;
    id<AFDMomentCameraService> _cameraService;
    id<AFDMomentCameraFlowService> _flowService;
    id<AFDMCEditService> _editService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
}

@property (retain, nonatomic) AFDMomentCameraPreviewViewModel *viewModel;
@property (weak, nonatomic) UIView *preview;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) AFDMomentCameraPreviewCropView *previewCropView;
@property (retain, nonatomic) UIImageView *previewBlurView;
@property (retain, nonatomic) UIButton *cameraAuthorizeButton;
@property (retain, nonatomic) UIButton *micAuthorizeButton;
@property (retain, nonatomic) UIView *videoPreviewView;
@property (retain, nonatomic) UIView *disabledView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cameraOperationQueue;
@property (nonatomic) BOOL isAppeared;
@property (copy, nonatomic) id /* block */ startPreviewBlock;
@property (copy, nonatomic) id /* block */ stopPreviewBlock;
@property (retain, nonatomic) AWEMCEditViewPlayer *player;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidLoad;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)setIsAppeared:(BOOL)arg0;
- (id)disabledView;
- (void)setDisabledView:(id)arg0;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)componentWillAppear:(BOOL)arg0;
- (void)componentDidDisappear:(BOOL)arg0;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)setPreviewBlurView:(id)arg0;
- (id)previewBlurView;
- (void)setCameraAuthorizeButton:(id)arg0;
- (id)cameraAuthorizeButton;
- (void)setMicAuthorizeButton:(id)arg0;
- (id)micAuthorizeButton;
- (void)setPreviewCropView:(id)arg0;
- (id)previewCropView;
- (void)setStartPreviewBlock:(id /* block */)arg0;
- (void)setStopPreviewBlock:(id /* block */)arg0;
- (void)setCameraOperationQueue:(id)arg0;
- (id /* block */)stopPreviewBlock;
- (id)cameraOperationQueue;
- (id /* block */)startPreviewBlock;
- (void)p_createPlayerIfNeeded;
- (void)p_releasePlayerIfNeeded;
- (void)setVideoPreviewView:(id)arg0;
- (void)cameraPreviewCropViewWillBeginDragging:(id)arg0;
- (void)cameraPreviewCropViewBeginZooming:(id)arg0;
- (void)cameraPreviewCropViewDidChangeDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)videoPreviewView;
- (void).cxx_destruct;
- (id)preview;
- (void)setPlayer:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setPreview:(id)arg0;
- (id)viewModel;
- (id)player;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (BOOL)isAppeared;

@end
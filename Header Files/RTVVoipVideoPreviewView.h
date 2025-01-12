//
//     Generated by private class-dump
//

@class UIView, NSString, RxPromise, UIImageView, RTVVoipVideoPreviewViewContext, RTVVoipVideoPreviewRecordIndicatorView, UIVisualEffectView, RTVVoipVideoPreviewAvatarView;
@protocol RTVUserProfileManagerInterface, RTVSessionPreviewProcotol, RTVVoipConfigureManagerInterface, RxInjector, RTVXRCaptureController, RTVVoipVideoPreviewViewDelegate;

@interface RTVVoipVideoPreviewView : UIView <RTVXREngineDelegate, RTVVoipVideoPreviewAvatarViewDelegate, RTVXRCaptureControllerObserver> {
    BOOL _isApparent;
    BOOL _isRenderingVideo;
    RTVVoipVideoPreviewViewContext *_context;
    UIView *_videoContentView;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipVideoPreviewViewDelegate> _delegate;
    id<RxInjector> _injector;
    id<RTVSessionPreviewProcotol> _session;
    RTVVoipVideoPreviewAvatarView *_avatarView;
    RTVVoipVideoPreviewRecordIndicatorView *_recordIndicatorView;
    UIView *_remoteVideoLastFrameView;
    id<RTVVoipConfigureManagerInterface> _configManager;
    id<RTVXRCaptureController> _captureController;
    UIImageView *_videoPreviewSnapshotView;
    UIVisualEffectView *_videoPreviewBlurView;
    RxPromise *_blurAnimationPromise;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVVoipVideoPreviewAvatarView *avatarView;
@property (readonly, nonatomic) RTVVoipVideoPreviewRecordIndicatorView *recordIndicatorView;
@property (retain, nonatomic) UIView *remoteVideoLastFrameView;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configManager;
@property (readonly, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) UIImageView *videoPreviewSnapshotView;
@property (readonly, nonatomic) UIVisualEffectView *videoPreviewBlurView;
@property (retain, nonatomic) RxPromise *blurAnimationPromise;
@property (nonatomic) BOOL isApparent;
@property (nonatomic) BOOL isRenderingVideo;
@property (readonly, nonatomic) RTVVoipVideoPreviewViewContext *context;
@property (readonly, nonatomic) UIView *videoContentView;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (weak, nonatomic) id<RTVVoipVideoPreviewViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__addObserver;
- (void)__log:(id)arg0;
- (void)__createDependency;
- (void)xrEngine:(id)arg0 onUserWillLeave:(id)arg1;
- (void)xrEngine:(id)arg0 didUserOffline:(id)arg1 reason:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })arg1;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteVideoFrameOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)xrEngine:(id)arg0 firstRemoteVideoDidRenderOfUid:(id)arg1;
- (void)xrEngine:(id)arg0 didVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 didLocalVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 didVideoMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 onRemoteVideoStateChanged:(id)arg1 videoState:(long long)arg2 stateChangeReason:(long long)arg3;
- (void)xrEngine:(id)arg0 onLocalVideoStateChanged:(long long)arg1 streamState:(long long)arg2 withStreamError:(long long)arg3;
- (void)switchLayout:(BOOL)arg0 animator:(id)arg1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)xrCaptureController:(id)arg0 didChangeToCameraOff:(BOOL)arg1;
- (void)__setupVideoPreviewView;
- (void)__handleCameraOff:(BOOL)arg0;
- (id)remoteVideoLastFrameView;
- (void)setRemoteVideoLastFrameView:(id)arg0;
- (id)__remoteVideoLastFrameView;
- (void)__removeRemoteVideoLastFrameIfNeeded;
- (void)__showRemoteVideoLastFrameIfNeeded;
- (id)__currentProfileIMID;
- (BOOL)__enablePreviewBlurEffect;
- (id)__commonLogString;
- (id)videoPreviewSnapshotView;
- (id)blurAnimationPromise;
- (id)videoPreviewBlurView;
- (void)setBlurAnimationPromise:(id)arg0;
- (void)__showBlurEffect;
- (void)__hideBlurEffect;
- (void)__refreshPreviewIfNeeded;
- (id)__isLocalPreviewView;
- (id)__isRemotePreviewOfUID:(id)arg0;
- (void)__capturePreviewSnapshot;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredInsetsWhenSimplelyAppear;
- (void)previewAvatarView:(id)arg0 didClickAvatar:(id)arg1;
- (void)notifyChangeToApparent:(BOOL)arg0;
- (void)refreshVideoPreview;
- (BOOL)isShowingSimpleAvatarView;
- (BOOL)shouldShowAvatarWhenApparentAndDisplayVideo;
- (void)setIsApparent:(BOOL)arg0;
- (BOOL)isRenderingVideo;
- (BOOL)__shouldHiddenAvatarView;
- (id)recordIndicatorView;
- (BOOL)isApparent;
- (BOOL)isInLastRow;
- (void)__refreshVideoViewState;
- (id)__currentCameraIsOff;
- (void)setIsRenderingVideo:(BOOL)arg0;
- (BOOL)__shouldShowSimpleAvatarView;
- (BOOL)__firstFrameArrived;
- (double)__verticalOffsetSimpleAvatarView;
- (id)init;
- (id)avatarView;
- (void).cxx_destruct;
- (id)session;
- (id)injector;
- (id)delegate;
- (id)captureController;
- (id)context;
- (unsigned long long)hash;
- (id)configManager;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)profileManager;
- (id)videoContentView;

@end

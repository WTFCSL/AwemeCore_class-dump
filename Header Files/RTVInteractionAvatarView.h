//
//     Generated by private class-dump
//

@class NSString, UIImageView, RTVInteractionAvatarViewContext, UIView, BDImageView;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVXRCaptureController, RxInjector, RTVXRControllerInjector, RTVSessionPreviewProcotol;

@interface RTVInteractionAvatarView : UIView <RTVXRCaptureControllerObserver> {
    BOOL _enableAudioIndicate;
    BOOL _blurred;
    BOOL _animating;
    BOOL _outerBorderShowing;
    UIView *_audioVolumeIndicator;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipConfigureManagerInterface> _configureManager;
    id<RTVXRCaptureController> _captureController;
    id<RTVSessionPreviewProcotol> _session;
    RTVInteractionAvatarViewContext *_context;
    BDImageView *_roundAvatarView;
    UIImageView *_avatarBlurView;
    UIView *_avatarOuterBorder;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVInteractionAvatarViewContext *context;
@property (readonly, nonatomic) BDImageView *roundAvatarView;
@property (readonly, nonatomic) UIImageView *avatarBlurView;
@property (retain, nonatomic) UIView *audioVolumeIndicator;
@property (retain, nonatomic) UIView *avatarOuterBorder;
@property BOOL enableAudioIndicate;
@property (nonatomic) BOOL blurred;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) BOOL outerBorderShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (id)controllerInjector;
- (id)configureManager;
- (void)__createDependency;
- (void)enableAudioIndicate:(BOOL)arg0;
- (void)xrCaptureController:(id)arg0 didReceiveSpeakerAudioVolumUpdates:(id)arg1 totalVolume:(unsigned long long)arg2;
- (id)audioVolumeIndicator;
- (void)__udpateComponentsWithAnimation;
- (void)__updateComponentsWithoutAnimation;
- (BOOL)enableAudioIndicate;
- (id)avatarBlurView;
- (void)setOuterBorderShowing:(BOOL)arg0;
- (id)avatarOuterBorder;
- (id)roundAvatarView;
- (void)__updateBorderAndBlurView;
- (id)__downloadImageFromURL:(id)arg0;
- (void)__updateAvatarViewWithImage:(id)arg0;
- (id)__blurImageWithImage:(id)arg0;
- (BOOL)outerBorderShowing;
- (void)__updateAudioVolumeIndicator:(long long)arg0;
- (void)updateBlurred:(BOOL)arg0;
- (void)hideOuterBorder:(BOOL)arg0;
- (void)setAudioVolumeIndicator:(id)arg0;
- (void)setAvatarOuterBorder:(id)arg0;
- (void)setEnableAudioIndicate:(BOOL)arg0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setBlurred:(BOOL)arg0;
- (id)session;
- (BOOL)blurred;
- (void)setAnimating:(BOOL)arg0;
- (id)injector;
- (id)captureController;
- (id)context;
- (void)layoutSubviews;
- (void)dealloc;
- (id)profileManager;

@end
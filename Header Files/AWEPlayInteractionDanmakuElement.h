//
//     Generated by private class-dump
//

@class NSString, AWEPlayDanmakuContainerView, AWEPlayDanmakuInputContainView;

@interface AWEPlayInteractionDanmakuElement : AWEPlayInteractionLeftElement {
    BOOL _hasTrackPubShow;
    BOOL _hasFakeDanmakuSwitch;
    BOOL _danmakuPostPauseVideoPlay;
    AWEPlayDanmakuContainerView *_danmakuView;
    AWEPlayDanmakuInputContainView *_danmakuInputView;
    NSString *_accountType;
}

@property (retain, nonatomic) AWEPlayDanmakuContainerView *danmakuView;
@property (retain, nonatomic) AWEPlayDanmakuInputContainView *danmakuInputView;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL hasTrackPubShow;
@property (nonatomic) BOOL hasFakeDanmakuSwitch;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewWillAppear;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (id)danmakuInputView;
- (void)setDanmakuInputView:(id)arg0;
- (id)danmakuView;
- (void)setDanmakuView:(id)arg0;
- (BOOL)shouldShowGuideAnimation;
- (void)setDanmakuPostPauseVideoPlay:(BOOL)arg0;
- (BOOL)danmakuPostPauseVideoPlay;
- (BOOL)appearOnlyWhenPause;
- (void)showAnimationIfNeedAfterSeconds:(long long)arg0;
- (BOOL)hasTrackPubShow;
- (void)setHasTrackPubShow:(BOOL)arg0;
- (void)setHasFakeDanmakuSwitch:(BOOL)arg0;
- (BOOL)shouldAppearDanmakuView;
- (void)hideGuideAnimationIfNeed;
- (BOOL)isFromDanmakuMessage;
- (BOOL)hasFakeDanmakuSwitch;
- (void)showHideGuideAnimation;
- (void)showGuideAnimationIfNeed;
- (BOOL)hasShowGuideInStorage;
- (void)handleDanmakuInputClick;
- (void)handleDanmakuSwitchClick;
- (void).cxx_destruct;
- (id)accountType;
- (void)setAccountType:(id)arg0;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;

@end

//
//     Generated by private class-dump
//

@class IESLiveGradientView, NSString, CAGradientLayer, IESLiveImageView, UIView, HTSEventForwardingView, IESLiveMultiKTVAudioStageBackgroundView;

@interface IESLiveMultiKTVChallengeBgPlugin : IESLiveMultiKTVStagePluginBase <IESLiveMultiKTVStageActions, IESLiveMultiKTVStagePluginProtocol> {
    BOOL _isActive;
    IESLiveMultiKTVAudioStageBackgroundView *_webpBackgroundView;
    UIView *_backgroundImageView;
    UIView *_statusBarView;
    IESLiveImageView *_staticGoldenBG;
    UIView *_bgContainer;
    NSString *_currentThemeID;
    HTSEventForwardingView *_defaultBGView;
    IESLiveGradientView *_gradientView;
    CAGradientLayer *_layer;
}

@property (weak, nonatomic) IESLiveMultiKTVAudioStageBackgroundView *webpBackgroundView;
@property (retain, nonatomic) UIView *backgroundImageView;
@property (retain, nonatomic) UIView *statusBarView;
@property (retain, nonatomic) IESLiveImageView *staticGoldenBG;
@property (retain, nonatomic) UIView *bgContainer;
@property (copy, nonatomic) NSString *currentThemeID;
@property (retain, nonatomic) HTSEventForwardingView *defaultBGView;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) CAGradientLayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (void)updateStatusBarBackgroundColor:(id)arg0;
- (id)defaultBGView;
- (void)setDefaultBGView:(id)arg0;
- (id)bgContainer;
- (void)setBgContainer:(id)arg0;
- (void)updateCurrentTheme:(id)arg0;
- (void)updateStageViewBackgroundImageWithImageURLs:(id)arg0;
- (void)updateShowingTheme:(id)arg0;
- (BOOL)p_enableUGCMV;
- (void)updateStageViewBackgroundImage:(id)arg0;
- (void)didActivateInKTVStageContainerView:(id)arg0;
- (void)didDeactivated;
- (void)setCurrentThemeID:(id)arg0;
- (id)currentThemeID;
- (id)staticGoldenBG;
- (void)p_layoutFullBg;
- (void)p_layoutDynamicBg;
- (void)updateBackgroundTransform:(double)arg0;
- (void)eneterChallengeMode;
- (void)exitChallengeMode;
- (BOOL)p_isChallengeTheme;
- (id)defaultBackgroundWebpImage;
- (id)webpBackgroundView;
- (void)setWebpBackgroundView:(id)arg0;
- (void)setStaticGoldenBG:(id)arg0;
- (void)setLayer:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)backgroundImageView;
- (id)statusBarView;
- (void)setGradientView:(id)arg0;
- (BOOL)isActive;
- (id)layer;
- (id)gradientView;
- (void)setBackgroundImageView:(id)arg0;
- (void)setStatusBarView:(id)arg0;

@end

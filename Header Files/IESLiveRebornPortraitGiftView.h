//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveGiftTrayBaseImageABConfig, UILabel, IESLiveGCDTimer, NSDictionary, IESLiveGiftTraySlideRateABConfig, CALayer, UIView, CAGradientLayer, IESLiveAnimatedImageView, NSString, HTSLiveArtTextLabel, CAShapeLayer, NSArray, IESLiveRebornGiftAnimationNode, IESLiveGiftTrayAnimationModel, UIImageView;
@protocol HTSLiveAvatarImageViewAdapter, IESLiveLanguageService;

@interface IESLiveRebornPortraitGiftView : IESLiveRebornGiftView {
    BOOL isAnimating;
    BOOL isComboView;
    BOOL isGroup;
    BOOL isFaked;
    BOOL _isTopGiftView;
    BOOL _isBigScale;
    BOOL _disableComboCount;
    BOOL _enableTrayBaseColor;
    BOOL _enableTrayNewNamedStyle;
    BOOL _trayGroupModeServerControl;
    BOOL _enableAggregateBigGiftTray;
    NSString *giftKey;
    id /* block */ onAnimationEnd;
    id /* block */ onAvatarViewTap;
    id /* block */ onTouchViewTap;
    id /* block */ onFlyMicAnimationStarted;
    id /* block */ flipAngle;
    double _scale;
    IESLiveAnimatedImageView *_preAnimatedImageView;
    IESLiveAnimatedImageView *_postAnimatedImageView;
    IESLiveGiftTrayAnimationModel *_animationModel;
    UIView *_trayContainerView;
    CAShapeLayer *_trayExpandingLayer;
    NSMutableDictionary *_trayRipplesImageDict;
    NSDictionary *_trayRippleConfig;
    IESLiveAnimatedImageView *_backgroundImageView;
    UIView *_gradientView;
    CAGradientLayer *_gradientViewLayer;
    UIView *_touchView;
    UIView<HTSLiveAvatarImageViewAdapter> *_avatarView;
    UIView *_avatarContainer;
    UIView<HTSLiveAvatarImageViewAdapter> *_topAvatar;
    UIView<HTSLiveAvatarImageViewAdapter> *_bottomAvatar;
    IESLiveAnimatedImageView *_headImageView;
    UIView *_needScaleView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIImageView *_giftView;
    IESLiveAnimatedImageView *_animatedGiftView;
    HTSLiveArtTextLabel *_groupCountLabel;
    UIView *_comboContainerView;
    HTSLiveArtTextLabel *_comboXLabel;
    HTSLiveArtTextLabel *_comboNumberLabel;
    HTSLiveArtTextLabel *_comboXRedLabel;
    HTSLiveArtTextLabel *_comboNumberRedLabel;
    IESLiveAnimatedImageView *_comboStarView;
    IESLiveAnimatedImageView *_rightImageView;
    id /* block */ _stopAnimationTask;
    NSArray *_groupColorArr;
    long long _groupIndex;
    unsigned long long _animationLevel;
    IESLiveRebornGiftAnimationNode *_currentNode;
    CAGradientLayer *_flashLayer;
    UIView *_outlineView;
    CALayer *_outlineMaskLayer;
    CALayer *_maskLayer;
    IESLiveAnimatedImageView *_trayTagImageView;
    long long _currentFlyMicIndex;
    long long _flyMicCount;
    IESLiveGCDTimer *_flyMicTimer;
    long long _maxComboCountForLabel;
    IESLiveGiftTrayBaseImageABConfig *_trayBaseImageABConfig;
    IESLiveGiftTraySlideRateABConfig *_traySlideRateABCofig;
    id<IESLiveLanguageService> _languageService;
}

@property (nonatomic) BOOL isBigScale;
@property (retain, nonatomic) IESLiveAnimatedImageView *preAnimatedImageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *postAnimatedImageView;
@property (retain, nonatomic) IESLiveGiftTrayAnimationModel *animationModel;
@property (retain, nonatomic) UIView *trayContainerView;
@property (retain, nonatomic) CAShapeLayer *trayExpandingLayer;
@property (retain, nonatomic) NSMutableDictionary *trayRipplesImageDict;
@property (retain, nonatomic) NSDictionary *trayRippleConfig;
@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundImageView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientViewLayer;
@property (retain, nonatomic) UIView *touchView;
@property (retain, nonatomic) UIView<HTSLiveAvatarImageViewAdapter> *avatarView;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIView<HTSLiveAvatarImageViewAdapter> *topAvatar;
@property (retain, nonatomic) UIView<HTSLiveAvatarImageViewAdapter> *bottomAvatar;
@property (retain, nonatomic) IESLiveAnimatedImageView *headImageView;
@property (retain, nonatomic) UIView *needScaleView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *giftView;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedGiftView;
@property (retain, nonatomic) HTSLiveArtTextLabel *groupCountLabel;
@property (retain, nonatomic) UIView *comboContainerView;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboXLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboXRedLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberRedLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *comboStarView;
@property (retain, nonatomic) IESLiveAnimatedImageView *rightImageView;
@property (nonatomic) BOOL disableComboCount;
@property (copy, nonatomic) id /* block */ stopAnimationTask;
@property (copy, nonatomic) NSArray *groupColorArr;
@property (nonatomic) long long groupIndex;
@property (nonatomic) unsigned long long animationLevel;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *currentNode;
@property (retain, nonatomic) CAGradientLayer *flashLayer;
@property (retain, nonatomic) UIView *outlineView;
@property (retain, nonatomic) CALayer *outlineMaskLayer;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) IESLiveAnimatedImageView *trayTagImageView;
@property (nonatomic) BOOL enableTrayBaseColor;
@property (nonatomic) BOOL enableTrayNewNamedStyle;
@property (nonatomic) long long currentFlyMicIndex;
@property (nonatomic) long long flyMicCount;
@property (retain, nonatomic) IESLiveGCDTimer *flyMicTimer;
@property (nonatomic) long long maxComboCountForLabel;
@property (retain, nonatomic) IESLiveGiftTrayBaseImageABConfig *trayBaseImageABConfig;
@property (retain, nonatomic) IESLiveGiftTraySlideRateABConfig *traySlideRateABCofig;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (nonatomic) BOOL trayGroupModeServerControl;
@property (nonatomic) BOOL enableAggregateBigGiftTray;
@property (nonatomic) BOOL isTopGiftView;
@property (nonatomic) double scale;

- (void)didSetAttachingDIContext;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)startFlashAnimation;
- (id)giftView;
- (void)setGiftView:(id)arg0;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (id)animationModel;
- (void)setAnimationModel:(id)arg0;
- (id)groupCountLabel;
- (void)setGroupCountLabel:(id)arg0;
- (void)prepareToReuse;
- (BOOL)isFaked;
- (void)setIsFaked:(BOOL)arg0;
- (id)gradientViewLayer;
- (void)setGradientViewLayer:(id)arg0;
- (void)setOnAnimationEnd:(id /* block */)arg0;
- (id /* block */)onAnimationEnd;
- (id /* block */)onTouchViewTap;
- (void)setOnTouchViewTap:(id /* block */)arg0;
- (BOOL)isAudience;
- (void)touchViewDidTap;
- (void)setUpGroup;
- (id)comboNumberLabel;
- (void)p_updateColorIndexWithPrice:(unsigned long long)arg0;
- (id)comboXLabel;
- (void)setComboXLabel:(id)arg0;
- (void)setComboNumberLabel:(id)arg0;
- (id)groupColorArr;
- (void)setGroupColorArr:(id)arg0;
- (id)comboContainerView;
- (void)setComboContainerView:(id)arg0;
- (void)setHeadImageView:(id)arg0;
- (id)headImageView;
- (void)updateWithGiftAnimationNode:(id)arg0;
- (long long)currentFlyMicIndex;
- (void)setCurrentFlyMicIndex:(long long)arg0;
- (BOOL)disableComboCount;
- (void)setDisableComboCount:(BOOL)arg0;
- (BOOL)isBigScale;
- (BOOL)trayGroupModeServerControl;
- (BOOL)enableAggregateBigGiftTray;
- (void)setIsBigScale:(BOOL)arg0;
- (void)setEnableAggregateBigGiftTray:(BOOL)arg0;
- (void)setTrayGroupModeServerControl:(BOOL)arg0;
- (void)stopAnimationWithCompletionHandler:(id /* block */)arg0;
- (BOOL)fromCurrentUser;
- (void)setIsComboView:(BOOL)arg0;
- (void)setIsTopGiftView:(BOOL)arg0;
- (void)startAnimationWithCompletionHandler:(id /* block */)arg0 messageListCallback:(id /* block */)arg1;
- (void)startComboAnimation:(id)arg0 groupCount:(id)arg1 completionHandler:(id /* block */)arg2 messageListCallback:(id /* block */)arg3;
- (void)setGiftKey:(id)arg0;
- (BOOL)isComboView;
- (id /* block */)onAvatarViewTap;
- (void)setOnAvatarViewTap:(id /* block */)arg0;
- (id /* block */)onFlyMicAnimationStarted;
- (void)setOnFlyMicAnimationStarted:(id /* block */)arg0;
- (id /* block */)flipAngle;
- (void)setFlipAngle:(id /* block */)arg0;
- (id)touchView;
- (void)avatarViewDidTap;
- (id)outlineView;
- (id)flashLayer;
- (id)copyFromNode:(id)arg0;
- (unsigned long long)giftPriceWithNode:(id)arg0;
- (void)p_updateAnimationLevelWithGroupIndex:(long long)arg0;
- (unsigned long long)animationLevel;
- (id)outlineMaskLayer;
- (void)p_renderComboCount:(id)arg0;
- (void)startAnimationWithCompletionHandler:(id /* block */)arg0 shouldAutoStop:(BOOL)arg1 messageListCallback:(id /* block */)arg2;
- (void)startComboAnimation:(id)arg0 groupCount:(id)arg1 completionHandler:(id /* block */)arg2 shouldAutoStop:(BOOL)arg3 messageListCallback:(id /* block */)arg4;
- (void)p_setStaticImageOnGiftTrayWithURL:(id)arg0;
- (double)p_timeIntervalWithAnimationLevel:(unsigned long long)arg0;
- (void)setStopAnimationTask:(id /* block */)arg0;
- (id /* block */)stopAnimationTask;
- (void)setAnimationLevel:(unsigned long long)arg0;
- (void)setTouchView:(id)arg0;
- (void)setFlashLayer:(id)arg0;
- (void)setOutlineView:(id)arg0;
- (void)setOutlineMaskLayer:(id)arg0;
- (void)p_stopFlyMicTimer;
- (void)setEnableTrayNewNamedStyle:(BOOL)arg0;
- (void)setEnableTrayBaseColor:(BOOL)arg0;
- (void)setMaxComboCountForLabel:(long long)arg0;
- (void)setTrayContainerView:(id)arg0;
- (id)trayContainerView;
- (void)setPreAnimatedImageView:(id)arg0;
- (id)preAnimatedImageView;
- (void)preAnimationDidTap;
- (void)setTrayRipplesImageDict:(id)arg0;
- (id)trayRippleConfig;
- (id)trayRipplesImageDict;
- (void)setPostAnimatedImageView:(id)arg0;
- (id)postAnimatedImageView;
- (void)postAnimationDidTap;
- (void)setNeedScaleView:(id)arg0;
- (id)needScaleView;
- (BOOL)enableTrayNewNamedStyle;
- (void)setAnimatedGiftView:(id)arg0;
- (id)animatedGiftView;
- (void)setTrayTagImageView:(id)arg0;
- (id)trayTagImageView;
- (id)comboXRedLabel;
- (id)comboNumberRedLabel;
- (id)comboStarView;
- (void)p_setAnimatedImageOnGiftTrayWithImage:(id)arg0;
- (void)setFlyMicCount:(long long)arg0;
- (id)p_comboCountTextForComboCount:(id)arg0;
- (BOOL)enableTrayTag;
- (BOOL)enableTrayBaseColor;
- (id)trayBaseImageABConfig;
- (BOOL)enablePostAnimation;
- (void)p_resetAnimatedGiftView;
- (BOOL)enableCombo;
- (void)prepareToShowTrayViewWithCompletion:(id /* block */)arg0;
- (BOOL)enablePreAnimation;
- (id)trayExpandingLayer;
- (void)startTrayRippleImageAnimation;
- (void)startTrayExpandingAnimation;
- (BOOL)isTopGiftView;
- (void)p_AddComboStarInNeedWithCurrentCount:(id)arg0;
- (void)p_updateFlyMic;
- (double)p_transformUseTraySlideRateWithTimeInterval:(double)arg0;
- (long long)maxComboCountForLabel;
- (BOOL)enableMultiInteractGift;
- (long long)flyMicCount;
- (void)p_restartFlyMicAnimation;
- (id)flyMicTimer;
- (void)setFlyMicTimer:(id)arg0;
- (struct CGPoint { double x0; double x1; })p_flymicStartPointWithAngle:(double)arg0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)p_rotateFlyMicImageWithAngle:(double)arg0;
- (struct CGPoint { double x0; double x1; })p_rotateStartPoint:(struct CGPoint { double x0; double x1; })arg0 withAngle:(double)arg1 centerPoint:(struct CGPoint { double x0; double x1; })arg2;
- (id)traySlideRateABCofig;
- (double)p_baseTimeIntervalWithAnimationLevel:(unsigned long long)arg0;
- (double)p_traySlideRate;
- (double)p_calculateLargeGiftTimeInterval;
- (BOOL)disableTrayAnimationWithFilter:(id)arg0 type:(long long)arg1;
- (void)upgradeWithGiftAnimationNode:(id)arg0;
- (void)setTrayExpandingLayer:(id)arg0;
- (void)setTrayRippleConfig:(id)arg0;
- (void)setComboXRedLabel:(id)arg0;
- (void)setComboNumberRedLabel:(id)arg0;
- (void)setComboStarView:(id)arg0;
- (void)setTrayBaseImageABConfig:(id)arg0;
- (void)setTraySlideRateABCofig:(id)arg0;
- (BOOL)isAnimating;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)scale;
- (BOOL)isGroup;
- (id)nameLabel;
- (long long)groupIndex;
- (void)dealloc;
- (id)gradientView;
- (void)startAnimation;
- (void)setScale:(double)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setIsGroup:(BOOL)arg0;
- (id)maskLayer;
- (void)setNameLabel:(id)arg0;
- (void)setMaskLayer:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (id)topAvatar;
- (void)setTopAvatar:(id)arg0;
- (id)bottomAvatar;
- (void)setBottomAvatar:(id)arg0;
- (void)setGroupIndex:(long long)arg0;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg0;
- (id)giftKey;
- (id)currentNode;
- (void)setCurrentNode:(id)arg0;
- (void)setRightImageView:(id)arg0;
- (id)rightImageView;
- (void)layoutUI;

@end
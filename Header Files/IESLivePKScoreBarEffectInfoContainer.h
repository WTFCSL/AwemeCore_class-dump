//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveAnimatedImageView, AnchorEffect_EffectInfo;

@interface IESLivePKScoreBarEffectInfoContainer : UIView <CAAnimationDelegate> {
    BOOL _isOwnerEffectInfoType;
    BOOL _isLeftEffectInfoChanged;
    BOOL _isFirstEffectInfoShow;
    int _leftEffectInfoType;
    int _rightEffectInfoType;
    AnchorEffect_EffectInfo *_leftEffectInfo;
    AnchorEffect_EffectInfo *_rightEffectInfo;
    IESLiveAnimatedImageView *_animatedView;
    UIImageView *_leftEffectInfoIconImageView;
    UIImageView *_rightEffectInfoImageView;
    id _lastWebpLoopFileName;
    double _lastScoreAnimationStartTime;
}

@property (nonatomic) BOOL isOwnerEffectInfoType;
@property (nonatomic) int leftEffectInfoType;
@property (weak, nonatomic) AnchorEffect_EffectInfo *leftEffectInfo;
@property (nonatomic) int rightEffectInfoType;
@property (weak, nonatomic) AnchorEffect_EffectInfo *rightEffectInfo;
@property (nonatomic) BOOL isLeftEffectInfoChanged;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedView;
@property (retain, nonatomic) UIImageView *leftEffectInfoIconImageView;
@property (retain, nonatomic) UIImageView *rightEffectInfoImageView;
@property (retain, nonatomic) id lastWebpLoopFileName;
@property (nonatomic) BOOL isFirstEffectInfoShow;
@property (nonatomic) double lastScoreAnimationStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (int)leftEffectInfoType;
- (int)rightEffectInfoType;
- (BOOL)refreshEffectInfoWithPlayModel:(id)arg0;
- (id)rightEffectInfoImageView;
- (void)showMidAnimatedViewWithPlayModel:(id)arg0 fly:(BOOL)arg1;
- (void)refreshWithScoreStr:(id)arg0 fontSize:(double)arg1;
- (void)setRightEffectInfoImageView:(id)arg0;
- (id)leftEffectInfoIconImageView;
- (void)setIsFirstEffectInfoShow:(BOOL)arg0;
- (void)setIsLeftEffectInfoChanged:(BOOL)arg0;
- (BOOL)isLeftEffectInfoChanged;
- (BOOL)isOwnerEffectInfoType;
- (void)setIsOwnerEffectInfoType:(BOOL)arg0;
- (void)setLeftEffectInfo:(id)arg0;
- (void)setLeftEffectInfoType:(int)arg0;
- (void)setRightEffectInfo:(id)arg0;
- (void)setRightEffectInfoType:(int)arg0;
- (id)leftEffectInfo;
- (BOOL)isFirstEffectInfoShow;
- (void)refreshAnimatedViewWithDelay:(BOOL)arg0;
- (void)startLeftEffectInfoIconAnimationWithFly:(BOOL)arg0 playModel:(id)arg1;
- (id)webpLoopFileName;
- (id)lastWebpLoopFileName;
- (void)setLastWebpLoopFileName:(id)arg0;
- (void)refreshAnimatedViewWithFileName:(id)arg0 loopCount:(long long)arg1;
- (id)webpOneTimesFileName;
- (double)lastScoreAnimationStartTime;
- (void)setLastScoreAnimationStartTime:(double)arg0;
- (void)startAnimationWithText:(id)arg0 fontSize:(double)arg1;
- (void)startScoreLabelAnimation:(id)arg0;
- (void)didClickEffectIcon;
- (id)rightEffectInfo;
- (void)setLeftEffectInfoIconImageView:(id)arg0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)animatedView;
- (void)setAnimatedView:(id)arg0;

@end

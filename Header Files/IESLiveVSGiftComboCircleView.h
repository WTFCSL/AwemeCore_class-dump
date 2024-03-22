//
//     Generated by private class-dump
//

@class UIView, UIImageView, CADisplayLink;

@interface IESLiveVSGiftComboCircleView : UIView {
    BOOL _isScaling;
    id /* block */ _onSend;
    id /* block */ _onEnd;
    CADisplayLink *_displayLink;
    unsigned long long _originCountdown;
    double _currentCountdownRotate;
    UIView *_comboAnimationContentView;
    UIImageView *_comboBcakgroundImageView;
    UIImageView *_comboTextImageView;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long originCountdown;
@property (nonatomic) double currentCountdownRotate;
@property (retain, nonatomic) UIView *comboAnimationContentView;
@property (retain, nonatomic) UIImageView *comboBcakgroundImageView;
@property (retain, nonatomic) UIImageView *comboTextImageView;
@property (nonatomic) BOOL isScaling;
@property (copy, nonatomic) id /* block */ onSend;
@property (copy, nonatomic) id /* block */ onEnd;

- (void)destroyTimer;
- (void)startComboAnimation;
- (void)setComboAnimationContentView:(id)arg0;
- (id)comboAnimationContentView;
- (void)setComboBcakgroundImageView:(id)arg0;
- (void)setComboTextImageView:(id)arg0;
- (id)comboTextImageView;
- (id)comboBcakgroundImageView;
- (void)setCurrentCountdownRotate:(double)arg0;
- (unsigned long long)originCountdown;
- (double)currentCountdownRotate;
- (void)startCountdownTimer;
- (void)stopComboAnimation;
- (id)initWithOriginCount:(unsigned long long)arg0;
- (void)didComboButtonClicked:(id)arg0;
- (void)resetComboAnimation;
- (void)updateComboTextImage:(id)arg0;
- (void)setOnSend:(id /* block */)arg0;
- (void)setOriginCountdown:(unsigned long long)arg0;
- (void)setDisplayLink:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)displayLink;
- (void)dealloc;
- (BOOL)isScaling;
- (void)setupViews;
- (void)setIsScaling:(BOOL)arg0;
- (id /* block */)onEnd;
- (void)setOnEnd:(id /* block */)arg0;
- (id /* block */)onSend;

@end

//
//     Generated by private class-dump
//

@class NSString, NSTimer, UIImageView, UILabel, UIView;

@interface AFDCancelMuteAwemeView : UIButton <CAAnimationDelegate, AFDMuteAwemeCancelViewProtocol> {
    BOOL _isExpended;
    id /* block */ shortenAnimationStartBlock;
    id /* block */ _performExpandAnimationBlock;
    id /* block */ _performShortenAnimationBlock;
    id /* block */ _performQuickShortenAnimationBlock;
    NSTimer *_autoShortenTimer;
    UILabel *_guideLabel;
    UIImageView *_iconImageView;
    UIView *_bgView;
    double _cancelViewExpendW;
}

@property (copy, nonatomic) id /* block */ performExpandAnimationBlock;
@property (copy, nonatomic) id /* block */ performShortenAnimationBlock;
@property (copy, nonatomic) id /* block */ performQuickShortenAnimationBlock;
@property (retain, nonatomic) NSTimer *autoShortenTimer;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isExpended;
@property (nonatomic) double cancelViewExpendW;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ shortenAnimationStartBlock;

- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (void)startAutoHideIfNeeded;
- (void)p_setupAnimation;
- (double)p_currentItemSize;
- (BOOL)isExpended;
- (id /* block */)performQuickShortenAnimationBlock;
- (id /* block */)performShortenAnimationBlock;
- (id /* block */)performExpandAnimationBlock;
- (id)autoShortenTimer;
- (void)setIsExpended:(BOOL)arg0;
- (double)cancelViewExpendW;
- (void)setPerformExpandAnimationBlock:(id /* block */)arg0;
- (void)setPerformShortenAnimationBlock:(id /* block */)arg0;
- (void)setPerformQuickShortenAnimationBlock:(id /* block */)arg0;
- (void)setAutoShortenTimer:(id)arg0;
- (BOOL)isDisplayOnScreen;
- (void)updateAccessibilityFrame;
- (id /* block */)shortenAnimationStartBlock;
- (void)shortenWithHidden:(BOOL)arg0;
- (void)expend;
- (void)accessibilityElementAutomaticFocus;
- (void)setShortenAnimationStartBlock:(id /* block */)arg0;
- (void)setCancelViewExpendW:(double)arg0;
- (id)init;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (void)reset;
- (id)iconImageView;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;

@end

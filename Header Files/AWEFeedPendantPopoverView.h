//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel, UIView;

@interface AWEFeedPendantPopoverView : UIView <CAAnimationDelegate> {
    BOOL _disableAutoDismiss;
    BOOL _tapToDismiss;
    BOOL _isDismissing;
    double _autoDismissTime;
    id /* block */ _hideCompletion;
    id /* block */ _tapBlock;
    UIView *_containerView;
    UIView *_backgroundView;
    UIImageView *_arrowImageView;
    UILabel *_contentLabel;
    NSTimer *_autoHideTimer;
    id /* block */ _showCompletion;
    id /* block */ _dismissCompletion;
    id /* block */ _performShowAnimationBlock;
    id /* block */ _performHideAnimationBlock;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) BOOL tapToDismiss;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setDisableAutoDismiss:(BOOL)arg0;
- (double)autoDismissTime;
- (void)setAutoDismissTime:(double)arg0;
- (void)setHideCompletion:(id /* block */)arg0;
- (void)setShowCompletion:(id /* block */)arg0;
- (void)setDismissCompletion:(id /* block */)arg0;
- (id /* block */)showCompletion;
- (id /* block */)dismissCompletion;
- (void)setTapToDismiss:(BOOL)arg0;
- (BOOL)tapToDismiss;
- (void)setPerformShowAnimationBlock:(id /* block */)arg0;
- (id /* block */)performShowAnimationBlock;
- (void)setupAnimation;
- (void)startAutoHideIfNeeded;
- (id /* block */)performHideAnimationBlock;
- (id /* block */)hideCompletion;
- (id)getShowAnimation;
- (id)getHideAnimation;
- (void)setPerformHideAnimationBlock:(id /* block */)arg0;
- (BOOL)disableAutoDismiss;
- (void)showOnView:(id)arg0 adjustment:(struct CGPoint { double x0; double x1; })arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)dismissAnimated:(BOOL)arg0 complete:(id /* block */)arg1;
- (id)init;
- (void)dismiss;
- (id)backgroundView;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)hide;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setBackgroundView:(id)arg0;
- (id)initWithContent:(id)arg0;
- (void)dismiss:(id /* block */)arg0;
- (void)setupUI;
- (void)setIsDismissing:(BOOL)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)tapped:(id)arg0;
- (void)updateContent:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;

@end

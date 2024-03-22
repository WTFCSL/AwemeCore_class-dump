//
//     Generated by private class-dump
//

@class NSTimer, NSString, DUXPopoverVisualEffectContentView, DUXPopoverContentView, UIView, DUXPopoverContentWrapper, UITapGestureRecognizer, DUXPopoverCoverModalView, DUXPopoverCoverView, UIVisualEffect, DUXPopoverPositionOffset, UIColor;
@protocol ACCDUXPopoverContent, ACCDUXPopoverPositionOffsetInstance, DUXPopoverDelegate, ACCDUXPopoverDelegate, DUXPopoverContent;

@interface DUXPopover : UIView <AWEACCPopoverActionSheetHandlerProtocol, ACCDUXPopoverInstance, CAAnimationDelegate, DUXPopoverCoverViewDelegate> {
    BOOL _clickable;
    BOOL _disableAutoDismiss;
    BOOL _needHollow;
    BOOL _autoAdaption;
    BOOL _makeConstraintsWithTarget;
    BOOL _shouldAutoTimerCountInScrollProcess;
    BOOL _isDismissing;
    BOOL _tapToDismiss;
    BOOL _duxPopoverUse12pxRadius;
    BOOL _disableHighlightWhileTapPlaceholder;
    id<DUXPopoverContent> _content;
    double _autoDismissTime;
    UIView *_target;
    unsigned long long _position;
    double _targetPadding;
    UIView *_limitView;
    id /* block */ _clickBlock;
    id /* block */ _hideCompletion;
    id /* block */ _showCompletion;
    DUXPopoverPositionOffset *_positionOffset;
    id<DUXPopoverDelegate> _delegate;
    DUXPopoverContentView *_popoverContentView;
    DUXPopoverVisualEffectContentView *_popoverVisualEffectContentView;
    double _limitPadding;
    UITapGestureRecognizer *_tap;
    DUXPopoverContentWrapper *_wrapper;
    NSTimer *_autoHideTimer;
    id /* block */ _dismissCompletion;
    UIView *_parentView;
    DUXPopoverCoverModalView *_coverModalView;
    double _duxPopoverCornerRadius;
    DUXPopoverCoverView *_coverView;
    UIColor *_popoverColor;
    UIVisualEffect *_effect;
    id /* block */ _performShowAnimationBlock;
    id /* block */ _performHideAnimationBlock;
    id /* block */ _performVisualEffectShowAnimationBlock;
    id /* block */ _performVisualEffectHideAnimationBlock;
    struct CGPoint { double x; double y; } _targetPoint;
    struct CGPoint { double x; double y; } _popoverAnchorPoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCDUXPopoverContent> content;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) unsigned long long position;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetPoint;
@property (nonatomic) double targetPadding;
@property (nonatomic) BOOL autoAdaption;
@property (retain, nonatomic) UIView *limitView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) id<ACCDUXPopoverPositionOffsetInstance> positionOffset;
@property (weak, nonatomic) id<ACCDUXPopoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) DUXPopoverContentView *popoverContentView;
@property (retain, nonatomic) DUXPopoverVisualEffectContentView *popoverVisualEffectContentView;
@property (nonatomic) struct CGPoint { double x; double y; } popoverAnchorPoint;
@property (retain, nonatomic) DUXPopoverContentWrapper *wrapper;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (nonatomic) BOOL isDismissing;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) DUXPopoverCoverModalView *coverModalView;
@property (nonatomic) double duxPopoverCornerRadius;
@property (retain, nonatomic) DUXPopoverCoverView *coverView;
@property (retain, nonatomic) UIColor *popoverColor;
@property (copy, nonatomic) UIVisualEffect *effect;
@property (nonatomic) BOOL tapToDismiss;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (copy, nonatomic) id /* block */ performVisualEffectShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performVisualEffectHideAnimationBlock;
@property (nonatomic) BOOL duxPopoverUse12pxRadius;
@property (nonatomic) BOOL disableHighlightWhileTapPlaceholder;
@property (retain, nonatomic) id<DUXPopoverContent> content;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL needHollow;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) double targetPadding;
@property (nonatomic) BOOL autoAdaption;
@property (retain, nonatomic) UIView *limitView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (retain, nonatomic) DUXPopoverPositionOffset *positionOffset;
@property (weak, nonatomic) id<DUXPopoverDelegate> delegate;
@property (nonatomic) double limitPadding;
@property (nonatomic) BOOL makeConstraintsWithTarget;
@property (nonatomic) BOOL shouldAutoTimerCountInScrollProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTargetPadding:(double)arg0;
- (void)setPopoverColor:(id)arg0;
- (void)setDisableAutoDismiss:(BOOL)arg0;
- (id)initWithContent:(id)arg0 target:(id)arg1 clickBlock:(id /* block */)arg2;
- (double)autoDismissTime;
- (void)setAutoDismissTime:(double)arg0;
- (double)targetPadding;
- (void)setClickBlock:(id /* block */)arg0;
- (void)showOnView:(id)arg0 withCover:(BOOL)arg1;
- (void)setClickable:(BOOL)arg0;
- (void)setAutoAdaption:(BOOL)arg0;
- (void)setHideCompletion:(id /* block */)arg0;
- (void)setLimitView:(id)arg0;
- (void)setShowCompletion:(id /* block */)arg0;
- (void)setDismissCompletion:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (id /* block */)showCompletion;
- (id /* block */)dismissCompletion;
- (void)setLimitPadding:(double)arg0;
- (void)showOnView:(id)arg0 withCover:(BOOL)arg1 withAnimated:(BOOL)arg2;
- (void)setTapToDismiss:(BOOL)arg0;
- (BOOL)tapToDismiss;
- (void)dimiss;
- (void)setPerformShowAnimationBlock:(id /* block */)arg0;
- (id /* block */)performShowAnimationBlock;
- (id)popoverPressColor;
- (void)setupAnimation;
- (void)startAutoHideIfNeeded;
- (id /* block */)performHideAnimationBlock;
- (id /* block */)hideCompletion;
- (id)getShowAnimation;
- (id)getHideAnimation;
- (void)setPerformHideAnimationBlock:(id /* block */)arg0;
- (BOOL)disableAutoDismiss;
- (BOOL)clickable;
- (BOOL)makeConstraintsWithTarget;
- (BOOL)disableHighlightWhileTapPlaceholder;
- (void)tapGestureFuction;
- (void)setMakeConstraintsWithTarget:(BOOL)arg0;
- (void)setDisableHighlightWhileTapPlaceholder:(BOOL)arg0;
- (void)coverViewDidHit;
- (id /* block */)performVisualEffectShowAnimationBlock;
- (void)setPerformVisualEffectShowAnimationBlock:(id /* block */)arg0;
- (id /* block */)performVisualEffectHideAnimationBlock;
- (void)setPerformVisualEffectHideAnimationBlock:(id /* block */)arg0;
- (BOOL)duxPopoverUse12pxRadius;
- (void)setDuxPopoverUse12pxRadius:(BOOL)arg0;
- (id)popoverContentView;
- (void)setShouldAutoTimerCountInScrollProcess:(BOOL)arg0;
- (BOOL)autoAdaption;
- (id)limitView;
- (void)setPopoverContentView:(id)arg0;
- (void)setDuxPopoverCornerRadius:(double)arg0;
- (double)duxPopoverCornerRadius;
- (id)popoverVisualEffectContentView;
- (struct CGPoint { double x0; double x1; })popoverAnchorPoint;
- (BOOL)needHollow;
- (id)coverOnView:(id)arg0 hollowView:(id)arg1;
- (void)checkOverView;
- (id)coverModalView;
- (void)setCoverModalView:(id)arg0;
- (void)setPopoverAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)checkOverViewPosition:(unsigned long long)arg0;
- (BOOL)checkOverViewOffset;
- (void)resetAllConstraints;
- (double)limitPadding;
- (BOOL)shouldAutoTimerCountInScrollProcess;
- (void)setNeedHollow:(BOOL)arg0;
- (void)setPopoverVisualEffectContentView:(id)arg0;
- (id)effect;
- (void)dismiss;
- (void).cxx_destruct;
- (id)positionOffset;
- (void)setEffect:(id)arg0;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (unsigned long long)position;
- (BOOL)isDismissing;
- (void)setTarget:(id)arg0;
- (void)show;
- (void)setPosition:(unsigned long long)arg0;
- (id)content;
- (id)target;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (void)setContent:(id)arg0;
- (void)hide;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setPositionOffset:(id)arg0;
- (id)wrapper;
- (struct CGPoint { double x0; double x1; })targetPoint;
- (void)setTargetPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)dismiss:(id /* block */)arg0;
- (void)setIsDismissing:(BOOL)arg0;
- (id)parentView;
- (void)setParentView:(id)arg0;
- (id)tap;
- (void)setTap:(id)arg0;
- (void)setWrapper:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;
- (id)popoverColor;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;

@end
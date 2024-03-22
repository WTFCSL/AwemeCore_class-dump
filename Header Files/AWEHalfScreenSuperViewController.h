//
//     Generated by private class-dump
//

@class UIColor, NSString, UIScrollView, UIPanGestureRecognizer, UIView;

@interface AWEHalfScreenSuperViewController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL _onlyTopCornerClips;
    BOOL _isContentViewScroll;
    BOOL _isFullScreen;
    BOOL _isShowing;
    BOOL _disablePanGes;
    BOOL _useSmootherTransition;
    BOOL _isPresented;
    UIView *_containerView;
    unsigned long long _animationStyle;
    unsigned long long _viewStyle;
    double _containerWidth;
    double _containerHeight;
    double _cornerRadius;
    UIScrollView *_contentView;
    UIView *_maskView;
    id /* block */ _dismissBlock;
    UIColor *_maskColor;
    UIPanGestureRecognizer *_panGes;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) BOOL isPresented;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL onlyTopCornerClips;
@property (nonatomic) BOOL isContentViewScroll;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL disablePanGes;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) BOOL useSmootherTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (void)showOnView:(id)arg0;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void)setDisablePanGes:(BOOL)arg0;
- (BOOL)disablePanGes;
- (void)selfPanned:(id)arg0;
- (void)defaultShowAnimation;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)dismissWithDuration:(double)arg0 afterDismissBlock:(id /* block */)arg1;
- (void)fadeOutAnimation:(id /* block */)arg0;
- (void)defaultHideAnimationWithDuration:(double)arg0 completion:(id /* block */)arg1;
- (BOOL)isContentViewScroll;
- (void)slideDismiss;
- (void)tapDismiss;
- (void)presentOnViewController:(id)arg0;
- (void)setOnlyTopCornerClips:(BOOL)arg0;
- (void)setIsContentViewScroll:(BOOL)arg0;
- (void)setUseSmootherTransition:(BOOL)arg0;
- (void)dismiss;
- (BOOL)isFullScreen;
- (void)setAnimationStyle:(unsigned long long)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (double)cornerRadius;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (unsigned long long)viewStyle;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (BOOL)isPresented;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)isShowing;
- (id)contentView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)presentViewController:(id /* block */)arg0;
- (id)containerView;
- (void)viewDidLoad;
- (void)setViewStyle:(unsigned long long)arg0;
- (void)setCornerRadius:(double)arg0;
- (void)setMaskView:(id)arg0;
- (unsigned long long)animationStyle;
- (void)setContentView:(id)arg0;
- (void)dismiss:(id /* block */)arg0;
- (void)setMaskColor:(id)arg0;
- (id)maskColor;
- (void)setIsFullScreen:(BOOL)arg0;
- (void)setIsPresented:(BOOL)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;
- (void)fadeInAnimation;

@end

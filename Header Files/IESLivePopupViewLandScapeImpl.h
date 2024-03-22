//
//     Generated by private class-dump
//

@class NSString, IESLivePopupItem, UIView, UITapGestureRecognizer;

@interface IESLivePopupViewLandScapeImpl : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, IESLivePopupView> {
    BOOL _showing;
    BOOL _isAnimating;
    UIView *_containerView;
    IESLivePopupItem *_item;
    UITapGestureRecognizer *_tap;
    UIView *_accessView;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL showing;
@property (weak, nonatomic) IESLivePopupItem *item;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAccessView:(id)arg0;
- (id)accessView;
- (void)showBackAfterPan;
- (void)setupContianer;
- (void)showInAutoLayout;
- (void)showforKey:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showingFrame;
- (void)setVisible:(BOOL)arg0 withAnimated:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)removeFromSuperview;
- (id)item;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (void)show;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)containerView;
- (void)hide;
- (void)tap:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setItem:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)_setup;
- (id)initWithItem:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightFrame;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg0;
- (id)tap;
- (void)setTap:(id)arg0;
- (void)updateFrame;
- (void)p_addObservers;

@end

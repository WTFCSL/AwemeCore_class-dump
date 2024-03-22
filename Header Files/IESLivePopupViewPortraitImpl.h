//
//     Generated by private class-dump
//

@class UIScrollView, NSString, IESLivePopupPanServiceImp, IESLivePopupItem, UIView, UITapGestureRecognizer;
@protocol IESLivePopupAction;

@interface IESLivePopupViewPortraitImpl : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, IESLivePopupView, IESLivePopupDelegate> {
    BOOL _showing;
    BOOL _isKeyboardShow;
    BOOL _listDidReachTop;
    BOOL _listDidReachLeft;
    BOOL _listIsDragging;
    BOOL _isAnimating;
    UIView *_containerView;
    UITapGestureRecognizer *_tap;
    IESLivePopupItem *_item;
    UIScrollView *_insideListView;
    UIView *_accessView;
    IESLivePopupPanServiceImp *_panService;
    UIView *_animContainer;
    id<IESLivePopupAction> _popupAction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expectedShowingFrame;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expectedShowingFrame;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) BOOL listDidReachTop;
@property (nonatomic) BOOL listDidReachLeft;
@property (nonatomic) BOOL listIsDragging;
@property (weak, nonatomic) IESLivePopupItem *item;
@property (weak, nonatomic) UIScrollView *insideListView;
@property (retain, nonatomic) UIView *accessView;
@property (retain, nonatomic) IESLivePopupPanServiceImp *panService;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *animContainer;
@property (retain, nonatomic) id<IESLivePopupAction> popupAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isKeyboardShow;
- (void)setupPanGesture;
- (void)setPopupAction:(id)arg0;
- (id)popupAction;
- (void)setIsKeyboardShow:(BOOL)arg0;
- (void)setAccessView:(id)arg0;
- (id)accessView;
- (void)onHideCompletion;
- (void)showBackAfterPan;
- (id)insideListView;
- (BOOL)listIsDragging;
- (BOOL)listDidReachTop;
- (BOOL)listDidReachLeft;
- (void)showInAutoLayout;
- (void)showforKey:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showingFrame;
- (void)setVisible:(BOOL)arg0 withAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hideFrame;
- (void)setupFollowGesture;
- (void)setupPushGesture;
- (id)panService;
- (void)showAnimationInAutoLayout;
- (void)showPopupAnimWithKey:(id)arg0;
- (void)showPushAnimWithKey:(id)arg0;
- (void)hidePopupAnim;
- (void)hidePushAnim;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expectedShowingFrame;
- (void)setExpectedShowingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setInsideListView:(id)arg0;
- (void)setListIsDragging:(BOOL)arg0;
- (void)setListDidReachTop:(BOOL)arg0;
- (void)setListDidReachLeft:(BOOL)arg0;
- (void)doSomethingWhenDraggingEnd:(id)arg0;
- (BOOL)shouldShowHideAnimWebp;
- (void)showHideAnimWebp;
- (id)animContainer;
- (void)p_handleAnimationEnded;
- (void)setAnimContainer:(id)arg0;
- (void)setPanService:(id)arg0;
- (BOOL)isAnimating;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)removeFromSuperview;
- (id)item;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)show;
- (void)setContainerView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)containerView;
- (void)hide;
- (void)tap:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setItem:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setIsAnimating:(BOOL)arg0;
- (id)initWithItem:(id)arg0;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg0;
- (void)setupUI;
- (void)setupAccessibility;
- (id)tap;
- (void)setTap:(id)arg0;
- (void)updateFrame;
- (double)bottomOffset;
- (void)clean;
- (void)p_addObservers;

@end

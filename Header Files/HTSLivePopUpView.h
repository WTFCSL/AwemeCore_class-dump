//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESLivePopupPanService, IESLivePerfSampler;

@interface HTSLivePopUpView : UIView <UIGestureRecognizerDelegate> {
    BOOL _noAutoHide;
    BOOL _animating;
    BOOL _hideOnTap;
    BOOL _forwardEvent;
    BOOL _enablePullDown;
    UIView *_containerView;
    long long _orientation;
    double _landscapeTopOffset;
    double _landscapePaddingOffset;
    id /* block */ _onHideStart;
    id /* block */ _onHideCompletion;
    id /* block */ _onShowCompletion;
    id /* block */ _customShowBlock;
    id /* block */ _customHideBlock;
    id<IESLivePopupPanService> _popupPanService;
    double _appearTime;
    id<IESLivePerfSampler> _perfSampler;
    UIView *_accessView;
}

@property (retain, nonatomic) id<IESLivePopupPanService> popupPanService;
@property (nonatomic) double appearTime;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) BOOL noAutoHide;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL hideOnTap;
@property (nonatomic) BOOL forwardEvent;
@property (nonatomic) BOOL enablePullDown;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long orientation;
@property (nonatomic) double landscapeTopOffset;
@property (nonatomic) double landscapePaddingOffset;
@property (copy, nonatomic) id /* block */ onHideStart;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (copy, nonatomic) id /* block */ customShowBlock;
@property (copy, nonatomic) id /* block */ customHideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)appearTime;
- (void)setAppearTime:(double)arg0;
- (void)setOnShowCompletion:(id /* block */)arg0;
- (void)setOnHideCompletion:(id /* block */)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)showAnimationWithCompletion:(id /* block */)arg0;
- (void)setAccessView:(id)arg0;
- (id)accessView;
- (BOOL)shouldUseSideStyle;
- (void)setCustomShowBlock:(id /* block */)arg0;
- (void)setOnHideStart:(id /* block */)arg0;
- (id)popupPanService;
- (void)setPopupPanService:(id)arg0;
- (void)setCustomHideBlock:(id /* block */)arg0;
- (void)hideWithDestroy:(BOOL)arg0;
- (void)setForwardEvent:(BOOL)arg0;
- (id /* block */)onHideCompletion;
- (id /* block */)onShowCompletion;
- (void)setLandscapeTopOffset:(double)arg0;
- (void)setLandscapePaddingOffset:(double)arg0;
- (void)setEnablePullDown:(BOOL)arg0;
- (void)setHideOnTap:(BOOL)arg0;
- (BOOL)hideOnTap;
- (BOOL)forwardEvent;
- (id /* block */)customShowBlock;
- (double)landscapeTopOffset;
- (double)landscapePaddingOffset;
- (id /* block */)customHideBlock;
- (BOOL)noAutoHide;
- (void)setNoAutoHide:(BOOL)arg0;
- (BOOL)enablePullDown;
- (id /* block */)onHideStart;
- (void).cxx_destruct;
- (void)show;
- (void)setAnimating:(BOOL)arg0;
- (long long)orientation;
- (void)setContainerView:(id)arg0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)containerView;
- (void)hide;
- (void)setOrientation:(long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)animating;
- (void)didTapSelf;

@end
//
//     Generated by private class-dump
//

@class AWEPOINavButton, AWEPOILynxContainerView, NSDictionary, UIView, AWECityPOIDetailNavigationBarViewModel;

@interface AWECityPOIDetailNavigationBar : DitoComponentView {
    UIView *_bgView;
    AWECityPOIDetailNavigationBarViewModel *_navigationBarVM;
    AWEPOINavButton *_backButton;
    AWEPOILynxContainerView *_lynxView;
    NSDictionary *_previousBizData;
    double _lastScrollEventTime;
}

@property (retain, nonatomic) UIView *bgView;
@property (weak, nonatomic) AWECityPOIDetailNavigationBarViewModel *navigationBarVM;
@property (retain, nonatomic) AWEPOINavButton *backButton;
@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) NSDictionary *previousBizData;
@property (nonatomic) double lastScrollEventTime;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)updateViewModel:(id)arg0;
- (id)navigationBarVM;
- (void)changeBackButtonAtInitialStage:(BOOL)arg0;
- (void)setNavigationBarVM:(id)arg0;
- (id)previousBizData;
- (id)extraParamsForLynx;
- (void)pageBack;
- (void)registerNoActionHandlerIfNeeded:(id)arg0;
- (void)setPreviousBizData:(id)arg0;
- (id)backButtonImageInLight:(BOOL)arg0;
- (id)generalContext;
- (void)setupScrollPercent:(double)arg0;
- (void)changeStyleIfNeed:(BOOL)arg0;
- (void)backButtonPress;
- (void)pageViewDidScroll:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)lastScrollEventTime;
- (void)setLastScrollEventTime:(double)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;

@end
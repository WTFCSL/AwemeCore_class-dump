//
//     Generated by private class-dump
//

@class NSString, IESLiveChargeViewModel, UIView;
@protocol IESLiveWebViewService, IESHYContainerProtocol;

@interface IESLiveChargeViewConsumeDSComponent : UIView <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol, IESLiveChargeViewComponent> {
    id<IESLiveWebViewService> _webViewService;
    UIView<IESHYContainerProtocol> *_hybridContainer;
    double _width;
    IESLiveChargeViewModel *_viewModel;
}

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) double width;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hybridContainer;
- (void)updateViewModel:(id)arg0;
- (void)setHybridContainer:(id)arg0;
- (id)webViewService;
- (void)setWebViewService:(id)arg0;
- (void)loadHybridContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)pageInitialData;
- (void)reload;
- (void).cxx_destruct;
- (id)initWithWidth:(double)arg0;
- (void)setViewModel:(id)arg0;
- (void)setWidth:(double)arg0;
- (id)viewModel;
- (double)width;
- (id)pageURL;
- (void)setupUI;
- (double)viewHeight;

@end

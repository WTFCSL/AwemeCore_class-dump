//
//     Generated by private class-dump
//

@class IESECGoodsDetailLiveBanner;
@protocol IESECPDPActionDispatcherService, IESECPDPContainerService, IESECPDPSectionManagerService;

@interface IESECPDPLiveBannerComponent : IESECPDPBaseComponent {
    id<IESECPDPContainerService> _container;
    id<IESECPDPSectionManagerService> _sectionManager;
    id<IESECPDPActionDispatcherService> _dispatcher;
    IESECGoodsDetailLiveBanner *_liveBanner;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _panStartFrame;
}

@property (weak, nonatomic) id<IESECPDPContainerService> container;
@property (weak, nonatomic) id<IESECPDPSectionManagerService> sectionManager;
@property (weak, nonatomic) id<IESECPDPActionDispatcherService> dispatcher;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } panStartFrame;
@property (retain, nonatomic) IESECGoodsDetailLiveBanner *liveBanner;

- (id)liveBanner;
- (void)loadComponent;
- (void)setPanStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })panStartFrame;
- (void)showPresentAnimation;
- (id)sectionManager;
- (void)setSectionManager:(id)arg0;
- (void)containerDidRender;
- (void)animateDismiss;
- (void)beganGesture:(unsigned long long)arg0;
- (void)panWithOffsetY:(double)arg0 directionUp:(BOOL)arg1;
- (void)handlePanGestureWithPercent:(double)arg0;
- (void)setupLiveBannerForMode:(long long)arg0;
- (void)cancelHalfModePan;
- (void)setLiveBanner:(id)arg0;
- (void)registerSelfService;
- (void)cancelFullModePan;
- (id)container;
- (id)dispatcher;
- (void)setDispatcher:(id)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;

@end
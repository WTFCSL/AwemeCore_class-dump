//
//     Generated by private class-dump
//

@protocol IESECGoodsDetailHeaderViewManagerServeice;

@interface IESECGoodsDetailHeaderSlicePendantComponent : IESECGoodsDetailHeaderFeatureComponent {
    id<IESECGoodsDetailHeaderViewManagerServeice> _viewManager;
}

@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;

- (void)loadComponent;
- (void)setViewManager:(id)arg0;
- (void)headerViewWillLoad;
- (void)registerSelfService;
- (void).cxx_destruct;
- (id)viewManager;

@end
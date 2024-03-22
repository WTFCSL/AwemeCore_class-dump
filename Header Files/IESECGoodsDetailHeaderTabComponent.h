//
//     Generated by private class-dump
//

@class IESECGoodsDetailHeaderTabView, NSString, IESECGoodsDetailHeaderTabComponentData;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderEventHandlerService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderTrackerService;

@interface IESECGoodsDetailHeaderTabComponent : IESECGoodsDetailHeaderFeatureComponent <IESECGoodsDetailHeaderTabViewDelegate, IESECGoodsDetailTabViewService> {
    IESECGoodsDetailHeaderTabComponentData *_data;
    IESECGoodsDetailHeaderTabView *_tabView;
    id<IESECGoodsDetailHeaderTrackerService> _tracker;
    id<IESECGoodsDetailHeaderStorageService> _storage;
    id<IESECGoodsDetailHeaderEventHandlerService> _handler;
    id<IESECGoodsDetailHeaderViewManagerServeice> _viewManager;
}

@property (retain, nonatomic) IESECGoodsDetailHeaderTabComponentData *data;
@property (retain, nonatomic) IESECGoodsDetailHeaderTabView *tabView;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTrackerService> tracker;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderEventHandlerService> handler;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIndex:(unsigned long long)arg0;
- (void)setTabView:(id)arg0;
- (void)loadComponent;
- (void)setViewManager:(id)arg0;
- (void)headerViewWillLoad;
- (void)headerViewDidScrollToMode:(long long)arg0;
- (void)registerSelfService;
- (void)hideTabView;
- (void)trackClickAndDraw:(unsigned long long)arg0 tabIndex:(unsigned long long)arg1;
- (void)updateTabViewHidden:(unsigned long long)arg0;
- (void)setStorage:(id)arg0;
- (void)setModel:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (id)storage;
- (void)setData:(id)arg0;
- (void)setHandler:(id)arg0;
- (void)showTabView;
- (id)handler;
- (id)viewManager;
- (id)tabView;

@end
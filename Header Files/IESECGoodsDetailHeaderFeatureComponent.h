//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailHeaderPendantModel, IESECGoodsDetailHeaderServiceProvider;
@protocol IESECGoodsDetailHeaderContainerService;

@interface IESECGoodsDetailHeaderFeatureComponent : NSObject <IESECGoodsDetailHeaderFeatureComponent> {
    IESECGoodsDetailHeaderPendantModel *model;
    long long mode;
    IESECGoodsDetailHeaderServiceProvider *_serviceProvider;
    id<IESECGoodsDetailHeaderContainerService> _container;
}

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderContainerService> container;
@property (retain, nonatomic) IESECGoodsDetailHeaderPendantModel *model;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponent;
- (void)headerViewWillLoad;
- (void)headerViewDidScrollToMode:(long long)arg0;
- (void)headerViewDidLoad;
- (void)registerSelfService;
- (id)container;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (long long)mode;
- (void)setContainer:(id)arg0;
- (void)setServiceProvider:(id)arg0;
- (void)setMode:(long long)arg0;
- (id)initWithServiceProvider:(id)arg0;
- (id)serviceProvider;

@end

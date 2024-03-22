//
//     Generated by private class-dump
//

@class IESECStoreContainerViewModel, IESECShopBffTabResponse, IESECTracker, IESECShopActivityResponse, IESECShopContext, IESECShopInfoResponse;

@protocol IESECShopDataService <NSObject>

@property (readonly, nonatomic) IESECTracker *tracker;
@property (readonly, nonatomic) IESECShopContext *routerParams;
@property (readonly, nonatomic) unsigned long long apiStatus;
@property (readonly, nonatomic) IESECShopInfoResponse *infoResponse;
@property (readonly, nonatomic) IESECShopBffTabResponse *tabResponse;
@property (readonly, nonatomic) IESECShopActivityResponse *activityResponse;
@property (readonly, nonatomic) IESECStoreContainerViewModel *api;

- (id)routerParams;
- (void)configRouterParams:(id)arg0;
- (void)prefetchLynxTemplate;
- (id)tabResponse;
- (void)configTabResponse:(id)arg0;
- (void)preconnectRelationPicHosts;
- (void)fetchPreloadInfoData;
- (void)fetchInfoAndTabData;
- (void)fetchInfoData;
- (void)fetchTabData;
- (void)fetchActivityData;
- (void)updateTrackerBussinessParams;
- (void)prefetchInfo:(id /* block */)arg0;
- (void)prefetchInfoDataConsumer:(BOOL)arg0 callBack:(id /* block */)arg1;
- (void)prefetchTabData:(id /* block */)arg0;
- (unsigned long long)apiStatus;
- (id)activityResponse;
- (id)tracker;
- (id)infoResponse;
- (id)api;

@end

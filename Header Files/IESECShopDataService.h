//
//     Generated by private class-dump
//

@class IESECTracker, NSString, IESECShopBffTabResponse, IESECShopContext, IESECShopActivityResponse, IESECShopInfoResponse, IESECStoreContainerViewModel, IESECServiceProxy;
@protocol IESECShopMonitorService, IESECShopForwardCoService, IESECShopStateService;

@interface IESECShopDataService : IESECShopService <IESECShopDataService> {
    IESECShopContext *_routerParams;
    IESECShopInfoResponse *infoResponse;
    IESECShopBffTabResponse *tabResponse;
    IESECShopActivityResponse *activityResponse;
    IESECTracker *_tracker;
    unsigned long long _apiStatus;
    IESECStoreContainerViewModel *_api;
    IESECServiceProxy<IESECShopStateService> *_stateService;
    IESECServiceProxy<IESECShopMonitorService> *_monitorService;
    IESECServiceProxy<IESECShopForwardCoService> *_forwardCoService;
}

@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) unsigned long long apiStatus;
@property (retain, nonatomic) IESECShopInfoResponse *infoResponse;
@property (retain, nonatomic) IESECShopBffTabResponse *tabResponse;
@property (retain, nonatomic) IESECShopActivityResponse *activityResponse;
@property (retain, nonatomic) IESECStoreContainerViewModel *api;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly, nonatomic) IESECShopContext *routerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)routerParams;
- (id)monitorService;
- (void)setMonitorService:(id)arg0;
- (void)configRouterParams:(id)arg0;
- (void)prefetchLynxTemplate;
- (void)setupBindings;
- (void)setTabResponse:(id)arg0;
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
- (id)forwardCoService;
- (id)stateService;
- (void)setStateService:(id)arg0;
- (void)setForwardCoService:(id)arg0;
- (void)setApiStatus:(unsigned long long)arg0;
- (void)apiSplitHandleApiStatusFinish;
- (void)setActivityResponse:(id)arg0;
- (id)initWithContext:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setInfoResponse:(id)arg0;
- (id)infoResponse;
- (id)api;
- (void)setApi:(id)arg0;

@end

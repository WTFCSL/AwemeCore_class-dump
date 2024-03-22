//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel, IESContainer;

@interface ACCSideslipPropPanelServiceRecorderContainer : IESStaticContainer {
    IESContainer *_hostContainer;
    AWEVideoPublishViewModel *_repository;
}

@property (weak, nonatomic) IESContainer *hostContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (id)initWithHostContainer:(id)arg0 repository:(id)arg1;
- (id)multiProvideSingleton:(id)arg0 ACCSideslipPropService:(id)arg1 ACCSideslipPropInternalService:(id)arg2;
- (id)multiProvideSingleton:(id)arg0 ACCSideslipPropPanelService:(id)arg1 ACCSideslipPropPanelExpouseCapability:(id)arg2 ACCSideslipPropPanelPickViewCapability:(id)arg3;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelCellModelBuilderProtocol:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelDownloadService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelPluginLifeCycleService:(id)arg1;
- (id)hostContainer;
- (void)setHostContainer:(id)arg0;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelTrackerService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelPrefetchService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelFocusStatusService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelRecordTransition:(id)arg1;
- (id)multiProvideSingleton:(id)arg0 ACCSideslipPropPanelUIConfigService:(id)arg1 ACCSideslipPropPanelRecordUIConfigService:(id)arg2;
- (id)multiProvideSingleton:(id)arg0 ACCSideslipPropViewContainerProtocol:(id)arg1 ACCSideslipPropViewContainerBaseSetterProtocol:(id)arg2 ACCRecorderSideslipViewContainerProtocol:(id)arg3 ACCRecorderSideslipViewContainerSetterProtocol:(id)arg4;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelListDataProvider:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelFavoriteService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCSideslipPropPanelFocusHandleService:(id)arg1;
- (id)provideSingleton:(id)arg0 ACCPropRankerService:(id)arg1;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
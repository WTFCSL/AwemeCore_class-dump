//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, NSNumber;
@protocol IESECMallPerfService, IESECMallMultiContextService, IESECMallTabFrameService;

@interface IESECMallChannelManager : NSObject {
    id<IESECMallMultiContextService> _contextService;
    id<IESECMallPerfService> _perfMonitorService;
    id<IESECMallTabFrameService> _tabFrameService;
    NSNumber *_tabClickTime;
    NSDictionary *_originChannelData;
    NSArray *_finalTabList;
    NSArray *_channels;
    NSDictionary *_channelsMap;
}

@property (copy, nonatomic) NSDictionary *originChannelData;
@property (copy, nonatomic) NSArray *finalTabList;
@property (copy, nonatomic) NSArray *channels;
@property (copy, nonatomic) NSDictionary *channelsMap;
@property (weak, nonatomic) id<IESECMallMultiContextService> contextService;
@property (weak, nonatomic) id<IESECMallPerfService> perfMonitorService;
@property (weak, nonatomic) id<IESECMallTabFrameService> tabFrameService;
@property (retain, nonatomic) NSNumber *tabClickTime;

+ (id)registeredChannelMap;
+ (BOOL)isValidTabList:(id)arg0;

- (id)tabClickTime;
- (void)setTabClickTime:(id)arg0;
- (id)ecomSceneID;
- (long long)indexOfTabID:(id)arg0;
- (id)multiTabConfig;
- (id)contextService;
- (void)setContextService:(id)arg0;
- (id)originChannelData;
- (void)setOriginChannelData:(id)arg0;
- (id)tabOriginDataWithTabID:(id)arg0;
- (id)perfMonitorService;
- (id)tabFrameService;
- (void)setFinalTabList:(id)arg0;
- (void)setChannelsMap:(id)arg0;
- (id)channelsMap;
- (id)finalTabList;
- (void)loadChannelWithTabInfo:(id)arg0 originData:(id)arg1 mallEnvID:(id)arg2 referString:(id)arg3;
- (id)tabIDList;
- (id)loadedChannelControllers;
- (id)tabInfoOfTabID:(id)arg0;
- (id)tabInfoOfIndex:(long long)arg0;
- (id)tabIDOfIndex:(long long)arg0;
- (id)channelControllerOfTabID:(id)arg0;
- (id)channelControllerOfIndex:(long long)arg0;
- (id)channelViewControllerOfTabID:(id)arg0;
- (BOOL)channelIsLoadedWithTabId:(id)arg0;
- (id)channelViewControllerOfIndex:(long long)arg0;
- (void)setPerfMonitorService:(id)arg0;
- (void)setTabFrameService:(id)arg0;
- (id)channels;
- (id)init;
- (void)setChannels:(id)arg0;
- (void).cxx_destruct;

@end

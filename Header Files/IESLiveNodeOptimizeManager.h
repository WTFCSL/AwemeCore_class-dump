//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveUserFlowService;

@interface IESLiveNodeOptimizeManager : NSObject <NPSchedulingRequestInfoCommonParamsFactory, LSSSchedulingRequestInfoCommonParamsFactory, NPNodeSchedulerRequestDelegate, LSSNodeSchedulerRequestDelegate> {
    BOOL _enable;
    BOOL _started;
    BOOL _useNewNodeOpt;
    BOOL _freeFlowEnableOpt;
    BOOL _flowEnableOpt;
    id<IESLiveUserFlowService> _userFlowService;
    long long _networkStatus;
    unsigned long long _networkTag;
}

@property (retain, nonatomic) id<IESLiveUserFlowService> userFlowService;
@property (nonatomic) long long networkStatus;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL useNewNodeOpt;
@property (nonatomic) BOOL freeFlowEnableOpt;
@property (nonatomic) BOOL flowEnableOpt;
@property (nonatomic) unsigned long long networkTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)nodeInfoWithHost:(id)arg0;
- (id)customizedRequestHeaders;
- (id)excuteWithCommand:(id)arg0 userInfo:(id)arg1;
- (id)commonParamsWithUrlString:(id)arg0;
- (void)onNetworkStatusChanged:(id)arg0;
- (void)startIfNeededWithTag:(unsigned long long)arg0;
- (void)nodeWithStreamDataList:(id)arg0;
- (void)setConfig;
- (void)registerObservers;
- (void)valuesForNodeProber;
- (void)settingDidFetchNotification:(id)arg0;
- (BOOL)useNewNodeOpt;
- (BOOL)flowEnableOpt;
- (id)userFlowService;
- (BOOL)freeFlowEnableOpt;
- (unsigned long long)networkTag;
- (BOOL)enableBackgroundOptimize;
- (void)setNetworkTag:(unsigned long long)arg0;
- (id)pullStreamHost;
- (id)bestIPForHost:(id)arg0;
- (id)appInfoReqeustWithDict:(id)arg0;
- (id)netInfoForNodeOptimize;
- (id)currentAppInfo:(id)arg0;
- (id)bestIPForURL:(id)arg0;
- (id)nodeInfoWithURL:(id)arg0;
- (void)setUserFlowService:(id)arg0;
- (void)setUseNewNodeOpt:(BOOL)arg0;
- (void)setFreeFlowEnableOpt:(BOOL)arg0;
- (void)setFlowEnableOpt:(BOOL)arg0;
- (BOOL)enable;
- (id)init;
- (void)_start;
- (long long)networkStatus;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (BOOL)started;
- (void)setStarted:(BOOL)arg0;
- (void)applicationDidEnterBackground;
- (void)setNetworkStatus:(long long)arg0;
- (void)setEnable:(BOOL)arg0;
- (void)dealloc;
- (void)stopIfNeeded;

@end
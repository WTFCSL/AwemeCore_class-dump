//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveBootloaderABManager : NSObject <IESLiveBootloaderABManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stageMap;
+ (BOOL)enableEComHighPriority;
+ (BOOL)liveEnterRoomOpt;
+ (BOOL)enterPreloadEnable;
+ (BOOL)bootloaderLogEnable:(BOOL)arg0;
+ (BOOL)bootloaderThickLogEnable;
+ (long long)bootStrategy;
+ (id)enterPreloadDynamicComponentStage;
+ (BOOL)componentStageDynamicEnable;
+ (id)ecomDynamicP0Stage;
+ (BOOL)liveCycleTraceEnable;
+ (BOOL)compObserverRemoveInCloseEnable;
+ (id)bootloaderOptConfig;
+ (id)componentLoadConfig;
+ (id)liveComponentLoadStrategyConfig;
+ (id)liveComponentLoadStrategyDetail;
+ (BOOL)bootloaderOptEnable;
+ (BOOL)componentSplitFixedOptInAudience:(BOOL)arg0;
+ (BOOL)componentBackupEventEnable;
+ (BOOL)bootloaderRemoteDataReadyOpt;
+ (BOOL)bootloaderDestroyOpt;
+ (BOOL)bootloaderPreloadEnable;
+ (BOOL)enableLinearScheduling;
+ (BOOL)bootloaderAsyncOperation;
+ (BOOL)bootloaderStepByStep;
+ (id)blockList;

@end

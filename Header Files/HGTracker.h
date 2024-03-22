//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HGTrackerPluginDelegate;

@interface HGTracker : NSObject <HGApplicationLifeCycleMessage, HGWarmBootMessage> {
    NSMutableDictionary *_commonParamDic;
    NSMutableDictionary *_timingEventDic;
    NSMutableArray *_pageEventArr;
    NSMutableDictionary *_tagDic;
    id<HGTrackerPluginDelegate> _trackerPlugin;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSMutableDictionary *_lifecycleIdsDict;
}

@property (retain, nonatomic) NSMutableDictionary *commonParamDic;
@property (retain, nonatomic) NSMutableDictionary *timingEventDic;
@property (retain, nonatomic) NSMutableArray *pageEventArr;
@property (retain, nonatomic) id<HGTrackerPluginDelegate> trackerPlugin;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableDictionary *lifecycleIdsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (void)setTag:(id)arg0 value:(id)arg1;
+ (void)bootstrapLaunch;
+ (void)beginEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 reportStart:(BOOL)arg3 uniqueId:(id)arg4;
+ (id)buildContextParams:(id)arg0;
+ (void)endEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 uniqueId:(id)arg3;
+ (void)monitorService:(id)arg0 extra:(id)arg1 uniqueId:(id)arg2;
+ (void)event:(id)arg0 attributes:(id)arg1 uniqueId:(id)arg2;
+ (void)executeBlkInTrackerQueue:(id /* block */)arg0;
+ (void)event:(id)arg0 attributes:(id)arg1 withCommonParams:(BOOL)arg2 uniqueId:(id)arg3;
+ (id)checkAttributes:(id)arg0;
+ (id)commonParamsForUniqueId:(id)arg0;
+ (id)defaultCommonParams;
+ (void)safeEvent:(id)arg0 attributes:(id)arg1 uniqueId:(id)arg2;
+ (void)event:(id)arg0 attributes:(id)arg1;
+ (void)eventV1:(id)arg0 label:(id)arg1 extra:(id)arg2;
+ (void)beginEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 uniqueId:(id)arg3;
+ (void)safeBeginEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 uniqueId:(id)arg3;
+ (void)safeEndEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 uniqueId:(id)arg3;
+ (void)endEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 endTime:(unsigned long long)arg3 uniqueId:(id)arg4;
+ (void)beginLogPageView:(id)arg0 query:(id)arg1 hasWebview:(BOOL)arg2 renderType:(id)arg3 uniqueId:(id)arg4;
+ (void)safeBeginLogPageView:(id)arg0 query:(id)arg1 hasWebview:(BOOL)arg2 renderType:(id)arg3 uniqueId:(id)arg4;
+ (void)endLogPageView:(id)arg0 query:(id)arg1 duration:(unsigned long long)arg2 exitType:(id)arg3 renderType:(id)arg4 uniqueId:(id)arg5;
+ (void)safeEndLogPageView:(id)arg0 query:(id)arg1 duration:(unsigned long long)arg2 exitType:(id)arg3 renderType:(id)arg4 uniqueId:(id)arg5;
+ (id)getTag:(id)arg0;
+ (void)updateDefaultCommonParamsIncrementally:(id)arg0;
+ (void)setCommonParams:(id)arg0 forUniqueId:(id)arg1;
+ (void)removeCommomParamsForUniqueId:(id)arg0;
+ (void)monitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 uniqueId:(id)arg4;
+ (void)debugEvent:(id)arg0 attributes:(id)arg1 uniqueId:(id)arg2;
+ (void)debugEvent:(id)arg0 attributes:(id)arg1;
+ (id)sharedInstance;

- (void)applicationExitWithUniqueID:(id)arg0;
- (void)monitorLoadTimelineWithName:(id)arg0 extra:(id)arg1 date:(id)arg2 uniqueId:(id)arg3;
- (void)monitorLoadTimelineWithName:(id)arg0 extra:(id)arg1 uniqueId:(id)arg2;
- (void)monitorLoadTimelineWithName:(id)arg0 extra:(id)arg1 date:(id)arg2 cpuTime:(long long)arg3 uniqueId:(id)arg4;
- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (void)warmBootCacheExistingHeartbeat;
- (void)addLoadTimelinePointWithName:(id)arg0 extra:(id)arg1 date:(id)arg2 cpuTime:(long long)arg3 uniqueId:(id)arg4;
- (void)monitorLoadTimelineWithJSONPoints:(id)arg0 uniqueId:(id)arg1 shouldCollect:(BOOL)arg2;
- (id)hg_uploadGroup;
- (void)setHg_uploadGroup:(id)arg0;
- (id)commonTimelineParamsWithUniqueId:(id)arg0 lifeCycleId:(id)arg1 points:(id)arg2;
- (void)monitorLoadTimelineWithJSONPoints:(id)arg0 uniqueId:(id)arg1;
- (void)generateLifecycleIdIfNeededForUniqueId:(id)arg0;
- (void)uploadCollectedTimelineDataWithCallback:(id /* block */)arg0;
- (BOOL)timelineReportHidden;
- (void)startIDETimelineReportWithServerUrl:(id)arg0 uniqueId:(id)arg1;
- (id)timingEventDic;
- (void)executeBlkInTaskQueue:(id /* block */)arg0;
- (id)pageEventArr;
- (id)commonParamDic;
- (id)trackerPlugin;
- (void)flushLoadTimelineWithUniqueId:(id)arg0;
- (void)removeCollectedTimelineData;
- (void)closeIDETimelineReportWithUniqueId:(id)arg0;
- (void)removeLifecycleIdWithUniqueId:(id)arg0;
- (id)lifecycleIdsDict;
- (void)setCommonParamDic:(id)arg0;
- (void)setTimingEventDic:(id)arg0;
- (void)setPageEventArr:(id)arg0;
- (void)setTrackerPlugin:(id)arg0;
- (void)setLifecycleIdsDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (void)dealloc;

@end
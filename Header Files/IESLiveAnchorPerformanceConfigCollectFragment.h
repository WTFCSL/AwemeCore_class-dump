//
//     Generated by private class-dump
//

@class NSString, NSObject, HMDThreadSafeDictionary;
@protocol OS_dispatch_queue;

@interface IESLiveAnchorPerformanceConfigCollectFragment : IESLiveRoomComponent <IESLiveEffectConflictStatusHandle, IESLiveAnchorEffectUsageRecordService> {
    NSObject<OS_dispatch_queue> *_queue;
    int _recordsOvertime;
    HMDThreadSafeDictionary *_applyDict;
}

@property (retain, nonatomic) HMDThreadSafeDictionary *applyDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)handleEffectConflictStatus:(long long)arg0 scene:(long long)arg1;
- (id)effectApplyStatisticsInDuration:(double)arg0;
- (void)_subscribeEffectProcessObservers;
- (void)_handleEffectProcessStatus:(long long)arg0 scene:(long long)arg1;
- (id)applyDict;
- (void)_removeConflictEffectOfScene:(long long)arg0;
- (void)_cleanRecordsOvertimeOfScene:(long long)arg0;
- (void)_applyNewEffect:(id)arg0 scene:(long long)arg1;
- (void)setApplyDict:(id)arg0;
- (void).cxx_destruct;

@end
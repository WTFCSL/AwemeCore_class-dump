//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGLuckyActivityStageTaskModel : NSObject <BDUGLuckyDogOnDateTaskTrigger> {
    NSString *_cacheKey;
    BOOL _disableFinishTrigger;
    NSString *_entryId;
    long long _beforeActivityEnterTime;
    double _activityBeginTime;
    double _activityExpireTime;
    NSString *_resourceId;
    NSString *_cycleId;
    NSString *_taskKeyExtStr;
    id /* block */ _didStartTriggerBlock;
    id /* block */ _didFinishTriggerBlock;
}

@property (copy, nonatomic) NSString *entryId;
@property (nonatomic) long long beforeActivityEnterTime;
@property (nonatomic) double activityBeginTime;
@property (nonatomic) double activityExpireTime;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *cycleId;
@property (nonatomic) BOOL disableFinishTrigger;
@property (copy, nonatomic) NSString *taskKeyExtStr;
@property (copy, nonatomic) id /* block */ didStartTriggerBlock;
@property (copy, nonatomic) id /* block */ didFinishTriggerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourceId;
- (id)taskKey;
- (void)setResourceId:(id)arg0;
- (long long)beforeActivityEnterTime;
- (id /* block */)didStartTriggerBlock;
- (id)taskKeyExtStr;
- (id /* block */)didFinishTriggerBlock;
- (void)didStartTrigger;
- (BOOL)triggerOncePerSession;
- (void)didFinishTrigger;
- (BOOL)disableFinishTrigger;
- (void)setDisableFinishTrigger:(BOOL)arg0;
- (double)activityBeginTime;
- (double)activityExpireTime;
- (id)entryId;
- (id)cycleId;
- (void)setEntryId:(id)arg0;
- (void)setBeforeActivityEnterTime:(long long)arg0;
- (void)setActivityBeginTime:(double)arg0;
- (void)setActivityExpireTime:(double)arg0;
- (void)setCycleId:(id)arg0;
- (void)setTaskKeyExtStr:(id)arg0;
- (void)setDidStartTriggerBlock:(id /* block */)arg0;
- (void)setDidFinishTriggerBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)beginDate;
- (id)expireDate;

@end
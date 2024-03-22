//
//     Generated by private class-dump
//

@class BDPBusinessRevisitGuideRequestContext, BDPRevisitGuideRevisitData, NSArray, BDPRevisitGuideCondition, NSMutableDictionary, NSDictionary, BDPUniqueID, BDPRevisitCustomData, BDPRevisitGuideAwardCondition;

@interface BDPBusinessRevisitGuideContext : NSObject {
    BOOL _isHasLeftSidebar;
    BDPUniqueID *_uniqueID;
    double _validTime;
    double _enterTime;
    BDPRevisitGuideRevisitData *_revisitData;
    NSArray *_normalConditions;
    NSArray *_awardConditions;
    NSDictionary *_bizExtraDict;
    BDPRevisitGuideCondition *_satisfiedNormalCondition;
    BDPRevisitGuideAwardCondition *_satisfiedAwardCondition;
    BDPRevisitCustomData *_usedCustomData;
    long long _displayCount;
    BDPBusinessRevisitGuideRequestContext *_requestContext;
    NSMutableDictionary *_customizedAwardInfos;
    NSMutableDictionary *_taskIDPathMap;
    long long _remainCount;
}

@property (retain, nonatomic) BDPBusinessRevisitGuideRequestContext *requestContext;
@property (retain, nonatomic) NSMutableDictionary *customizedAwardInfos;
@property (retain, nonatomic) NSMutableDictionary *taskIDPathMap;
@property (nonatomic) long long remainCount;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isHasLeftSidebar;
@property (nonatomic) double validTime;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) BDPRevisitGuideRevisitData *revisitData;
@property (copy, nonatomic) NSArray *normalConditions;
@property (copy, nonatomic) NSArray *awardConditions;
@property (copy, nonatomic) NSDictionary *bizExtraDict;
@property (retain, nonatomic) BDPRevisitGuideCondition *satisfiedNormalCondition;
@property (retain, nonatomic) BDPRevisitGuideAwardCondition *satisfiedAwardCondition;
@property (retain, nonatomic) BDPRevisitCustomData *usedCustomData;
@property (nonatomic) long long displayCount;

- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (void)setValidTime:(double)arg0;
- (double)validTime;
- (void)setRemainCount:(long long)arg0;
- (long long)remainCount;
- (id)revisitData;
- (void)setSatisfiedNormalCondition:(id)arg0;
- (void)setSatisfiedAwardCondition:(id)arg0;
- (void)setNormalConditions:(id)arg0;
- (void)setAwardConditions:(id)arg0;
- (void)setBizExtraDict:(id)arg0;
- (id)customizedAwardInfos;
- (id)taskIDPathMap;
- (id)normalConditions;
- (id)p_getSatisfiedNormalConditionFromList:(id)arg0;
- (id)satisfiedNormalCondition;
- (id)awardConditions;
- (id)satisfiedAwardCondition;
- (BOOL)p_isSatisfyPathExitCondition:(id)arg0;
- (void)p_recordTimeOfNativeAppLaunch;
- (void)p_setRevisitConditionTimerWithInterval:(double)arg0;
- (void)p_setRealConditionTimerWithInterval:(double)arg0;
- (void)p_requestRevisitDataWithCompletion:(id /* block */)arg0;
- (void)updateRevisitData;
- (void)p_requestRealConditionWithCompletion:(id /* block */)arg0;
- (id)p_getTimeOfNativeAppLaunch;
- (BOOL)isHasLeftSidebar;
- (BOOL)p_getNeedShowComponentWithTimestamp:(double)arg0;
- (id)usedCustomData;
- (void)setUsedCustomData:(id)arg0;
- (void)recordAppUseDuration;
- (void)checkConditionsResult;
- (void)markUpdateInfoWithImageUrl:(id)arg0 title:(id)arg1 subTitle:(id)arg2 forPath:(id)arg3 taskID:(id)arg4;
- (void)markUpdateInfoValidForTaskID:(id)arg0;
- (id)validCustomDataForPath:(id)arg0;
- (void)uploadLocalRevisitDataWithEventParams:(id)arg0 uniqueID:(id)arg1;
- (void)p_updateShowComponetStorageWithTimestamp:(double)arg0;
- (void)setIsHasLeftSidebar:(BOOL)arg0;
- (void)setRevisitData:(id)arg0;
- (id)bizExtraDict;
- (void)setCustomizedAwardInfos:(id)arg0;
- (void)setTaskIDPathMap:(id)arg0;
- (id)requestContext;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setRequestContext:(id)arg0;
- (void)setDisplayCount:(long long)arg0;
- (void)disable;
- (void)reset;
- (long long)displayCount;

@end
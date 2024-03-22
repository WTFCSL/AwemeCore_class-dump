//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEUGPendantActivityModel, UIView;
@protocol AWEUGPendantActivityControllerProtocol;

@interface AWEUGPendantActivityCollectionManager : NSObject {
    unsigned long long _activityType;
    UIView *_baseView;
    AWEUGPendantActivityModel *_currentActivityModel;
    AWEUGPendantActivityModel *_nextActivityModel;
    id<AWEUGPendantActivityControllerProtocol> _currentActivityController;
    NSString *_activityTimerString;
    NSMutableDictionary *_adapterDelegtes;
    AWEUGPendantActivityModel *_fcoinTempActivityModel;
    double _lastTimestamp;
}

@property (retain, nonatomic) AWEUGPendantActivityModel *currentActivityModel;
@property (retain, nonatomic) AWEUGPendantActivityModel *nextActivityModel;
@property (retain, nonatomic) id<AWEUGPendantActivityControllerProtocol> currentActivityController;
@property (retain, nonatomic) NSString *activityTimerString;
@property (retain, nonatomic) NSMutableDictionary *adapterDelegtes;
@property (retain, nonatomic) AWEUGPendantActivityModel *fcoinTempActivityModel;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) unsigned long long activityType;
@property (weak, nonatomic) UIView *baseView;

- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (id)getSuperiorActivityModelWithTime:(double)arg0;
- (id)getNextActivityModelWithTime:(double)arg0;
- (void)monitorFeedPendantDataSourceRequestWithStatus:(unsigned long long)arg0 andParams:(id)arg1;
- (void)trackFeedPendantDataRequestLogWithMessage:(id)arg0;
- (void)syncPendantActivity:(id)arg0;
- (void)trackFeedPendantStageManagerLogWithMessage:(id)arg0;
- (void)updateActivityTimer:(double)arg0 current:(id)arg1 next:(id)arg2;
- (void)monitorPendantDisappearIfNeeded;
- (void)clearCurrentActivityData;
- (BOOL)isRuningActivity:(id)arg0;
- (id)currentActivityController;
- (void)setCurrentActivityModel:(id)arg0;
- (id)getCurrentActivityControllor:(id)arg0;
- (void)setCurrentActivityController:(id)arg0;
- (id)adapterDelegtes;
- (void)trackFeedPendantPushLogWithMessage:(id)arg0;
- (void)monitorPushServiceWithStatus:(unsigned long long)arg0 commonParams:(id)arg1 extra:(id)arg2;
- (void)updateActivityController;
- (void)monitorShowBubbleEventWithExtraParams:(id)arg0;
- (id)currentActivityModel;
- (id)activityTimerString;
- (void)setActivityTimerString:(id)arg0;
- (void)registerPendantAdapter:(id)arg0 identify:(id)arg1;
- (id)getCurrentActivityController;
- (BOOL)currentActivityIsShowingPendant;
- (id)nextActivityModel;
- (void)setNextActivityModel:(id)arg0;
- (void)setAdapterDelegtes:(id)arg0;
- (id)fcoinTempActivityModel;
- (void)setFcoinTempActivityModel:(id)arg0;
- (void)setActivityType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)baseView;
- (unsigned long long)activityType;
- (void)setLastTimestamp:(double)arg0;
- (double)lastTimestamp;
- (void)setBaseView:(id)arg0;

@end

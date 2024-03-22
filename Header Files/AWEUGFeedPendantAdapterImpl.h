//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSMutableSet, NSString;

@interface AWEUGFeedPendantAdapterImpl : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage, BDUGLuckyActivityDelegateProtocol, AWEUGPendantAdapterProtocol, AWEUGPendantSettingProtocol> {
    BOOL _needDowngrade;
    BOOL _needAvoidCountdownActivity;
    BOOL _needStopTimingTask;
    BOOL _timeCalibratorFail;
    long long pendantVersion;
    long long _currentSettingsVersion;
    double _lastPollingSettingsUpdateTimestamp;
    NSArray *_latestTimeLimitedActivitys;
    NSDictionary *_activitySettings;
    NSMutableSet *_registedActivitySet;
    NSArray *_activityStageResourceItems;
    double _lastActivityStageChangeTimestamp;
}

@property (nonatomic) long long currentSettingsVersion;
@property (nonatomic) BOOL needDowngrade;
@property (nonatomic) BOOL needAvoidCountdownActivity;
@property (nonatomic) BOOL needStopTimingTask;
@property (nonatomic) double lastPollingSettingsUpdateTimestamp;
@property (copy, nonatomic) NSArray *latestTimeLimitedActivitys;
@property (copy, nonatomic) NSDictionary *activitySettings;
@property (retain, nonatomic) NSMutableSet *registedActivitySet;
@property (copy, nonatomic) NSArray *activityStageResourceItems;
@property (nonatomic) BOOL timeCalibratorFail;
@property (nonatomic) double lastActivityStageChangeTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identify;
@property (nonatomic) long long pendantVersion;

+ (id)sharedInstance;

- (id)activitySettings;
- (void)onActivityEnter:(id)arg0 aheadTime:(long long)arg1;
- (void)onActivityStop:(id)arg0;
- (void)onActivityDataChanged:(id)arg0 allData:(id)arg1;
- (long long)currentSettingsVersion;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)setupObservation;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (void)monitorActivityStageTimeCalibratorFail:(id)arg0;
- (void)monitorActivityStageChangeDataToActivityStatus:(unsigned long long)arg0 params:(id)arg1;
- (void)monitorActivityStageDataMatchMaterialFail:(unsigned long long)arg0 params:(id)arg1;
- (void)monitorDynamicSettingDataStatus:(unsigned long long)arg0 params:(id)arg1;
- (void)setActivitySettings:(id)arg0;
- (void)setNeedDowngrade:(BOOL)arg0;
- (BOOL)needDowngrade;
- (void)cleanActivityPendantData;
- (void)updateModel:(id)arg0 version:(long long)arg1;
- (void)addValueFrom:(id)arg0 withOldKey:(id)arg1 to:(id)arg2 withNewKey:(id)arg3;
- (id)splitActivityFromRawData:(id)arg0;
- (id)getActivityController;
- (long long)pendantVersion;
- (void)setPendantVersion:(long long)arg0;
- (void)clearTaskInfo;
- (void)didShowCountdownView:(id)arg0;
- (void)didHiddenCountdownView:(id)arg0;
- (BOOL)needDowngradeToPineapple;
- (void)pollingSettingsDidChange:(id)arg0;
- (void)dealPollingSettingsWithData:(id)arg0;
- (void)setTimeCalibratorFail:(BOOL)arg0;
- (void)registerUGActivityStageDelegate;
- (void)setRegistedActivitySet:(id)arg0;
- (void)setLastPollingSettingsUpdateTimestamp:(double)arg0;
- (void)setLastActivityStageChangeTimestamp:(double)arg0;
- (void)updateSettingsFromLocalData;
- (double)lastActivityStageChangeTimestamp;
- (BOOL)needAvoidCountdownActivity;
- (id)activityPendantSettings;
- (void)handleDataWithSettings:(id)arg0;
- (void)checkMaterialAndActivityChangeItemMap:(id)arg0;
- (BOOL)needStopTimingTask;
- (id)activityStageResourceItems;
- (id)getActivityStageItemWithActivitiyName:(id)arg0;
- (void)trackFeedPendantActivityStageLogWithMessage:(id)arg0;
- (id)latestTimeLimitedActivitys;
- (id)getTimeLimitedActivitySessionWithName:(id)arg0;
- (void)monitorSplitActivityDataCompletedWithParams:(id)arg0;
- (void)trackFeedPendantMultiStageManagerLogWithMessage:(id)arg0;
- (void)setNeedStopTimingTask:(BOOL)arg0;
- (BOOL)shouldNotAvoidCountDown;
- (void)setNeedAvoidCountdownActivity:(BOOL)arg0;
- (double)lastPollingSettingsUpdateTimestamp;
- (void)monitorPollingSettingsChangeStatus:(unsigned long long)arg0 params:(id)arg1;
- (void)trackFeedPendantPollingSettingsLogWithMessage:(id)arg0;
- (void)monitorDowngradeByPollingSettingsFPWithParams:(id)arg0;
- (void)monitorDowngradeByPollingSettingsAPWithParams:(id)arg0;
- (void)setLatestTimeLimitedActivitys:(id)arg0;
- (id)registedActivitySet;
- (void)monitorLuckyDogActivityBlockStatusWithParams:(id)arg0;
- (void)trackFeedPendantLuckyDogLogWithMessage:(id)arg0;
- (void)monitorPollingSettingsBlockStatusWithParams:(id)arg0;
- (void)monitorPollingSettingsActivityCidNotFoundWithParams:(id)arg0;
- (void)monitorActivityStageChangedChangeStatus:(unsigned long long)arg0 params:(id)arg1;
- (void)setActivityStageResourceItems:(id)arg0;
- (BOOL)needMonitorActivityStageDataStatus;
- (void)dealActivityStageWithData:(id)arg0 from:(long long)arg1;
- (BOOL)timeCalibratorFail;
- (void)monitorLuckyDogActivityBlockInvokeWithParams:(id)arg0;
- (void)handleTimeCalibratorUpdateIfNeed;
- (id)getCommonMonitorParams;
- (void)onActivityBlock:(id)arg0 cycleID:(long long)arg1 block:(BOOL)arg2;
- (void)setCurrentSettingsVersion:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)identify;

@end

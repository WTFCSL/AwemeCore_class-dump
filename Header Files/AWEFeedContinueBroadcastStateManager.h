//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, NSSet, NSMutableSet;

@interface AWEFeedContinueBroadcastStateManager : NSObject {
    long long _guideStyle;
    NSDictionary *_config;
    long long _limitCountWeek;
    long long _limitCountDay;
    NSString *_triggerName;
    NSMutableDictionary *_showRecord;
    long long _randomValue;
    NSSet *_randomRecord;
    NSMutableSet *_videoCheckRecord;
}

@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) long long limitCountWeek;
@property (nonatomic) long long limitCountDay;
@property (nonatomic) long long guideStyle;
@property (retain, nonatomic) NSString *triggerName;
@property (retain, nonatomic) NSMutableDictionary *showRecord;
@property (nonatomic) long long randomValue;
@property (retain, nonatomic) NSSet *randomRecord;
@property (retain, nonatomic) NSMutableSet *videoCheckRecord;

+ (id)sharedInstance;

- (BOOL)enableContinueGuide;
- (BOOL)canShowGuideWithCurrentStateForVideo:(id)arg0 scene:(id)arg1;
- (void)checkPadPitayaStateCompletion:(id /* block */)arg0;
- (long long)guideStyle;
- (void)updateClickRecord;
- (void)updateShowRecord:(long long)arg0;
- (void)setGuideStyle:(long long)arg0;
- (void)setLimitCountDay:(long long)arg0;
- (void)setLimitCountWeek:(long long)arg0;
- (void)setRandomValue:(long long)arg0;
- (id)videoCheckRecord;
- (BOOL)checkSyncStateWithCurrentStateForVideo:(id)arg0 scene:(id)arg1;
- (BOOL)needStopDeviceDiscoverWithScene:(id)arg0;
- (BOOL)isTargetVideo:(id)arg0 withScene:(id)arg1;
- (BOOL)canForceChangeDiscoverResult;
- (void)monitorShowResult:(BOOL)arg0 errorCode:(long long)arg1 scene:(id)arg2;
- (id)showRecord;
- (id)randomRecord;
- (void)setRandomRecord:(id)arg0;
- (BOOL)isInCountLimit;
- (BOOL)isInvalidTimeRange;
- (long long)limitCountWeek;
- (long long)limitCountDay;
- (void)setShowRecord:(id)arg0;
- (void)setVideoCheckRecord:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)triggerName;
- (void)setTriggerName:(id)arg0;
- (long long)randomValue;

@end

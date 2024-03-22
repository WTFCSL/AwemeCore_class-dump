//
//     Generated by private class-dump
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface BTDBaseNetStatusDetector : NSObject {
    float _lossRate;
    long long _statisticDurationCount;
    long long _statisticPushDurationCount;
    long long _stallCount;
    NSArray *_rttLevel;
    NSArray *_lossRateLevel;
    NSArray *_jitterLevel;
    NSObject<OS_dispatch_queue> *_queue;
    long long _curBlockCountToToast;
    long long _curBlockCountToPush;
}

@property (nonatomic) long long statisticDurationCount;
@property (nonatomic) long long statisticPushDurationCount;
@property (nonatomic) long long stallCount;
@property (nonatomic) float lossRate;
@property (copy, nonatomic) NSArray *rttLevel;
@property (copy, nonatomic) NSArray *lossRateLevel;
@property (copy, nonatomic) NSArray *jitterLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long curBlockCountToToast;
@property (nonatomic) long long curBlockCountToPush;

- (void)setStallCount:(long long)arg0;
- (long long)stallCount;
- (void)setupWithSetting;
- (void)setStatisticDurationCount:(long long)arg0;
- (void)setStatisticPushDurationCount:(long long)arg0;
- (void)setLossRate:(float)arg0;
- (void)setRttLevel:(id)arg0;
- (void)setLossRateLevel:(id)arg0;
- (id)rttLevel;
- (id)lossRateLevel;
- (float)lossRate;
- (long long)curBlockCountToToast;
- (void)setCurBlockCountToToast:(long long)arg0;
- (long long)curBlockCountToPush;
- (void)setCurBlockCountToPush:(long long)arg0;
- (long long)statisticPushDurationCount;
- (long long)statisticDurationCount;
- (void)setJitterLevel:(id)arg0;
- (id)jitterLevel;
- (long long)calcComboNetStatus:(id)arg0;
- (void)callbackNetStatus:(id)arg0;
- (void)updateVEGRemoteStreamStats:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)queue;
- (void)setQueue:(id)arg0;

@end

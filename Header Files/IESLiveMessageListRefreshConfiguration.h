//
//     Generated by private class-dump
//

@class NSDictionary;

@interface IESLiveMessageListRefreshConfiguration : NSObject {
    BOOL _enableEnterRoomOptimize;
    BOOL _enableRefreshTimerOptimize;
    NSDictionary *_rawConfig;
    double _hotJudgeDuration;
    long long _hotJudgeMessageCount;
    long long _coldJudgeMessageCount;
    double _refreshDurationFromServer;
    long long _refreshMessageCountFromServer;
    double _refreshDurationForHot;
    long long _refreshMessageCountForHot;
    double _refreshDurationForNormal;
    long long _refreshMessageCountForNormal;
    double _refreshDurationForFast;
    double _refreshDurationForMedium;
    double _refreshDurationForSlow;
    double _refreshDurationForFastest;
    double _refreshDurationForSlowest;
    long long _refreshMessageCountForFast;
    long long _refreshMessageCountForMedium;
    long long _refreshMessageCountForSlow;
    long long _refreshMessageCountForFastest;
    long long _refreshMessageCountForSlowest;
    long long _useOptimizeConfigTime;
    double _enterRoomOptRefreshDuration;
    long long _enterRoomOptRefreshMessageCount;
    long long _refreshMessageCountForDegrade;
    double _refreshDurationForDegrade;
    id /* block */ _configDidChanged;
}

@property (nonatomic) double hotJudgeDuration;
@property (nonatomic) long long hotJudgeMessageCount;
@property (nonatomic) long long coldJudgeMessageCount;
@property (nonatomic) double refreshDurationFromServer;
@property (nonatomic) long long refreshMessageCountFromServer;
@property (nonatomic) double refreshDurationForHot;
@property (nonatomic) long long refreshMessageCountForHot;
@property (nonatomic) double refreshDurationForNormal;
@property (nonatomic) long long refreshMessageCountForNormal;
@property (nonatomic) double refreshDurationForFast;
@property (nonatomic) double refreshDurationForMedium;
@property (nonatomic) double refreshDurationForSlow;
@property (nonatomic) double refreshDurationForSlowest;
@property (nonatomic) double refreshDurationForFastest;
@property (nonatomic) long long refreshMessageCountForFast;
@property (nonatomic) long long refreshMessageCountForMedium;
@property (nonatomic) long long refreshMessageCountForSlow;
@property (nonatomic) long long refreshMessageCountForSlowest;
@property (nonatomic) long long refreshMessageCountForFastest;
@property (nonatomic) BOOL enableEnterRoomOptimize;
@property (nonatomic) long long useOptimizeConfigTime;
@property (nonatomic) double enterRoomOptRefreshDuration;
@property (nonatomic) long long enterRoomOptRefreshMessageCount;
@property (copy, nonatomic) NSDictionary *rawConfig;
@property (nonatomic) long long refreshMessageCountForDegrade;
@property (nonatomic) double refreshDurationForDegrade;
@property (nonatomic) BOOL enableRefreshTimerOptimize;
@property (copy, nonatomic) id /* block */ configDidChanged;

- (void)setConfigDidChanged:(id /* block */)arg0;
- (double)hotJudgeDuration;
- (BOOL)enableRefreshTimerOptimize;
- (long long)hotJudgeMessageCount;
- (long long)coldJudgeMessageCount;
- (BOOL)enableEnterRoomOptimize;
- (double)enterRoomOptRefreshDuration;
- (double)refreshDurationForDegrade;
- (double)refreshDurationFromServer;
- (double)refreshDurationForFast;
- (double)refreshDurationForMedium;
- (double)refreshDurationForSlow;
- (double)refreshDurationForSlowest;
- (double)refreshDurationForFastest;
- (double)refreshDurationForHot;
- (double)refreshDurationForNormal;
- (long long)enterRoomOptRefreshMessageCount;
- (long long)refreshMessageCountForDegrade;
- (long long)refreshMessageCountFromServer;
- (long long)refreshMessageCountForFast;
- (long long)refreshMessageCountForMedium;
- (long long)refreshMessageCountForSlow;
- (long long)refreshMessageCountForSlowest;
- (long long)refreshMessageCountForFastest;
- (long long)refreshMessageCountForHot;
- (long long)refreshMessageCountForNormal;
- (long long)useOptimizeConfigTime;
- (void)mergeRefreshConfig:(id)arg0;
- (id)mergeConfigFrom:(id)arg0 to:(id)arg1;
- (BOOL)applyConfig;
- (id /* block */)configDidChanged;
- (void)setHotJudgeDuration:(double)arg0;
- (void)setHotJudgeMessageCount:(long long)arg0;
- (void)setColdJudgeMessageCount:(long long)arg0;
- (double)p_refreshDurationForHot;
- (void)setRefreshDurationForHot:(double)arg0;
- (long long)p_refreshMessageCountForHot;
- (void)setRefreshMessageCountForHot:(long long)arg0;
- (double)p_refreshDurationForNormal;
- (void)setRefreshDurationForNormal:(double)arg0;
- (long long)p_refreshMessageCountForNormal;
- (void)setRefreshMessageCountForNormal:(long long)arg0;
- (double)p_refreshDurationForFast;
- (void)setRefreshDurationForFast:(double)arg0;
- (double)p_refreshDurationForMedium;
- (void)setRefreshDurationForMedium:(double)arg0;
- (double)p_refreshDurationForSlow;
- (void)setRefreshDurationForSlow:(double)arg0;
- (void)setRefreshDurationForFastest:(double)arg0;
- (void)setRefreshDurationForSlowest:(double)arg0;
- (long long)p_refreshMessageCountForFast;
- (void)setRefreshMessageCountForFast:(long long)arg0;
- (long long)p_refreshMessageCountForMedium;
- (void)setRefreshMessageCountForMedium:(long long)arg0;
- (long long)p_refreshMessageCountForSlow;
- (void)setRefreshMessageCountForSlow:(long long)arg0;
- (void)setRefreshMessageCountForSlowest:(long long)arg0;
- (void)setRefreshMessageCountForFastest:(long long)arg0;
- (void)setRefreshMessageCountFromServer:(long long)arg0;
- (void)setRefreshDurationFromServer:(double)arg0;
- (void)setRefreshDurationForDegrade:(double)arg0;
- (void)setRefreshMessageCountForDegrade:(long long)arg0;
- (void)setEnterRoomOptimizeConfig;
- (void)setEnableEnterRoomOptimize:(BOOL)arg0;
- (void)setEnableRefreshTimerOptimize:(BOOL)arg0;
- (void)setUseOptimizeConfigTime:(long long)arg0;
- (void)setEnterRoomOptRefreshDuration:(double)arg0;
- (void)setEnterRoomOptRefreshMessageCount:(long long)arg0;
- (void)resetRefreshConfig:(id)arg0;
- (void)setHotJudgeConfig:(id)arg0;
- (void)setRawConfig:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (id)rawConfig;

@end

//
//     Generated by private class-dump
//

@protocol AWEUGCampaignTaskTimerStateDelegate;

@protocol AWEUGCampaignTaskTimerProtocol <BDTimerTaskProtocol>

@property (nonatomic) double progress;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<AWEUGCampaignTaskTimerStateDelegate> countDownStatsDelegate;

- (id)countDownStatsDelegate;
- (void)setCountDownStatsDelegate:(id)arg0;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (double)progress;
- (void)start;
- (void)setProgress:(double)arg0;
- (void)pause;

@end

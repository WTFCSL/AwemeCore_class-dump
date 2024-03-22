//
//     Generated by private class-dump
//

@class CSJRewardedVideoModel;

@interface CSJRewardedVideoDataContext : NSObject {
    BOOL _finishRewardTimingInEndcard;
    CSJRewardedVideoModel *_rewardedVideoModel;
    unsigned long long _quitReason;
}

@property (retain, nonatomic) CSJRewardedVideoModel *rewardedVideoModel;
@property (nonatomic) unsigned long long quitReason;
@property (nonatomic) BOOL finishRewardTimingInEndcard;

- (void)setRewardedVideoModel:(id)arg0;
- (id)rewardedVideoModel;
- (BOOL)finishRewardTimingInEndcard;
- (void)setQuitReason:(unsigned long long)arg0;
- (unsigned long long)quitReason;
- (BOOL)isPlayFail;
- (void)setFinishRewardTimingInEndcard:(BOOL)arg0;
- (void).cxx_destruct;

@end
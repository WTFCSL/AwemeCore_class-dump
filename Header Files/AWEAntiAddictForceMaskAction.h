//
//     Generated by private class-dump
//

@protocol AWEAntiAddictStrategyThresholdUnitProtocol;

@interface AWEAntiAddictForceMaskAction : AWEAntiAddictBaseAction {
    BOOL _oldMask;
    long long _satisfiedStrategyIndex;
    id<AWEAntiAddictStrategyThresholdUnitProtocol> _satisfiedStrategy;
    double _countDownTime;
    double _blockToTime;
}

@property (nonatomic) double countDownTime;
@property (nonatomic) double blockToTime;
@property (nonatomic) BOOL oldMask;
@property long long satisfiedStrategyIndex;
@property (retain) id<AWEAntiAddictStrategyThresholdUnitProtocol> satisfiedStrategy;

+ (id)moduleName;

- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (long long)satisfiedStrategyIndex;
- (void)setCountDownTime:(double)arg0;
- (void)setBlockToTime:(double)arg0;
- (void)setOldMask:(BOOL)arg0;
- (void)postInsertFeedNotificationInfo:(id)arg0;
- (double)countDownTime;
- (double)blockToTime;
- (BOOL)oldMask;
- (id)satisfiedStrategy;
- (void)postDeleteFeedNotification;
- (void)setSatisfiedStrategyIndex:(long long)arg0;
- (void)setSatisfiedStrategy:(id)arg0;
- (void)end;
- (void)begin;
- (void).cxx_destruct;
- (void)prepare;
- (void)revoke;

@end
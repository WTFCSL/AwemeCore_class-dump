//
//     Generated by private class-dump
//

@interface AWEFeedHomePageLandingMemoTask : NSObject {
    BOOL _isStrategyActivate;
    long long _sessionID;
    double _enterHomePageTimeInterval;
}

@property (nonatomic) long long sessionID;
@property (nonatomic) double enterHomePageTimeInterval;
@property (nonatomic) BOOL isStrategyActivate;

- (BOOL)isStrategyActivate;
- (double)enterHomePageTimeInterval;
- (id)initWithSessionID:(long long)arg0 strategyStatus:(BOOL)arg1 timeInterval:(double)arg2;
- (id)memoWithStatus:(BOOL)arg0;
- (void)setIsStrategyActivate:(BOOL)arg0;
- (void)setEnterHomePageTimeInterval:(double)arg0;
- (void)setSessionID:(long long)arg0;
- (long long)sessionID;

@end

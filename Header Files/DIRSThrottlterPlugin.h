//
//     Generated by private class-dump
//

@class NSString, DIRSConcurrentCollection, DIRSContext;

@interface DIRSThrottlterPlugin : DIRSBasicModule <IRISThrottlter> {
    double timeWindow;
    DIRSConcurrentCollection *requestRecords;
    double basicInterval;
    int adjustFactor;
    int consecutive;
    long long _backOffRadio;
    long long _maxRequests;
}

@property (nonatomic) long long backOffRadio;
@property (nonatomic) long long maxRequests;
@property (readonly, nonatomic) double adjustedInterval;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (double)adjustedInterval;
- (void)setBasicInterval:(double)arg0;
- (BOOL)allowed:(id)arg0 reason:(id *)arg1;
- (void)_restoreAdjustment;
- (void)setMaxRequests:(long long)arg0;
- (void)setBackOffRadio:(long long)arg0;
- (long long)backOffRadio;
- (long long)maxRequests;
- (void).cxx_destruct;
- (void)commonInit;
- (void)configure:(id)arg0;
- (void)adjust:(id)arg0;

@end
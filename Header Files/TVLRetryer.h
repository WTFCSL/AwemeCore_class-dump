//
//     Generated by private class-dump
//

@class NSTimer, NSDate;

@interface TVLRetryer : NSObject {
    id /* block */ _tickBlock;
    double _timeInterval;
    long long _tickCount;
    NSDate *_startDate;
    NSTimer *_timer;
}

@property (readonly, getter=isValid) BOOL valid;

+ (id)retryerWithTimeInterval:(double)arg0 block:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)stop;
- (void)fireImmediately;
- (BOOL)isValid;
- (id)initWithTimeInterval:(double)arg0 block:(id /* block */)arg1;
- (void)start;
- (void)dealloc;
- (long long)currentRetryCount;
- (void)tick;

@end

//
//     Generated by private class-dump
//

@interface AWENearByRequestMetrics : NSObject {
    BOOL _reuseConnect;
    long long _dns;
    long long _tcp;
    long long _ssl;
    long long _send;
    long long _wait;
    long long _receive;
    long long _duration;
    long long _totalReceivedBytes;
    long long _start;
}

@property (nonatomic) long long dns;
@property (nonatomic) long long tcp;
@property (nonatomic) long long ssl;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) BOOL reuseConnect;
@property (nonatomic) long long duration;
@property (nonatomic) long long totalReceivedBytes;
@property (nonatomic) long long start;

+ (id)createMetricsWithTimingInfo:(id)arg0;

- (long long)ssl;
- (long long)totalReceivedBytes;
- (long long)tcp;
- (BOOL)reuseConnect;
- (void)setTcp:(long long)arg0;
- (void)setSsl:(long long)arg0;
- (void)setReuseConnect:(BOOL)arg0;
- (void)setTotalReceivedBytes:(long long)arg0;
- (long long)send;
- (void)setStart:(long long)arg0;
- (long long)duration;
- (long long)wait;
- (long long)start;
- (void)setDuration:(long long)arg0;
- (void)setSend:(long long)arg0;
- (void)setWait:(long long)arg0;
- (long long)receive;
- (void)setReceive:(long long)arg0;
- (long long)dns;
- (void)setDns:(long long)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString;

@interface HGRequestMetrics : NSObject <NSCopying> {
    BOOL _reuseConnect;
    long long _dns;
    long long _tcp;
    long long _ssl;
    long long _send;
    long long _wait;
    long long _receive;
    NSString *_networkProtocolName;
}

@property (nonatomic) long long dns;
@property (nonatomic) long long tcp;
@property (nonatomic) long long ssl;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) BOOL reuseConnect;
@property (copy, nonatomic) NSString *networkProtocolName;

+ (id)metricsFromTransactionMetrics:(id)arg0;
+ (id)metricsFromChromiumTimeInfo:(id)arg0;

- (long long)ssl;
- (long long)tcp;
- (BOOL)reuseConnect;
- (void)setTcp:(long long)arg0;
- (void)setSsl:(long long)arg0;
- (void)setReuseConnect:(BOOL)arg0;
- (void)updateWithMetrics:(id)arg0;
- (long long)send;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setNetworkProtocolName:(id)arg0;
- (id)networkProtocolName;
- (long long)wait;
- (void)setSend:(long long)arg0;
- (void)setWait:(long long)arg0;
- (long long)receive;
- (void)setReceive:(long long)arg0;
- (long long)dns;
- (void)setDns:(long long)arg0;

@end
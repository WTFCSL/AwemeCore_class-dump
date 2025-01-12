//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AVMDLiOSDNSItemInfo : NSObject {
    NSString *_host;
    NSArray *_ips;
    long long _parserType;
    long long _ttl;
    long long _usingIndex;
    double _createTime;
    double _expiredTime;
}

@property (nonatomic) long long usingIndex;
@property (nonatomic) double createTime;
@property (nonatomic) double expiredTime;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSArray *ips;
@property (nonatomic) long long parserType;
@property (nonatomic) long long ttl;
@property (readonly, nonatomic) BOOL hasExpired;

- (id)ips;
- (double)expiredTime;
- (long long)usingIndex;
- (void)setUsingIndex:(long long)arg0;
- (void)setExpiredTime:(double)arg0;
- (void)setIps:(id)arg0;
- (id)getIpUsingRR;
- (id)init;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (void)setCreateTime:(double)arg0;
- (id)host;
- (BOOL)hasExpired;
- (double)createTime;
- (void)setTtl:(long long)arg0;
- (long long)ttl;
- (long long)parserType;
- (void)setParserType:(long long)arg0;

@end

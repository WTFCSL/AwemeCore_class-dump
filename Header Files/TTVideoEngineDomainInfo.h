//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDate, NSNumber;

@interface TTVideoEngineDomainInfo : NSObject {
    NSString *_host;
    NSArray *_ips;
    NSNumber *_ttl;
    NSDate *_requestDate;
}

@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) NSArray *ips;
@property (retain, nonatomic) NSNumber *ttl;
@property (retain, nonatomic) NSDate *requestDate;

- (id)ips;
- (void)setIps:(id)arg0;
- (id)randomIP;
- (BOOL)isCacheValidNow:(long long)arg0;
- (void)formateIfIsIpv6;
- (void)setHost:(id)arg0;
- (id)requestDate;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (id)host;
- (void)setRequestDate:(id)arg0;
- (void)setTtl:(id)arg0;
- (id)ttl;

@end

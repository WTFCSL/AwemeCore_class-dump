//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDate;

@interface TVLDNSCache : NSObject {
    NSDate *_expiredDate;
    NSString *_hostname;
    NSArray *_resolvedIPAddresses;
}

@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSArray *resolvedIPAddresses;
@property (readonly, nonatomic, getter=hasExpired) BOOL expired;
@property (readonly, nonatomic) double timeToLive;

+ (id)cacheWithHostname:(id)arg0 resolvedIPAddresses:(id)arg1 timeToLive:(double)arg2;

- (id)initWithHostname:(id)arg0 resolvedIPAddresses:(id)arg1 timeToLive:(double)arg2;
- (id)resolvedIPAddresses;
- (void).cxx_destruct;
- (id)hostname;
- (BOOL)hasExpired;
- (double)timeToLive;

@end

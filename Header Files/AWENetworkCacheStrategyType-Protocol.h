//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol AWENetworkCacheStrategyType <NSObject>

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long fetchStrategy;
@property (nonatomic) unsigned long long expiredStrategy;
@property (nonatomic) unsigned long long storeStrategy;
@property (nonatomic) long long expiredCount;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDictionary *additionalInfo;

- (unsigned long long)fetchStrategy;
- (void)setFetchStrategy:(unsigned long long)arg0;
- (unsigned long long)expiredStrategy;
- (void)setExpiredStrategy:(unsigned long long)arg0;
- (unsigned long long)storeStrategy;
- (void)setStoreStrategy:(unsigned long long)arg0;
- (id)key;
- (void)setKey:(id)arg0;

@optional

- (long long)expiredCount;
- (void)setExpiredCount:(long long)arg0;
- (void)setAdditionalInfo:(id)arg0;
- (double)timeout;
- (id)additionalInfo;
- (void)setTimeout:(double)arg0;

@end

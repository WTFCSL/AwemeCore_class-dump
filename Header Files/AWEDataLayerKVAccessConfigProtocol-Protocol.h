//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEDataLayerKVAccessConfigProtocol <NSObject>

@property (nonatomic) unsigned long long cacheOptions;
@property (nonatomic) unsigned long long freshnessTime;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL defaultBool;
@property (nonatomic) long long defaultInteger;
@property (nonatomic) double defaultDouble;

- (void)setCacheOptions:(unsigned long long)arg0;
- (unsigned long long)freshnessTime;
- (void)setFreshnessTime:(unsigned long long)arg0;
- (BOOL)defaultBool;
- (void)setDefaultBool:(BOOL)arg0;
- (long long)defaultInteger;
- (void)setDefaultInteger:(long long)arg0;
- (double)defaultDouble;
- (void)setDefaultDouble:(double)arg0;
- (id)userId;
- (unsigned long long)cacheOptions;
- (void)setUserId:(id)arg0;

@end

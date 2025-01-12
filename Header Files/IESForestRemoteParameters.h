//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface IESForestRemoteParameters : NSObject {
    BOOL _fromCustomConfig;
    NSString *_accessKey;
    NSString *_channel;
    NSString *_bundle;
    NSArray *_fetcherSequence;
    NSArray *_shuffleDomains;
    NSNumber *_waitGeckoUpdate;
    NSNumber *_disableCdnCache;
    NSNumber *_cdnRetryTimes;
}

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSArray *fetcherSequence;
@property (copy, nonatomic) NSArray *shuffleDomains;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableCdnCache;
@property (retain, nonatomic) NSNumber *cdnRetryTimes;
@property (nonatomic) BOOL fromCustomConfig;

+ (id)extractGeckoInfoFormURL:(id)arg0;
+ (id)remoteParametersWithURLString:(id)arg0 defaultPrefixToAccessKey:(id)arg1;

- (void)setWaitGeckoUpdate:(id)arg0;
- (void)setFetcherSequence:(id)arg0;
- (id)shuffleDomains;
- (void)setShuffleDomains:(id)arg0;
- (id)disableCdnCache;
- (void)setDisableCdnCache:(id)arg0;
- (id)waitGeckoUpdate;
- (void)setCdnRetryTimes:(id)arg0;
- (id)fetcherSequence;
- (id)cdnRetryTimes;
- (id)initWithAccessKey:(id)arg0 channel:(id)arg1 bundle:(id)arg2;
- (void)appendInfoFromResourceMeta:(id)arg0;
- (void)setFromCustomConfig:(BOOL)arg0;
- (id)fetchersDescription;
- (id)dynamicToWaitGeckoUpdate:(id)arg0;
- (BOOL)fromCustomConfig;
- (id)bundle;
- (id)channel;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setBundle:(id)arg0;
- (BOOL)isValid;
- (id)description;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;

@end

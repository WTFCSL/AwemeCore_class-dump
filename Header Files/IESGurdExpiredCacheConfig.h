//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESGurdExpiredCacheConfig : NSObject {
    int _expireAge;
    int _cleanType;
    NSString *_accessKey;
    NSDictionary *_channelsMap;
}

@property (nonatomic) int expireAge;
@property (nonatomic) int cleanType;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSDictionary *channelsMap;

- (int)cleanType;
- (void)setCleanType:(int)arg0;
- (void)setChannelsMap:(id)arg0;
- (id)channelsMap;
- (int)expireAge;
- (void)setExpireAge:(int)arg0;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;

@end
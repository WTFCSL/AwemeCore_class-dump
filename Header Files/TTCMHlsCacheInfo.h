//
//     Generated by private class-dump
//

@class NSString;

@interface TTCMHlsCacheInfo : NSObject {
    long long _version;
    NSString *_fileKey;
    long long _expireTime;
}

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) long long expireTime;

- (id)fileKey;
- (void)setFileKey:(id)arg0;
- (id)init;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (long long)version;
- (long long)expireTime;
- (void)setExpireTime:(long long)arg0;

@end

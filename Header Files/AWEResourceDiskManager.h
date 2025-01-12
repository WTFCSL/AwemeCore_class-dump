//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEResourceDiskManager : NSObject {
    long long _maxCacheSize;
    NSArray *_expiredList;
    double _cleanSize;
}

@property (copy, nonatomic) NSArray *expiredList;
@property (nonatomic) double cleanSize;
@property (nonatomic) long long maxCacheSize;

+ (id)sharedInstance;

- (id)getAllFileList:(id)arg0;
- (void)removeFileByList:(id)arg0;
- (id)getAllExpiredListWithExpireTime:(long long)arg0;
- (double)cleanSize;
- (void)setCleanSize:(double)arg0;
- (void)checkAndCleanDiskFileWithExpiredTime:(long long)arg0;
- (void)setExpiredList:(id)arg0;
- (void)cleanResourceWithExpireTimes:(long long)arg0;
- (double)cleanSizeWithExpireTimes:(long long)arg0;
- (id)expiredList;
- (id)init;
- (void).cxx_destruct;
- (long long)maxCacheSize;
- (void)setMaxCacheSize:(long long)arg0;

@end

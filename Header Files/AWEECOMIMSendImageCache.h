//
//     Generated by private class-dump
//

@class NSCache;

@interface AWEECOMIMSendImageCache : NSObject {
    NSCache *_memoryCache;
}

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)cacheImage:(id)arg0 uniqueId:(id)arg1;
- (id)requestImageWithUniqueId:(id)arg0;
- (void)removeImageForUniqueId:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)memoryCache;
- (void)setMemoryCache:(id)arg0;

@end

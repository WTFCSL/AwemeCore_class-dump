//
//     Generated by private class-dump
//

@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface CAKCoreIconsCacheManager : NSObject {
    BOOL _didLoad;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_loadQueue;
}

@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

+ (id)sharedInstance;

- (void)setLoadQueue:(id)arg0;
- (id)needLoadImageNames;
- (id)cachedImageWithName:(id)arg0;
- (void)setCache:(id)arg0;
- (id)cache;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)loadCache;
- (id)loadQueue;
- (BOOL)didLoad;
- (void)setDidLoad:(BOOL)arg0;

@end
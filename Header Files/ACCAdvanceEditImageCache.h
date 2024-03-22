//
//     Generated by private class-dump
//

@class NSString, BDImageCache, NSObject;
@protocol OS_dispatch_queue;

@interface ACCAdvanceEditImageCache : NSObject <DVEImageCacheProtocol> {
    BDImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) BDImageCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) unsigned long long memoryCacheCountLimit;
@property (nonatomic) unsigned long long memoryCacheCostLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsImageForKey:(id)arg0;
- (void)setupWithPath:(id)arg0;
- (id)getImageForKey:(id)arg0;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (void)setImageCache:(id)arg0;
- (void)setMemoryCacheCostLimit:(unsigned long long)arg0;
- (id)imageCache;
- (unsigned long long)memoryCacheCountLimit;
- (unsigned long long)memoryCacheCostLimit;
- (void)setMemoryCacheCountLimit:(unsigned long long)arg0;
- (void)setImage:(id)arg0 forKey:(id)arg1;

@end

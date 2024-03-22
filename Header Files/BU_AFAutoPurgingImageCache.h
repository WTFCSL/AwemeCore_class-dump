//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BU_AFAutoPurgingImageCache : NSObject <BU_AFImageRequestCache> {
    unsigned long long _memoryCapacity;
    unsigned long long _preferredMemoryUsageAfterPurge;
    NSMutableDictionary *_cachedImages;
    unsigned long long _currentMemoryUsage;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *cachedImages;
@property (nonatomic) unsigned long long currentMemoryUsage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) unsigned long long memoryCapacity;
@property (nonatomic) unsigned long long preferredMemoryUsageAfterPurge;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentMemoryUsage:(unsigned long long)arg0;
- (id)initWithMemoryCapacity:(unsigned long long)arg0 preferredMemoryCapacity:(unsigned long long)arg1;
- (void)setPreferredMemoryUsageAfterPurge:(unsigned long long)arg0;
- (void)setCachedImages:(id)arg0;
- (unsigned long long)preferredMemoryUsageAfterPurge;
- (void)addImage:(id)arg0 withIdentifier:(id)arg1;
- (BOOL)removeImageWithIdentifier:(id)arg0;
- (id)imageWithIdentifier:(id)arg0;
- (id)imageCacheKeyFromURLRequest:(id)arg0 withAdditionalIdentifier:(id)arg1;
- (id)init;
- (unsigned long long)currentMemoryUsage;
- (void).cxx_destruct;
- (id)synchronizationQueue;
- (void)setMemoryCapacity:(unsigned long long)arg0;
- (unsigned long long)memoryCapacity;
- (unsigned long long)memoryUsage;
- (void)dealloc;
- (void)setSynchronizationQueue:(id)arg0;
- (BOOL)removeAllImages;
- (id)cachedImages;

@end

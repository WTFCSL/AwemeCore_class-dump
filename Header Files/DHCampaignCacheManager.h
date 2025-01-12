//
//     Generated by private class-dump
//

@class YYCache;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface DHCampaignCacheManager : NSObject {
    YYCache *_cache;
    id<AWEStorageServiceFileKitResourceMetricInterface> _resourceMetric;
}

@property (retain, nonatomic) YYCache *cache;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;

+ (id)cacheWithDefaultDomain;
+ (id)cacheWithDomain:(id)arg0;
+ (id)sharedInstance;
+ (void)setupIfNeeded;

- (void)setResourceMetric:(id)arg0;
- (id)resourceMetric;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)initWithPath:(id)arg0;
- (id)dictionaryForKey:(id)arg0;
- (void).cxx_destruct;
- (BOOL)containsObjectForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)removeObjectForKey:(id)arg0;
- (id)objectForKey:(id)arg0;
- (void)removeAllObjects;

@end

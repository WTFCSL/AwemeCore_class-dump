//
//     Generated by private class-dump
//

@class NunkiSafeCache;

@interface NunkiFactorCache : NSObject {
    NunkiSafeCache *_cacheDic;
}

@property (retain, nonatomic) NunkiSafeCache *cacheDic;

- (id)cacheDic;
- (void)setCacheDic:(id)arg0;
- (void)removeAllFactorsCache;
- (id)cacheFactorForKey:(id)arg0;
- (void)setCacheFactor:(id)arg0 forKey:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end

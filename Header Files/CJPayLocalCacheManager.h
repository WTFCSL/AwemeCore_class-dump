//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, CJPayLocalCacheConfig, NSObject;
@protocol OS_dispatch_queue, CJPayEngimaProtocol;

@interface CJPayLocalCacheManager : NSObject {
    BOOL _hasNewChange;
    CJPayLocalCacheConfig *_cacheConfig;
    NSMutableDictionary *_mmapFeaturesMutableDict;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSTimer *_saveTriggerTimer;
    id<CJPayEngimaProtocol> _engimaEngine;
}

@property (retain, nonatomic) CJPayLocalCacheConfig *cacheConfig;
@property (retain, nonatomic) NSMutableDictionary *mmapFeaturesMutableDict;
@property (nonatomic) BOOL hasNewChange;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSTimer *saveTriggerTimer;
@property (retain, nonatomic) id<CJPayEngimaProtocol> engimaEngine;

- (void)setCacheConfig:(id)arg0;
- (id)cacheConfig;
- (id)allFeaturesFor:(id)arg0 conditionBlock:(id /* block */)arg1;
- (id)engimaEngine;
- (void)setEngimaEngine:(id)arg0;
- (id)saveTriggerTimer;
- (void)p_tryReduceCacheAndMerge:(id)arg0;
- (id)mmapFeaturesMutableDict;
- (void)setHasNewChange:(BOOL)arg0;
- (BOOL)hasNewChange;
- (BOOL)appendFeatures:(id)arg0;
- (void)setMmapFeaturesMutableDict:(id)arg0;
- (void)setSaveTriggerTimer:(id)arg0;
- (id)init;
- (BOOL)synchronize;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (void)loadCache;
- (void)dealloc;
- (BOOL)appendFeature:(id)arg0;

@end

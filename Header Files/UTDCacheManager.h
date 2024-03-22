//
//     Generated by private class-dump
//

@class UTDCache, NSString;

@interface UTDCacheManager : NSObject <UTMCLifeCycleProtocol> {
    UTDCache *_cache;
}

@property (retain, nonatomic) UTDCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLog:(id)arg0;
- (void)switchBackGround;
- (void)switchForeGround;
- (id)generateCacheKey:(id)arg0;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)init;
- (void)synchronize;
- (void).cxx_destruct;
- (long long)size;
- (void)dealloc;
- (void)synchronizeData;

@end
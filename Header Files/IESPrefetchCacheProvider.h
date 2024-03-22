//
//     Generated by private class-dump
//

@protocol IESPrefetchCacheStorageProtocol, IESPrefetchMonitorService;

@interface IESPrefetchCacheProvider : NSObject {
    id<IESPrefetchMonitorService> _monitorService;
    id<IESPrefetchCacheStorageProtocol> _storage;
}

@property (weak, nonatomic) id<IESPrefetchCacheStorageProtocol> storage;
@property (weak, nonatomic) id<IESPrefetchMonitorService> monitorService;

- (id)modelForKey:(id)arg0;
- (id)allCaches;
- (id)monitorService;
- (void)setMonitorService:(id)arg0;
- (void)cleanExpiredDataIfNeed;
- (id)fetchForKey:(id)arg0;
- (id)initWithCacheStorage:(id)arg0;
- (void)addCacheWithModel:(id)arg0 forKey:(id)arg1;
- (void)setStorage:(id)arg0;
- (void).cxx_destruct;
- (id)storage;

@end
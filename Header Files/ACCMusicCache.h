//
//     Generated by private class-dump
//

@class ACCLRUCache;

@interface ACCMusicCache : NSObject {
    ACCLRUCache *_cache;
}

@property (retain, nonatomic) ACCLRUCache *cache;

+ (id)sharedCache;

- (id)modelForId:(id)arg0;
- (void)setModel:(id)arg0 forId:(id)arg1;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)init;
- (void).cxx_destruct;

@end

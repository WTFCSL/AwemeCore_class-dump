//
//     Generated by private class-dump
//

@class UIViewController, NSMapTable, NSString, NSCache;
@protocol AWEFeedTableViewControllerProtocol;

@interface AWEClientAIAwemeHelper : NSObject <AWEClientAIAwemeHelper> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    NSMapTable *_strongToWeakObjectsMapTable;
    UIViewController<AWEFeedTableViewControllerProtocol> *_hotFeedVC;
    NSCache *_cachedSizeDatas;
}

@property (retain, nonatomic) NSMapTable *strongToWeakObjectsMapTable;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> *hotFeedVC;
@property (retain, nonatomic) NSCache *cachedSizeDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getABConfigMap;
+ (id)cachedSizeDatas;

- (id)currentAwemeModel;
- (id)_getDataSourceWithFeedVC:(id)arg0;
- (id)_getCurrentAwemeModelWithFeedVC:(id)arg0;
- (id)cachedSizeDatas;
- (long long)innerCacheSizeForVideoID:(id)arg0 urlKey:(id)arg1;
- (void)updateCachedAwemeModel:(id)arg0;
- (id)getAwemeModelWithItemID:(id)arg0;
- (id)hotFeedDataSource;
- (id)hotFeedAwemeModel;
- (long long)cachedSizeForModel:(id)arg0;
- (long long)videoSizeForModel:(id)arg0;
- (void)setStrongToWeakObjectsMapTable:(id)arg0;
- (id)hotFeedVC;
- (void)setHotFeedVC:(id)arg0;
- (void)setCachedSizeDatas:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)strongToWeakObjectsMapTable;
- (id)currentDataSource;

@end

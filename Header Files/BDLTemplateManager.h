//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface BDLTemplateManager : NSObject {
    void *templateQueueKey;
    NSObject<OS_dispatch_queue> *_templateQueue;
    NSMutableDictionary *_bundleCache;
    NSMapTable *_dataUpdateBlocks;
}

@property (class, readonly, nonatomic) BDLTemplateManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *templateQueue;
@property (retain, nonatomic) NSMutableDictionary *bundleCache;
@property (retain, nonatomic) NSMapTable *dataUpdateBlocks;

+ (id)lynxBundleForGroupID:(id)arg0 cardID:(id)arg1;
+ (id)dataForCardID:(id)arg0 groupID:(id)arg1;
+ (void)asyncGetDataForCardID:(id)arg0 groupID:(id)arg1 completion:(id /* block */)arg2;
+ (void)asyncGetDataForDirectURL:(id)arg0 completion:(id /* block */)arg1;
+ (id)lynxBundlePathForGroupID:(id)arg0 cardID:(id)arg1;
+ (id)lynxDataForGroupID:(id)arg0 cardID:(id)arg1;
+ (id)sharedInstance;

- (void)removeAllCache;
- (void)loadGeckoBundle:(id)arg0 accessKey:(id)arg1 completion:(id /* block */)arg2;
- (void)registerDataUpdate:(id /* block */)arg0 forGroupID:(id)arg1;
- (id)dataUpdateBlocks;
- (void)setDataUpdateBlocks:(id)arg0;
- (id)lynxBundleForGroupID:(id)arg0 cardID:(id)arg1;
- (id)templateQueue;
- (id)dataForCardID:(id)arg0 groupID:(id)arg1;
- (void)lynxTemplateDataDidUpdate:(id)arg0 cardID:(id)arg1;
- (void)loadGeckoBundle:(id)arg0 completion:(id /* block */)arg1;
- (id)cacheObjectForKey:(id)arg0;
- (void)runInOperationQueue:(id /* block */)arg0;
- (id)bundleCache;
- (void)asyncGetDataForCardID:(id)arg0 groupID:(id)arg1 completion:(id /* block */)arg2;
- (void)asyncGetDataForDirectURL:(id)arg0 completion:(id /* block */)arg1;
- (void)loadGeckoBundleAndResource:(id)arg0 accessKey:(id)arg1 completion:(id /* block */)arg2;
- (void)bundleUpdate:(id)arg0 success:(BOOL)arg1;
- (id)lynxBundleForGroupID:(id)arg0;
- (void)removeCacheObjectForKey:(id)arg0;
- (void)setTemplateQueue:(id)arg0;
- (void)setBundleCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)config;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setCacheObject:(id)arg0 forKey:(id)arg1;

@end
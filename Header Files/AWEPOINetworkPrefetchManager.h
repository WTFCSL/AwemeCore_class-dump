//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMutableDictionary, NSString;

@interface AWEPOINetworkPrefetchManager : NSObject <AWEPOINetworkPrefetchManagerProtocol> {
    NSOperationQueue *_taskQueue;
    NSMutableDictionary *_preloadLynxURLs;
    NSMutableDictionary *_preloadTasks;
    NSMutableDictionary *_keyMap;
    NSMutableDictionary *_clearKeyMap;
}

@property (retain, nonatomic) NSOperationQueue *taskQueue;
@property (retain, nonatomic) NSMutableDictionary *preloadLynxURLs;
@property (retain, nonatomic) NSMutableDictionary *preloadTasks;
@property (retain, nonatomic) NSMutableDictionary *keyMap;
@property (retain, nonatomic) NSMutableDictionary *clearKeyMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setKeyMap:(id)arg0;
- (id)preloadTasks;
- (void)setPreloadTasks:(id)arg0;
- (id)doSmartPrefetchWithSchema:(id)arg0 predictionModel:(id)arg1 smartPrefetchType:(unsigned long long)arg2 poiBackendType:(id)arg3 bizCode:(id)arg4 prefetchModel:(id)arg5;
- (void)clearSmartPrefetchWithKey:(id)arg0;
- (void)preloadLynxWithDict:(id)arg0 data:(id)arg1 forKey:(id)arg2;
- (id)clearKeyMap;
- (BOOL)isTemplateMatch:(id)arg0 url:(id)arg1;
- (id)preloadLynxURLs;
- (id)prefetchWithSchema:(id)arg0 prefetchModel:(id)arg1;
- (void)clearPrefetchWithKey:(id)arg0;
- (void)setPreloadLynxURLs:(id)arg0;
- (void)setClearKeyMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (id)keyMap;

@end

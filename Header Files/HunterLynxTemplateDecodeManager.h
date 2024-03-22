//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HunterLynxTemplateDecodeManager : NSObject {
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSMutableDictionary *_LRUQueues;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSMutableDictionary *LRUQueues;

+ (id)sharedInstance;

- (id)executeQueue;
- (void)setExecuteQueue:(id)arg0;
- (id)cacheKeyForSchema:(id)arg0 withDomain:(id)arg1;
- (id)LRUQueueForDomain:(id)arg0;
- (id)LRUQueues;
- (id)domainForSchema:(id)arg0;
- (void)setTemplateBundle:(id)arg0 forSchema:(id)arg1 withDomain:(id)arg2;
- (void)invokePreDecodeCallbackForSchema:(id)arg0 templateBundle:(id)arg1 completion:(id /* block */)arg2;
- (id)templateBundleForSchema:(id)arg0;
- (id)preDecodeTemplateSyncForSchema:(id)arg0;
- (void)preDecodeTemplateLocalAsyncForSchema:(id)arg0 completion:(id /* block */)arg1;
- (void)preDecodeTemplateRemoteAsyncForSchema:(id)arg0 useMainThreadDecode:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setLRUQueues:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end

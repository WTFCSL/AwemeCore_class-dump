//
//     Generated by private class-dump
//

@class BDPMultiDelegateProxy, NSString, BDPStarkRuntime, BDPStarkPage, BDPUniqueID;
@protocol BDPBusinessEnginePublishProtocol;

@interface BDPStarkBusinessEngine : NSObject <BDPBusinessEngineProtocol> {
    BOOL _isPreloadCoreFinish;
    BDPMultiDelegateProxy<BDPBusinessEnginePublishProtocol> *publishDelegates;
    BDPStarkPage *_starkPage;
    BDPStarkRuntime *_runtime;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPStarkRuntime *runtime;
@property (nonatomic) BOOL isPreloadCoreFinish;
@property (weak, nonatomic) BDPStarkPage *starkPage;
@property (readonly, nonatomic) BDPMultiDelegateProxy<BDPBusinessEnginePublishProtocol> *publishDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeHandler:(id)arg0 pageID:(long long)arg1 dest:(unsigned long long)arg2 data:(id)arg3 completion:(id /* block */)arg4;
- (void)recordTimeline:(id)arg0 uniqueID:(id)arg1;
- (void)runtime:(id)arg0 publish:(id)arg1 param:(id)arg2;
- (id)publishDelegates;
- (void)evaluateScript:(id)arg0 pageID:(long long)arg1 dest:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setupRuntime:(id)arg0;
- (void)setStarkPage:(id)arg0;
- (id)starkPage;
- (void)setIsPreloadCoreFinish:(BOOL)arg0;
- (id)getCurrentPage;
- (BOOL)isPreloadCoreFinish;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)runtime;
- (id)initWithUniqueID:(id)arg0;
- (void)setRuntime:(id)arg0;

@end
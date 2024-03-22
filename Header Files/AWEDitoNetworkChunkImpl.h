//
//     Generated by private class-dump
//

@class TTNetworkManager, NSMutableSet, NSString;

@interface AWEDitoNetworkChunkImpl : NSObject <DitoNetworkChunkProtocol> {
    NSMutableSet *_chunkTaskSet;
    TTNetworkManager *_networkManager;
}

@property (retain, nonatomic) NSMutableSet *chunkTaskSet;
@property (retain, nonatomic) TTNetworkManager *networkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNetworkManager:(id)arg0;
- (id)networkManager;
- (void)networkByChunkModeWithURL:(id)arg0 method:(unsigned long long)arg1 headers:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (void)removeChunkTask:(id)arg0;
- (id)chunkTaskSet;
- (void)networkByChunkModeWithURL:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)networkByChunkModeWithURL:(id)arg0 method:(unsigned long long)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)setChunkTaskSet:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end

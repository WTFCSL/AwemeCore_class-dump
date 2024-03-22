//
//     Generated by private class-dump
//

@class BDPUniqueID, BDPQueue;

@interface BDPPluginUserIG : BDPBridgeInstancePlugin {
    BOOL _isLoginFinish;
    BDPUniqueID *_uniqueID;
    BDPQueue *_queue;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isLoginFinish;
@property (retain, nonatomic) BDPQueue *queue;

- (BOOL)isLoginFinish;
- (void)setIsLoginFinish:(BOOL)arg0;
- (void)loginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)checkSessionWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getHostInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;

@end

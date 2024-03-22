//
//     Generated by private class-dump
//

@class NSObject, NSPointerArray, BDPUniqueID, BDPAudioPlayerService;
@protocol OS_dispatch_semaphore;

@interface BDPPluginAudio : BDPBridgeInstancePlugin {
    NSPointerArray *_createdPlayers;
    NSObject<OS_dispatch_semaphore> *_lock;
    BDPAudioPlayerService *_audioPlayerService;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPAudioPlayerService *audioPlayerService;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (id)audioPlayerService;
- (void)createAudioInstanceWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)destroyAudioInstanceWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)operateAudioWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getAudioStateWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setAudioStateWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setAudioPlayerService:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)dealloc;

@end
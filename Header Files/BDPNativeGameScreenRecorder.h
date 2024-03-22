//
//     Generated by private class-dump
//

@class NSString, SurfaceRecorder, HeliumApp, BDPUniqueID;

@interface BDPNativeGameScreenRecorder : NSObject <BDPNativeGameScreenRecorderProtocol> {
    SurfaceRecorder *_recorder;
    BDPUniqueID *_uniqueID;
    HeliumApp *_app;
    unsigned long long _status;
}

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoPause;
- (void)trimWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)getElapseTime:(id /* block */)arg0;
- (void)stop:(id /* block */)arg0 async:(BOOL)arg1;
- (id)initWithUniqueID:(id)arg0 app:(id)arg1;
- (void)resume;
- (void).cxx_destruct;
- (id)uniqueID;
- (BOOL)start:(long long)arg0;
- (unsigned long long)status;
- (void)setUniqueID:(id)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (void)stop:(id /* block */)arg0;
- (void)pause;

@end

//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID;

@interface BDPKryptonMediaRecorderServiceImpl : NSObject <KryptonMediaRecorderService, KryptonDefaultMediaRecorderDelegate> {
    BDPUniqueID *_uniqueID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMediaRecorder;
- (id)getVideoPathInfo:(id)arg0 isClip:(BOOL)arg1;
- (id)getVideoDirectory:(id)arg0 isClip:(BOOL)arg1;
- (long long)getVideoFileManagementPolicy;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString, HGUniqueID;

@interface HGStreamingAudioRecorder : NSObject <AVAudioRecorderDelegate, HGApplicationLifeCycleMessage, HGPermissionChangeMessage> {
    HGUniqueID *_uniqueID;
    id /* block */ _durationBlock;
    NSString *_recorderURLPath;
    NSString *_fileExtension;
    struct HGRecorderState { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mDataFormat; struct OpaqueAudioQueue *mQueue; struct AudioQueueBuffer *mBuffers[3]; struct OpaqueAudioFileID *mAudioFile; unsigned int bufferByteSize; long long mCurrentPacket; BOOL mIsRunning; id /* block */ onFrameRecordedWithAudioDataBlock; id /* block */ onStopRecorderBlock; id /* block */ onErrorRecorderBlock; id /* block */ disposeRecorderBlock; } _recorderState;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)applicationExitWithUniqueID:(id)arg0;
- (void)permissionStatusChanged:(id)arg0 on:(BOOL)arg1 uniqueID:(id)arg2;
- (void)onApplicationEnterBackground:(id)arg0;
- (void)stateChange:(id)arg0 data:(id)arg1;
- (void)forceStopRecorder;
- (void)operateState:(id)arg0 callback:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)stopTimer;
- (void)dealloc;
- (void)setupAudioSession;

@end

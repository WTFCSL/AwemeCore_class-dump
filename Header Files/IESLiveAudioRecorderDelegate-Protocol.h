//
//     Generated by private class-dump
//

@protocol IESLiveAudioRecorderDelegate <NSObject>

@optional

- (void)recorderWillStart:(id)arg0;
- (void)recorderDidStart:(id)arg0;
- (void)recorder:(id)arg0 didReceivedAudioData:(struct IESLiveAudioQueueInputData { void *x0; struct OpaqueAudioQueue *x1; struct AudioQueueBuffer *x2; struct AudioTimeStamp *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; } *)arg1;
- (void)recorderDidStop:(id)arg0;
- (void)recorderWithError:(id)arg0;

@end

//
//     Generated by private class-dump
//

@protocol BDPScreenRecorder <BDPService>

@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, nonatomic) struct __CVBuffer { } *lastPixelBuffer;

- (struct __CVBuffer { } *)lastPixelBuffer;
- (void)startScreenRecorderWithUniqueID:(id)arg0 extra:(id)arg1;
- (void)stopScreenRecorder:(id)arg0;
- (void)screenRecorderDidStartWithAppID:(id)arg0 fps:(float)arg1 error:(id)arg2 extra:(id)arg3;
- (void)screenRecorderDidStopWithAppID:(id)arg0 error:(id)arg1 extra:(id)arg2;
- (void)screenRecorderOnSwitch:(unsigned long long)arg0 suspend:(BOOL)arg1;
- (BOOL)isRecording;

@end

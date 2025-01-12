//
//     Generated by private class-dump
//

@protocol KryptonMediaRecorder <NSObject>

- (void)stopRecord;
- (void)pauseRecord;
- (void)onFrameAvailable:(struct __CVBuffer { } *)arg0;
- (void)configVideoWithMimeType:(id)arg0 duration:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bps:(unsigned long long)arg4 fps:(unsigned long long)arg5;
- (void)configAudioWithChanels:(unsigned long long)arg0 bps:(unsigned long long)arg1 sampleRate:(unsigned long long)arg2;
- (void)startRecordWithStartCallback:(id /* block */)arg0 endCallback:(id /* block */)arg1;
- (void)resumeRecord;
- (void)onAudioSample:(void *)arg0 length:(int)arg1;
- (void)clipWithTimeRanges:(id)arg0 andEndCallback:(id /* block */)arg1;
- (void)destroy:(BOOL)arg0;
- (unsigned long long)lastPresentationTime;

@end

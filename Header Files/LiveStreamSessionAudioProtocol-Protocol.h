//
//     Generated by private class-dump
//

@protocol LiveStreamSessionAudioProtocol <NSObject>

- (void)streamSession:(id)arg0 pushPlayerAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 frames:(int)arg2 bytesPerSample:(int)arg3 channels:(int)arg4 sampleRate:(int)arg5;
- (void)streamSession:(id)arg0 pullAudioData:(void *)arg1 earMonitorData:(void *)arg2 size:(unsigned int)arg3 timeStamp:(long long)arg4 mNumberChannels:(int)arg5 numberOfFrames:(int)arg6 admType:(unsigned long long)arg7;

@end
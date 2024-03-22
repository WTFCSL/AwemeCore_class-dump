//
//     Generated by private class-dump
//

@class LiveStreamAudioCapture, NSString, LSAudioDrivePictureEffectHandler;

@interface LSAudioDrivePictureEffectPreviewAudioCapture : NSObject <LiveStreamAudioCaptureDelegate> {
    LSAudioDrivePictureEffectHandler *_audioDrivePictureEffectHandler;
    LiveStreamAudioCapture *_audioCapture;
}

@property (retain, nonatomic) LiveStreamAudioCapture *audioCapture;
@property (weak, nonatomic) LSAudioDrivePictureEffectHandler *audioDrivePictureEffectHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioCapture;
- (void)setAudioCapture:(id)arg0;
- (void)pushPlayerAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 frames:(int)arg1 bytesPerSample:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)pushPlayerAECAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 frames:(int)arg1 bytesPerSample:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)pullMicAudio:(void *)arg0 size:(unsigned int)arg1 sampleRate:(int)arg2 timeStamp:(long long)arg3 mNumberChannels:(unsigned int)arg4 numberOfFrames:(unsigned int)arg5 processedData:(void *)arg6 earMonitorData:(void *)arg7;
- (void)admCreatedSuccess:(BOOL)arg0;
- (void)callbackAudioLog:(id)arg0;
- (void)onAudioCaptureEvent:(long long)arg0;
- (void)setAudioDrivePictureEffectHandler:(id)arg0;
- (id)audioDrivePictureEffectHandler;
- (void).cxx_destruct;
- (void)stopAudioCapture;
- (id)initWithConfig:(id)arg0;
- (void)startAudioCapture;

@end
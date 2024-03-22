//
//     Generated by private class-dump
//

@class VEMVPRenderer, VEPreviewUnit, HTSGLContext, VEAudioReaderUnit, VEVideoReaderUnit;

@interface VERecorderTemplateUnit : NSObject {
    BOOL _pause;
    BOOL _mute;
    BOOL _audioMuted;
    BOOL _isSeekingAudio;
    double _volume;
    unsigned long long _rotationMode;
    HTSGLContext *_context;
    VEAudioReaderUnit *_audioReader;
    VEVideoReaderUnit *_videoReader;
    VEMVPRenderer *_pixelBufferRenderer;
    VEPreviewUnit *_preview;
}

@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) VEAudioReaderUnit *audioReader;
@property (retain, nonatomic) VEVideoReaderUnit *videoReader;
@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (retain, nonatomic) VEPreviewUnit *preview;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) BOOL isSeekingAudio;
@property (nonatomic) double volume;
@property (nonatomic) BOOL pause;
@property (nonatomic) BOOL mute;
@property (nonatomic) unsigned long long rotationMode;

- (id)pixelBufferRenderer;
- (void)setPixelBufferRenderer:(id)arg0;
- (id)audioReader;
- (void)setAudioReader:(id)arg0;
- (void)syncFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (double)templateTotalDuration;
- (void)resetVideoData:(id)arg0 preview:(id)arg1 firstFrameRenderCallback:(id /* block */)arg2;
- (void)p_resetVideoData:(id)arg0 preview:(id)arg1 firstFrameRenderCallback:(id /* block */)arg2;
- (id)videoReader;
- (void)p_syncVideoFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)p_syncAudioFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)isSeekingAudio;
- (void)setIsSeekingAudio:(BOOL)arg0;
- (void)p_playAudioIfNeeded;
- (void)setVideoReader:(id)arg0;
- (BOOL)mute;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)preview;
- (double)volume;
- (void)setContext:(id)arg0;
- (void)setPause:(BOOL)arg0;
- (void)setPreview:(id)arg0;
- (id)context;
- (void)setVolume:(double)arg0;
- (void)dealloc;
- (BOOL)pause;
- (void)setMute:(BOOL)arg0;
- (unsigned long long)rotationMode;
- (void)setRotationMode:(unsigned long long)arg0;
- (void)setAudioMuted:(BOOL)arg0;
- (BOOL)audioMuted;

@end
//
//     Generated by private class-dump
//

@class AVAsset, VEAudioReader, VEAudioConfig;

@interface VEAudioClip : NSObject {
    BOOL _isCachedClip;
    AVAsset *_asset;
    VEAudioConfig *_audioConfig;
    VEAudioReader *_audioReader;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_bufferList;
    VEAudioClip *_cacheClip;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _seekTime;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) VEAudioConfig *audioConfig;
@property (retain, nonatomic) VEAudioReader *audioReader;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *bufferList;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (weak, nonatomic) VEAudioClip *cacheClip;
@property (nonatomic) BOOL isCachedClip;

- (id)audioConfig;
- (void)setAudioConfig:(id)arg0;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)bufferList;
- (void)setBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (id)audioReader;
- (void)setAudioReader:(id)arg0;
- (void)updateClipRange:(id)arg0;
- (id)initWithAsset:(id)arg0 audioConfig:(id)arg1;
- (void)updateConfig:(id)arg0 discardDecodedBuffer:(BOOL)arg1;
- (void)setCacheClip:(id)arg0;
- (void)setIsCachedClip:(BOOL)arg0;
- (id)cacheClip;
- (BOOL)isCachedClip;
- (void).cxx_destruct;
- (void)setSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })seekTime;
- (id)asset;
- (void)setAsset:(id)arg0;

@end
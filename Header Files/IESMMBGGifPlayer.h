//
//     Generated by private class-dump
//

@class NSURL, VEVideoReader, NSMutableArray;

@interface IESMMBGGifPlayer : IESMMBGVideoPlayer {
    BOOL _isStartRecord;
    float _rate;
    int _MAX_READER;
    id /* block */ _completeBlock;
    NSURL *_gifUrl;
    VEVideoReader *_gifReader;
    NSMutableArray *_gifReaderArray;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sameGifPlayTotalTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sameGifPlayStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sameGifRecordStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sameGifRecordTotalTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _tempGifRecordTotalTime;
}

@property (nonatomic) float rate;
@property (nonatomic) int MAX_READER;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSURL *gifUrl;
@property (nonatomic) BOOL isStartRecord;
@property (retain, nonatomic) VEVideoReader *gifReader;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifPlayTotalTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifPlayStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifRecordStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifRecordTotalTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } tempGifRecordTotalTime;
@property (retain, nonatomic) NSMutableArray *gifReaderArray;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)currentUrl;
- (void)setVideoURL:(id)arg0 rate:(float)arg1 completeBlock:(id /* block */)arg2 didPlayToEndBlock:(id /* block */)arg3;
- (void)setCompleteBlock:(id /* block */)arg0;
- (void)seekToPercent:(float)arg0 completeBlock:(id /* block */)arg1;
- (id /* block */)completeBlock;
- (void)setVideoURL:(id)arg0 rate:(float)arg1 completeBlock:(id /* block */)arg2;
- (void)resetRecordStatus:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (float)currentPlayPercent;
- (void)forbidAudioTracks:(BOOL)arg0;
- (BOOL)isForbidAudioTracks;
- (void)mutePlayer:(BOOL)arg0;
- (void)changeRate:(float)arg0 completeBlock:(id /* block */)arg1;
- (id)getPlayer;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completeBlock:(id /* block */)arg1;
- (struct __CVBuffer { } *)copyPixelBufferInterval:(double)arg0;
- (struct __CVBuffer { } *)copyPixelBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setMAX_READER:(int)arg0;
- (id)gifReaderArray;
- (void)setGifReaderArray:(id)arg0;
- (id)gifUrl;
- (void)setGifUrl:(id)arg0;
- (void)setIsStartRecord:(BOOL)arg0;
- (void)setSameGifPlayTotalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSameGifPlayStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSameGifRecordStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSameGifRecordTotalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setTempGifRecordTotalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setGifReader:(id)arg0;
- (id)gifReader;
- (int)MAX_READER;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sameGifPlayStartTime;
- (BOOL)isStartRecord;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sameGifRecordStartTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sameGifRecordTotalTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })tempGifRecordTotalTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sameGifPlayTotalTime;
- (void).cxx_destruct;
- (void)stop;
- (void)setRate:(float)arg0;
- (float)rate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)dealloc;
- (void)play;
- (void)pause;

@end

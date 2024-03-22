//
//     Generated by private class-dump
//

@class NSLock;

@interface LCAudioScore : NSObject {
    void *_singScoreHandle;
    char *_midiFileName;
    BOOL _isStart;
    int _sampleRate;
    NSLock *_startLock;
}

@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) NSLock *startLock;
@property (nonatomic) int sampleRate;

- (void)setStartLock:(id)arg0;
- (id)startLock;
- (id)initWithMidiFileName:(const char *)arg0 lyricFileName:(const char *)arg1;
- (void)startScore;
- (void)stopScore;
- (id)getMidiDrawingData;
- (void)setTranspose:(int)arg0;
- (id)getRealtimeInfo;
- (void)process:(short *)arg0 inNumberFrames:(int)arg1 channels:(int)arg2;
- (BOOL)isStart;
- (void).cxx_destruct;
- (int)sampleRate;
- (void)setIsStart:(BOOL)arg0;
- (void)dealloc;
- (void)setSampleRate:(int)arg0;
- (void)seek:(double)arg0;

@end

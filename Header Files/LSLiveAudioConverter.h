//
//     Generated by private class-dump
//

@class NSURL, NSLock;

@interface LSLiveAudioConverter : NSObject {
    char *_buffer;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_bufferList;
    struct OpaqueAudioFileID { } *_audioFileID;
    struct OpaqueAudioConverter { } *_audioConverter;
    NSLock *_lock;
    struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *_packageFormat;
    long long _readedPacket;
    unsigned long long _packetNums;
    double _duration;
    double _startTime;
    double _timeOffset;
    unsigned long long _readFirstFrameTick;
    double _currentTime;
    unsigned long long _status;
    NSURL *_audioURL;
    unsigned long long _musicType;
    long long _musicLoopCount;
    long long _curLoopCount;
    id /* block */ _musicPlayEndBlock;
    id /* block */ _musicPlayErrorBlock;
    id /* block */ _loopReStartBlock;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _destinationFormat;
}

@property (nonatomic) unsigned long long musicType;
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } destinationFormat;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSURL *audioURL;
@property (nonatomic) long long musicLoopCount;
@property (nonatomic) long long curLoopCount;
@property (copy, nonatomic) id /* block */ musicPlayEndBlock;
@property (copy, nonatomic) id /* block */ musicPlayErrorBlock;
@property (copy, nonatomic) id /* block */ loopReStartBlock;

+ (void)DisableSyncLock;

- (unsigned long long)musicType;
- (void)setMusicType:(unsigned long long)arg0;
- (void)destory;
- (void)destoryPackageFormatIfNeeded;
- (void)convertNewFile:(id)arg0 fromTime:(double)arg1;
- (void)adjustTimeOffset:(double)arg0;
- (void)resetConverter;
- (void)switchMusicType:(unsigned long long)arg0;
- (long long)musicLoopCount;
- (void)setCurLoopCount:(long long)arg0;
- (id /* block */)loopReStartBlock;
- (id /* block */)musicPlayErrorBlock;
- (void)setMusicPlayErrorBlock:(id /* block */)arg0;
- (void)convertNewFile:(id)arg0 fromTime:(double)arg1 musicType:(unsigned long long)arg2;
- (id /* block */)musicPlayEndBlock;
- (void)setMusicPlayEndBlock:(id /* block */)arg0;
- (void)setLoopReStartBlock:(id /* block */)arg0;
- (int)renderIOData:(short *)arg0 dataSize:(unsigned long long)arg1 outputPacketSize:(unsigned int *)arg2;
- (void)setMusicLoopCount:(long long)arg0;
- (long long)curLoopCount;
- (unsigned long long)readFirstFrameTick;
- (int)renderIOData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 outputPacketSize:(unsigned int *)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentTime:(double)arg0;
- (unsigned long long)status;
- (id)initWithFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (double)duration;
- (double)currentTime;
- (void)dealloc;
- (void)seekToTime:(double)arg0;
- (void)setDuration:(double)arg0;
- (id)audioURL;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })destinationFormat;

@end

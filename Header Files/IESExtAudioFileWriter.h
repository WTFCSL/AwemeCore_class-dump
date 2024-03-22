//
//     Generated by private class-dump
//

@class NSURL, IESAudioConfig;

@interface IESExtAudioFileWriter : NSObject {
    BOOL _writing;
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioDescription;
    IESAudioConfig *_config;
    BOOL _stopped;
    double _duration;
    NSURL *_recordUrl;
}

@property (nonatomic) BOOL stopped;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSURL *recordUrl;

+ (BOOL)HEAACEncodingAvailable;

- (void)setRecordUrl:(id)arg0;
- (id)recordUrl;
- (void)finishWritingComplete:(id /* block */)arg0;
- (void)pauseWriting;
- (int)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 inNumberFrames:(unsigned int)arg1 bufferDuration:(double)arg2;
- (int)processAudioBufferListSync:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 inNumberFrames:(unsigned int)arg1 bufferDuration:(double)arg2;
- (id)finishWritingSync;
- (void)resetDuration;
- (id)initWithAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0 config:(id)arg1;
- (void)startWriting;
- (void).cxx_destruct;
- (double)duration;
- (void)dealloc;
- (void)setStopped:(BOOL)arg0;
- (void)setDuration:(double)arg0;
- (BOOL)stopped;

@end

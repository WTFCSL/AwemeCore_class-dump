//
//     Generated by private class-dump
//

@class AVAssetWriterInput, AVAssetWriter, IESMMAudioFile;

@interface VEAudioResampler : NSObject {
    int _outChannels;
    int _outSampleRate;
    int _outBitrate;
    IESMMAudioFile *_audioReader;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_audioInput;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioDescription;
}

@property (retain, nonatomic) IESMMAudioFile *audioReader;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (nonatomic) int outChannels;
@property (nonatomic) int outSampleRate;
@property (nonatomic) int outBitrate;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioDescription;

- (id)audioReader;
- (void)setAudioReader:(id)arg0;
- (void)resampleAudioWithURL:(id)arg0 outChannels:(int)arg1 resampleRate:(int)arg2 bitRate:(int)arg3 completion:(id /* block */)arg4;
- (id)errorWithMsg:(id)arg0;
- (void)setOutChannels:(int)arg0;
- (void)setOutSampleRate:(int)arg0;
- (void)setOutBitrate:(int)arg0;
- (void)setAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (int)outChannels;
- (void)resampleAudioWithURL:(id)arg0 resampleRate:(int)arg1 bitRate:(int)arg2 completion:(id /* block */)arg3;
- (int)outSampleRate;
- (int)outBitrate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)audioInput;
- (void)setAudioInput:(id)arg0;
- (id)assetWriter;
- (void)setAssetWriter:(id)arg0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescription;
- (struct opaqueCMSampleBuffer { } *)resample:(struct opaqueCMSampleBuffer { } *)arg0;

@end
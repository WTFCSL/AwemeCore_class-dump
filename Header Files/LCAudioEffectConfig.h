//
//     Generated by private class-dump
//

@interface LCAudioEffectConfig : NSObject {
    unsigned long long _scene;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioStreamBasicDescription;
}

@property (nonatomic) unsigned long long scene;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioStreamBasicDescription;

+ (id)configWithScene:(unsigned long long)arg0;

- (id)defaultReverb2Format;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (id)init;
- (void)setScene:(unsigned long long)arg0;
- (unsigned long long)scene;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription;

@end

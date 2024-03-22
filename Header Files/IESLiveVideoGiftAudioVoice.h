//
//     Generated by private class-dump
//

@class NSURL, IESLiveVideoGiftAudioDecoder, IESLiveVideoGiftMetalConfiguration;
@protocol IESLiveVideoGiftBPEAProtocol;

@interface IESLiveVideoGiftAudioVoice : NSObject {
    IESLiveVideoGiftAudioDecoder *_decoder;
    struct OpaqueAUGraph { } *_auGraph;
    int _convertNode;
    int _ioNode;
    int _mixerNode;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outputFormat;
    struct OpaqueAudioComponentInstance { } *_convertUnit;
    struct OpaqueAudioComponentInstance { } *_ioUnit;
    struct OpaqueAudioComponentInstance { } *_mixerUnit;
    NSURL *_sourceURL;
    id /* block */ _processError;
    id<IESLiveVideoGiftBPEAProtocol> _bpeaHandler;
    IESLiveVideoGiftMetalConfiguration *_configuration;
}

- (BOOL)isAudioGraphRunning;
- (BOOL)isAudioGraphInitialized;
- (BOOL)isAudioGraphOpen;
- (void)configBPEAHandler;
- (void)configOutputAudioFormat;
- (BOOL)setupConvertUnit:(id *)arg0;
- (BOOL)setupMixerUnit:(id *)arg0;
- (BOOL)setupIOUnit:(id *)arg0;
- (BOOL)connectAudioUnits:(id *)arg0;
- (id)initWithDecoder:(id)arg0 configuration:(id)arg1 processError:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)stop;
- (void)setVolume:(double)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)arg0;
- (BOOL)setup:(id *)arg0;

@end
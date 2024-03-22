//
//     Generated by private class-dump
//

@class SAMICore_AudioConfig;

@interface SAMICore_VcSpeakerParameter : NSObject {
    BOOL _enableSaveInputAudioData;
    BOOL _enableSaveOutputAudioData;
    BOOL _enableBackground;
    BOOL _enablePlaying;
    int _playerCacheTime;
    const char *_speaker;
    SAMICore_AudioConfig *_inputAudioConfig;
    SAMICore_AudioConfig *_outputAudioConfig;
}

@property (nonatomic) const char *speaker;
@property (retain, nonatomic) SAMICore_AudioConfig *inputAudioConfig;
@property (retain, nonatomic) SAMICore_AudioConfig *outputAudioConfig;
@property (nonatomic) BOOL enableSaveInputAudioData;
@property (nonatomic) BOOL enableSaveOutputAudioData;
@property (nonatomic) BOOL enableBackground;
@property (nonatomic) BOOL enablePlaying;
@property (nonatomic) int playerCacheTime;

- (BOOL)enablePlaying;
- (void)setEnablePlaying:(BOOL)arg0;
- (id)inputAudioConfig;
- (void)setInputAudioConfig:(id)arg0;
- (id)outputAudioConfig;
- (void)setOutputAudioConfig:(id)arg0;
- (BOOL)enableSaveInputAudioData;
- (void)setEnableSaveInputAudioData:(BOOL)arg0;
- (BOOL)enableSaveOutputAudioData;
- (void)setEnableSaveOutputAudioData:(BOOL)arg0;
- (BOOL)enableBackground;
- (void)setEnableBackground:(BOOL)arg0;
- (int)playerCacheTime;
- (void)setPlayerCacheTime:(int)arg0;
- (void)setSpeaker:(const char *)arg0;
- (const char *)speaker;

@end

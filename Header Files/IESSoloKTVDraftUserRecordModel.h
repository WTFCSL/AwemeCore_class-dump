//
//     Generated by private class-dump
//

@class NSString, IESSoloKTVDraftBGRecordModel, IESSoloKTVDraftAudioRecordModel, IESSoloKTVDraftMidiRecordModel;

@interface IESSoloKTVDraftUserRecordModel : NSObject {
    BOOL _isUseOriginal;
    BOOL _isShowMidi;
    BOOL _isFull;
    int _musicVolume;
    int _voiceVolume;
    float _userDelay;
    int _startRow;
    int _endRow;
    double _startTime;
    double _endTime;
    double _playStartTime;
    double _playEndTime;
    NSString *_effectName;
    NSString *_effectPath;
    IESSoloKTVDraftAudioRecordModel *_audio;
    IESSoloKTVDraftMidiRecordModel *_midi;
    IESSoloKTVDraftBGRecordModel *_bg;
    NSString *_userName;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double playStartTime;
@property (nonatomic) double playEndTime;
@property (nonatomic) BOOL isUseOriginal;
@property (nonatomic) BOOL isShowMidi;
@property (nonatomic) int musicVolume;
@property (nonatomic) int voiceVolume;
@property (retain, nonatomic) NSString *effectName;
@property (retain, nonatomic) NSString *effectPath;
@property (nonatomic) float userDelay;
@property (retain, nonatomic) IESSoloKTVDraftAudioRecordModel *audio;
@property (retain, nonatomic) IESSoloKTVDraftMidiRecordModel *midi;
@property (retain, nonatomic) IESSoloKTVDraftBGRecordModel *bg;
@property (nonatomic) BOOL isFull;
@property (nonatomic) int startRow;
@property (nonatomic) int endRow;
@property (retain, nonatomic) NSString *userName;

- (void)setMusicVolume:(int)arg0;
- (id)effectPath;
- (void)setEffectPath:(id)arg0;
- (double)playStartTime;
- (void)setPlayStartTime:(double)arg0;
- (void)setIsFull:(BOOL)arg0;
- (id)bg;
- (void)setBg:(id)arg0;
- (double)playEndTime;
- (void)setPlayEndTime:(double)arg0;
- (void)setUserDelay:(float)arg0;
- (float)userDelay;
- (id)midi;
- (BOOL)isShowMidi;
- (void)setStartRow:(int)arg0;
- (void)setEndRow:(int)arg0;
- (void)setIsShowMidi:(BOOL)arg0;
- (void)setIsUseOriginal:(BOOL)arg0;
- (void)setMidi:(id)arg0;
- (BOOL)isUseOriginal;
- (int)startRow;
- (int)endRow;
- (BOOL)isFull;
- (id)init;
- (id)userName;
- (void)setStartTime:(double)arg0;
- (int)musicVolume;
- (void).cxx_destruct;
- (void)setUserName:(id)arg0;
- (double)duration;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (id)effectName;
- (void)setEffectName:(id)arg0;
- (id)audio;
- (int)voiceVolume;
- (void)setVoiceVolume:(int)arg0;
- (void)setAudio:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class ACCSequenceEditBGM, AWEVideoPublishViewModel, ACCSequenceBGMPlayer;

@interface ACCEditStandaloneMusicPlayerModule : NSObject {
    AWEVideoPublishViewModel *_repository;
    ACCSequenceEditBGM *_BGM;
    ACCSequenceBGMPlayer *_audioPlayer;
}

@property (retain, nonatomic) ACCSequenceEditBGM *BGM;
@property (retain, nonatomic) ACCSequenceBGMPlayer *audioPlayer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (double)currentPlayTime;
- (void)continuePlay;
- (id)BGM;
- (void)updateMusic:(id)arg0;
- (void)setAudioClipRange:(id)arg0;
- (void)updateMusicModelBgmAssetForDetailMusic:(id)arg0;
- (id)initWithBGM:(id)arg0;
- (void)setBGM:(id)arg0;
- (void).cxx_destruct;
- (id)audioPlayer;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)setVolume:(double)arg0;
- (void)setAudioPlayer:(id)arg0;
- (void)dealloc;
- (void)pause;

@end
//
//     Generated by private class-dump
//

@class NSString, AVAsset;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCEditImageAlbumAudioEffectWraper : NSObject <ACCEditBuildListener, ACCEditAudioEffectProtocolD, ACCEditBGMProtocol> {
    BOOL hadRecoveredVoiceEffect;
    BOOL isEffectPreprocessing;
    AVAsset *bgmAsset;
    id<ACCImageAlbumEditorSessionProtocol> _player;
}

@property (weak, nonatomic) id<ACCImageAlbumEditorSessionProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEffectPreprocessing;
@property (nonatomic) BOOL hadRecoveredVoiceEffect;
@property (retain, nonatomic) AVAsset *bgmAsset;

- (float)bgmVolume;
- (void)mute:(BOOL)arg0;
- (void)refreshAudioPlayer;
- (void)hotRemoveAudioAssests:(id)arg0;
- (void)hotAppendAudioAsset:(id)arg0 withRange:(id)arg1;
- (void)setAudioFilter:(id)arg0 forVideoAssets:(id)arg1;
- (void)setAudioFilter:(id)arg0 forAudioAssets:(id)arg1;
- (void)setAudioClipRange:(id)arg0 forAudioAsset:(id)arg1;
- (void)getVoiceBalanceDetectConfigForVideoAssets:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setVolumeForVideo:(float)arg0;
- (void)setVolumeForAudio:(float)arg0;
- (void)setBGM:(id)arg0 startTime:(double)arg1 clipDuration:(double)arg2 repeatCount:(long long)arg3;
- (void)removeBGM;
- (void)setVolume:(double)arg0 forAudioAssets:(id)arg1;
- (void)setVolume:(double)arg0 forVideoAssets:(id)arg1;
- (void)setEditSessionProvider:(id)arg0;
- (void)setBgmAsset:(id)arg0;
- (id)bgmAsset;
- (BOOL)hadRecoveredVoiceEffect;
- (void)setBGM:(id)arg0 start:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 completion:(id /* block */)arg4;
- (void)setVolumeForCutsameVideo:(float)arg0;
- (void)setBGMClipRange:(id)arg0;
- (void)setVolumeForVideoMainTrack:(float)arg0;
- (void)setVolumeForVideoSubTrack:(float)arg0;
- (void)setVolumeForGenericTemplateTrack:(float)arg0;
- (double)getGenericTemplateTrackVolume;
- (void)setVolumeForPGCAndUGCTrack:(float)arg0;
- (double)getPGCAndUGCTrackVolume;
- (void)applyAudioEffectWithEffectPath:(id)arg0 inPreProcessInfo:(id)arg1 inBlock:(id /* block */)arg2;
- (void)startAudioFilterPreview:(id)arg0 completion:(id /* block */)arg1;
- (void)stopFiltersPreview;
- (void)updateAudioFilters:(id)arg0 withEffects:(id)arg1 forVideoAssetsWithcompletion:(id /* block */)arg2;
- (BOOL)isEffectPreprocessing;
- (void)setIsEffectPreprocessing:(BOOL)arg0;
- (void)setHadRecoveredVoiceEffect:(BOOL)arg0;
- (void)hotAppendTextReadAudioAsset:(id)arg0 withRange:(id)arg1;
- (void)hotAppendKaraokeAudioAsset:(id)arg0 withRange:(id)arg1;
- (void)hotAppendAudioTrack:(long long)arg0 audioAsset:(id)arg1 withRange:(id)arg2;
- (void)hotRemovePGCAndUGCTrackWithNLEModel:(id)arg0;
- (void)onEditSessionInit:(id)arg0;
- (void)recoverRepeatCount;
- (void)setBGMAsset:(id)arg0 start:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 completion:(id /* block */)arg4;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (void)setVolume:(float)arg0;
- (id)player;

@end

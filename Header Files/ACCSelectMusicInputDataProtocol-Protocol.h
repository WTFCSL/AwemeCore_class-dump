//
//     Generated by private class-dump
//

@class ACCMusicTrimViewSnapShootModel, NSString, NSDictionary, AWEVideoPublishViewModel;
@protocol ACCMusicModelProtocol, ACCChallengeModelProtocol;

@protocol ACCSelectMusicInputDataProtocol <NSObject>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSString *ugcPathRefer;
@property (retain, nonatomic) id<ACCMusicModelProtocol> sameStickerMusic;
@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL useSuggestClipRange;
@property (nonatomic) BOOL enableMusicLoop;
@property (nonatomic) struct _HTSAudioRange { double x0; double x1; } audioRange;
@property (nonatomic) double exsitingVideoDuration;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ didClipWithRange;
@property (copy, nonatomic) id /* block */ didSuggestClipRangeChange;
@property (copy, nonatomic) id /* block */ setForbidSimultaneousScrollViewPanGesture;
@property (copy, nonatomic) NSDictionary *clipTrackInfo;
@property (nonatomic) BOOL disableCutMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicSelectInPanel;
@property (nonatomic) BOOL enableUseOriginMusic;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *imageMusicTrimStatusModel;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (BOOL)enableMusicLoop;
- (void)setEnableMusicLoop:(BOOL)arg0;
- (BOOL)useSuggestClipRange;
- (void)setUseSuggestClipRange:(BOOL)arg0;
- (id)ugcPathRefer;
- (void)setUgcPathRefer:(id)arg0;
- (struct _HTSAudioRange { double x0; double x1; })audioRange;
- (void)setAudioRange:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (void)setDisableCutMusic:(BOOL)arg0;
- (void)setMusicSelectInPanel:(id)arg0;
- (BOOL)enableUseOriginMusic;
- (void)setEnableUseOriginMusic:(BOOL)arg0;
- (id)imageMusicTrimStatusModel;
- (void)setImageMusicTrimStatusModel:(id)arg0;
- (void)setExsitingVideoDuration:(double)arg0;
- (void)setClipTrackInfo:(id)arg0;
- (void)setEnableClipBlock:(id /* block */)arg0;
- (void)setDidClipWithRange:(id /* block */)arg0;
- (void)setDidSuggestClipRangeChange:(id /* block */)arg0;
- (void)setSetForbidSimultaneousScrollViewPanGesture:(id /* block */)arg0;
- (id)sameStickerMusic;
- (void)setSameStickerMusic:(id)arg0;
- (double)exsitingVideoDuration;
- (id /* block */)enableClipBlock;
- (id /* block */)didClipWithRange;
- (id /* block */)didSuggestClipRangeChange;
- (id /* block */)setForbidSimultaneousScrollViewPanGesture;
- (id)clipTrackInfo;
- (BOOL)disableCutMusic;
- (id)musicSelectInPanel;
- (id)challenge;
- (void)setChallenge:(id)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;

@end

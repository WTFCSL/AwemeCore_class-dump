//
//     Generated by private class-dump
//

@class ACCMusicTrimViewSnapShootModel, NSString, NSArray, NSDictionary;
@protocol ACCMusicModelProtocol;

@protocol ACCSelectMusicStudioParamsProtocol <NSObject>

@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) BOOL needDisableDeselectMusic;
@property (nonatomic) BOOL shouldHideCancelButton;
@property (nonatomic) BOOL isFixDurationMode;
@property (nonatomic) BOOL shouldHideSelectedMusicViewClipActionBtn;
@property (retain, nonatomic) id<ACCMusicModelProtocol> sameStickerMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> mvMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> uploadRecommendMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> selectedMusic;
@property (copy, nonatomic) NSString *playlistId;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSArray *propBindMusicIdArray;
@property (copy, nonatomic) NSString *propId;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL useSuggestClipRange;
@property (nonatomic) BOOL enableMusicLoop;
@property (nonatomic) BOOL enableUseOriginMusic;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *imageMusicTrimStatusModel;
@property (nonatomic) struct _HTSAudioRange { double x0; double x1; } audioRange;
@property (nonatomic) double exsitingVideoDuration;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ didClipWithRange;
@property (copy, nonatomic) id /* block */ didSuggestClipRangeChange;
@property (copy, nonatomic) id /* block */ setForbidSimultaneousScrollViewPanGesture;
@property (copy, nonatomic) NSDictionary *clipTrackInfo;
@property (nonatomic) double fixDuration;
@property (nonatomic) BOOL shouldAccommodateVideoDurationToMusicDuration;
@property (nonatomic) double maximumMusicDurationToAccommodate;

- (id)playlistId;
- (BOOL)enableMusicLoop;
- (void)setEnableMusicLoop:(BOOL)arg0;
- (BOOL)useSuggestClipRange;
- (void)setUseSuggestClipRange:(BOOL)arg0;
- (id)propId;
- (void)setPropId:(id)arg0;
- (struct _HTSAudioRange { double x0; double x1; })audioRange;
- (void)setAudioRange:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (void)setPlaylistId:(id)arg0;
- (void)setSelectedMusic:(id)arg0;
- (id)mvMusic;
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
- (BOOL)shouldHideCellMoreButton;
- (void)setShouldHideCellMoreButton:(BOOL)arg0;
- (BOOL)needDisableDeselectMusic;
- (void)setNeedDisableDeselectMusic:(BOOL)arg0;
- (BOOL)shouldHideCancelButton;
- (void)setShouldHideCancelButton:(BOOL)arg0;
- (BOOL)isFixDurationMode;
- (void)setIsFixDurationMode:(BOOL)arg0;
- (BOOL)shouldHideSelectedMusicViewClipActionBtn;
- (void)setShouldHideSelectedMusicViewClipActionBtn:(BOOL)arg0;
- (id)sameStickerMusic;
- (void)setSameStickerMusic:(id)arg0;
- (void)setMvMusic:(id)arg0;
- (id)uploadRecommendMusic;
- (void)setUploadRecommendMusic:(id)arg0;
- (id)selectedMusic;
- (id)propBindMusicIdArray;
- (void)setPropBindMusicIdArray:(id)arg0;
- (double)exsitingVideoDuration;
- (id /* block */)enableClipBlock;
- (id /* block */)didClipWithRange;
- (id /* block */)didSuggestClipRangeChange;
- (id /* block */)setForbidSimultaneousScrollViewPanGesture;
- (id)clipTrackInfo;
- (double)fixDuration;
- (void)setFixDuration:(double)arg0;
- (BOOL)shouldAccommodateVideoDurationToMusicDuration;
- (void)setShouldAccommodateVideoDurationToMusicDuration:(BOOL)arg0;
- (double)maximumMusicDurationToAccommodate;
- (void)setMaximumMusicDurationToAccommodate:(double)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;

@end
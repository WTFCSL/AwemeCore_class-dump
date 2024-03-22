//
//     Generated by private class-dump
//

@class NSArray, ACCSlidesBeatSequenceWrapper, ACCSlidesBeatSequenceGenerator, ACCEditMusicBeatsViewModel, NSString;
@protocol ACCEditTextReaderServiceProtocol, ACCSequenceEditServiceProtocol, ACCSlidesBeatsViewModelDelegate, ACCMusicNetServiceProtocol, ACCEditViewContainer, ACCBarItemResourceConfigManagerProtocol, ACCVideoConfigProtocol;

@interface ACCSlidesBeatsViewModel : ACCEditViewModel <ACCSlidesBeatsViewModelProtocol> {
    BOOL _musicBeatsOn;
    BOOL _usePublicAPI;
    BOOL _hasImageWithTextReader;
    NSArray *_beatsArray;
    id<ACCSlidesBeatsViewModelDelegate> _delegate;
    ACCEditMusicBeatsViewModel *_imageAlbumBeatsVM;
    id /* block */ _beatsItemAction;
    id<ACCBarItemResourceConfigManagerProtocol> _barItemConfigManager;
    id<ACCMusicNetServiceProtocol> _musicNetService;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCVideoConfigProtocol> _videoConfig;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditTextReaderServiceProtocol> _editTextReaderService;
    ACCSlidesBeatSequenceGenerator *_beatSequenceGenerator;
    ACCSlidesBeatSequenceWrapper *_beatSequenceWrapper;
    unsigned long long _musicBeatsResult;
    unsigned long long _slidesMediaType;
}

@property (weak, nonatomic) id<ACCBarItemResourceConfigManagerProtocol> barItemConfigManager;
@property (weak, nonatomic) id<ACCMusicNetServiceProtocol> musicNetService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (retain, nonatomic) ACCSlidesBeatSequenceGenerator *beatSequenceGenerator;
@property (retain, nonatomic) ACCSlidesBeatSequenceWrapper *beatSequenceWrapper;
@property (nonatomic) unsigned long long musicBeatsResult;
@property (nonatomic) unsigned long long slidesMediaType;
@property (nonatomic) BOOL hasImageWithTextReader;
@property (nonatomic) BOOL musicBeatsOn;
@property (copy, nonatomic) NSArray *beatsArray;
@property (weak, nonatomic) id<ACCSlidesBeatsViewModelDelegate> delegate;
@property (retain, nonatomic) ACCEditMusicBeatsViewModel *imageAlbumBeatsVM;
@property (copy, nonatomic) id /* block */ beatsItemAction;
@property (nonatomic) BOOL usePublicAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (id)beatsArray;
- (void)setBeatsArray:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setMusicBeatsOn:(BOOL)arg0;
- (BOOL)musicBeatsOn;
- (id)editTextReaderService;
- (void)setEditTextReaderService:(id)arg0;
- (unsigned long long)musicBeatsResult;
- (void)updateBarItemView;
- (id)fetchItemButton:(id)arg0;
- (long long)obtainAWEPhotosBeatLoopTypeExperimentsActive;
- (id /* block */)beatsItemAction;
- (void)trackChangeSyncModeEvent;
- (id)fetchBeatsModeTraceValue;
- (BOOL)shouldTurnOnBeatsModeByDefault;
- (id)beatsBarItem;
- (void)switchMusicBeatsStatus;
- (BOOL)checkBeatsBarItemActionShouldActive:(id *)arg0;
- (void)setMediaContainerViewAnimatedDuration;
- (void)shutDownSwitchNextWithAnimation;
- (void)setBeatsItemAction:(id /* block */)arg0;
- (void)setMusicBeatsResult:(unsigned long long)arg0;
- (void)setImageAlbumBeatsVM:(id)arg0;
- (void)setUsePublicAPI:(BOOL)arg0;
- (void)updateSlidesBeatsModeByLivePhoto;
- (void)updateMusicBeatsStatusByDefaultWith:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)updateSlidesBeatsByMusicChange:(unsigned long long)arg0;
- (void)didAddMusicWithDefaultBeatsOn:(BOOL)arg0;
- (void)didDeselectMusic;
- (void)updateMusicBeatsResult;
- (double)musicTimeForProject:(id)arg0;
- (void)unbindSlidesBeatsStatus;
- (double)matchBeatWithProject:(id)arg0 time:(double)arg1 ignorePlayerTime:(BOOL)arg2;
- (void)openBeatsWhenSingleToMultiProjects;
- (void)updateSlidesBeatsModeWithType:(unsigned long long)arg0;
- (void)updateSlidesBeatsItemView;
- (void)updateSlidesBeatsByTrim;
- (void)setHasImageWithTextReader:(BOOL)arg0;
- (unsigned long long)slidesMediaTypeOfWorkspace:(id)arg0;
- (void)setSlidesMediaType:(unsigned long long)arg0;
- (BOOL)hasImageWithTextReader;
- (id)imageAlbumBeatsVM;
- (void)openMusicBeatsWithMusic:(id)arg0 showResultToast:(BOOL)arg1 byUser:(BOOL)arg2 isDefault:(BOOL)arg3 blockClip:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)p_updateBeatSequenceGeneratorConfig;
- (BOOL)isMusicBeatsEnable;
- (void)refreshImageBeatsWithMusic:(id)arg0 complection:(id /* block */)arg1;
- (id)barItemConfigManager;
- (BOOL)p_openSlidesMusicBeats;
- (void)p_closeSlidesMusicBeats;
- (unsigned long long)beatMediaTypeOfProject:(id)arg0;
- (id)beatSequenceWrapper;
- (double)elasticDurationWithProject:(id)arg0;
- (id)beatSequenceGenerator;
- (void)p_updateSlidesBeatsArrayWithType:(unsigned long long)arg0;
- (id)p_generateProjectsClipRangeForMusicBeatsForUpdate:(BOOL)arg0;
- (void)p_clearProjectsClipRangeForMusicBeatsOff;
- (void)updateTextReadingRangeForProject:(id)arg0;
- (id)p_updateProjectClipRangeWithStartTime:(double)arg0 project:(id)arg1;
- (id)p_genertateProjectClipRangeWithStartTime:(double)arg0 project:(id)arg1;
- (BOOL)usePublicAPI;
- (id)musicNetService;
- (double)timeDurationForProject:(id)arg0;
- (void)setBarItemConfigManager:(id)arg0;
- (void)setMusicNetService:(id)arg0;
- (void)setBeatSequenceGenerator:(id)arg0;
- (void)setBeatSequenceWrapper:(id)arg0;
- (unsigned long long)slidesMediaType;
- (void).cxx_destruct;
- (id)delegate;
- (id)initWithServiceProvider:(id)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)disableAutoPlay;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end

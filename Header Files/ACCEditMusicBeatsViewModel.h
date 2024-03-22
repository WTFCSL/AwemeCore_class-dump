//
//     Generated by private class-dump
//

@class ACCBeatSequenceGenerator, NSString;
@protocol ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCEditMusicServiceProtocol, ACCSlidesBeatsViewModelDelegate, ACCEditMusicBeatsViewModelDataSource;

@interface ACCEditMusicBeatsViewModel : ACCEditViewModel <ACCSlidesBeatsViewModelProtocol> {
    ACCBeatSequenceGenerator *_beatsGenerator;
    id /* block */ _beatsItemAction;
    id<ACCSlidesBeatsViewModelDelegate> _delegate;
    id<ACCEditMusicBeatsViewModelDataSource> _dataSource;
    id /* block */ _shouldAutoPlayBlock;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCSequenceEditServiceProtocol> _editService;
    id<ACCEditMusicServiceProtocol> _musicService;
    id<ACCSequencePlayControlServiceProtocol> _playControl;
}

@property (retain, nonatomic) ACCBeatSequenceGenerator *beatsGenerator;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playControl;
@property (copy, nonatomic) id /* block */ beatsItemAction;
@property (weak, nonatomic) id<ACCSlidesBeatsViewModelDelegate> delegate;
@property (weak, nonatomic) id<ACCEditMusicBeatsViewModelDataSource> dataSource;
@property (copy, nonatomic) id /* block */ shouldAutoPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setPlayControl:(id)arg0;
- (id)playControl;
- (id)beatsGenerator;
- (void)setBeatsGenerator:(id)arg0;
- (long long)fetchItemCount;
- (long long)beatReplacedWithAutoplayABRaw;
- (void)updateBarItemView;
- (id)fetchItemButton:(id)arg0;
- (long long)obtainAWEPhotosBeatLoopTypeExperimentsActive;
- (BOOL)guideToastShowed:(id)arg0;
- (void)updateBeatsArray;
- (BOOL)disableAutoPlayABRaw;
- (id /* block */)shouldAutoPlayBlock;
- (void)tryShowGuideToastWhenMusicBeatsOnAutoPlay;
- (id /* block */)beatsItemAction;
- (void)trackChangeSyncModeEvent;
- (void)refreshBeatsWithMusic:(id)arg0 showResultToast:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)configBeatsLimitToast;
- (id)albumBeatCountLimitToastText;
- (BOOL)useAlbumBeatMinCountEnable;
- (id)albumBeatCountLimitToastConfig;
- (void)showGuideWhenDisableAutoPlay:(id)arg0;
- (id)fetchBeatsModeTraceValue;
- (BOOL)shouldTurnOnBeatsModeByDefault;
- (id)beatsBarItem;
- (void)switchMusicBeatsStatus;
- (BOOL)checkBeatsBarItemActionShouldActive:(id *)arg0;
- (void)tryShowGuideToastWhenDisableAutoPlay;
- (void)setMediaContainerViewAnimatedDuration;
- (void)shutDownSwitchNextWithAnimation;
- (void)setBeatsItemAction:(id /* block */)arg0;
- (void)setShouldAutoPlayBlock:(id /* block */)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)delegate;
- (id)initWithServiceProvider:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
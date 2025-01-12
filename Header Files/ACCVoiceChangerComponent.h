//
//     Generated by private class-dump
//

@class DUXLoadingToast, NSString, ACCVoiceEffectManager, AWEVoiceChangePannel, ACCVoiceChangerViewModel, ACCVoiceChangerTracker, ACCVoiceChangerCategorySelectPanel;
@protocol ACCEditClipServiceProtocol, ACCEditSpecialEffectServiceProtocol, ACCEditTransitionServiceProtocol, ACCVideoEditTipsService, ACCVideoEditChallengeBindService, ACCEditMusicServiceProtocol, ACCVideoEditFlowControlService, ACCLyricsStickerServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCModuleConfigProtocol, ACCEditServiceProtocol, ACCEditClipV1ServiceProtocol;

@interface ACCVoiceChangerComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCVideoEditFlowControlSubscriber, ACCSequenceEditServicePlayerSubscriber, ACCVoiceChangerCategorySelectPanelObserver, ACCDraftResourceRecoverProtocol> {
    DUXLoadingToast *_loadingToast;
    AWEVoiceChangePannel *_voiceChangerPannel;
    ACCVoiceChangerCategorySelectPanel *_categoryPanel;
    id<ACCModuleConfigProtocol> _moduleConfig;
    NSString *_selectedHashtagID;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditSpecialEffectServiceProtocol> _specialEffectService;
    id<ACCEditClipServiceProtocol> _clipService;
    id<ACCEditClipV1ServiceProtocol> _clipServiceV1;
    id<ACCLyricsStickerServiceProtocol> _lyricsStickerService;
    ACCVoiceEffectManager *_voiceEffectManager;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id<ACCVideoEditTipsService> _tipsSerivce;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCVideoEditChallengeBindService> _challengeBindService;
    id<ACCEditMusicServiceProtocol> _musicService;
    ACCVoiceChangerViewModel *_viewModel;
    double _startShowTime;
    NSString *_curTabSwitchType;
    NSString *_curTabName;
    ACCVoiceChangerTracker *_tracker;
}

@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) AWEVoiceChangePannel *voiceChangerPannel;
@property (retain, nonatomic) ACCVoiceChangerCategorySelectPanel *categoryPanel;
@property (retain, nonatomic) id<ACCModuleConfigProtocol> moduleConfig;
@property (copy, nonatomic) NSString *selectedHashtagID;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCEditClipServiceProtocol> clipService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipServiceV1;
@property (weak, nonatomic) id<ACCLyricsStickerServiceProtocol> lyricsStickerService;
@property (retain, nonatomic) ACCVoiceEffectManager *voiceEffectManager;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCVideoEditTipsService> tipsSerivce;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCVideoEditChallengeBindService> challengeBindService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) ACCVoiceChangerViewModel *viewModel;
@property (nonatomic) double startShowTime;
@property (retain, nonatomic) NSString *curTabSwitchType;
@property (retain, nonatomic) NSString *curTabName;
@property (retain, nonatomic) ACCVoiceChangerTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)arg0;

- (id)publishModel;
- (double)startShowTime;
- (void)setStartShowTime:(double)arg0;
- (id)rootVC;
- (void)p_bindViewModel;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)loadingToast;
- (void)setLoadingToast:(id)arg0;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 willDismissPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didDismissPanelView:(id)arg1;
- (void)setFlowService:(id)arg0;
- (id)curTabName;
- (void)setCurTabName:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)tipsSerivce;
- (id)clipService;
- (id)currentBindChallenges;
- (void)sequenceEditService:(id)arg0 didTransferToIndexAndNotDragScrolling:(long long)arg1 previewMode:(BOOL)arg2 isAutoTransfer:(BOOL)arg3;
- (void)setTipsSerivce:(id)arg0;
- (void)setClipService:(id)arg0;
- (id)voiceEffectManager;
- (void)setVoiceEffectManager:(id)arg0;
- (void)dataClearForBackup:(id)arg0;
- (void)clearVoiceEffect;
- (void)addBarItemToToolBar;
- (id)specialEffectService;
- (void)setSpecialEffectService:(id)arg0;
- (void)updateVoiceChangerStateIfNeeded;
- (id)lyricsStickerService;
- (id)audioEffectService;
- (void)setLyricsStickerService:(id)arg0;
- (id)curTabSwitchType;
- (void)setCurTabSwitchType:(id)arg0;
- (id)tabTrackInfo;
- (id)tabTrackInfoOfIndex:(id)arg0;
- (void)effectSelectPanel:(id)arg0 switchToTab:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)onSelectPanelDidClickBackground:(id)arg0;
- (void)effectSelectPanel:(id)arg0 willSelectItem:(id)arg1 reason:(unsigned long long)arg2 atIndex:(id)arg3 fromIndex:(id)arg4;
- (void)effectSelectPanel:(id)arg0 didSelectItem:(id)arg1 reason:(unsigned long long)arg2 atIndex:(id)arg3 fromIndex:(id)arg4;
- (void)effectSelectPanel:(id)arg0 didUnselectItem:(id)arg1 atIndex:(id)arg2 reason:(unsigned long long)arg3;
- (void)effectSelectPanel:(id)arg0 favoriteItem:(id)arg1 atIndex:(id)arg2;
- (void)effectSelectPanel:(id)arg0 unfavoriteItem:(id)arg1 atIndex:(id)arg2 redirectToIndex:(id)arg3;
- (id)clipServiceV1;
- (void)setClipServiceV1:(id)arg0;
- (void)setSelectedHashtagID:(id)arg0;
- (void)fetchVoiceListWhenNotCached;
- (void)updateActionItemViewIfNeeded;
- (void)updateChallenges;
- (void)recoverVoiceEffectIfNecessaryWithCallback:(id /* block */)arg0;
- (id)voiceChangerBarItem;
- (void)voiceChangerClicked;
- (void)voiceChangerClicked:(long long)arg0;
- (void)track_click_voice_modify:(long long)arg0;
- (void)setCategoryPanel:(id)arg0;
- (id)categoryPanel;
- (id)voiceChangerPannel;
- (id)challengeBindService;
- (void)p_applyVCResult:(id)arg0 previewFile:(id)arg1 speakerID:(id)arg2;
- (void)fetchAndSaveChallengeWithChallengeID:(id)arg0;
- (void)trackForSelectVoice:(id)arg0;
- (void)applyEffect:(id)arg0 result:(id)arg1 effectTab:(id)arg2;
- (id)selectedHashtagID;
- (BOOL)voiceChangerEnabled;
- (BOOL)hasTimeMachineEffect;
- (void)trackClickSectionModify;
- (void)sequenceEditService:(id)arg0 willTransferToIndex:(long long)arg1 preIndex:(long long)arg2 isAutoTransfer:(BOOL)arg3;
- (void)setVoiceChangerPannel:(id)arg0;
- (void)setChallengeBindService:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)sourceModel;
- (id)moduleConfig;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setModuleConfig:(id)arg0;

@end

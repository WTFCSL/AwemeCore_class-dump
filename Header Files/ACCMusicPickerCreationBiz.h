//
//     Generated by private class-dump
//

@class ACCMusicReplaceNoVoiceTipView, ACCMusicPanelAudioEditToolBar, ACCVideoEditMusicViewModel, NSString, UIView, ACCMusicPickerViewController, ACCMusicAdvanceEditTipView;
@protocol HTSVideoSoundEffectPanelViewProtocol;

@interface ACCMusicPickerCreationBiz : NSObject <ACCMusicPanelAudioEditToolBarDelegate, HTSVideoSoundEffectPanelViewActionDelegate, ACCMusicAdvanceEditActionDelegate> {
    ACCMusicPanelAudioEditToolBar *_audioEditToolBar;
    UIView<HTSVideoSoundEffectPanelViewProtocol> *_volumeView;
    ACCMusicPickerViewController *_musicPicker;
    ACCVideoEditMusicViewModel *_musicViewModel;
    id /* block */ _didSelectToolBarModelHandler;
    id /* block */ _advanceEditTipDeleteActionHandler;
    id /* block */ _advanceEditTipUnselectMusicEventTracker;
    ACCMusicAdvanceEditTipView *_advanceEditTipView;
    ACCMusicReplaceNoVoiceTipView *_replaceMusicTipView;
}

@property (weak, nonatomic) ACCMusicPanelAudioEditToolBar *audioEditToolBar;
@property (weak, nonatomic) UIView<HTSVideoSoundEffectPanelViewProtocol> *volumeView;
@property (weak, nonatomic) ACCMusicPickerViewController *musicPicker;
@property (weak, nonatomic) ACCVideoEditMusicViewModel *musicViewModel;
@property (retain, nonatomic) ACCMusicAdvanceEditTipView *advanceEditTipView;
@property (retain, nonatomic) ACCMusicReplaceNoVoiceTipView *replaceMusicTipView;
@property (copy, nonatomic) id /* block */ didSelectToolBarModelHandler;
@property (copy, nonatomic) id /* block */ advanceEditTipDeleteActionHandler;
@property (copy, nonatomic) id /* block */ advanceEditTipUnselectMusicEventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVolumeView:(id)arg0;
- (void)setupBindings;
- (void)willShowPicker;
- (id)initWithMusicPicker:(id)arg0 musicViewModel:(id)arg1;
- (id)musicViewModel;
- (void)setMusicViewModel:(id)arg0;
- (void)trackAdvanceEditTipUnselectMusicEventForPreAction:(BOOL)arg0;
- (void)handleAdvanceEditTipDeleteAction;
- (void)refreshUIWithTipViewDisplay:(BOOL)arg0;
- (void)updateDeselectMusicStatus;
- (void)configWithToolBarModels:(id)arg0;
- (id /* block */)didSelectToolBarModelHandler;
- (void)setDidSelectToolBarModelHandler:(id /* block */)arg0;
- (void)didSelectToolBarModel:(id)arg0;
- (void)setAudioEditToolBar:(id)arg0;
- (void)addVolumeObserver;
- (id)audioEditToolBar;
- (BOOL)disableOriginMusicByVideoType;
- (void)addBgmMusicObserver;
- (void)finishEditVolumeTrackWithFromVoiceSlider:(BOOL)arg0;
- (void)toolbarOriginMusicSelected:(BOOL)arg0;
- (BOOL)toolbarMusicScoreSelected:(BOOL)arg0;
- (void)volumeViewBackButtonTapped;
- (void)bgmSliderDidFinishSlidingWithValue:(float)arg0;
- (void)voiceSliderDidFinishSlidingWithValue:(float)arg0;
- (void)toolbarVolumeTapped;
- (void)setAdvanceEditTipDeleteActionHandler:(id /* block */)arg0;
- (void)setAdvanceEditTipUnselectMusicEventTracker:(id /* block */)arg0;
- (void)observeMusic;
- (void)toggleVolumeViewShow;
- (id)musicPicker;
- (id)currentAdvanceEditor;
- (id /* block */)advanceEditTipDeleteActionHandler;
- (id /* block */)advanceEditTipUnselectMusicEventTracker;
- (void)showPickerTipIfNeeded;
- (id)advanceEditTipView;
- (BOOL)shouldShowReplaceMusicNoVoiceTipView;
- (id)replaceMusicTipView;
- (void)setMusicPicker:(id)arg0;
- (void)setAdvanceEditTipView:(id)arg0;
- (void)setReplaceMusicTipView:(id)arg0;
- (void).cxx_destruct;
- (id)volumeView;

@end
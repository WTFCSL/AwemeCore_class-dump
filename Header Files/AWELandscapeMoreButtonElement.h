//
//     Generated by private class-dump
//

@class AWELandscapePlaybackSettingGuide, AWELandscapeMorePanelView, NSString, UIButton;

@interface AWELandscapeMoreButtonElement : AWELandscapeInteractionBaseElement <AWELandscapeMorePanelViewDelegate> {
    BOOL _isShowingMorePanel;
    BOOL _hasRegisteredGuide;
    UIButton *_moreButton;
    AWELandscapeMorePanelView *_morePanelView;
    AWELandscapePlaybackSettingGuide *_playbackSettingGuide;
    id /* block */ _skipOpeningEndingGuideBlock;
}

@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWELandscapeMorePanelView *morePanelView;
@property (weak, nonatomic) AWELandscapePlaybackSettingGuide *playbackSettingGuide;
@property (nonatomic) BOOL isShowingMorePanel;
@property (nonatomic) BOOL hasRegisteredGuide;
@property (copy, nonatomic) id /* block */ skipOpeningEndingGuideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllPanels;
- (BOOL)shouldFailedGestureRecognizer:(id)arg0;
- (BOOL)handleResponseGestureRecognizer:(id)arg0;
- (BOOL)isShowingPanel;
- (void)showMorePanel;
- (void)trackClickMoreButton;
- (void)changeToFullScreen:(BOOL)arg0 type:(unsigned long long)arg1;
- (id)morePanelView;
- (void)clickDislikeButton;
- (void)clickReportButton;
- (void)landscapeShowDanmakuSettingsPanel;
- (void)uploadSyncPlayRequestManually;
- (void)landscapeAutoRotateSwitchChanged;
- (void)setSkipOpeningEndingGuideBlock:(id /* block */)arg0;
- (id /* block */)skipOpeningEndingGuideBlock;
- (void)registerLandscapeGuide;
- (void)setMorePanelView:(id)arg0;
- (void)setHasRegisteredGuide:(BOOL)arg0;
- (BOOL)hasRegisteredGuide;
- (BOOL)isShowingMorePanel;
- (void)dismissMorePanelWithCompletion:(id /* block */)arg0;
- (void)setIsShowingMorePanel:(BOOL)arg0;
- (void)realUploadSyncPlayRequestManually;
- (void)handleClickMoreButton;
- (id)playbackSettingGuide;
- (void)setPlaybackSettingGuide:(id)arg0;
- (void)updateState:(long long)arg0;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setData:(id)arg0;
- (BOOL)isInteracting;
- (void)setMoreButton:(id)arg0;
- (BOOL)isPlaying;
- (void)viewDidLoad;

@end

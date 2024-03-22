//
//     Generated by private class-dump
//

@class IESLiveGuideAudioKTVBackgroundView, IESLiveGuideAudioKTVBackgroundViewModel, IESLiveInteractThemeManager, NSString;

@interface IESLiveGuideAudioKTVBackgroundFragment : IESLiveGuideComponent <IESLiveGuideAudioKTVBackgroundRouter, IESLiveGuideAudioKTVBackgroundViewDataSource, IESLiveGuideActions, IESLiveAnchorGuideInteractiveSceneAction> {
    IESLiveGuideAudioKTVBackgroundViewModel *_viewModel;
    IESLiveGuideAudioKTVBackgroundView *_backgroundView;
    IESLiveInteractThemeManager *_manager;
}

@property (retain, nonatomic) IESLiveGuideAudioKTVBackgroundViewModel *viewModel;
@property (retain, nonatomic) IESLiveGuideAudioKTVBackgroundView *backgroundView;
@property (retain, nonatomic) IESLiveInteractThemeManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarUrls;
- (void)bindViewModel;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (void)showThemePanel;
- (BOOL)isAudioThemeEnabled;
- (void)dataInit;
- (void)didSelectSubscene:(unsigned long long)arg0;
- (BOOL)enablePicker;
- (void)changeBackgroundIfNeeded;
- (void)createBackgroundViewIfNeeded;
- (void)setBackgroundChange;
- (id)defaultBackgroundImage;
- (id)backgroundView;
- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)setManager:(id)arg0;
- (id)viewModel;
- (BOOL)isSmallScreen;
- (void)setBackgroundView:(id)arg0;
- (id)manager;
- (id)defaultBackgroundColor;

@end

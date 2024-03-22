//
//     Generated by private class-dump
//

@class ACCAnimatedButton, ACCVideoEditFlowControlViewModel, UIButton;
@protocol ACCEditViewContainer, ACCStickerServiceProtocol, ACCEditMusicServiceProtocol;

@interface AWEEditReplaceMusicFlowComponent : ACCFeatureComponent {
    BOOL _hasAutoShowMusicPanel;
    id<ACCEditViewContainer> _viewContainer;
    ACCVideoEditFlowControlViewModel *_viewModel;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCEditMusicServiceProtocol> _musicService;
    ACCAnimatedButton *_backButton;
    UIButton *_postButton;
    ACCAnimatedButton *_replaceButton;
}

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIButton *postButton;
@property (retain, nonatomic) ACCAnimatedButton *replaceButton;
@property (nonatomic) BOOL hasAutoShowMusicPanel;

- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (void)setPostButton:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (void)backClicked;
- (void)removePreUploadingTaskWhenQuit;
- (void)configBottomViewIfNeeded;
- (BOOL)enableNewReplaceMusicStyle;
- (BOOL)hasAutoShowMusicPanel;
- (void)setHasAutoShowMusicPanel:(BOOL)arg0;
- (void)startPostVideoWithReplacedMusic;
- (void)dismissVideoEditPageForReplaceMusic;
- (void)replaceMusicButtonClicked;
- (void).cxx_destruct;
- (id)containerViewController;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)dismissHandler;
- (id)replaceButton;
- (void)setReplaceButton:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)postButton;
- (void)popViewController;

@end

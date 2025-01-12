//
//     Generated by private class-dump
//

@class NSString, AFDMomentCellVideoPlayerViewModel, AFDButton, UIImageView, AWEUILoadingView, DUXButton, UIViewController, NSNumber;
@protocol AWEPlayVideoViewControllerProtocol;

@interface AFDMomentCellVideoPlayerComponent : AFDMomentCellBaseComponent <AWEPlayVideoDelegate, IESVideoPlayerDelegate> {
    AFDMomentCellVideoPlayerViewModel *_viewModel;
    UIViewController<AWEPlayVideoViewControllerProtocol> *_videoPlayer;
    AFDButton *_muteButton;
    UIImageView *_coverView;
    AWEUILoadingView *_loadingView;
    NSNumber *_volumeHandlerID;
    DUXButton *_tutorialFunctionalButton;
}

@property (retain, nonatomic) AFDMomentCellVideoPlayerViewModel *viewModel;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *videoPlayer;
@property (retain, nonatomic) AFDButton *muteButton;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSNumber *volumeHandlerID;
@property (retain, nonatomic) DUXButton *tutorialFunctionalButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (void)player:(id)arg0 playbackFailedForURL:(id)arg1 error:(id)arg2;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)player:(id)arg0 bufferingUpdate:(double)arg1;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)cellWillDisplay;
- (void)configWithModel:(id)arg0;
- (void)cellDidEndDisplaying;
- (void)bindViewModel;
- (void)componentDidLoad;
- (void)setVolumeHandlerID:(id)arg0;
- (id)volumeHandlerID;
- (void)loadComponent;
- (id)tutorialFunctionalButton;
- (void)setTutorialFunctionalButton:(id)arg0;
- (void)cellDidLayoutSubviews;
- (void)updateVideoTutorialButtonIfNeeded;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setupUI;
- (id)muteButton;
- (void)setMuteButton:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end

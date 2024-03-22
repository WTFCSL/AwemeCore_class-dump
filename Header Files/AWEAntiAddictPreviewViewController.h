//
//     Generated by private class-dump
//

@class AWEAntiAddictPreviewControlView, NSArray, NSString, NSDictionary, AWEUILoadingView, AWEAwemeModel, UIViewController;
@protocol AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWEAntiAddictPreviewViewController : UIViewController <AWERouterViewControllerProtocol, AWEAntiAddictPreviewControlViewDelegate, IESVideoPlayerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate> {
    BOOL _isLoading;
    BOOL _isRestRemind;
    BOOL _isEditable;
    BOOL _isAppear;
    BOOL _needPlayAfterViewDidAppear;
    BOOL _alreadyPlayOneLoop;
    UIViewController<AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol> *_videoController;
    AWEAntiAddictPreviewControlView *_controlView;
    AWEUILoadingView *_loadingView;
    NSArray *_awemeList;
    unsigned long long _previewVideoType;
    NSString *_enterFrom;
    NSString *_videoTag;
    NSString *_prePage;
    NSDictionary *_logExtra;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;
@property (retain, nonatomic) AWEAntiAddictPreviewControlView *controlView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL isRestRemind;
@property (nonatomic) unsigned long long previewVideoType;
@property (nonatomic) BOOL isEditable;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *videoTag;
@property (copy, nonatomic) NSString *prePage;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL needPlayAfterViewDidAppear;
@property (nonatomic) BOOL alreadyPlayOneLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)enterFrom;
- (void)playerVideoController:(id)arg0 didRecreatePlayerController:(id)arg1;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)dismissLoadingView;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)setPrePage:(id)arg0;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)prePage;
- (void)playIfActive;
- (id)videoTag;
- (void)setVideoTag:(id)arg0;
- (void)windowDidBecomeKeyNotification:(id)arg0;
- (void)windowDidResignKeyNotification:(id)arg0;
- (void)setIsRestRemind:(BOOL)arg0;
- (void)setPreviewVideoType:(unsigned long long)arg0;
- (void)p_trackViewDidAppear;
- (void)playConfrimButtonAnimation;
- (void)showRequestModelErrorToast;
- (BOOL)isRestRemind;
- (unsigned long long)previewVideoType;
- (void)p_trackClickConfirmButton;
- (void)p_trackConfirmFeedbackWithsaveStatus:(id)arg0 titleContent:(id)arg1;
- (void)controlView:(id)arg0 confirmButtonDidClick:(id)arg1 viewModel:(id)arg2;
- (void)controlView:(id)arg0 returnButtonDidClick:(id)arg1;
- (id)controlViewEnterFrom:(id)arg0;
- (void)addVideoView:(id)arg0;
- (void)shrinkVideoViewIfNeeded;
- (void)updateBlurCoverWithModel:(id)arg0;
- (void)loadAndPlay:(BOOL)arg0;
- (BOOL)needPlayAfterViewDidAppear;
- (void)setNeedPlayAfterViewDidAppear:(BOOL)arg0;
- (void)addNotificationsObservers;
- (void)removeNotificationsObservers;
- (BOOL)alreadyPlayOneLoop;
- (void)setAlreadyPlayOneLoop:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (BOOL)isLoading;
- (void)setIsEditable:(BOOL)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)isActive;
- (id)controlView;
- (BOOL)isEditable;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)play;
- (void)setIsLoading:(BOOL)arg0;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)appWillResignActive:(id)arg0;
- (void)showLoadingView;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setControlView:(id)arg0;

@end

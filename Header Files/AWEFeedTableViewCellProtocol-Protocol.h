//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, UIView, UIViewController;
@protocol UIScrollViewDelegate, AWEFeedTableViewCellViewControllerProtocol;

@protocol AWEFeedTableViewCellProtocol <AWEFeedBaseCellProtocol>

@property (nonatomic) long long indexPath;
@property (readonly, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol> *viewController;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;

- (id)referString;
- (void)setReferString:(id)arg0;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg0;
- (void)configWithModel:(id)arg0;
- (id)registerElementModel;
- (void)setRegisterElementModel:(id)arg0;
- (long long)cellDisplayState;
- (void)setCellDisplayState:(long long)arg0;
- (long long)cellPageAppearState;
- (void)setCellPageAppearState:(long long)arg0;
- (id /* block */)currentCellPageAppearStateBlock;
- (void)setCurrentCellPageAppearStateBlock:(id /* block */)arg0;
- (void)prepareForDisplay;
- (id)viewController;
- (void)setIndexPath:(long long)arg0;
- (void)stop;
- (long long)indexPath;
- (void)play;
- (void)pause;
- (void)reset;
- (void)configureWithModel:(id)arg0;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@optional

- (void)pauseIfNotStop;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)arg0;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isRelatedVideoPanelShowing;
- (BOOL)isAITextPanelShowing;
- (BOOL)isVideoDescriptionPanelShowing;
- (BOOL)isVideoRelatedPanelShowing;
- (void)updateAntiAddictedOptStrongRemindView:(BOOL)arg0;
- (void)didDisplay;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:(BOOL)arg0;
- (void)willConfigWithModel:(id)arg0;
- (void)afterDidEndDisplaying;
- (void)resetRefreshFlag;
- (void)seekTime:(double)arg0 completion:(id /* block */)arg1;
- (void)addFeedTableViewCellMaskView:(id)arg0;
- (void)removeFeedTableViewCellMaskView;
- (void)deceleratingEndToDisplay;
- (void)mutePlayerController:(BOOL)arg0;
- (void)replaceViewController:(id)arg0 removeIfExisting:(BOOL)arg1;
- (void)preloadWithModel:(id)arg0;
- (void)resetPreload;
- (void)enterLiveRoom:(id)arg0;
- (id)feedTableViewCellMaskView;
- (void)setFeedTableViewCellMaskView:(id)arg0;
- (id)scrollViewDelegate;
- (double)currentPlaybackTime;
- (void)didEndDisplaying;
- (void)pauseIfPlaying;
- (void)willDisplay;
- (void)pageDidDisappear:(BOOL)arg0;
- (void)pageWillAppear:(BOOL)arg0;
- (void)pageDidAppear:(BOOL)arg0;
- (void)pageWillDisappear:(BOOL)arg0;

@end

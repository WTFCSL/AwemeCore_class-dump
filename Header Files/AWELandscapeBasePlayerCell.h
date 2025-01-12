//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIImageView, AWELandscapeBaseVideoViewController, UIViewController, AWELandscapeContext, AWELandscapePageContext, AWELandscapeSectionViewModel;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol;

@interface AWELandscapeBasePlayerCell : UICollectionViewCell <AWELandscapeVideoViewControllerDelegate, AWELandscapePlayProtocol> {
    BOOL _hadPrepareToDisplay;
    BOOL _hasPreload;
    BOOL _shouldScreenCastContinue;
    UIViewController *_parentViewController;
    AWELandscapeSectionViewModel *_sectionViewModel;
    AWEAwemeModel *_awemeModel;
    long long _indexRow;
    UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *_playerViewController;
    AWELandscapeBaseVideoViewController *_landscapeVideoViewController;
    AWELandscapeContext *_landscapeContext;
    AWELandscapePageContext *_pageContext;
    UIImageView *_screenCastImageView;
}

@property (retain, nonatomic) AWELandscapeContext *landscapeContext;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) UIImageView *screenCastImageView;
@property (nonatomic) BOOL shouldScreenCastContinue;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) AWELandscapeSectionViewModel *sectionViewModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long indexRow;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL hasPreload;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *playerViewController;
@property (retain, nonatomic) AWELandscapeBaseVideoViewController *landscapeVideoViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSyncLandscapeDataInMVChannel;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)logExtraDict;
- (void)prepareForDisplayWithoutCoverImage;
- (void)hideAllPanels;
- (void)showInviteWatchToolTip;
- (void)didEnterLandscape;
- (void)playIfNeeded;
- (void)configWithAwemeModel:(id)arg0 parentViewController:(id)arg1 playerViewController:(id)arg2 context:(id)arg3 pageContext:(id)arg4;
- (void)pauseAndRemoveVideoController;
- (id)playObjectForPreload;
- (void)updatePlayerViewController:(id)arg0;
- (void)changeToPortraitWithCompletion:(id /* block */)arg0;
- (void)backActionByAutoRotate:(id /* block */)arg0;
- (void)slideExitLandscape;
- (BOOL)isShowingPanels;
- (BOOL)isShowingScreenCastView;
- (void)removeScreenCastView;
- (void)enterSplitScreenAnimationWithType:(long long)arg0;
- (void)exitSplitScreenAnimation;
- (void)resetFullScreen;
- (void)resetOriginFullScreenIfNeed;
- (void)updateControlViewAlpha;
- (void)hiddenControlViewAlpha;
- (void)enterQuietMode:(BOOL)arg0 duration:(double)arg1;
- (void)updateRemindTimeLabel;
- (void)showLongPressGuideIfNeed;
- (void)hideLongPressGuideIfNeed;
- (void)hideDoubleTapPauseGuideIfNeed;
- (void)triggerGuideEvent;
- (id)screenCastControlView;
- (long long)interactionViewState;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:(BOOL)arg0;
- (void)createVideoPlayer;
- (id)landscapeContext;
- (id)sectionViewModel;
- (void)setSectionViewModel:(id)arg0;
- (BOOL)useNewTransition;
- (void)updatePlayerBackgroundView:(id)arg0;
- (void)setHasPreload:(BOOL)arg0;
- (BOOL)hasPreload;
- (void)exitLandscapeWithCompletion:(id /* block */)arg0;
- (void)setLandscapeContext:(id)arg0;
- (id)landscapeVideoViewController;
- (void)refreshLogExtraDict;
- (BOOL)showShowSlideGuideFromRelatedVideoDetail;
- (void)setLandscapeVideoViewController:(id)arg0;
- (BOOL)shouldScreenCastContinue;
- (BOOL)isRelatedVideoAndSlideEnable;
- (void)setScreenCastImageView:(id)arg0;
- (id)screenCastImageView;
- (void)setupScreenCastControlViewToHolderIfNeeded;
- (void)recoverTempHolder;
- (void)recordLandsCapeFeedData;
- (void)setShouldScreenCastContinue:(BOOL)arg0;
- (void)updateInnerVideoPortraitData;
- (void)updatePortraitInnerData;
- (void)updatePortraitData;
- (BOOL)useLoadMoreCache;
- (void)innerFeedExitWithCompletion:(id /* block */)arg0;
- (void)commonExitWithCompletion:(id /* block */)arg0;
- (void)replaceCurrentModelWithFloatModel:(id)arg0;
- (void)exitSplitScreenMode;
- (id)preloadVideoModels;
- (void)enterSplitScreenToMode:(long long)arg0 dataController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)requestMixContinusDataIfNeed;
- (BOOL)autoPlayMixContinusVideoSuccess;
- (BOOL)needShowMixContinusPlayReminder;
- (void)feedShareButtonDidClicked:(id)arg0;
- (void)backButtonDidClicked:(id)arg0 completion:(id /* block */)arg1;
- (void)playNextVideo:(id)arg0;
- (void)enableScroll:(id)arg0;
- (BOOL)cellHasMoved:(id)arg0;
- (BOOL)hasNextVideo:(id)arg0;
- (void)configSplitScreenCellIfNeed;
- (long long)indexRow;
- (void)setIndexRow:(long long)arg0;
- (void)prepareForDisplay;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)reset;
- (void)backAction;
- (id)parentViewController;
- (void)setParentViewController:(id)arg0;
- (void)setPlayerViewController:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)videoController;
- (double)videoPlayRate;

@end

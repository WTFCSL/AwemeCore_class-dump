//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIView, UITableViewCell, AFDAmbassador, NSMutableArray, NSObject, AWEPublishProgressView;
@protocol AFDFeedPreloadControllerProtocol, AWEFeedTableViewCellProtocol, AWEFeedTableViewControllerFriendsAmbassadarProtocol, AWEFeedAdControllerProtocol, AWERelationBubbleViewProtocol, AFDSpeedManagerProtocol, AWEFeedRecommendChannelDelegate;

@protocol AWEFeedContainerProtocol <AWEShellViewControllerProtocol, AWEFeedTableBaseProtocol>

@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) long long videoIndex;
@property (readonly, nonatomic) long long willPlayIndex;
@property (readonly, nonatomic) long long didEndPlayIndex;
@property (readonly, nonatomic) long long currentPlayIndex;
@property (readonly, nonatomic) BOOL isDragging;
@property (readonly, nonatomic) BOOL isScrolling;
@property (readonly, nonatomic) BOOL isViewAppearing;
@property (readonly, nonatomic) long long cellSlideType;
@property (readonly, copy, nonatomic) id /* block */ completionFeedBlock;
@property (readonly, copy, nonatomic) id /* block */ animatedRefreshCompletion;
@property (readonly, nonatomic) BOOL isConcernRefreshing;
@property (readonly, nonatomic) BOOL hasRefreshedFlag;
@property (readonly, nonatomic) double playTimeStamp;
@property (nonatomic) BOOL isViewTransitionInProgress;
@property (retain, nonatomic) NSMutableArray *viewTransitionInvalidIndexPaths;
@property (readonly, nonatomic) AWEAwemeModel *slideToProfileModel;
@property (weak, nonatomic) id<AWEFeedRecommendChannelDelegate> feedChannelDelegate;
@property (readonly, nonatomic) AWEPublishProgressView *progressView;
@property (readonly, nonatomic) NSObject<AWEFeedAdControllerProtocol> *adController;
@property (readonly, nonatomic) AFDAmbassador<AWEFeedTableViewControllerFriendsAmbassadarProtocol> *friendsAmbassador;
@property (readonly, nonatomic) id<AFDFeedPreloadControllerProtocol> preloadController;
@property (readonly, nonatomic) UIView<AWERelationBubbleViewProtocol> *vcdTopBubble;
@property (readonly, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *preloadedCell;
@property (readonly, weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *willDisplayCell;
@property (readonly, weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *currentCell;
@property (readonly, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (readonly, nonatomic) BOOL isRightDrawerFeedTransating;

- (long long)videoIndex;
- (id)referString;
- (id)preloadController;
- (id)speedManager;
- (long long)currentPlayIndex;
- (long long)willPlayIndex;
- (id)adController;
- (id)feedChannelDelegate;
- (void)setFeedChannelDelegate:(id)arg0;
- (id)slideToProfileModel;
- (BOOL)isConcernRefreshing;
- (double)playTimeStamp;
- (long long)cellSlideType;
- (id /* block */)animatedRefreshCompletion;
- (long long)didEndPlayIndex;
- (void)setIsViewTransitionInProgress:(BOOL)arg0;
- (id)viewTransitionInvalidIndexPaths;
- (BOOL)isViewTransitionInProgress;
- (id)vcdTopBubble;
- (BOOL)hasRefreshedFlag;
- (id)friendsAmbassador;
- (id /* block */)completionFeedBlock;
- (void)setViewTransitionInvalidIndexPaths:(id)arg0;
- (BOOL)isScrolling;
- (BOOL)isDragging;
- (id)progressView;
- (id)willDisplayCell;
- (id)currentCell;
- (id)preloadedCell;
- (BOOL)isViewAppearing;

@optional

- (void)setVideoIndex:(long long)arg0;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)setHasCovered:(BOOL)arg0;
- (BOOL)pauseBySingleClick;
- (BOOL)currentTabIsTop;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isRelatedVideoPanelShowing;
- (double)currentPlayingTime;
- (void)loadMoreFeed;
- (void)setNeedsSetPureMode:(BOOL)arg0;
- (void)clearScreen:(BOOL)arg0;
- (void)setCurrentPlayIndex:(long long)arg0;
- (void)playIfActive;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)setAdController:(id)arg0;
- (id)safelyModelForRow:(long long)arg0;
- (id)cellReuseIdentifierForRowWithModel:(id)arg0;
- (BOOL)cellReuseIdentifierContainsCommerceSpecificWithModel:(id)arg0;
- (void)dimissNotNeedViewsForRecall;
- (void)setSlideToProfileModel:(id)arg0;
- (void)deleteAwemeWithIDs:(id)arg0 byBiz:(long long)arg1;
- (void)publishProgressViewBeginPublish;
- (void)publishProgressViewEndPublish;
- (void)deleteAwemeWithUserID:(id)arg0 byBiz:(long long)arg1;
- (void)deleteAwemesWithUserIDs:(id)arg0 byBiz:(long long)arg1;
- (void)deleteAwemeWithID:(id)arg0 animated:(BOOL)arg1 byBiz:(long long)arg2;
- (BOOL)isRadicalEvolutionMainConcern;
- (void)refreshFeed;
- (void)deleteAwemesWithDeletedIndexPaths:(id)arg0 deletedItems:(id)arg1 byBiz:(long long)arg2;
- (void)onDataSourceReload;
- (void)feedPreloadManagerAllTaskCompleted:(id)arg0;
- (void)feedPreloadManager:(id)arg0 didCompleteTaskWithModel:(id)arg1 error:(id)arg2;
- (void)setIsSkylightUnfolded:(BOOL)arg0;
- (BOOL)showVCDAuthorizedView;
- (void)handleVCDAlertOrBubble;
- (void)cancelCellPreloading;
- (id)feedController;
- (void)reloadWithCurrentIndex:(long long)arg0;
- (id)getCurrentCellVC;
- (void)setAnimatedRefreshCompletion:(id /* block */)arg0;
- (BOOL)checkForPreloadFeedWithType:(long long)arg0;
- (void)deleteAwemeWithIDs:(id)arg0 forceReloadData:(BOOL)arg1 byBiz:(long long)arg2;
- (void)insertAwemeModel:(id)arg0 atIndex:(long long)arg1 shouldForceReload:(BOOL)arg2 byBiz:(long long)arg3;
- (id)userProfileViewControllerForModel:(id)arg0 extUrlString:(id)arg1;
- (id)userProfileViewControllerForModel:(id)arg0;
- (void)triggerRefreshForcible:(BOOL)arg0;
- (BOOL)isNearbyFullScreen;
- (BOOL)isRadicalEvolutionMainEcommerce;
- (void)updateDistanceText:(id)arg0;
- (BOOL)showVCDAuthorizedText;
- (void)replaceAweme:(id)arg0 withModel:(id)arg1 byBiz:(long long)arg2;
- (BOOL)isRightDrawerFeedTransating;
- (void)insertModelAfterCurrentPlayAweme:(id)arg0 byBiz:(long long)arg1;
- (void)registerSlideActionController:(id)arg0;
- (BOOL)shouldShowSlideActionController:(id)arg0;
- (void)setHasRefreshedFlag:(BOOL)arg0;
- (void)addCustomVideosInsert;
- (void)setCompletionFeedBlock:(id /* block */)arg0;
- (BOOL)hotsoonAccountUnauthorize;
- (void)insertAwemeModel:(id)arg0 atIndex:(long long)arg1 shouldScrollToNext:(BOOL)arg2 byBiz:(long long)arg3;
- (void)insertAwemeModel:(id)arg0 atIndex:(long long)arg1 shouldScrollToNext:(BOOL)arg2 shouldForceReload:(BOOL)arg3 byBiz:(long long)arg4;
- (long long)indexOfModel:(id)arg0;
- (id)dataSourceByBiz:(long long)arg0;
- (void)setFriendsAmbassador:(id)arg0;
- (void)setIsShouldHidePendant:(BOOL)arg0;
- (long long)currentIndex;
- (void)stop;
- (void)setProgressView:(id)arg0;
- (BOOL)isActive;
- (long long)numberOfRows;
- (void)play;
- (void)pause;
- (double)cellHeight;
- (void)showFollowGroupPanel;

@end

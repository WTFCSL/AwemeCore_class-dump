//
//     Generated by private class-dump
//

@class NSNumber, AFDAmbassador, NSString;
@protocol AWEFeedTableViewControllerFriendsAmbassadarProtocol;

@interface AWEFeedFriendsController : AWEBaseController <AWEFeedControllerProtocol, AFDAwemePermissionMessage, AWEUserMessage> {
    BOOL _isFriendsQuicklySlideMaskGuide;
    AFDAmbassador<AWEFeedTableViewControllerFriendsAmbassadarProtocol> *_friendsAmbassador;
    NSNumber *_lastImpressionOrder;
}

@property (retain, nonatomic) AFDAmbassador<AWEFeedTableViewControllerFriendsAmbassadarProtocol> *friendsAmbassador;
@property (retain, nonatomic) NSNumber *lastImpressionOrder;
@property (nonatomic) BOOL isFriendsQuicklySlideMaskGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)didFinishLogout;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishUnBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishTapTAIsFriendWithUser:(id)arg0 isFriend:(BOOL)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (id)currentAweme;
- (void)insertVideosToFamiliarFeedWithAweme:(id)arg0;
- (void)addNotifications;
- (id)lastImpressionOrder;
- (void)setLastImpressionOrder:(id)arg0;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)showAllUIElementForCell:(id)arg0;
- (void)beginRefresh;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)onDataSourceReload;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)configureCellBrforeSetParentVC:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCellAfterSetParentVC:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidScrollEndWithActive;
- (void)insertAwemeWithUploadSuccess:(id)arg0;
- (void)insertVideosToFeedFromHotLaunchWithAwemeIDs:(id)arg0 extraInfo:(id)arg1;
- (void)onCommentAddNotification:(id)arg0;
- (void)p_toFeedTab;
- (id)awe_createTipsLabel;
- (void)__removeMaskIfCurrentCellHasFeedTableViewCellMaskView;
- (void)removeMaskIfCurrentCellHasFeedTableViewCellMaskView;
- (id)friendsAmbassador;
- (void)setFriendsAmbassador:(id)arg0;
- (void)deleteRecommendAwemeIfNeeded;
- (void)didChangeAwemePrivacyType:(id)arg0 privacyPermissionType:(long long)arg1 extra:(id)arg2 syncHandle:(id /* block */)arg3;
- (BOOL)isFriendsQuicklySlideMaskGuide;
- (void)setIsFriendsQuicklySlideMaskGuide:(BOOL)arg0;
- (id)getBackToFeedMaskViewWithCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isFriendsQuicklySlideMaskGuide:(BOOL)arg1;
- (void)setFriendsAmbassador;
- (void)updateImprOrderOfAweme:(id)arg0;
- (void)showPushGuideOnFeed;
- (void)removeAwemesWithUserIDsIfNeedForHot:(id)arg0;
- (void)removeAwemesByRecommendToFriendWithUserID:(id)arg0 reason:(id)arg1;
- (BOOL)p_isTargetAweme:(id)arg0 withJudgeBlock:(id /* block */)arg1;
- (void)deletePersonalRecommendAwemeIfNeeded;
- (void)removeMomentPublishFailed:(id)arg0;
- (id)friendsAmbassadarDelegate;
- (void)willEnterForeground;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didEnterBackground;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;

@end
//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, AWEProfileHeaderContext, UIView, AWEUserModel, NSDictionary, AWEProfileHeaderView_New, AWEUserProfileEventCommonParamsHandler, AWEProfileTopVideoHelper, AWEProfileContrailHelper;
@protocol AWEProfileHeaderViewControllerDelegate;

@interface AWEProfileHeaderViewController_New : AWEBaseListViewController <UIGestureRecognizerDelegate, AWEProfileHeaderFollowAreaActionDelegate, AWEProfileHeaderUpstairHintActionDelegate, AFDProfileAvatarZoomTransitionOuterContextProvider, AWEProfileBannerContext, AFDVirtualAvatarMessage, AWEProfileHeaderVCRefactorTempABInterfaceProtocol> {
    id<AWEProfileHeaderViewControllerDelegate> delegate;
    NSArray *_accessibilityBtns;
    UIView *_headerBackgroundView;
    AWEProfileHeaderView_New *_headerView;
    AWEProfileHeaderContext *_context;
}

@property (retain, nonatomic) AWEProfileHeaderView_New *headerView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) NSArray *accessibilityBtns;
@property (weak, nonatomic) UIView *headerBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTopVideoFullScreen;
@property (readonly, nonatomic) BOOL isContrailFullScreen;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEProfileHeaderViewControllerDelegate> delegate;
@property (nonatomic) BOOL isUserInfoFetched;
@property (nonatomic) BOOL isFromFamiliar;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromItemID;
@property (copy, nonatomic) NSString *followActivityID;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) BOOL isFromAcquaintance;
@property (nonatomic) BOOL isFromHighValueUserRecommend;
@property (nonatomic) BOOL autoShowRecommendCard;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (retain, nonatomic) NSDictionary *enterpriseTrackerParam;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (retain, nonatomic) AWEProfileTopVideoHelper *topVideoHelper;
@property (retain, nonatomic) AWEProfileContrailHelper *contrailHelper;

+ (Class)viewModelClass;
+ (Class)collectionViewClass;

- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)configWithUser:(id)arg0;
- (id)zoomTransitionStartView;
- (id)trackerParam;
- (void)setTrackerParam:(id)arg0;
- (BOOL)isFriends;
- (void)setIsFriends:(BOOL)arg0;
- (id)fromItemID;
- (void)setFromItemID:(id)arg0;
- (void)p_setupBind;
- (void)updateCurrentUserUseVirutalOrOriginAvatar:(BOOL)arg0;
- (void)didFinishRequestCreateOrEditVirtualAvatarIsFirstTime:(BOOL)arg0 emotionText:(id)arg1 emotionIcon:(id)arg2;
- (id)eventCommonParamsHandler;
- (void)setEventCommonParamsHandler:(id)arg0;
- (BOOL)isTopVideoFullScreen;
- (void)updateProfileCompletion:(float)arg0 hidePercentWhenCompleted:(BOOL)arg1;
- (void)configWithUser:(id)arg0 isLogSent:(BOOL)arg1;
- (void)showProfileInfoCompletionAnimation;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateNavBtnAlpha:(double)arg0;
- (void)scrollOffsetYLessThanTopVideoEntryOffsetY;
- (void)refreshAlphaForHeaderView:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrameOfHeaderView;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIsUserInfoFetched:(BOOL)arg0;
- (BOOL)isUserInfoFetched;
- (BOOL)isCurrentViewControllerSticky;
- (void)profilePageVisibilityChange:(BOOL)arg0;
- (void)setIsFromHighValueUserRecommend:(BOOL)arg0;
- (void)relationBtnClicked:(id)arg0;
- (BOOL)isFromHighValueUserRecommend;
- (double)heightOfListView;
- (double)introLabelTopOfHeaderView;
- (void)scrollViewBeginDraging;
- (void)refreshBannerWithContentOffsetY:(double)arg0;
- (id)topVideoHelper;
- (id)contrailHelper;
- (BOOL)isContrailFullScreen;
- (BOOL)getVal_isContrailFullScreen;
- (void)contrailWillEnterFullScreen;
- (void)contrailEnterFullScreenWithFullScreenTopOffsetY:(double)arg0 animation:(id /* block */)arg1;
- (void)contrailDidFinishedEnterFullScreenWithAnimationSucceed:(BOOL)arg0;
- (void)contrailWillLeaveFullScreenWithShowTabBar:(BOOL)arg0;
- (void)contrailLeaveFullScreen;
- (void)contrailDidFinishedLeaveFullScreen;
- (void)showContailGuideWithShowDuration:(double)arg0 guideStayDuration:(double)arg1 guideDisplayHeight:(double)arg2 endDuration:(double)arg3 contrail:(id)arg4;
- (void)topVideoDidFinishedEnterFullScreen;
- (void)topVideoDidFinishedLeaveFullScreen;
- (void)topVideoEnterFullScreenWithAnimation:(BOOL)arg0 fullScreenTopOffsetY:(double)arg1;
- (void)topVideoLeaveFullScreenWithAnimation:(BOOL)arg0;
- (void)topVideoWillEnterFullScreen;
- (void)topVideoWillLeaveFullScreen;
- (id)initWithUserID:(id)arg0 nickname:(id)arg1 profileType:(long long)arg2 fromHomePage:(BOOL)arg3;
- (void)configWithUser:(id)arg0 useCache:(BOOL)arg1;
- (void)configWithUser:(id)arg0 isLogSent:(BOOL)arg1 useCache:(BOOL)arg2;
- (void)sendMsgBtnClicked:(id)arg0;
- (void)setIsQuickSwitchMockUser:(BOOL)arg0;
- (void)setEnterpriseTrackerParam:(id)arg0;
- (id)enterpriseTrackerParam;
- (void)setTopVideoHelper:(id)arg0;
- (void)setContrailHelper:(id)arg0;
- (void)didReloadInteractNoticeInfoModels:(id)arg0;
- (BOOL)isFromFamiliar;
- (void)setIsFromFamiliar:(BOOL)arg0;
- (id)followActivityID;
- (void)setFollowActivityID:(id)arg0;
- (BOOL)isFromAcquaintance;
- (void)setIsFromAcquaintance:(BOOL)arg0;
- (BOOL)autoShowRecommendCard;
- (void)setAutoShowRecommendCard:(BOOL)arg0;
- (void)setupAccessibilityButtons:(id)arg0;
- (void)handleFollowAreaActionWithType:(long long)arg0;
- (void)p_configInteractionNoticeContextWithUserModel:(id)arg0;
- (id)accessibilityBtns;
- (BOOL)_isVideoLandscape;
- (void)setAccessibilityBtns:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setModel:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (double)headerViewHeight;
- (id)initWithConfiguration:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (id)delegate;
- (id)context;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)useCache;
- (id)headerBackgroundView;
- (void)setHeaderBackgroundView:(id)arg0;
- (void)setupCollectionView:(id)arg0;

@end

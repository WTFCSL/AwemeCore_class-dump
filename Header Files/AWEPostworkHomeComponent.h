//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, NSDictionary, AWEPostWorkViewController, NSMutableArray;

@interface AWEPostworkHomeComponent : AWEUserHomeBaseComponent <AWEUserMessage, AWEPublishTaskMessage, AWEProfileTabListProviderProtocol, AWEPostworkHomeComponentProtocol> {
    BOOL _isViewDidAppear;
    BOOL _postWorkDirty;
    AWEPostWorkViewController *_postVC;
    LOTAnimationView *_postIconLottieView;
    NSMutableArray *_localPosts;
    NSDictionary *_playCountMilestoneInfo;
}

@property (retain, nonatomic) AWEPostWorkViewController *postVC;
@property (retain, nonatomic) LOTAnimationView *postIconLottieView;
@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) NSMutableArray *localPosts;
@property (nonatomic) BOOL postWorkDirty;
@property (retain, nonatomic) NSDictionary *playCountMilestoneInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)didFinishLogout;
- (void)didFinishUpdateAwemeUser;
- (BOOL)isViewDidAppear;
- (void)didChangeVideoPrivacy:(id)arg0;
- (void)didDeleteAweme:(id)arg0;
- (BOOL)isThemeStyleLight;
- (void)onAWEUIThemeChangeNotification;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (void)didPostAweme:(id)arg0;
- (id)postVC;
- (void)setPostVC:(id)arg0;
- (void)p_refreshUserData;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)arg0;
- (void)onResetUI;
- (id)postIconLottieView;
- (void)addPostIconLottieViewIfNeed:(id)arg0;
- (void)setPostIconLottieView:(id)arg0;
- (void)setLocalPosts:(id)arg0;
- (void)updatePostWorkTabIcon;
- (void)refreshPostWorkDataWithWillSwitchToHomePageTab;
- (void)didStoryAwemeExchange:(id)arg0;
- (void)didCreateAwemeDraft:(id)arg0;
- (void)didDeleteAwemeDraft:(id)arg0;
- (void)didClearAwemeDraft:(id)arg0;
- (void)refreshPostWorkAfterNextAppear:(id)arg0;
- (void)p_ttlStoryCountChangedNotification:(id)arg0;
- (BOOL)postWorkDirty;
- (void)_refreshPostWorkNeedDelay:(BOOL)arg0;
- (void)p_addLocalPost:(id)arg0;
- (void)p_refreshPostWork;
- (void)setPostWorkDirty:(BOOL)arg0;
- (id)localPosts;
- (void)p_deleteQuickShareAweme:(id)arg0;
- (void)p_deletePostAweme:(id)arg0;
- (void)p_removeLocalPost:(id)arg0;
- (void)p_removeLocalPostWithQuickShareAweme:(id)arg0;
- (void)p_scrollToTopIfCurrentVCIs:(id)arg0;
- (id)playCountMilestoneInfo;
- (void)setPlayCountMilestoneInfo:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isViewLoaded;
- (void)onInit;

@end

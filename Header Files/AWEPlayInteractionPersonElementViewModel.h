//
//     Generated by private class-dump
//

@class NSString, UIViewController;

@interface AWEPlayInteractionPersonElementViewModel : AWEPlayInteractionBaseElementViewModel {
    BOOL _isRecommendedCard;
    BOOL _showDecoration;
    BOOL _isLiveBlocked;
    NSString *_pageTypeString;
    long long _fromPageType;
    UIViewController *_viewController;
    NSString *_refer;
}

@property (nonatomic) BOOL isLiveBlocked;
@property (retain, nonatomic) NSString *pageTypeString;
@property (nonatomic) long long fromPageType;
@property (nonatomic) BOOL isRecommendedCard;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL showDecoration;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;

- (id)aAWEPadModuleAdapter;
- (void)setRefer:(id)arg0;
- (id)pageTypeString;
- (BOOL)p_isUnfollowFamiliar;
- (void)setFromPageType:(long long)arg0;
- (void)setPageTypeString:(id)arg0;
- (BOOL)isRecommendedCard;
- (void)setIsRecommendedCard:(BOOL)arg0;
- (void)enterUserDetailWithEnterMethod:(id)arg0 enterPosition:(id)arg1;
- (void)canEnterLiveRoom:(id /* block */)arg0;
- (long long)fromPageType;
- (id)refer;
- (void)enterLiveRoom:(id /* block */)arg0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)currentCoCreator;
- (void)hideFamiliarElements;
- (void)trackRelationRecommend:(id)arg0;
- (BOOL)showDecoration;
- (void)setShowDecoration:(BOOL)arg0;
- (BOOL)isLiveBlocked;
- (void)setIsLiveBlocked:(BOOL)arg0;
- (void)interactor_onUserAvatarViewClicked:(id)arg0 contentSource:(id)arg1 enterLiveRoomBlock:(id /* block */)arg2;
- (void)interactor_onAuthorLabelClicked:(id)arg0;
- (void)interactor_onAuthorLabelClicked:(id)arg0 contentSource:(id)arg1;
- (void)router_onUserAvatarViewClicked:(id)arg0 enterPosition:(id)arg1;
- (void)router_onAuthorLabelClicked:(id)arg0;
- (void)router_onAuthorLabelClicked:(id)arg0 enterPosition:(id)arg1;
- (void)p_goToPersonalPage:(id)arg0 gestureRecognizer:(id)arg1;
- (void)interactor_onUserAvatarViewClicked:(id)arg0 enterLiveRoomBlock:(id /* block */)arg1;
- (void)p_trackEnterUserPageWithEnterMethod:(id)arg0;
- (void)router_onUserAvatarViewClicked:(id)arg0;
- (void)onLiveBlockAudienceNotication:(id)arg0;
- (void)interactor_onLiveBlockAudienceNotication:(id)arg0;
- (BOOL)p_isLinkMicRoomLiveCell;
- (id)p_getLinkMicRoomUser;
- (BOOL)p_needTrackFollowCard;
- (void)showUserDetailViewController:(id)arg0 withURL:(id)arg1 isAds:(BOOL)arg2 author:(id)arg3 animated:(BOOL)arg4;
- (BOOL)shouldEnterSplitScreen;
- (id)init;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)currentUser;

@end

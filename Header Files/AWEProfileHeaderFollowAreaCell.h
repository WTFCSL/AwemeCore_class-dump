//
//     Generated by private class-dump
//

@class UIView, AWEProfileHeaderContext, UITapGestureRecognizer, AWEButton, NSString, UIImageView, AWEUserRelationView, AWEBubble, UIVisualEffectView;
@protocol AWEProfileHeaderFollowAreaCellDelegate;

@interface AWEProfileHeaderFollowAreaCell : UICollectionViewCell <AWEUserRelationViewDelegate, AWEProfileHeaderCellProtocol> {
    BOOL _isFollowGuideMaskViewTracked;
    BOOL _hasAddRecommendBtn;
    BOOL _shouldTrackSendMsgBtn;
    BOOL _hasBeenFollowed;
    BOOL _hasTrackedAutoSwtich;
    BOOL _hasTrackedFollowStatusCheck;
    id<AWEProfileHeaderFollowAreaCellDelegate> _delegate;
    AWEProfileHeaderContext *_context;
    AWEUserRelationView *_relationView;
    UIView *_userRecommendBtnBackgroundView;
    AWEButton *_userRecommendBtn;
    UIVisualEffectView *_userRecommendBtnEffectView;
    UIImageView *_userRecommendLoadingImageView;
    AWEBubble *_privateMsgbubble;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEUserRelationView *relationView;
@property (retain, nonatomic) UIView *userRecommendBtnBackgroundView;
@property (retain, nonatomic) AWEButton *userRecommendBtn;
@property (retain, nonatomic) UIVisualEffectView *userRecommendBtnEffectView;
@property (retain, nonatomic) UIImageView *userRecommendLoadingImageView;
@property (nonatomic) BOOL hasAddRecommendBtn;
@property (nonatomic) BOOL shouldTrackSendMsgBtn;
@property (nonatomic) BOOL hasBeenFollowed;
@property (retain, nonatomic) AWEBubble *privateMsgbubble;
@property (nonatomic) BOOL hasTrackedAutoSwtich;
@property (nonatomic) BOOL hasTrackedFollowStatusCheck;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEProfileHeaderFollowAreaCellDelegate> delegate;
@property (nonatomic) BOOL isFollowGuideMaskViewTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)awemeModel;
- (void)p_setupUI;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)followUser;
- (void)p_switchFollowStatus:(BOOL)arg0;
- (id)relationView;
- (void)setRelationView:(id)arg0;
- (BOOL)isTargetView:(id)arg0 tapLocation:(struct CGPoint { double x0; double x1; })arg1;
- (id)privateMsgbubble;
- (void)showPrivateMsgTipBubble;
- (void)setPrivateMsgbubble:(id)arg0;
- (void)relationBtnClicked:(id)arg0;
- (id)customParamDict;
- (void)onTapGestureAction:(id)arg0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)configWithHeaderContext:(id)arg0;
- (void)sendMsgBtnClicked:(id)arg0;
- (void)didFinishRemoveFans:(id)arg0;
- (void)p_updateRelationViewWithFollowStatus:(long long)arg0 animated:(BOOL)arg1;
- (id)userRecommendBtnBackgroundView;
- (id)__configUserRecommendBtnImageName:(BOOL)arg0;
- (id)userRecommendBtn;
- (id)userRecommendLoadingImageView;
- (void)setHasAddRecommendBtn:(BOOL)arg0;
- (void)p_updateRelationViewWithFollowStatus:(long long)arg0 showLightInteraction:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)hasAddRecommendBtn;
- (BOOL)p_shouldShowRecommendButtonWithFollowStatus:(long long)arg0;
- (void)p_updateRecommendUIWithFollowStatus:(long long)arg0;
- (id)userRecommendBtnEffectView;
- (void)p_followPrivateAccountCheckWithCompletion:(id /* block */)arg0;
- (void)p_showAliasAlertAfterFollow:(BOOL)arg0 mobileKey:(id)arg1 isEnterprise:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)p_recommendViewChangeAfterFollow:(BOOL)arg0;
- (void)p_follow:(BOOL)arg0;
- (void)unfollow;
- (void)p_prepareFollow:(BOOL)arg0 oldFollowStatus:(long long)arg1;
- (BOOL)p_isFromUnfollowFamiliar;
- (BOOL)hasBeenFollowed;
- (void)p_updateFakeFollowStatus:(long long)arg0;
- (void)p_startFollow:(BOOL)arg0 oldFollowStatus:(long long)arg1 shouldSendUnblockMsgAfterFollow:(BOOL)arg2;
- (void)p_preparePostScript:(BOOL)arg0 hasShownAliasAlert:(BOOL)arg1 fromTopButton:(BOOL)arg2;
- (void)p_showAliasAlertAfterFollow:(BOOL)arg0 mobileKey:(id)arg1 isEnterprise:(BOOL)arg2 userAlertManager:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)p_addGreetAlerts;
- (BOOL)shouldShowLightInteractionMsg:(long long)arg0 fromFollowButton:(BOOL)arg1;
- (BOOL)isFollowGuideMaskViewTracked;
- (BOOL)hasTrackedAutoSwtich;
- (void)setHasTrackedAutoSwtich:(BOOL)arg0;
- (BOOL)p_checkIfFromFeedFamiliar;
- (BOOL)shouldOptimizeUserProfileSendMsgButton:(long long)arg0;
- (void)updateUserRecommendBtnStatus:(BOOL)arg0;
- (void)userRecommendBtnLoadingAnimation:(BOOL)arg0;
- (void)p_trackFCoinFollowClick;
- (void)guideLunaMusicianBtnClicked;
- (void)sendGreetBtnClicked;
- (void)setHasBeenFollowed:(BOOL)arg0;
- (void)setShouldTrackSendMsgBtn:(BOOL)arg0;
- (void)p_updateRecommendButton;
- (BOOL)hasTrackedFollowStatusCheck;
- (void)p_trackAccuracyCheck;
- (void)setHasTrackedFollowStatusCheck:(BOOL)arg0;
- (void)p_updateRelationViewAndRecommendBtnForVS;
- (void)p_trackGreetBtnShow;
- (void)p_checkUserFollowToastForDouyin:(BOOL)arg0;
- (BOOL)isShowingLightInteractionBtn;
- (BOOL)p_enableChatButton:(id)arg0;
- (id)createGuideLunaMusicianBtnIfNeeded;
- (BOOL)shouldTrackSendMsgBtn;
- (void)p_trackMsgBtnShow;
- (void)userRecommendBtnClicked:(id)arg0;
- (void)clickLightInteractionButton;
- (void)hidePrivateMsgTipBubble;
- (void)updateRecommendBtnStatus:(long long)arg0;
- (void)checkUserFollowToast:(BOOL)arg0;
- (void)updateRelationViewWithFollowStatus:(long long)arg0;
- (void)updateRelationViewWithFollowStatus:(long long)arg0 followerStatus:(long long)arg1 specialFollowStatus:(long long)arg2;
- (void)setIsFollowGuideMaskViewTracked:(BOOL)arg0;
- (void)setUserRecommendBtnBackgroundView:(id)arg0;
- (void)setUserRecommendBtn:(id)arg0;
- (void)setUserRecommendBtnEffectView:(id)arg0;
- (void)setUserRecommendLoadingImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTapGesture:(id)arg0;

@end
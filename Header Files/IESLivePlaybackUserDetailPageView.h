//
//     Generated by private class-dump
//

@class UIScrollView, UIView, HTSEventContext, NSString, UIImageView, UIButton, MASConstraint, HTSLiveUser, UILabel, IESLivePlaybackUserProfileStore;
@protocol HTSLiveAvatarImageViewAdapter, IESLiveInternalRouterAdapter, IESLivePopupPanServiceAdapter;

@interface IESLivePlaybackUserDetailPageView : UIView <IESLivePlaybackUserProfileAction> {
    BOOL _isShow;
    BOOL _isLandscape;
    IESLivePlaybackUserProfileStore *_store;
    HTSLiveUser *_user;
    HTSEventContext *_trackContext;
    id /* block */ _dismissBlock;
    id /* block */ _followStateChangedBlock;
    UIView *_scrollContainerView;
    UIScrollView *_scrollView;
    UIView *_backgroundMask;
    UIView *_whiteBoard;
    UIView *_contentContainer;
    MASConstraint *_bottomConstraint;
    MASConstraint *_trailingConstraint;
    UIView *_avatarView;
    UIView<HTSLiveAvatarImageViewAdapter> *_headImageView;
    UIImageView *_topCustomBackground;
    UIImageView *_bgImageView;
    UIView *_nameContainer;
    UILabel *_verifyContentLabel;
    UILabel *_signatureLabel;
    UIView *_actionButtonView;
    UIButton *_followView;
    UIButton *_unfollowView;
    unsigned long long _viewStyle;
    unsigned long long _source;
    id<IESLiveInternalRouterAdapter> _internalRouter;
    id<IESLivePopupPanServiceAdapter> _popupPanService;
}

@property (retain, nonatomic) UIView *scrollContainerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UIView *backgroundMask;
@property (retain, nonatomic) UIView *whiteBoard;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) MASConstraint *bottomConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;
@property (retain, nonatomic) UIView *avatarView;
@property (weak, nonatomic) UIView<HTSLiveAvatarImageViewAdapter> *headImageView;
@property (retain, nonatomic) UIImageView *topCustomBackground;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *nameContainer;
@property (retain, nonatomic) UILabel *verifyContentLabel;
@property (retain, nonatomic) UILabel *signatureLabel;
@property (retain, nonatomic) UIView *actionButtonView;
@property (retain, nonatomic) UIButton *followView;
@property (retain, nonatomic) UIButton *unfollowView;
@property (retain, nonatomic) IESLivePlaybackUserProfileStore *store;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) id<IESLiveInternalRouterAdapter> internalRouter;
@property (retain, nonatomic) id<IESLivePopupPanServiceAdapter> popupPanService;
@property (readonly, nonatomic) BOOL isShow;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ followStateChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (BOOL)isShow;
- (void)showWithAnimation;
- (void)unfollowUser:(id)arg0;
- (void)followUser:(id)arg0;
- (void)p_unfollowUser;
- (BOOL)isSelfAnchor;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg0;
- (void)renderUI;
- (id)backgroundMask;
- (void)setBackgroundMask:(id)arg0;
- (id)followView;
- (void)setFollowView:(id)arg0;
- (id)nameContainer;
- (void)setNameContainer:(id)arg0;
- (id)popupPanService;
- (void)setPopupPanService:(id)arg0;
- (void)setHeadImageView:(id)arg0;
- (id)headImageView;
- (void)touchHeadImage:(id)arg0;
- (void)loadPreviewFloatButtons;
- (id)whiteBoard;
- (void)setWhiteBoard:(id)arg0;
- (void)followUserCompletedWithStatus:(long long)arg0 error:(id)arg1;
- (void)unfollowUserCompletedWithStatus:(long long)arg0 error:(id)arg1;
- (void)atUserCompleted:(BOOL)arg0;
- (void)createCornerRadiusIfNeeded;
- (id)createBackgroundMask;
- (BOOL)canShowHalfCustomBackground;
- (void)setTopCustomBackground:(id)arg0;
- (id)topCustomBackground;
- (id)loadUserAvatarInContainer:(id)arg0 isFake:(BOOL)arg1;
- (id)loadViews:(id)arg0 containerView:(id)arg1;
- (id)loadActionButtonsBelow:(id)arg0 inContainer:(id)arg1;
- (void)showFromCurrentPosition:(BOOL)arg0;
- (BOOL)isUserLiving;
- (void)openHonourView:(id)arg0;
- (id)signitureStr;
- (void)enterProfileForHome:(id)arg0;
- (void)reportUser;
- (id)loadUserInfoBelow:(id)arg0 inContainer:(id)arg1;
- (void)clickBackground:(id)arg0;
- (void)pr_followUser;
- (id)track_position;
- (id)unfollowRelationType;
- (void)_enterProfile:(BOOL)arg0 isFromHeader:(BOOL)arg1;
- (void)p_reportComment;
- (void)p_reportUser;
- (void)dismissUserPreview;
- (void)dismissWithAnimationDisable;
- (id /* block */)followStateChangedBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 store:(id)arg1 user:(id)arg2 isLandscape:(BOOL)arg3 source:(unsigned long long)arg4;
- (void)setFollowStateChangedBlock:(id /* block */)arg0;
- (id)verifyContentLabel;
- (void)setVerifyContentLabel:(id)arg0;
- (id)unfollowView;
- (void)setUnfollowView:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)setTrailingConstraint:(id)arg0;
- (id)user;
- (unsigned long long)source;
- (id)bottomConstraint;
- (void).cxx_destruct;
- (id)store;
- (unsigned long long)viewStyle;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setStore:(id)arg0;
- (id)trailingConstraint;
- (void)setBottomConstraint:(id)arg0;
- (BOOL)isLandscape;
- (void)setSource:(unsigned long long)arg0;
- (void)layoutSubviews;
- (void)setViewStyle:(unsigned long long)arg0;
- (id)scrollView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)contentContainer;
- (void)dismiss:(id)arg0;
- (void)setContentContainer:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (id)actionButtonView;
- (void)setActionButtonView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg0;

@end
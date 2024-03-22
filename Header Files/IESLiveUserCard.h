//
//     Generated by private class-dump
//

@class IESLiveUserCardShowcaseEntranceView, IESLiveUserCardHonorWallContainer, IESLiveUserCardFollowButton, IESLiveCircleRollLabel, NSMutableArray, NSString, IESLiveUserCardParallaxView, IESLiveUserCardRelationEntrance, IESLiveUserCardMenuView, IESLiveAnimatedImageView, IESLiveUserCardFansGroupButton, UIButton, IESLiveUserCardStore, UIView, IESLiveUserCardCommerceEntrance, UIImageView, MASConstraint, IESLiveUserCardShopInformationView, HTSLiveAvatarImageView, IESLiveUserCardSkinVisit, HTSLiveAmazingBackgroundView;
@protocol HTSLiveUserPreviewActions;

@interface IESLiveUserCard : UIView <HTSLiveUserPreviewReactions, CAAnimationDelegate, IESLiveUserCardViewProtocol> {
    BOOL _landscapeMode;
    BOOL _didFollowSuccess;
    IESLiveUserCardStore *_store;
    UIView *_uiContainer;
    UIView *_basicUIContainer;
    UIView *_backgroundContainer;
    HTSLiveAmazingBackgroundView *_colorBackgroundView;
    IESLiveAnimatedImageView *_backgroundImageView;
    IESLiveAnimatedImageView *_backgroundWebp;
    IESLiveAnimatedImageView *_overallWebpEnterImageView;
    NSMutableArray *_backEventViews;
    IESLiveUserCardParallaxView *_parallaxView;
    UIImageView *_borderImageView;
    UIImageView *_topBgImageView;
    double _topBgImageViewHeight;
    IESLiveAnimatedImageView *_topOverlayImageView;
    double _overlayImageViewHeight;
    IESLiveUserCardHonorWallContainer *_honorWallContainer;
    UIImageView *_bottomImageView;
    HTSLiveAvatarImageView *_headImageView;
    IESLiveCircleRollLabel *_nickNameLabel;
    UIImageView *_gradeImageView;
    UIView *_fixedOperationContainer;
    IESLiveUserCardMenuView *_menuView;
    UIView *_tagsContainerView;
    UIView *_infosContainerView;
    IESLiveUserCardCommerceEntrance *_commerceContainerView;
    IESLiveUserCardFollowButton *_followButton;
    IESLiveUserCardFansGroupButton *_fansGroupButton;
    MASConstraint *_fansGroupConstraint;
    id<HTSLiveUserPreviewActions> _userActionCreator;
    UIButton *_debugButton;
    IESLiveUserCardShopInformationView *_shopInformationView;
    IESLiveUserCardShowcaseEntranceView *_showcaseEntranceView;
    double _topAddedHeight;
    long long _resourcesLoaded;
    long long _bottomEntrance;
    IESLiveUserCardRelationEntrance *_relationEntranceView;
    UIView *_dynamicOperationContainerOne;
    UIView *_dynamicOperationContainerTwo;
    UIView *_previewComponentontainer;
    UIView *_previewComponentViewCommunity;
    UIView *_commentOperatePanelContainer;
    UIView *_replyTreeView;
    double _heightDifference;
    UIView *_visitContainer;
    IESLiveUserCardSkinVisit *_visitView;
    UIView *_openAreaContainer;
    double _startTime;
}

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) HTSLiveAvatarImageView *headImageView;
@property (retain, nonatomic) IESLiveCircleRollLabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *gradeImageView;
@property (retain, nonatomic) UIView *fixedOperationContainer;
@property (retain, nonatomic) IESLiveUserCardMenuView *menuView;
@property (retain, nonatomic) UIView *tagsContainerView;
@property (retain, nonatomic) UIView *infosContainerView;
@property (retain, nonatomic) IESLiveUserCardCommerceEntrance *commerceContainerView;
@property (nonatomic) BOOL didFollowSuccess;
@property (retain, nonatomic) IESLiveUserCardFollowButton *followButton;
@property (retain, nonatomic) IESLiveUserCardFansGroupButton *fansGroupButton;
@property (retain, nonatomic) MASConstraint *fansGroupConstraint;
@property (retain, nonatomic) id<HTSLiveUserPreviewActions> userActionCreator;
@property (retain, nonatomic) UIButton *debugButton;
@property (retain, nonatomic) IESLiveUserCardShopInformationView *shopInformationView;
@property (retain, nonatomic) IESLiveUserCardShowcaseEntranceView *showcaseEntranceView;
@property (nonatomic) double topAddedHeight;
@property (nonatomic) long long resourcesLoaded;
@property (nonatomic) long long bottomEntrance;
@property (retain, nonatomic) IESLiveUserCardRelationEntrance *relationEntranceView;
@property (retain, nonatomic) UIView *dynamicOperationContainerOne;
@property (retain, nonatomic) UIView *dynamicOperationContainerTwo;
@property (retain, nonatomic) UIView *previewComponentontainer;
@property (retain, nonatomic) UIView *previewComponentViewCommunity;
@property (retain, nonatomic) UIView *commentOperatePanelContainer;
@property (retain, nonatomic) UIView *replyTreeView;
@property (nonatomic) double heightDifference;
@property (retain, nonatomic) UIView *visitContainer;
@property (retain, nonatomic) IESLiveUserCardSkinVisit *visitView;
@property (retain, nonatomic) UIView *openAreaContainer;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) BOOL landscapeMode;
@property (retain, nonatomic) UIView *uiContainer;
@property (retain, nonatomic) UIView *basicUIContainer;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *colorBackgroundView;
@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundImageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundWebp;
@property (retain, nonatomic) IESLiveAnimatedImageView *overallWebpEnterImageView;
@property (retain, nonatomic) NSMutableArray *backEventViews;
@property (retain, nonatomic) IESLiveUserCardParallaxView *parallaxView;
@property (retain, nonatomic) UIImageView *borderImageView;
@property (retain, nonatomic) UIImageView *topBgImageView;
@property (nonatomic) double topBgImageViewHeight;
@property (retain, nonatomic) IESLiveAnimatedImageView *topOverlayImageView;
@property (nonatomic) double overlayImageViewHeight;
@property (retain, nonatomic) IESLiveUserCardHonorWallContainer *honorWallContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)followButton;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setFollowButton:(id)arg0;
- (void)setupCorners;
- (double)leftOffset;
- (double)rightOffset;
- (id)tagsContainerView;
- (void)setTagsContainerView:(id)arg0;
- (void)followUserSuccess;
- (void)dismissUserCard;
- (id)borderImageView;
- (void)setBorderImageView:(id)arg0;
- (id)topBgImageView;
- (void)setTopBgImageView:(id)arg0;
- (void)setupBackgroundColor:(id)arg0;
- (id)showcaseEntranceView;
- (void)setShowcaseEntranceView:(id)arg0;
- (long long)resourcesLoaded;
- (void)setResourcesLoaded:(long long)arg0;
- (void)setHeadImageView:(id)arg0;
- (id)headImageView;
- (id)userActionCreator;
- (void)setUserActionCreator:(id)arg0;
- (void)touchHeadImage:(id)arg0;
- (id)initWithStore:(id)arg0 landscapeMode:(BOOL)arg1;
- (void)setupSubViewsNew;
- (void)setupBackgroundContainer;
- (void)setupBorderDecoration;
- (id)honorWallContainer;
- (void)setHonorWallContainer:(id)arg0;
- (BOOL)shouldShowBackgroundImageView:(id)arg0;
- (id)backEventViews;
- (void)setupCornersNew;
- (BOOL)shouldShowParallax;
- (void)setupParallaxViewIfNeeded;
- (BOOL)shouldShowBackgroundWebp:(id)arg0;
- (void)setBackgroundWebp:(id)arg0;
- (id)backgroundWebp;
- (BOOL)shouldShowOverallWebpEnter:(id)arg0;
- (void)setOverallWebpEnterImageView:(id)arg0;
- (id)overallWebpEnterImageView;
- (BOOL)shouldShowBorderImage:(id)arg0;
- (BOOL)shouldShowTopBgImage:(id)arg0 borderImage:(id)arg1;
- (void)setupImage:(id)arg0 withFlexImage:(id)arg1;
- (double)topBgImageViewHeight;
- (BOOL)shouldShowOverlay:(id)arg0 overlayWebpLoop:(id)arg1;
- (void)setTopOverlayImageView:(id)arg0;
- (id)topOverlayImageView;
- (void)setOverlayImageViewHeight:(double)arg0;
- (void)setParallaxView:(id)arg0;
- (void)usercardOpenFinished;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBackgroundFrame;
- (void)setupUsercardHierarchy;
- (void)diffusionAnimationFinished;
- (void)setGradeImageView:(id)arg0;
- (id)gradeImageView;
- (void)gradeImageClicked;
- (void)setUiContainer:(id)arg0;
- (id)uiContainer;
- (void)setupUIContainer;
- (void)setBasicUIContainer:(id)arg0;
- (id)basicUIContainer;
- (id)debugButton;
- (void)setupLoadingTimer;
- (void)setDynamicOperationContainerOne:(id)arg0;
- (id)dynamicOperationContainerOne;
- (void)setupDynamicOperationContainerOne;
- (void)setHeightDifference:(double)arg0;
- (double)heightDifference;
- (void)setCommentOperatePanelContainer:(id)arg0;
- (void)setPreviewComponentontainer:(id)arg0;
- (void)setVisitContainer:(id)arg0;
- (id)commentOperatePanelContainer;
- (id)previewComponentontainer;
- (id)visitContainer;
- (void)setupVisitView;
- (void)setupCommentOperationPanelNew;
- (void)setupPreviewComponent;
- (void)setVisitView:(id)arg0;
- (id)visitView;
- (id)replyTreeView;
- (void)setPreviewComponentViewCommunity:(id)arg0;
- (void)setReplyTreeView:(id)arg0;
- (void)setDynamicOperationContainerTwo:(id)arg0;
- (id)dynamicOperationContainerTwo;
- (void)setupDynamicOperationContainerTwo;
- (void)setupBasicUI;
- (void)setupDynamicOperationContainerNew;
- (void)setupRelationEntranceView;
- (void)setRelationEntranceView:(id)arg0;
- (id)relationEntranceView;
- (void)trackRelationEntranceShowWithMessageType:(id)arg0;
- (void)setupFixedOpeartionContainer;
- (void)setupNickNameLabel;
- (void)setupCommerceView;
- (id)setupPOIContainerViewWithPreview:(id)arg0;
- (id)setupTagsContainerViewWithPreview:(id)arg0;
- (id)addLineSeperator:(id)arg0;
- (id)setupInfosContainerViewWithPreview:(id)arg0;
- (void)setInfosContainerView:(id)arg0;
- (void)setOpenAreaContainer:(id)arg0;
- (id)openAreaContainer;
- (void)setupOpenAreaItem;
- (void)setupDebugButton;
- (long long)getBottomEntranceStyle;
- (void)setBottomEntrance:(long long)arg0;
- (long long)bottomEntrance;
- (void)setupShopInformationViewWithDSL;
- (long long)liveDSL;
- (void)setupShopInformationViewWithSliceX;
- (void)setupShopInformationViewWithLynxAir:(double)arg0;
- (id)setupShopInformationView:(id)arg0;
- (id)setupShowcaseEntranceView:(id)arg0;
- (void)setupHonorWallV2;
- (id)fansGroupButton;
- (id)fansGroupConstraint;
- (void)setFansGroupConstraint:(id)arg0;
- (void)setCommerceContainerView:(id)arg0;
- (id)commerceContainerView;
- (void)trackCommerceEntranceShow:(BOOL)arg0;
- (void)setFixedOperationContainer:(id)arg0;
- (id)fixedOperationContainer;
- (void)decodeConfigAndRenderUI;
- (id)buildViewWithTag:(id)arg0;
- (void)setShopInformationView:(id)arg0;
- (void)trackShowcaseEntranceShow;
- (void)setupComponents:(id)arg0 tag:(id)arg1;
- (void)setFansGroupButton:(id)arg0;
- (void)setDebugButton:(id)arg0;
- (void)setDidFollowSuccess:(BOOL)arg0;
- (BOOL)didFollowSuccess;
- (struct CGPoint { double x0; double x1; })getDiffusionAnimationCenterV2;
- (double)getMaskLength;
- (void)startHiddenAnimation;
- (void)startMyDiffusionShrinkV2;
- (void)startMyDiffusionEnlargeV2;
- (void)startDiffusionAnimation;
- (void)touchPoint:(struct CGPoint { double x0; double x1; })arg0 onView:(id)arg1;
- (void)trackTapDressWithPositionStr:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actionAreaWithDressID:(id)arg0;
- (void)unfollowUserSuccess;
- (BOOL)shouldShowtopOverlayImage:(id)arg0;
- (void)initAnimationStatus;
- (void)setBackEventViews:(id)arg0;
- (void)setTopBgImageViewHeight:(double)arg0;
- (double)overlayImageViewHeight;
- (id)infosContainerView;
- (id)shopInformationView;
- (double)topAddedHeight;
- (void)setTopAddedHeight:(double)arg0;
- (id)previewComponentViewCommunity;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)store;
- (void)setStore:(id)arg0;
- (double)startTime;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setBackgroundContainer:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)startAnimation;
- (id)backgroundContainer;
- (id)menuView;
- (void)setMenuView:(id)arg0;
- (void)setupAvatarView;
- (void)setBackgroundImageView:(id)arg0;
- (void)addObservers;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;
- (id)colorBackgroundView;
- (void)setColorBackgroundView:(id)arg0;
- (id)parallaxView;
- (BOOL)landscapeMode;

@end

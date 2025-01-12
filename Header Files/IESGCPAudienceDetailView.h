//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, IESGCPSegmentSlideView, MASConstraint, UIPanGestureRecognizer, IESGCPDetailThemeConfig, IESGCPAudienceDetailViewConfig, IESGCPDetailBackgroundView;
@protocol IESGCPBaseDetailViewDelegate;

@interface IESGCPAudienceDetailView : UIView <UIGestureRecognizerDelegate, IESGCPSegmentSlideViewDelegate, IESGCPDIContextSubscriber, IESGCPGameDetailContainerDismissHandler, IESGCPGameDetailNavBarActions, IESGCPAudienceDetailBackgroundAction, IESGCPGameDetailTabNavigatorActions, IESGCPBaseDetailViewProtocol> {
    BOOL _isFullScreen;
    BOOL _isOpenAsFullScreen;
    BOOL _canHalfScreen;
    BOOL _useBackIcon;
    BOOL _hasSetupData;
    BOOL _hasMakeTitleContainerViewTrackNode;
    NSString *_currentTabID;
    id<IESGCPBaseDetailViewDelegate> _delegate;
    UIView *_contentView;
    IESGCPDetailBackgroundView *_gradientBackgroundView;
    UIView *_titleContainerView;
    MASConstraint *_titleContainerHeight;
    IESGCPSegmentSlideView *_segmentSlideContainerView;
    MASConstraint *_heightConstraint;
    MASConstraint *_topConstraint;
    UIPanGestureRecognizer *_panGesture;
    IESGCPAudienceDetailViewConfig *_config;
    UITapGestureRecognizer *_closeTap;
    IESGCPDetailThemeConfig *_themeConfig;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESGCPDetailBackgroundView *gradientBackgroundView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) MASConstraint *titleContainerHeight;
@property (retain, nonatomic) IESGCPSegmentSlideView *segmentSlideContainerView;
@property (retain, nonatomic) MASConstraint *heightConstraint;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) IESGCPAudienceDetailViewConfig *config;
@property (retain, nonatomic) UITapGestureRecognizer *closeTap;
@property (nonatomic) BOOL hasSetupData;
@property (retain, nonatomic) IESGCPDetailThemeConfig *themeConfig;
@property (nonatomic) BOOL hasMakeTitleContainerViewTrackNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESGCPBaseDetailViewDelegate> delegate;
@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) NSString *currentTabID;
@property (nonatomic) BOOL isOpenAsFullScreen;
@property (nonatomic) BOOL canHalfScreen;
@property (nonatomic) BOOL useBackIcon;

- (void)setGradientBackgroundView:(id)arg0;
- (id)themeConfig;
- (void)setThemeConfig:(id)arg0;
- (id)loadingBackgroundView;
- (void)setScrollViewToStickyTop;
- (void)tabNavView:(id)arg0 didSelectTabId:(id)arg1;
- (void)didSetGameCPDIContext;
- (id)currentTabID;
- (void)viewDidTransition;
- (void)dismissSelf:(BOOL)arg0;
- (void)setCurrentTabID:(id)arg0;
- (BOOL)isOpenAsFullScreen;
- (void)setIsOpenAsFullScreen:(BOOL)arg0;
- (BOOL)canHalfScreen;
- (void)setCanHalfScreen:(BOOL)arg0;
- (BOOL)useBackIcon;
- (void)setUseBackIcon:(BOOL)arg0;
- (id)segmentSlideContainerView;
- (void)dismissContainerAnimated:(BOOL)arg0;
- (unsigned long long)containerDismissIconType;
- (void)navBarView:(id)arg0 onNavBarClicked:(unsigned long long)arg1 detailTab:(id)arg2;
- (void)floatImageAnimationTriggerWithProgress:(double)arg0;
- (void)setHasSetupData:(BOOL)arg0;
- (void)layoutWithConfig:(id)arg0 detailThemeConfig:(id)arg1;
- (void)reloadNode:(id)arg0 themeConfig:(id)arg1;
- (void)changeHeightConstraint:(double)arg0;
- (id)preferredLayoutConfig;
- (id)titleContainerHeight;
- (void)updateTitleContainerViewOpaqueFrom:(double)arg0;
- (void)setContentToFullModeWithAnimation:(BOOL)arg0 complete:(id /* block */)arg1;
- (void)closeTap:(id)arg0;
- (void)setCloseTap:(id)arg0;
- (id)closeTap;
- (void)hideContentView:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)hasSetupData;
- (void)setTitleContainerHeight:(id)arg0;
- (void)setContentToHalfMode;
- (void)setContentToFullModeWithAnimation:(BOOL)arg0 duration:(double)arg1 complete:(id /* block */)arg2;
- (void)contentViewHeightDidChange:(double)arg0;
- (void)scrollViewDidScroll:(id)arg0 isParent:(BOOL)arg1;
- (id)initWithIsOpenAsFullScreen:(BOOL)arg0 canHalfScreen:(BOOL)arg1 useBackIcon:(BOOL)arg2;
- (void)setSegmentSlideContainerView:(id)arg0;
- (BOOL)hasMakeTitleContainerViewTrackNode;
- (void)setHasMakeTitleContainerViewTrackNode:(BOOL)arg0;
- (void)setHeightConstraint:(id)arg0;
- (id)topConstraint;
- (BOOL)isFullScreen;
- (void)setConfig:(id)arg0;
- (void)setTopConstraint:(id)arg0;
- (id)heightConstraint;
- (void).cxx_destruct;
- (id)config;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)setup;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)pan:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)contentContainer;
- (void)setContentView:(id)arg0;
- (id)titleContainerView;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setTitleContainerView:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (void)showContentView;
- (id)gradientBackgroundView;

@end

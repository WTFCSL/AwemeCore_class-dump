//
//     Generated by private class-dump
//

@class UIView, NSString, IESLiveLayoutSeekBarContainer, IESLiveLayoutBaseContainer, NSMutableDictionary, IESLiveStackManager, IESLiveLayoutInteractContainer, IESLiveLayoutInteractBarContainer;
@protocol IESLiveContainerKitAdapter;

@interface IESLiveLayoutRoomContainer : IESLiveLayoutBaseContainer <IESLiveLayoutContainerProviderAdapter> {
    IESLiveLayoutBaseContainer *_leftContainer;
    IESLiveLayoutBaseContainer *_rightContainer;
    IESLiveLayoutBaseContainer *_topContainer;
    IESLiveLayoutBaseContainer *_bottomContainer;
    IESLiveLayoutInteractBarContainer *_interactBarContainer;
    IESLiveLayoutBaseContainer *_profileContainer;
    IESLiveLayoutBaseContainer *_entranceContainer;
    IESLiveLayoutBaseContainer *_activityContainer;
    IESLiveLayoutInteractContainer *_interactContainer;
    IESLiveLayoutSeekBarContainer *_seekbarContainer;
    IESLiveLayoutBaseContainer *_publicScreenContainer;
    IESLiveLayoutBaseContainer *_bottomRightContainer;
    IESLiveLayoutBaseContainer *_toolbarContainer;
    IESLiveLayoutBaseContainer *_landscapeTopContainer;
    IESLiveLayoutBaseContainer *_landscapeThirdRowContainer;
    IESLiveLayoutBaseContainer *_portraitFloatContainer;
    NSMutableDictionary *_containers;
    id<IESLiveContainerKitAdapter> _containerKitAdapter;
    IESLiveStackManager *_stackManager;
}

@property (retain, nonatomic) IESLiveLayoutBaseContainer *leftContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *rightContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *topContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *bottomContainer;
@property (retain, nonatomic) IESLiveLayoutInteractBarContainer *interactBarContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *profileContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *entranceContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *activityContainer;
@property (retain, nonatomic) IESLiveLayoutInteractContainer *interactContainer;
@property (retain, nonatomic) IESLiveLayoutSeekBarContainer *seekbarContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *publicScreenContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *bottomRightContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *toolbarContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *landscapeTopContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *landscapeThirdRowContainer;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *portraitFloatContainer;
@property (retain, nonatomic) NSMutableDictionary *containers;
@property (retain, nonatomic) id<IESLiveContainerKitAdapter> containerKitAdapter;
@property (retain, nonatomic) IESLiveStackManager *stackManager;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftContainer;
- (id)rightContainer;
- (void)setRightContainer:(id)arg0;
- (void)setLeftContainer:(id)arg0;
- (id)topContainer;
- (void)setTopContainer:(id)arg0;
- (void)setupBottomContainer;
- (void)switchToSideMode;
- (id)interactContainer;
- (void)didAutoRoateToOrientation:(long long)arg0;
- (id)activityContainer;
- (void)setActivityContainer:(id)arg0;
- (void)setupTopContainer;
- (void)setupRightContainer;
- (id)toolbarContainer;
- (void)setToolbarContainer:(id)arg0;
- (void)switchToNormalMode;
- (double)landscapeAllAroundBtnMargin;
- (BOOL)enableLandscapeMarginOptimize;
- (double)horizonalOffset;
- (id)entranceContainer;
- (void)setEntranceContainer:(id)arg0;
- (id)profileContainer;
- (void)setProfileContainer:(id)arg0;
- (id)interactBarContainer;
- (id)containerKitAdapter;
- (void)containerOrientationChanged:(long long)arg0;
- (long long)adjustAnchorToolBarHeight;
- (void)setContainerKitAdapter:(id)arg0;
- (id)portraitFloatContainer;
- (id)publicScreenContainer;
- (id)landscapeThirdRowContainer;
- (void)updateLayoutRule:(id)arg0;
- (id)bottomRightContainer;
- (id)seekbarContainer;
- (void)setupToolbarContainer;
- (void)setPublicScreenContainer:(id)arg0;
- (void)setBottomRightContainer:(id)arg0;
- (double)landscapeBottomOffset;
- (id)roomOperationContainer;
- (id)stackManager;
- (void)setupRoomContainer;
- (void)setupConstraintsIfNeeded;
- (void)setLandscapeTopContainer:(id)arg0;
- (id)landscapeTopContainer;
- (double)activityContainerLeftOffset;
- (void)updateConstraintsWith:(long long)arg0;
- (void)setInteractBarContainer:(id)arg0;
- (void)setInteractContainer:(id)arg0;
- (void)setSeekbarContainer:(id)arg0;
- (void)setLandscapeThirdRowContainer:(id)arg0;
- (void)setPortraitFloatContainer:(id)arg0;
- (void)setStackManager:(id)arg0;
- (double)topOffset;
- (id)containers;
- (id)init;
- (void).cxx_destruct;
- (id)containerView;
- (void)setContainers:(id)arg0;
- (void)viewDidLoad;
- (double)bottomOffset;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;

@end

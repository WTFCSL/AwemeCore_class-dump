//
//     Generated by private class-dump
//

@class AWEAwemeDetailNaviBarCommonContext, UIView, NSArray, NSString, AWEAwemeDetailNaviBarContainerView, AWEElementContainer, AWEAwemeDetailBaseNaviBarController, UIViewController;

@interface AWEAwemeDetailNaviBarCoordinator : NSObject <AWEAwemeDetailNaviBarCoordinatorProtocol, AWEAwemeDetailNaviBarUpdateTimingProtocol> {
    AWEAwemeDetailNaviBarContainerView *_naviBarContainerView;
    AWEElementContainer *_leftContainer;
    AWEElementContainer *_middleContainer;
    AWEElementContainer *_rightContainer;
    AWEAwemeDetailNaviBarCommonContext *_context;
    UIViewController *_viewController;
    UIView *_containerView;
    AWEAwemeDetailBaseNaviBarController *_activeNaviBarController;
    NSArray *_elementArray;
    UIView *_leftContainerParentView;
    AWEAwemeDetailNaviBarContainerView *_rightContainerParentView;
}

@property (retain, nonatomic) AWEAwemeDetailNaviBarCommonContext *context;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEAwemeDetailBaseNaviBarController *activeNaviBarController;
@property (copy, nonatomic) NSArray *elementArray;
@property (retain, nonatomic) AWEAwemeDetailNaviBarContainerView *naviBarContainerView;
@property (retain, nonatomic) UIView *leftContainerParentView;
@property (retain, nonatomic) AWEAwemeDetailNaviBarContainerView *rightContainerParentView;
@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) AWEElementContainer *middleContainer;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)elementArray;
- (id)leftContainer;
- (id)rightContainer;
- (void)setRightContainer:(id)arg0;
- (void)setLeftContainer:(id)arg0;
- (void)setElementArray:(id)arg0;
- (id)middleContainer;
- (void)setMiddleContainer:(id)arg0;
- (id)naviBarContainerView;
- (void)updateMiddleAndRightContainerHidden:(BOOL)arg0 awemeModel:(id)arg1;
- (void)updateLeftContainerHidden:(BOOL)arg0;
- (void)updateLeftContainerAlpha:(double)arg0;
- (void)detailCellViewController:(id)arg0 awemeModel:(id)arg1 playerPlayTime:(double)arg2 canPlayTime:(double)arg3 totalTime:(double)arg4;
- (void)scrollViewDidScroll:(id)arg0 currentIndex:(long long)arg1 totalCount:(long long)arg2;
- (void)viewDidAppearForGuide;
- (void)jumpSearchToResultForPublic:(BOOL)arg0;
- (void)setActiveNaviBarController:(id)arg0;
- (void)registerNaviBarContext:(Class)arg0 withCreateBlock:(id /* block */)arg1;
- (void)configNaviBarContainerView;
- (void)updateNaviBarElementsWithAweme:(id)arg0;
- (void)checkAllElementsHiddenOrAplha;
- (id)activeNaviBarController;
- (id)leftContainerParentView;
- (id)rightContainerParentView;
- (id)getElementArray;
- (void)viewDidLoadForUpdateRecommendWordMananger;
- (void)viewDidLoadForFetchRecommendWordWithAwemeModel:(id)arg0 needDegrade:(BOOL)arg1;
- (void)viewDidAppearForFetchRecommendWordWithAwemeModel:(id)arg0 needDegrade:(BOOL)arg1;
- (void)viewDidDisappearForRemoveSearchBarBubble;
- (void)onScrollDidEndForRemoveSearchBarBubble;
- (void)onScrollDidEndForSearchBarRefreshWithRecommendWord:(id)arg0;
- (void)onScrollDidEndForFetchRecommendWordWithAwemeModel:(id)arg0 needDegrade:(BOOL)arg1;
- (void)onScrollDidEndForFetchNextRecommendWordWithAwemeModel:(id)arg0 needDegrade:(BOOL)arg1;
- (void)initialDataSourceFetchDidFinishedForFetchRecommendWordWithAwemeModel:(id)arg0 needDegrade:(BOOL)arg1;
- (id)initWithContext:(id)arg0 containerView:(id)arg1;
- (void)updateNaviBarWithAweme:(id)arg0;
- (void)updateMiddleContainerHidden:(BOOL)arg0;
- (void)updateRightContainerHidden:(BOOL)arg0;
- (void)updateMiddleContainerAlpha:(double)arg0;
- (void)updateRightContainerAlpha:(double)arg0;
- (void)updateContainerViewWidth:(double)arg0;
- (void)setNaviBarContainerView:(id)arg0;
- (void)setLeftContainerParentView:(id)arg0;
- (void)setRightContainerParentView:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)context;

@end
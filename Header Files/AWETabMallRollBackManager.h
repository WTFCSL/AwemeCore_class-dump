//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, NSHashTable, UIViewController;
@protocol AWETabMallHalfScreenCycleProtocol;

@interface AWETabMallRollBackManager : NSObject <IESECPageDisplayCycleInterface, IESECTaskBannerLifeCycleInterface, HTSService, AWETabMallRollBackProtocol> {
    BOOL _isRollBacking;
    id<AWETabMallHalfScreenCycleProtocol> _concernCyclePage;
    UIViewController *_stashedViewController;
    NSString *_currentTabIdentifer;
    NSArray *_rootVCStack;
    NSArray *_presentedVCStack;
    NSMutableDictionary *_willCloseHandlers;
    NSHashTable *_avoidStashScenese;
}

@property (weak, nonatomic) id<AWETabMallHalfScreenCycleProtocol> concernCyclePage;
@property (retain, nonatomic) UIViewController *stashedViewController;
@property (copy, nonatomic) NSString *currentTabIdentifer;
@property (copy, nonatomic) NSArray *rootVCStack;
@property (copy, nonatomic) NSArray *presentedVCStack;
@property (nonatomic) BOOL isRollBacking;
@property (retain, nonatomic) NSMutableDictionary *willCloseHandlers;
@property (copy, nonatomic) NSHashTable *avoidStashScenese;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (BOOL)isCurrentTopScene;
+ (BOOL)isGuidePopupViewController:(id)arg0;
+ (void)presentVCStack:(id)arg0 byPresentingVC:(id)arg1;
+ (id)findProductDetailViewController:(id)arg0;
+ (BOOL)canResponseWithScene:(long long)arg0 fromVC:(id)arg1 extra:(id)arg2;
+ (void)taskBanner:(id)arg0 didAppearInView:(id)arg1;
+ (void)taskBanner:(id)arg0 sizeChangedInView:(id)arg1;
+ (void)taskBanner:(id)arg0 didDisAppearInView:(id)arg1;
+ (void)didOpenPage:(id)arg0 switchMode:(long long)arg1 withScene:(long long)arg2 fromVC:(id)arg3 andExtra:(id)arg4;
+ (void)willClosePage:(id)arg0 withScene:(long long)arg1 fromVC:(id)arg2 andExtra:(id)arg3;
+ (void)willOpenNextInPage:(id)arg0 withScene:(long long)arg1 fromVC:(id)arg2 andExtra:(id)arg3;
+ (void)willAppearAgainForPage:(id)arg0 switchMode:(long long)arg1 withScene:(long long)arg2 fromVC:(id)arg3 andExtra:(id)arg4;
+ (void)didPage:(id)arg0 switchTo:(long long)arg1 withScene:(long long)arg2 fromVC:(id)arg3 andExtra:(id)arg4;
+ (void)didPage:(id)arg0 scrollOffset:(double)arg1 withScene:(long long)arg2 fromVC:(id)arg3 andExtra:(id)arg4;

- (void)bindConcernCyclePage:(id)arg0;
- (void)unbindConcernCyclePage:(id)arg0;
- (id)concernCyclePage;
- (void)concernListViewController:(id)arg0 didScroll:(double)arg1;
- (BOOL)isDeliveryByConcernSceneWithPageTag:(id)arg0;
- (BOOL)needShowTabMallGuideForThisRouteTransition:(id)arg0;
- (void)expandRollBack:(BOOL)arg0;
- (BOOL)stashTopViewController;
- (BOOL)popViewControllerStashed;
- (void)clearStashedViewController;
- (BOOL)stashViewControllerStack;
- (BOOL)popViewControllerStackWithTabSwitchBlock:(id /* block */)arg0;
- (void)clearViewControllerStack;
- (BOOL)isTopSceneWhenGuideToMall;
- (void)registerAvoidBeStashScene:(id)arg0;
- (void)addObserve;
- (void)addWillCloseHandlerForScene:(long long)arg0 handler:(id /* block */)arg1;
- (void)setAvoidStashScenese:(id)arg0;
- (void)puzzlePopupWillShow:(id)arg0;
- (void)puzzlePopupWillDismiss:(id)arg0;
- (void)puzzlePopupWillOpenNext:(id)arg0;
- (void)setConcernCyclePage:(id)arg0;
- (void)setStashedViewController:(id)arg0;
- (id)stashedViewController;
- (void)setCurrentTabIdentifer:(id)arg0;
- (id)currentTabIdentifer;
- (void)setRootVCStack:(id)arg0;
- (id)rootVCStack;
- (void)handleRootVCStackIfNeeded;
- (void)setPresentedVCStack:(id)arg0;
- (id)presentedVCStack;
- (void)setIsRollBacking:(BOOL)arg0;
- (void)dealtStackAndPresented;
- (BOOL)isRollBacking;
- (id)avoidStashScenese;
- (void)handlePresentedVCStack:(id)arg0;
- (void)setLiveRoomMute:(BOOL)arg0;
- (BOOL)p_isNotDeliveredViewController:(id)arg0;
- (BOOL)canResponsePuzzleWithParams:(id)arg0;
- (id)willCloseHandlers;
- (void)setWillCloseHandlers:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
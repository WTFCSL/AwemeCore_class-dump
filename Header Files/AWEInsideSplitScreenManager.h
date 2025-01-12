//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, UIScrollView, NSMutableArray;

@interface AWEInsideSplitScreenManager : NSObject <UIGestureRecognizerDelegate, AWEInsideSplitScreenService> {
    BOOL _isLandscape;
    BOOL _enableSplit;
    BOOL _isLeftScrolling;
    BOOL _isDisplayAnimating;
    BOOL _isUpDownScrolling;
    NSMutableDictionary *_splitScreenUIConfigs;
    NSMutableArray *_splitScreenItems;
    UIScrollView *_leftScrollView;
    double _originPanX;
    double _originOffsetY;
}

@property (retain, nonatomic) NSMutableDictionary *splitScreenUIConfigs;
@property (retain, nonatomic) NSMutableArray *splitScreenItems;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL enableSplit;
@property (nonatomic) BOOL isLeftScrolling;
@property (weak, nonatomic) UIScrollView *leftScrollView;
@property (nonatomic) double originPanX;
@property (nonatomic) double originOffsetY;
@property (nonatomic) BOOL isDisplayAnimating;
@property (nonatomic) BOOL isUpDownScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isShowingSplitScreenBussinessForLeftScene:(long long)arg0;
- (double)rightContainerWidth;
- (BOOL)hasShownSplitScreen:(id)arg0;
- (void)rightViewviewDidDisappearForBussinessVC:(id)arg0;
- (void)rightViewWillLayoutSubviewsForBussinessVC:(id)arg0;
- (void)dismissRightContainerForRightBusinessVC:(id)arg0 animate:(BOOL)arg1;
- (BOOL)isShowingSplitScreenBussinessForRightScene:(long long)arg0;
- (void)registerUIConfigWithLeftContainer:(id)arg0 leftContentView:(id)arg1 mainContainerVC:(id)arg2 leftContainerScene:(long long)arg3;
- (void)onTabChanged:(id)arg0;
- (void)dismissRightContainerForLeftScene:(long long)arg0;
- (BOOL)enablePadFeedSplit;
- (void)scrollViewDidScroll:(id)arg0 withScene:(long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 withScene:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0 withScene:(long long)arg1;
- (void)updateCurrentLeftScrollView:(id)arg0;
- (void)dismissRightContainerForItemDetail:(id)arg0 animate:(BOOL)arg1;
- (BOOL)isCurrentLandscape;
- (void)setupAB;
- (void)onPipServiceDidStart:(id)arg0;
- (void)setEnableSplit:(BOOL)arg0;
- (BOOL)canHandleSplitScreen;
- (id)splitScreenItems;
- (id)splitScreenUIConfigs;
- (id)createSplitScreenDetailWithLeftContainerVC:(id)arg0 rightBussinessVC:(id)arg1 leftScene:(long long)arg2 rightScene:(long long)arg3;
- (BOOL)canEnterSplitScreenForLeftScene:(long long)arg0;
- (void)showSplitScreenAnimateForItemDetail:(id)arg0 animate:(BOOL)arg1;
- (void)showFullScreenAnimateForItemDetail:(id)arg0 animate:(BOOL)arg1 actionType:(long long)arg2;
- (id)uiConfigForLeftContainerScene:(long long)arg0;
- (void)bindGestureFor:(id)arg0 leftContainerVC:(id)arg1 rightContainerVC:(id)arg2;
- (id)bussinessDelegateForRightScene:(long long)arg0;
- (BOOL)isDisplayAnimating;
- (void)willEnterSplitScreenForDetail:(id)arg0;
- (void)realRecoverSplitScreenForItemDetail:(id)arg0 animate:(BOOL)arg1;
- (id)newBussinessVCForDetail:(id)arg0;
- (void)updateOffsetX:(double)arg0 fromFullScreenWithItemDetail:(id)arg1;
- (void)didEnterSplitScreenForDetail:(id)arg0;
- (void)setIsDisplayAnimating:(BOOL)arg0;
- (void)willQuitSplitScreenForDetail:(id)arg0 toFullRight:(BOOL)arg1;
- (void)didQuitSplitScreenForDetail:(id)arg0 toFullRight:(BOOL)arg1;
- (id)detailForRightBussinessVC:(id)arg0;
- (id)detailForLeftScene:(long long)arg0;
- (void)clearSplitDetail:(id)arg0;
- (void)unBindGestureFor:(id)arg0;
- (id)detailForRightScene:(long long)arg0;
- (id)leftScrollView;
- (void)setLeftScrollView:(id)arg0;
- (BOOL)canHandleScrollForScene:(long long)arg0;
- (BOOL)isLeftScrolling;
- (void)setIsLeftScrolling:(BOOL)arg0;
- (void)setOriginOffsetY:(double)arg0;
- (double)maxScrollOffsetY;
- (double)originOffsetY;
- (void)handleDidEndScrollView:(id)arg0 withScene:(long long)arg1;
- (void)handleTapLeftContainer:(id)arg0;
- (void)handlePanLeftContainer:(id)arg0;
- (void)setIsUpDownScrolling:(BOOL)arg0;
- (BOOL)isUpDownScrolling;
- (void)setOriginPanX:(double)arg0;
- (double)originPanX;
- (void)trackInsideSplitScrrenShow:(id)arg0;
- (void)trackInsideSplitScrrenDismiss:(id)arg0;
- (BOOL)enableSplit;
- (void)enterSplitScreenWithLeftContainerVC:(id)arg0 rightBussinessVC:(id)arg1 leftScene:(long long)arg2 rightScene:(long long)arg3 createVCHandler:(id /* block */)arg4 animate:(BOOL)arg5;
- (BOOL)needUseContainerWidthForRightScene:(long long)arg0;
- (id)rightBussinessVCForRightScene:(long long)arg0;
- (void)splitScreenViewWillAppearFor:(id)arg0;
- (void)splitScreenViewDidAppearFor:(id)arg0;
- (void)splitScreenViewWillDisappearFor:(id)arg0;
- (void)splitScreenViewDidDisappearFor:(id)arg0;
- (void)setSplitScreenUIConfigs:(id)arg0;
- (void)setSplitScreenItems:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (BOOL)isLandscape;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1;
- (void)addObserver;

@end

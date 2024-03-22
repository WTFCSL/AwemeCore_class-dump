//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEMVChannelPageContext, NSHashTable, UIView, NSArray;
@protocol AWEMVChannelAutoPlayContainerProtocol, AWEMVChannelAutoPlayCardProtocol;

@interface AWEMVChannelAutoPlayHandler : NSObject <UIScrollViewDelegate> {
    BOOL _isActive;
    BOOL _calculateWhenEndDecelerating;
    BOOL _shouldFilterStaticCard;
    AWEMVChannelAutoPlayHandler *_superHandler;
    UIView<AWEMVChannelAutoPlayCardProtocol> *_currentActiveView;
    NSArray *_sortedRules;
    double _activeRectTop;
    double _activeRectBottom;
    double _shouldNotActiveHeight;
    id<AWEMVChannelAutoPlayContainerProtocol> _container;
    AWEMVChannelPageContext *_context;
    NSMutableDictionary *_rulePlugins;
    UIView<AWEMVChannelAutoPlayCardProtocol> *_currentTransitionActiveView;
    NSHashTable *_distributes;
    long long _scrollTriggerCount;
    double _lastDidScrollTime;
    double _scrollingSpeedX;
    double _scrollingSpeedY;
    double _lastContentOffsetX;
    double _lastContentOffsetY;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRectForSingle;
}

@property (weak, nonatomic) id<AWEMVChannelAutoPlayContainerProtocol> container;
@property (weak, nonatomic) AWEMVChannelPageContext *context;
@property (weak, nonatomic) UIView<AWEMVChannelAutoPlayCardProtocol> *currentActiveView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRectForSingle;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSMutableDictionary *rulePlugins;
@property (weak, nonatomic) UIView<AWEMVChannelAutoPlayCardProtocol> *currentTransitionActiveView;
@property (retain, nonatomic) NSHashTable *distributes;
@property (nonatomic) long long scrollTriggerCount;
@property (nonatomic) double lastDidScrollTime;
@property (nonatomic) double scrollingSpeedX;
@property (nonatomic) double scrollingSpeedY;
@property (nonatomic) double lastContentOffsetX;
@property (nonatomic) double lastContentOffsetY;
@property (weak, nonatomic) AWEMVChannelAutoPlayHandler *superHandler;
@property (nonatomic) BOOL calculateWhenEndDecelerating;
@property (retain, nonatomic) NSArray *sortedRules;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentPlayingIndex;
- (void)setCalculateWhenEndDecelerating:(BOOL)arg0;
- (void)addDistribute:(id)arg0;
- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:(double)arg0;
- (void)windowDidBecomeKeyNotification:(id)arg0;
- (void)windowDidResignKeyNotification:(id)arg0;
- (void)setActiveRectTop:(double)arg0;
- (void)setActiveRectBottom:(double)arg0;
- (void)setShouldNotActiveHeight:(double)arg0;
- (void)setShouldFilterStaticCard:(BOOL)arg0;
- (id)rulePlugins;
- (void)setSortedRules:(id)arg0;
- (id)currentActiveView;
- (void)__resignCard:(id)arg0;
- (void)___activeCardIfNeeded:(id)arg0;
- (void)__activeCard:(id)arg0;
- (void)setCurrentTransitionActiveView:(id)arg0;
- (void)forceBecomeActive:(id)arg0;
- (id)sortedRules;
- (void)__calculateToActiveCell;
- (id)currentTransitionActiveView;
- (void)__resignWithEnteringFullScreen;
- (void)setCurrentActiveView:(id)arg0;
- (double)lastDidScrollTime;
- (BOOL)__floatEqualZero:(double)arg0;
- (double)lastContentOffsetX;
- (void)setScrollingSpeedX:(double)arg0;
- (void)setScrollingSpeedY:(double)arg0;
- (void)setLastDidScrollTime:(double)arg0;
- (void)setLastContentOffsetX:(double)arg0;
- (void)__updateHandlerToCard;
- (double)scrollingSpeedX;
- (double)scrollingSpeedY;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__calculateActiveRect;
- (double)shouldNotActiveHeight;
- (BOOL)shouldFilterStaticCard;
- (double)__calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)activeRectTop;
- (double)activeRectBottom;
- (void)__updateScrollSpeedInfo;
- (void)__clearScrollSpeedInfo;
- (BOOL)calculateWhenEndDecelerating;
- (void)endForceBecomeActive:(id)arg0;
- (void)enterFullScreen:(id)arg0 withForceActive:(BOOL)arg1;
- (void)recalculateToActiveNeedReset:(BOOL)arg0;
- (void)changeActiveCardIfNeeded:(id)arg0;
- (void)resignActiveCurrentTransitionActiveViewIfNeed;
- (id)superHandler;
- (void)setSuperHandler:(id)arg0;
- (void)setRulePlugins:(id)arg0;
- (long long)scrollTriggerCount;
- (void)setScrollTriggerCount:(long long)arg0;
- (id)distributes;
- (void)setDistributes:(id)arg0;
- (BOOL)playFirstCardIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__calculateActiveRectForSingle;
- (void)setActiveRectForSingle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRectForSingle;
- (id)initWithContainer:(id)arg0 context:(id)arg1;
- (void)becomeActive;
- (id)container;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg0;
- (BOOL)conformsToProtocol:(id)arg0;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (id)viewForZoomingInScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)forwardInvocation:(id)arg0;
- (void)resignActive;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setContext:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setContainer:(id)arg0;
- (void)addRule:(id)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)applicationWillResignActive;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)context;
- (void)scrollViewDidZoom:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isActive;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)applicationDidBecomeActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRect;
- (void)setActiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)addObservers;

@end

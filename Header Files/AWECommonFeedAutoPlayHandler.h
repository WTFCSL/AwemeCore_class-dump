//
//     Generated by private class-dump
//

@class NSString, NSHashTable, AWEBaseListSectionController;
@protocol AWECommonFeedAutoPlaySectionProtocol, AWECommonFeedAutoPlayContainerProtocol;

@interface AWECommonFeedAutoPlayHandler : NSObject <UIScrollViewDelegate> {
    BOOL _isActive;
    BOOL _calculateWhenEndDecelerating;
    BOOL _shouldFilterStaticCard;
    AWECommonFeedAutoPlayHandler *_superHandler;
    AWEBaseListSectionController<AWECommonFeedAutoPlaySectionProtocol> *_currentActiveSection;
    double _maxAutoplaySpeedY;
    double _activeRectTop;
    double _activeRectBottom;
    double _shouldNotActiveHeight;
    id<AWECommonFeedAutoPlayContainerProtocol> _container;
    AWEBaseListSectionController<AWECommonFeedAutoPlaySectionProtocol> *_currentTransitionActiveSection;
    NSHashTable *_distributes;
    long long _scrollTriggerCount;
    double _lastDidScrollTime;
    double _scrollingSpeedX;
    double _scrollingSpeedY;
    double _lastContentOffsetX;
    double _lastContentOffsetY;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
}

@property (weak, nonatomic) id<AWECommonFeedAutoPlayContainerProtocol> container;
@property (weak, nonatomic) AWEBaseListSectionController<AWECommonFeedAutoPlaySectionProtocol> *currentActiveSection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWEBaseListSectionController<AWECommonFeedAutoPlaySectionProtocol> *currentTransitionActiveSection;
@property (retain, nonatomic) NSHashTable *distributes;
@property (nonatomic) long long scrollTriggerCount;
@property (nonatomic) double lastDidScrollTime;
@property (nonatomic) double scrollingSpeedX;
@property (nonatomic) double scrollingSpeedY;
@property (nonatomic) double lastContentOffsetX;
@property (nonatomic) double lastContentOffsetY;
@property (weak, nonatomic) AWECommonFeedAutoPlayHandler *superHandler;
@property (nonatomic) BOOL calculateWhenEndDecelerating;
@property (nonatomic) double maxAutoplaySpeedY;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentPlayingIndex;
- (id)currentActiveSection;
- (void)setMaxAutoplaySpeedY:(double)arg0;
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
- (void)forceBecomeActive:(id)arg0;
- (double)lastDidScrollTime;
- (double)lastContentOffsetX;
- (void)setScrollingSpeedX:(double)arg0;
- (void)setScrollingSpeedY:(double)arg0;
- (void)setLastDidScrollTime:(double)arg0;
- (void)setLastContentOffsetX:(double)arg0;
- (double)scrollingSpeedX;
- (double)scrollingSpeedY;
- (double)shouldNotActiveHeight;
- (BOOL)shouldFilterStaticCard;
- (double)activeRectTop;
- (double)activeRectBottom;
- (BOOL)calculateWhenEndDecelerating;
- (void)endForceBecomeActive:(id)arg0;
- (void)enterFullScreen:(id)arg0 withForceActive:(BOOL)arg1;
- (void)recalculateToActiveNeedReset:(BOOL)arg0;
- (id)superHandler;
- (void)setSuperHandler:(id)arg0;
- (long long)scrollTriggerCount;
- (void)setScrollTriggerCount:(long long)arg0;
- (id)distributes;
- (void)_resignCard:(id)arg0;
- (void)_activeCardIfNeeded:(id)arg0;
- (void)_activeCard:(id)arg0;
- (void)setCurrentTransitionActiveSection:(id)arg0;
- (void)_calculateToActiveCell;
- (id)currentTransitionActiveSection;
- (void)_resignWithEnteringFullScreen;
- (void)setCurrentActiveSection:(id)arg0;
- (BOOL)p_floatEqualZero:(double)arg0;
- (void)_updateHandlerToCard;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateActiveRect;
- (double)_calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)maxAutoplaySpeedY;
- (void)p_updateScrollSpeedInfo;
- (void)p_clearScrollSpeedInfo;
- (void)changeActiveSectionIfNeeded:(id)arg0;
- (struct CGPoint { double x0; double x1; })getScrollingSpeed;
- (void)setDistributes:(id)arg0;
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
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setContainer:(id)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)applicationWillResignActive;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)scrollViewDidZoom:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isActive;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)initWithContainer:(id)arg0;
- (void)applicationDidBecomeActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRect;
- (void)setActiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)addObservers;

@end

//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString, LynxUI;

@interface LynxListUIContainer : LynxUIScroller <LynxUIComponentLayoutObserver> {
    BOOL _needAdjustContentOffset;
    BOOL _verticalOrientation;
    BOOL _shouldBlockScrollByListContainer;
    BOOL _enableListSticky;
    double _targetContentSize;
    NSArray *_itemKeys;
    id /* block */ _scrollToCallback;
    long long _scrollRequestId;
    double _stickyOffset;
    NSArray *_stickyTopIndexes;
    NSMutableDictionary *_stickyTopItems;
    NSArray *_stickyBottomIndexes;
    NSMutableDictionary *_stickyBottomItems;
    LynxUI *_prevStickyTopItem;
    LynxUI *_prevStickyBottomItem;
    struct CGPoint { double x; double y; } _targetDelta;
    struct CGPoint { double x; double y; } _previousContentOffset;
}

@property (nonatomic) BOOL verticalOrientation;
@property (retain, nonatomic) NSArray *itemKeys;
@property (copy, nonatomic) id /* block */ scrollToCallback;
@property (nonatomic) long long scrollRequestId;
@property (nonatomic) BOOL shouldBlockScrollByListContainer;
@property (nonatomic) struct CGPoint { double x; double y; } previousContentOffset;
@property (nonatomic) BOOL enableListSticky;
@property (nonatomic) double stickyOffset;
@property (retain, nonatomic) NSArray *stickyTopIndexes;
@property (retain, nonatomic) NSMutableDictionary *stickyTopItems;
@property (retain, nonatomic) NSArray *stickyBottomIndexes;
@property (retain, nonatomic) NSMutableDictionary *stickyBottomItems;
@property (weak, nonatomic) LynxUI *prevStickyTopItem;
@property (weak, nonatomic) LynxUI *prevStickyBottomItem;
@property (nonatomic) BOOL needAdjustContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } targetDelta;
@property (nonatomic) double targetContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__2431;
+ (id)__lynx_prop_config__2492;
+ (id)__lynx_prop_config__2553;
+ (id)__lynx_prop_config__2564;
+ (id)__lynx_ui_method_config__4688;
+ (id)__lynx_ui_method_config__51810;
+ (id)__lynx_ui_method_config__63111;

- (void)setSign:(long long)arg0;
- (void)removeChild:(id)arg0 atIndex:(long long)arg1;
- (void)onNodeReady;
- (BOOL)isScrollContainer;
- (void)setScrollBarEnable:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setEnableScroll:(BOOL)arg0 requestReset:(BOOL)arg1;
- (id)stickyTopItems;
- (id)stickyBottomItems;
- (void)setStickyOffset:(double)arg0;
- (void)setStickyTopItems:(id)arg0;
- (void)setStickyBottomItems:(id)arg0;
- (double)stickyOffset;
- (BOOL)verticalOrientation;
- (void)setVerticalOrientation:(BOOL)arg0;
- (double)contentOffsetXRTL:(double)arg0;
- (void)updateStickyTops;
- (void)updateStickyBottoms;
- (BOOL)enableListSticky;
- (long long)getIndexFromItemKey:(id)arg0;
- (id)stickyTopIndexes;
- (void)updateStickyInfoForInsertedChild:(id)arg0 stickyItems:(id)arg1 stickyIndexes:(id)arg2 index:(long long)arg3;
- (id)stickyBottomIndexes;
- (void)updateStickyInfoForDeletedChild:(id)arg0 stickyItems:(id)arg1;
- (void)updateStickyInfoForUpdatedChild:(id)arg0 stickyItems:(id)arg1 stickyIndexes:(id)arg2 index:(long long)arg3;
- (void)setEnableListSticky:(BOOL)arg0;
- (id)prevStickyTopItem;
- (void)sendEventWithName:(id)arg0 detail:(id)arg1;
- (void)setPrevStickyTopItem:(id)arg0;
- (id)prevStickyBottomItem;
- (void)setPrevStickyBottomItem:(id)arg0;
- (id /* block */)scrollToCallback;
- (void)setScrollToCallback:(id /* block */)arg0;
- (id)itemKeys;
- (long long)scrollRequestId;
- (void)setScrollRequestId:(long long)arg0;
- (void)scrollStopped;
- (id)visibleCellsInfo;
- (double)orientationSize;
- (double)orientationContentSize;
- (double)orientationMaxScrollableDistance;
- (double)orientationMinScrollableDistance;
- (BOOL)isVisibleCell:(id)arg0;
- (id)findHitTargetInStickyItems:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)findHitTestTarget:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)visibleWrapperAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onComponentLayoutUpdated:(id)arg0;
- (void)onAsyncComponentLayoutUpdated:(id)arg0 operationID:(long long)arg1;
- (void)setStickyInfo:(id)arg0 requestReset:(BOOL)arg1;
- (void)setVerticalOrientation:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setEnableSticky:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setStickyOffset:(double)arg0 requestReset:(BOOL)arg1;
- (void)autoScroll:(id)arg0 withResult:(id /* block */)arg1;
- (void)scrollToPosition:(id)arg0 withResult:(id /* block */)arg1;
- (void)updateScrollInfoWithEstimatedOffset:(double)arg0 smooth:(BOOL)arg1 scrolling:(BOOL)arg2;
- (void)getVisibleCells:(id)arg0 withResult:(id /* block */)arg1;
- (BOOL)needAdjustContentOffset;
- (void)setNeedAdjustContentOffset:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })targetDelta;
- (void)setTargetDelta:(struct CGPoint { double x0; double x1; })arg0;
- (double)targetContentSize;
- (void)setTargetContentSize:(double)arg0;
- (void)setItemKeys:(id)arg0;
- (BOOL)shouldBlockScrollByListContainer;
- (void)setShouldBlockScrollByListContainer:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })previousContentOffset;
- (void)setPreviousContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setStickyTopIndexes:(id)arg0;
- (void)setStickyBottomIndexes:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)updateContentSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)insertChild:(id)arg0 atIndex:(long long)arg1;
- (id)createView;
- (double)orientationOffset;
- (BOOL)isBouncing;

@end

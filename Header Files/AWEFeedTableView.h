//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;
@protocol AWEFeedTableViewDelegate;

@interface AWEFeedTableView : AWEFeedDataSafeTableView <AWETableViewAccessibilityFixProtocol> {
    BOOL _hasAnyAction;
    BOOL _shouldAvoidCellForRowCalls;
    BOOL _isShowAntiAddictMask;
    BOOL _awe_removeCellFromSuperviewWhenMemoryWarning;
    id<AWEFeedTableViewDelegate> _feedTableViewDelegate;
    id /* block */ _touchBlock;
    NSMutableArray *_awe_dequeuedCells;
    NSMutableDictionary *_awe_cachedCells;
}

@property (retain, nonatomic) NSMutableArray *awe_dequeuedCells;
@property (retain, nonatomic) NSMutableDictionary *awe_cachedCells;
@property (nonatomic) BOOL awe_removeCellFromSuperviewWhenMemoryWarning;
@property (nonatomic) BOOL hasAnyAction;
@property (nonatomic) BOOL shouldAvoidCellForRowCalls;
@property (nonatomic) BOOL isShowAntiAddictMask;
@property (weak, nonatomic) id<AWEFeedTableViewDelegate> feedTableViewDelegate;
@property (copy, nonatomic) id /* block */ touchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)awe_shouldFixAccessibilityScroll;

- (BOOL)enableFeedDataRecover;
- (void)reportDataInconsistency:(id)arg0;
- (void)setIsShowAntiAddictMask:(BOOL)arg0;
- (BOOL)hasAnyAction;
- (void)setShouldAvoidCellForRowCalls:(BOOL)arg0;
- (BOOL)shouldAvoidCellForRowCalls;
- (void)setHasAnyAction:(BOOL)arg0;
- (id /* block */)touchBlock;
- (BOOL)isShowAntiAddictMask;
- (id)feedTableViewDelegate;
- (void)awe_purgeUnusedCells:(id)arg0;
- (BOOL)awe_removeCellFromSuperviewWhenMemoryWarning;
- (id)awe_dequeuedCells;
- (id)awe_cachedCells;
- (void)awe_enableCellGuard:(BOOL)arg0 cellCache:(BOOL)arg1;
- (id)awe_guardCellForRowAtIndexPath:(id /* block */)arg0;
- (void)awe_enqueueCell:(id)arg0 withIdentifier:(id)arg1;
- (void)setFeedTableViewDelegate:(id)arg0;
- (void)setTouchBlock:(id /* block */)arg0;
- (void)setAwe_dequeuedCells:(id)arg0;
- (void)setAwe_cachedCells:(id)arg0;
- (void)setAwe_removeCellFromSuperviewWhenMemoryWarning:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg0;

@end

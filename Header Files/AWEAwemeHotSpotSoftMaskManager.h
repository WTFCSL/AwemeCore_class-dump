//
//     Generated by private class-dump
//

@class AWEDiscoverBezierCurve2DCaculator, AWENewHotSearchModel, NSDictionary, UIView;

@interface AWEAwemeHotSpotSoftMaskManager : NSObject {
    BOOL _isBlockInsertOperation;
    BOOL _shouldShowAnimationToSoftMask;
    BOOL _isEndScroll;
    UIView *_formerView;
    UIView *_latterView;
    AWENewHotSearchModel *_startHotSearchModel;
    long long _startHotSearchIndex;
    NSDictionary *_startLogExtraDict;
    AWEDiscoverBezierCurve2DCaculator *_bezierCurveCaculator;
}

@property (nonatomic) BOOL shouldShowAnimationToSoftMask;
@property (nonatomic) BOOL isEndScroll;
@property (weak, nonatomic) UIView *formerView;
@property (weak, nonatomic) UIView *latterView;
@property (retain, nonatomic) AWENewHotSearchModel *startHotSearchModel;
@property (nonatomic) long long startHotSearchIndex;
@property (copy, nonatomic) NSDictionary *startLogExtraDict;
@property (retain, nonatomic) AWEDiscoverBezierCurve2DCaculator *bezierCurveCaculator;
@property (nonatomic) BOOL isBlockInsertOperation;

- (void)scrollViewWillBeginDragging:(id)arg0 velocityY:(double)arg1 startHotSearchIndex:(long long)arg2 startLogExtraDic:(id)arg3 startHotSearchModel:(id)arg4;
- (void)onScrollBackToIndex:(double)arg0;
- (void)onCellConfig:(id)arg0 currentPlayingIndex:(long long)arg1 willDisplayIndex:(long long)arg2 model:(id)arg3;
- (BOOL)shouldChangeShowStateOfMaskView:(BOOL)arg0 currentModel:(id)arg1;
- (void)onCellWillDisplay:(id)arg0 currentPlayingIndex:(long long)arg1 willDisplayIndex:(long long)arg2 model:(id)arg3;
- (void)onCellDidEndDisplay:(id)arg0 shouldReset:(BOOL)arg1;
- (void)setIsBlockInsertOperation:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0 height:(double)arg1 percentage:(double)arg2;
- (void)onScrollDidEndWithIndexPath:(long long)arg0 currentHotSearchModel:(id)arg1;
- (BOOL)isBlockInsertOperation;
- (BOOL)isEndScroll;
- (id)startLogExtraDict;
- (id)startHotSearchModel;
- (long long)startHotSearchIndex;
- (void)setStartHotSearchIndex:(long long)arg0;
- (void)setStartLogExtraDict:(id)arg0;
- (void)setStartHotSearchModel:(id)arg0;
- (void)setIsEndScroll:(BOOL)arg0;
- (BOOL)shouldShowAnimationToSoftMask;
- (void)setFormerView:(id)arg0;
- (void)setLatterView:(id)arg0;
- (void)triggerCellAnimationWithPercentage:(double)arg0 cellHeight:(double)arg1;
- (void)setShouldShowAnimationToSoftMask:(BOOL)arg0;
- (void)resetViewCornerAndTransform:(id)arg0;
- (void)resetLogInfor;
- (id)formerView;
- (id)latterView;
- (void)trackHotSpotSwitchInfo:(id)arg0 currentIndex:(long long)arg1;
- (id)bezierCurveCaculator;
- (void)addViewCornerAndTransform:(id)arg0 tranlationX:(double)arg1 tranlationY:(double)arg2 zoomScale:(double)arg3 cornerRadius:(double)arg4;
- (void)setBezierCurveCaculator:(id)arg0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(long long)arg0;

@end
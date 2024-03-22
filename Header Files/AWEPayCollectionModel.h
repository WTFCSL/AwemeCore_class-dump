//
//     Generated by private class-dump
//

@interface AWEPayCollectionModel : NSObject {
    long long _numberOfItems;
    double _centerXOffset;
    double _centerYOffset;
    double _radius;
    double _angel;
    long long _targetItemIndex;
    double _minimumLineSpacing;
    double _showWidth;
    double _unitDurationTime;
    double _unitInset;
    struct CGSize { double width; double height; } _itemSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _inset;
}

@property (nonatomic) double unitInset;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double centerXOffset;
@property (nonatomic) double centerYOffset;
@property (nonatomic) double radius;
@property (nonatomic) double angel;
@property (nonatomic) long long targetItemIndex;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double showWidth;
@property (nonatomic) double unitDurationTime;
@property (readonly, nonatomic) double unitOffsetDurationTime;
@property (readonly, nonatomic) double collectionHeight;

- (double)centerXOffset;
- (void)setCenterXOffset:(double)arg0;
- (double)centerYOffset;
- (double)contentOffsetWithIndex:(long long)arg0;
- (double)unitDurationTime;
- (void)setAngel:(double)arg0;
- (void)setUnitDurationTime:(double)arg0;
- (void)setShowWidth:(double)arg0;
- (void)p_setDefaultValue;
- (void)setCenterYOffset:(double)arg0;
- (void)setTargetItemIndex:(long long)arg0;
- (double)unitInset;
- (double)showWidth;
- (double)angelWithOffset:(double)arg0;
- (double)positionYWithOffset:(double)arg0;
- (double)unitOffsetDurationTime;
- (long long)targetItemIndex;
- (void)setUnitInset:(double)arg0;
- (long long)numberOfItems;
- (id)init;
- (double)radius;
- (void)setNumberOfItems:(long long)arg0;
- (void)setRadius:(double)arg0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setMinimumLineSpacing:(double)arg0;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (double)minimumLineSpacing;
- (double)angel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)setInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)collectionHeight;

@end

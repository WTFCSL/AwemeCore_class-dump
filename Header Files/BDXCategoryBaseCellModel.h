//
//     Generated by private class-dump
//

@interface BDXCategoryBaseCellModel : NSObject {
    BOOL _selected;
    BOOL _cellWidthZoomEnabled;
    BOOL _selectedAnimationEnabled;
    BOOL _transitionAnimating;
    unsigned long long _index;
    double _cellWidth;
    double _cellSpacing;
    double _cellWidthNormalZoomScale;
    double _cellWidthCurrentZoomScale;
    double _cellWidthSelectedZoomScale;
    double _selectedAnimationDuration;
    unsigned long long _selectedType;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellSpacing;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isCellWidthZoomEnabled) BOOL cellWidthZoomEnabled;
@property (nonatomic) double cellWidthNormalZoomScale;
@property (nonatomic) double cellWidthCurrentZoomScale;
@property (nonatomic) double cellWidthSelectedZoomScale;
@property (nonatomic, getter=isSelectedAnimationEnabled) BOOL selectedAnimationEnabled;
@property (nonatomic) double selectedAnimationDuration;
@property (nonatomic) unsigned long long selectedType;
@property (nonatomic, getter=isTransitionAnimating) BOOL transitionAnimating;

- (void)setSelectedType:(unsigned long long)arg0;
- (BOOL)isTransitionAnimating;
- (BOOL)isSelectedAnimationEnabled;
- (double)selectedAnimationDuration;
- (void)setTransitionAnimating:(BOOL)arg0;
- (BOOL)isCellWidthZoomEnabled;
- (void)setCellWidthZoomEnabled:(BOOL)arg0;
- (double)cellWidthNormalZoomScale;
- (void)setCellWidthNormalZoomScale:(double)arg0;
- (double)cellWidthCurrentZoomScale;
- (void)setCellWidthCurrentZoomScale:(double)arg0;
- (double)cellWidthSelectedZoomScale;
- (void)setCellWidthSelectedZoomScale:(double)arg0;
- (void)setSelectedAnimationEnabled:(BOOL)arg0;
- (void)setSelectedAnimationDuration:(double)arg0;
- (void)setIndex:(unsigned long long)arg0;
- (unsigned long long)index;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isSelected;
- (double)cellWidth;
- (unsigned long long)selectedType;
- (double)cellSpacing;
- (void)setCellSpacing:(double)arg0;
- (void)setCellWidth:(double)arg0;

@end
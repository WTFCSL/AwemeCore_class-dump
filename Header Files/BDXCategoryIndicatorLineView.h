//
//     Generated by private class-dump
//

@class BDXCategoryViewAnimator;

@interface BDXCategoryIndicatorLineView : BDXCategoryIndicatorComponentView {
    unsigned long long _lineStyle;
    double _lineScrollOffsetX;
    BDXCategoryViewAnimator *_animator;
}

@property (retain, nonatomic) BDXCategoryViewAnimator *animator;
@property (nonatomic) unsigned long long lineStyle;
@property (nonatomic) double lineScrollOffsetX;

- (void)setLineStyle:(unsigned long long)arg0;
- (void)configureDefaulteValue;
- (void)jx_refreshState:(id)arg0;
- (void)jx_contentScrollViewDidScroll:(id)arg0;
- (void)jx_selectedCell:(id)arg0;
- (double)lineScrollOffsetX;
- (void)setLineScrollOffsetX:(double)arg0;
- (id)animator;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)setAnimator:(id)arg0;
- (unsigned long long)lineStyle;

@end

//
//     Generated by private class-dump
//

@class BDXCategoryViewAnimator;

@interface BDXCategoryIndicatorDotLineView : BDXCategoryIndicatorComponentView {
    double _lineWidth;
    BDXCategoryViewAnimator *_animator;
}

@property (retain, nonatomic) BDXCategoryViewAnimator *animator;
@property (nonatomic) double lineWidth;

- (void)configureDefaulteValue;
- (void)jx_refreshState:(id)arg0;
- (void)jx_contentScrollViewDidScroll:(id)arg0;
- (void)jx_selectedCell:(id)arg0;
- (id)animator;
- (void).cxx_destruct;
- (double)lineWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLineWidth:(double)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setAnimator:(id)arg0;

@end
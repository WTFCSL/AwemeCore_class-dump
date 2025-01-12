//
//     Generated by private class-dump
//

@class UIImageView;

@interface BDXCategoryIndicatorImageView : BDXCategoryIndicatorComponentView {
    BOOL _indicatorImageViewRollEnabled;
    UIImageView *_indicatorImageView;
    struct CGSize { double width; double height; } _indicatorImageViewSize;
}

@property (readonly, nonatomic) UIImageView *indicatorImageView;
@property (nonatomic) BOOL indicatorImageViewRollEnabled;
@property (nonatomic) struct CGSize { double width; double height; } indicatorImageViewSize;

- (id)indicatorImageView;
- (void)jx_refreshState:(id)arg0;
- (void)jx_contentScrollViewDidScroll:(id)arg0;
- (void)jx_selectedCell:(id)arg0;
- (void)setupIndicatorImageView;
- (struct CGSize { double x0; double x1; })indicatorImageViewSize;
- (BOOL)indicatorImageViewRollEnabled;
- (void)setIndicatorImageViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setIndicatorImageViewRollEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end

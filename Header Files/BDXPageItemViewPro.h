//
//     Generated by private class-dump
//

@class UIScrollView;

@interface BDXPageItemViewPro : BDXPageListView {
    UIScrollView *_scrollView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _scrollViewPadding;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewPadding;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })scrollViewPadding;
- (void)setScrollViewPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)scrollView;

@end

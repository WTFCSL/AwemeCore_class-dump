//
//     Generated by private class-dump
//

@class UIScrollView;

@interface IESECWinFeedBaseResponseView : UIView {
    UIScrollView *_scrollView;
    double _startOffset;
    id /* block */ _tapInView;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double startOffset;
@property (copy, nonatomic) id /* block */ tapInView;

- (id /* block */)tapInView;
- (void)setTapInView:(id /* block */)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (double)startOffset;
- (void)setStartOffset:(double)arg0;
- (id)scrollView;

@end

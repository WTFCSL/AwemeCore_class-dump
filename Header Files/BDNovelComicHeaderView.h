//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface BDNovelComicHeaderView : BDNovelComicBaseView {
    UIView *_lineViewLeft;
    UIView *_lineViewRight;
    UILabel *_label;
}

@property (retain, nonatomic) UIView *lineViewLeft;
@property (retain, nonatomic) UIView *lineViewRight;
@property (retain, nonatomic) UILabel *label;

- (void)setLineViewLeft:(id)arg0;
- (void)setLineViewRight:(id)arg0;
- (id)lineViewLeft;
- (id)lineViewRight;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)label;
- (void)layoutSubviews;

@end

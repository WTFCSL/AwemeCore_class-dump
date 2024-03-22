//
//     Generated by private class-dump
//

@class UIView;

@interface HTSLiveToolbarFooterView : UICollectionReusableView {
    UIView *_contentView;
    UIView *_lineView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *lineView;

- (void)updateCustomSize:(struct CGSize { double x0; double x1; })arg0;
- (void)updateLineColor:(id)arg0 alpha:(double)arg1;
- (void)updateLinePaddingLeft:(double)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end

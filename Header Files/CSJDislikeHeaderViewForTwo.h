//
//     Generated by private class-dump
//

@class UIImageView, UIButton, UILabel;

@interface CSJDislikeHeaderViewForTwo : UIView {
    id /* block */ _dislikeBack;
    UIImageView *_backImg;
    UIButton *_backButton;
    UILabel *_titleLable;
}

@property (retain, nonatomic) UIImageView *backImg;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLable;
@property (copy, nonatomic) id /* block */ dislikeBack;

- (void)setBackImg:(id)arg0;
- (id)backImg;
- (void)tapBack;
- (id /* block */)dislikeBack;
- (void)setDislikeBack:(id /* block */)arg0;
- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;

@end

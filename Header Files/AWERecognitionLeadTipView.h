//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWERecognitionLeadTipView : UIView {
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_longPressTipImageView;
}

@property (retain, nonatomic) UIImageView *longPressTipImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *contentLabel;

- (void)setLongPressTipImageView:(id)arg0;
- (id)longPressTipImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupConstraints;
- (void)setupViews;
- (id)contentLabel;

@end

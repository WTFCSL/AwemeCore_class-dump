//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface IESECLongContentLabelView : UIView {
    UILabel *_titleLabel;
    UILabel *_rightLabel;
    UIImageView *_backgroundImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;

- (void)configLabelWithElement:(id)arg0;
- (void)configLabelWithElement:(id)arg0 padding:(id)arg1;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)rightLabel;
- (void)setBackgroundImageView:(id)arg0;
- (void)setRightLabel:(id)arg0;

@end
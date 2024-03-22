//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWETeenJustSeenMaskView : UIView {
    UIView *_contentView;
    UIImageView *_playImgView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *playImgView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)p_setupUI;
- (id)playImgView;
- (void)setPlayImgView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;

@end
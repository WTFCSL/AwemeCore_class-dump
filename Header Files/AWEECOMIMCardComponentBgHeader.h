//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEECOMIMCardComponentBgHeader : UIView {
    UIImageView *_bgImgView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property (retain, nonatomic) UIImageView *bgImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (double)designHeight;

- (id)bgImgView;
- (void)setBgImgView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateWithData:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)_customInit;

@end

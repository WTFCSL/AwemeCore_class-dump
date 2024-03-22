//
//     Generated by private class-dump
//

@class UIImageView, AWEGradientView, UILabel;

@interface AWELiveVSTabBannerImageCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    AWEGradientView *_coverBottomInfoMaskView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)coverBottomInfoMaskView;
- (void)setCoverBottomInfoMaskView:(id)arg0;
- (void)updateImgeUrl:(id)arg0 mainTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateImgeViewHightWithImage:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;

@end

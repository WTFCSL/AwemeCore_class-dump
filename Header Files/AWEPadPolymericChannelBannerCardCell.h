//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWEGradientView;

@interface AWEPadPolymericChannelBannerCardCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_infoLabel;
    UIImageView *_coverImageView;
    AWEGradientView *_coverBottomInfoMaskView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)coverBottomInfoMaskView;
- (void)setCoverBottomInfoMaskView:(id)arg0;
- (void)configDescMaskViewAlpha:(id)arg0 locations:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end

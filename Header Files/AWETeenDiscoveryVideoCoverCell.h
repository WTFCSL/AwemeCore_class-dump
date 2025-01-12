//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEGradientView, YYLabel;

@interface AWETeenDiscoveryVideoCoverCell : UICollectionViewCell {
    UIImageView *_coverView;
    YYLabel *_titleLabel;
    UIImageView *_playIconImageView;
    UILabel *_playCountLabel;
    AWEGradientView *_maskView;
}

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) AWEGradientView *maskView;

+ (struct CGSize { double x0; double x1; })footerSizeWithModel:(id)arg0 constraintWidth:(double)arg1;
+ (id)titleAttrStrWithModel:(id)arg0;
+ (double)titleHeightWithAttrStr:(id)arg0 cellWidth:(double)arg1;
+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)arg0 constraintWidth:(double)arg1;

- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (void)configCellWithModel:(id)arg0;
- (id)playCountLabel;
- (void)setPlayCountLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setupView;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end

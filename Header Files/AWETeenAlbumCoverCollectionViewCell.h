//
//     Generated by private class-dump
//

@class UIView, AWEMinorAlbum, AWEGradientView, UIImageView, BDImageView, YYLabel, AWETeenAlbumCardLabel, UILabel;

@interface AWETeenAlbumCoverCollectionViewCell : UICollectionViewCell {
    BOOL _isPlaying;
    AWEMinorAlbum *_model;
    UIView *_bgView;
    BDImageView *_coverView;
    UILabel *_totalEpisodeLabel;
    AWEGradientView *_coverMaskView;
    YYLabel *_titleLabel;
    UIImageView *_playIconImageView;
    UILabel *_playCountLabel;
    AWETeenAlbumCardLabel *_cardLabel;
    long long _maximumLines;
    long long _colorMode;
}

@property (retain, nonatomic) AWEMinorAlbum *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UILabel *totalEpisodeLabel;
@property (retain, nonatomic) AWEGradientView *coverMaskView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) AWETeenAlbumCardLabel *cardLabel;
@property (nonatomic) long long maximumLines;
@property (nonatomic) long long colorMode;
@property (nonatomic) BOOL isPlaying;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)arg0 constraintWidth:(double)arg1 maximumLines:(long long)arg2;
+ (struct CGSize { double x0; double x1; })footerSizeWithModel:(id)arg0 constraintWidth:(double)arg1 maximumLines:(long long)arg2;
+ (id)titleAttrStrWithModel:(id)arg0 colorMode:(long long)arg1;
+ (double)titleHeightWithAttrStr:(id)arg0 cellWidth:(double)arg1 maximumLines:(long long)arg2;
+ (double)footerHeightWithTitleHeight:(double)arg0;

- (void)awe_themeDidChange:(long long)arg0;
- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (void)setCoverMaskView:(id)arg0;
- (id)coverMaskView;
- (id)playCountLabel;
- (void)setPlayCountLabel:(id)arg0;
- (id)totalEpisodeLabel;
- (void)setTotalEpisodeLabel:(id)arg0;
- (id)cardLabel;
- (void)setCardLabel:(id)arg0;
- (void)p_updateCover;
- (void)p_setupView;
- (void)p_updateDescription;
- (void)configCellWithModel:(id)arg0 maximumLines:(long long)arg1;
- (void)configCellWithModel:(id)arg0 maximumLines:(long long)arg1 shouldShowAlbumLabel:(BOOL)arg2;
- (void)configCellWithModel:(id)arg0 maximumLines:(long long)arg1 shouldShowAlbumLabel:(BOOL)arg2 colorMode:(long long)arg3;
- (void)p_updateColorMode;
- (void)p_addCardLabelIfNeeded;
- (long long)colorMode;
- (void)setModel:(id)arg0;
- (void)setColorMode:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (long long)maximumLines;
- (void)setMaximumLines:(long long)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end

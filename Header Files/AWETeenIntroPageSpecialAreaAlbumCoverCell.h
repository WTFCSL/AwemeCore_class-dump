//
//     Generated by private class-dump
//

@class AWEGradientView, UIImageView, UIView, UILabel, YYLabel;

@interface AWETeenIntroPageSpecialAreaAlbumCoverCell : UICollectionViewCell {
    UIView *_containerView;
    UIImageView *_coverView;
    YYLabel *_titleLabel;
    UIImageView *_playIconImageView;
    UILabel *_playCountLabel;
    UILabel *_totalEpisodeLabel;
    AWEGradientView *_maskView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) UILabel *totalEpisodeLabel;
@property (retain, nonatomic) AWEGradientView *maskView;

+ (struct CGSize { double x0; double x1; })footerSizeWithModel:(id)arg0 constraintWidth:(double)arg1;
+ (id)titleAttrStrWithModel:(id)arg0;
+ (double)titleHeightWithAttrStr:(id)arg0 cellWidth:(double)arg1;
+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)arg0 constraintWidth:(double)arg1;
+ (void)trackAlbumShow:(id)arg0 channelID:(id)arg1 channelName:(id)arg2 position:(id)arg3 rank:(long long)arg4 albumIndexId:(id)arg5 albumIndexName:(id)arg6;
+ (void)trackAlbumClick:(id)arg0 channelID:(id)arg1 channelName:(id)arg2 position:(id)arg3 rank:(long long)arg4 albumIndexId:(id)arg5 albumIndexName:(id)arg6;

- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (void)configCellWithModel:(id)arg0;
- (id)playCountLabel;
- (void)setPlayCountLabel:(id)arg0;
- (id)totalEpisodeLabel;
- (void)setTotalEpisodeLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setupView;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end

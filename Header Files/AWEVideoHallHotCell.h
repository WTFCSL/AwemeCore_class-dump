//
//     Generated by private class-dump
//

@class AWEGradientView, UILabel, DUXTextTag, BDImageView;

@interface AWEVideoHallHotCell : UICollectionViewCell {
    BDImageView *_cover;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_updateCycleLabel;
    UILabel *_scoreLabel;
    DUXTextTag *_videoTag;
    AWEGradientView *_gradientView;
}

@property (retain, nonatomic) BDImageView *cover;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXTextTag *videoTag;
@property (retain, nonatomic) UILabel *updateCycleLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (id)cover;
- (void)setCover:(id)arg0;
- (void)setupSubViews;
- (id)videoTag;
- (void)setVideoTag:(id)arg0;
- (void)configurationWithItem:(id)arg0;
- (void)setCornerMarkLabelWithAlbumModel:(id)arg0;
- (id)updateCycleLabel;
- (void)setUpdateCycleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end

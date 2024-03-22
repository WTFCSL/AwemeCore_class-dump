//
//     Generated by private class-dump
//

@class UIColor, UIImageView, UIImage, UILabel, AWEGradientView, UIButton;

@interface AWEMixVideoSmallCardCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    UIButton *_likeButton;
    UILabel *_titleLabel;
    AWEGradientView *_gradientView;
    UIImage *_placeholder;
    UIColor *_titleColor;
    UIColor *_episodeLineColor;
    UIImageView *_picoVRTagView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImage *placeholder;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *episodeLineColor;
@property (retain, nonatomic) UIImageView *picoVRTagView;

+ (id)titleFont;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)setThemeStyle:(id)arg0;
- (void)configWithAwemeModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)picoVRTagView;
- (void)setPicoVRTagView:(id)arg0;
- (id)episodeLineColor;
- (void)setEpisodeLineColor:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)titleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlaceholder:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (void)prepareForReuse;
- (id)placeholder;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;

@end

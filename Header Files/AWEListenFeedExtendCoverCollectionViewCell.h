//
//     Generated by private class-dump
//

@class AWEListenFeedBackgroundGradientView, CAGradientLayer, UIImageView, UIImage, UIView, AWEGradientView, UILabel;

@interface AWEListenFeedExtendCoverCollectionViewCell : UICollectionViewCell {
    BOOL _isHitShowFilterTest;
    UIView *_containerView;
    UIImageView *_coverImageView;
    AWEListenFeedBackgroundGradientView *_backgroundGradientView;
    UIView *_bgBorderGradientView;
    AWEGradientView *_gradientView;
    UILabel *_episodeLabel;
    UIView *_episodeBlurView;
    UIImage *_defaultBgImage;
    long long _maxEpisode;
    long long _currentEpisode;
    CAGradientLayer *_borderGradientLayer;
}

@property (retain, nonatomic) AWEListenFeedBackgroundGradientView *backgroundGradientView;
@property (retain, nonatomic) UIView *bgBorderGradientView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) UIView *episodeBlurView;
@property (retain, nonatomic) UIImage *defaultBgImage;
@property (nonatomic) long long maxEpisode;
@property (nonatomic) long long currentEpisode;
@property (retain, nonatomic) CAGradientLayer *borderGradientLayer;
@property (nonatomic) BOOL isHitShowFilterTest;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;

- (long long)maxEpisode;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setMaxEpisode:(long long)arg0;
- (id)episodeLabel;
- (void)setEpisodeLabel:(id)arg0;
- (id)defaultBgImage;
- (void)setDefaultBgImage:(id)arg0;
- (void)updatePlayerIfNeeded:(id)arg0;
- (BOOL)isHitShowFilterTest;
- (id)borderGradientLayer;
- (void)addGradientViewBorder;
- (void)updateBackgroundImageViewWithModel:(id)arg0 playModel:(id)arg1;
- (void)updateEpisodeLabel;
- (void)setIsHitShowFilterTest:(BOOL)arg0;
- (id)bgBorderGradientView;
- (id)episodeBlurView;
- (void)addCoverImageViewBorder;
- (void)setBorderGradientLayer:(id)arg0;
- (double)coverImageViewBottomMargin;
- (double)coverImageViewTopMargin;
- (struct CGSize { double x0; double x1; })coverImageViewSize;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 mixVideoModel:(id)arg2 context:(id)arg3;
- (void)updateLoadingCell;
- (void)setBgBorderGradientView:(id)arg0;
- (void)setEpisodeBlurView:(id)arg0;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)initWithCoder:(id)arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)gradientView;
- (void)setupUI;
- (long long)currentEpisode;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:(id)arg0;
- (void)showLoading;
- (void)setCurrentEpisode:(long long)arg0;

@end

//
//     Generated by private class-dump
//

@class UIImageView, AWEAwemeModel, AWEGradientView, UILabel;

@interface AWEPostLayoutPreviewCell : UICollectionViewCell {
    BOOL _useWaterfallLayout;
    BOOL _showCreateDate;
    AWEAwemeModel *_model;
    UIImageView *_coverImageView;
    AWEGradientView *_coverGradientView;
    UIImageView *_playIconImageView;
    UILabel *_playCountLabel;
    UILabel *_waterfallTitleLabel;
    UILabel *_waterfallDateLabel;
    UIImageView *_waterfallPlayIcon;
    UILabel *_waterfallPlayCountLabel;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverGradientView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) UILabel *waterfallTitleLabel;
@property (retain, nonatomic) UILabel *waterfallDateLabel;
@property (retain, nonatomic) UIImageView *waterfallPlayIcon;
@property (retain, nonatomic) UILabel *waterfallPlayCountLabel;
@property (nonatomic) BOOL useWaterfallLayout;
@property (nonatomic) BOOL showCreateDate;

- (BOOL)isTeenMode;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (id)playCountLabel;
- (void)setPlayCountLabel:(id)arg0;
- (void)configWithModel:(id)arg0 isMine:(BOOL)arg1;
- (void)updateCoverWithCompletion:(id /* block */)arg0;
- (id)waterfallTitleLabel;
- (void)updateCoverRadius;
- (BOOL)showCreateDate;
- (void)setShowCreateDate:(BOOL)arg0;
- (void)setWaterfallTitleLabel:(id)arg0;
- (void)setUseWaterfallLayout:(BOOL)arg0;
- (BOOL)useWaterfallLayout;
- (id)coverGradientView;
- (id)waterfallDateLabel;
- (id)waterfallPlayIcon;
- (id)waterfallPlayCountLabel;
- (void)updatePlayLabelShowState;
- (void)setCoverGradientView:(id)arg0;
- (void)setWaterfallDateLabel:(id)arg0;
- (void)setWaterfallPlayIcon:(id)arg0;
- (void)setWaterfallPlayCountLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;

@end
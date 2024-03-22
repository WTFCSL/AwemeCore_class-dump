//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWEMVChannelProgressView, AWEGradientView, MASConstraint, BDImageView;

@interface AWEMVPadHistoryCardCell : AWEMVChannelBaseCell {
    double cornerRadius;
    MASConstraint *_videoHeightContraint;
    BDImageView *_coverImgView;
    AWEGradientView *_gradientView;
    UIImageView *_infoTypeImgView;
    UIImageView *_likeIconView;
    UILabel *_likeLabel;
    UIImageView *_leftIconView;
    UILabel *_danmakuLabel;
    UILabel *_rankLabel;
    UILabel *_rightLabel;
    AWEMVChannelProgressView *_progressView;
}

@property (retain, nonatomic) MASConstraint *videoHeightContraint;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) BDImageView *coverImgView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *infoTypeImgView;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UILabel *likeLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *danmakuLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) AWEMVChannelProgressView *progressView;

- (double)currentPlayTime;
- (void)setupSubViews;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg0;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg0;
- (void)configWithAwemeModel:(id)arg0 context:(id)arg1;
- (double)gradientViewHeight;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg0;
- (void)seekToPlayTimeAfterShrink:(double)arg0;
- (id)cellCoverView;
- (id)infoTypeImgView;
- (id)danmakuLabel;
- (id)likeLabel;
- (id)videoHeightContraint;
- (void)setVideoHeightContraint:(id)arg0;
- (void)setInfoTypeImgView:(id)arg0;
- (void)setLikeLabel:(id)arg0;
- (void)setDanmakuLabel:(id)arg0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)gradientView;
- (void)setCornerRadius:(double)arg0;
- (id)rightLabel;
- (void)updateWithModel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (void)setRightLabel:(id)arg0;

@end
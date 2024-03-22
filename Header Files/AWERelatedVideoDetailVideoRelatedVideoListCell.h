//
//     Generated by private class-dump
//

@class AWERVDetailPageContext, UIImageView, AWEAwemeModel, UIView, UILabel, BDImageView;

@interface AWERelatedVideoDetailVideoRelatedVideoListCell : UICollectionViewCell {
    id /* block */ _renderImgBlock;
    id /* block */ _renderTextBlock;
    id /* block */ _didRenderLongVideoCoverBlock;
    UIView *_highlightBackgroundView;
    BDImageView *_coverView;
    UIImageView *_iconImageView;
    UIView *_videoInfoContainerView;
    UILabel *_titleLabel;
    UIView *_durationContainerView;
    UILabel *_durationLabel;
    UILabel *_authorLabel;
    UIImageView *_digIcon;
    UILabel *_digLabel;
    UIImageView *_danmuImageView;
    UILabel *_danmuCountLabel;
    UIView *_cornerMarkView;
    UILabel *_cornerMarkLabel;
    UILabel *_subTitleLabel;
    UIImageView *_guideFlowIcon;
    UILabel *_guideFlowLabel;
    AWEAwemeModel *_model;
    AWERVDetailPageContext *_pageContext;
}

@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *durationContainerView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *danmuImageView;
@property (retain, nonatomic) UILabel *danmuCountLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *cornerMarkLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *guideFlowIcon;
@property (retain, nonatomic) UILabel *guideFlowLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (copy, nonatomic) id /* block */ renderImgBlock;
@property (copy, nonatomic) id /* block */ renderTextBlock;
@property (copy, nonatomic) id /* block */ didRenderLongVideoCoverBlock;

- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (id)digIcon;
- (void)setDigIcon:(id)arg0;
- (id)formateCount:(id)arg0;
- (id)digLabel;
- (void)setDigLabel:(id)arg0;
- (id)videoInfoContainerView;
- (void)setVideoInfoContainerView:(id)arg0;
- (id)cornerMarkView;
- (id)cornerMarkLabel;
- (void)setCornerMarkView:(id)arg0;
- (void)setCornerMarkLabel:(id)arg0;
- (void)setCornerMarkLabelWithAlbumModel:(id)arg0;
- (id /* block */)renderImgBlock;
- (void)setRenderImgBlock:(id /* block */)arg0;
- (void)updateAwemeModelForLongVideo:(id)arg0;
- (id /* block */)renderTextBlock;
- (void)setLongVideoTitle:(id)arg0 title:(id)arg1;
- (void)setRenderTextBlock:(id /* block */)arg0;
- (id)durationContainerView;
- (id)guideFlowLabel;
- (id)guideFlowIcon;
- (id)danmuImageView;
- (id)danmuCountLabel;
- (id)getTitleLabelText;
- (void)setUIHidden:(BOOL)arg0 config:(id)arg1;
- (void)setupUIForLongVideo;
- (void)updateNewCoverRatioUIForLongVideoWithContext:(id)arg0;
- (void)updateAuthorLabelForGuideFlow;
- (void)updateAuthorLabelForNormal;
- (void)updateNewCoverRatioUIForMediumVideoWithContext:(id)arg0;
- (id /* block */)didRenderLongVideoCoverBlock;
- (id)getTitleAttributedString;
- (void)updateAwemeModel:(id)arg0 uiConfig:(id)arg1 pageContext:(id)arg2;
- (void)setDidRenderLongVideoCoverBlock:(id /* block */)arg0;
- (void)setDurationContainerView:(id)arg0;
- (void)setDanmuImageView:(id)arg0;
- (void)setDanmuCountLabel:(id)arg0;
- (void)setGuideFlowIcon:(id)arg0;
- (void)setGuideFlowLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)iconImageView;
- (id)highlightBackgroundView;
- (void)setIconImageView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setHighlightBackgroundView:(id)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
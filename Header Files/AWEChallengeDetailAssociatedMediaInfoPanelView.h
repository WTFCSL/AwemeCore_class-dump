//
//     Generated by private class-dump
//

@class AWERatingView, UIView, AWEPaymentBadgeView, NSString, UIImageView, UIButton, CAGradientLayer, AWEChallengeModel, UILabel;
@protocol AWESearchFilmTVTagViewProtocol;

@interface AWEChallengeDetailAssociatedMediaInfoPanelView : UIView {
    AWEChallengeModel *_challenge;
    UIView *_separator;
    UIView *_viewButtonView;
    UILabel *_viewButtonLabel;
    UIView *_mainInfoContainer;
    UIImageView *_coverImageView;
    AWEPaymentBadgeView *_paymentBadgeView;
    UIView<AWESearchFilmTVTagViewProtocol> *_tagView;
    UIView *_middleInfoContainer;
    UILabel *_movieNameLabel;
    UILabel *_infoLabel;
    UILabel *_subInfoLabel;
    UIView *_versionsView;
    UILabel *_tagLabel;
    AWERatingView *_ratingView;
    UILabel *_ratingLabel;
    UILabel *_ratingDetailLabel;
    UILabel *_sourceLabel;
    CAGradientLayer *_ratingLabelLayer;
    UIButton *_billboardButton;
    UIImageView *_crownImageView;
    UIImageView *_arrowImageView;
    UILabel *_rankNumberLabel;
    UILabel *_rankTitleLabel;
    UIView *_billboardTitleBackgroundView;
    NSString *_groupID;
    double _ratingViewRate;
}

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *viewButtonView;
@property (retain, nonatomic) UILabel *viewButtonLabel;
@property (retain, nonatomic) UIView *mainInfoContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIView<AWESearchFilmTVTagViewProtocol> *tagView;
@property (retain, nonatomic) UIView *middleInfoContainer;
@property (retain, nonatomic) UILabel *movieNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *subInfoLabel;
@property (retain, nonatomic) UIView *versionsView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWERatingView *ratingView;
@property (retain, nonatomic) UILabel *ratingLabel;
@property (retain, nonatomic) UILabel *ratingDetailLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) CAGradientLayer *ratingLabelLayer;
@property (retain, nonatomic) UIButton *billboardButton;
@property (retain, nonatomic) UIImageView *crownImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *rankNumberLabel;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) UIView *billboardTitleBackgroundView;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) double ratingViewRate;

- (void)viewClicked;
- (void)setSourceLabel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)p_setupUI;
- (id)rankTitleLabel;
- (id)billboardButton;
- (id)crownImageView;
- (id)billboardTitleBackgroundView;
- (void)setCrownImageView:(id)arg0;
- (void)setBillboardTitleBackgroundView:(id)arg0;
- (id)rankNumberLabel;
- (void)setBillboardButton:(id)arg0;
- (void)setRankNumberLabel:(id)arg0;
- (void)setRankTitleLabel:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)updateWithChallenge:(id)arg0;
- (id)mainInfoContainer;
- (id)middleInfoContainer;
- (id)movieNameLabel;
- (id)subInfoLabel;
- (id)versionsView;
- (id)ratingDetailLabel;
- (id)viewButtonView;
- (id)viewButtonLabel;
- (void)mainInfoContainerClicked;
- (void)showBillboardButton;
- (void)showVersionsTag:(double)arg0;
- (void)showRatingLine;
- (double)ratingViewRate;
- (id)versionItemView:(id)arg0 leftMargin:(double)arg1;
- (void)setRatingViewRate:(double)arg0;
- (void)updateRatingLabelCover;
- (id)ratingLabelLayer;
- (void)setRatingLabelLayer:(id)arg0;
- (void)cacheCurrentWatchAlbum;
- (id)currentlyWatchedEpisodeInfo;
- (void)cacheCurrentWatchEpisode:(id)arg0;
- (void)billboardClicked;
- (BOOL)currentAlbumWatched;
- (id)paymentBadgeView;
- (void)setViewButtonView:(id)arg0;
- (void)setViewButtonLabel:(id)arg0;
- (void)setMainInfoContainer:(id)arg0;
- (void)setPaymentBadgeView:(id)arg0;
- (void)setMiddleInfoContainer:(id)arg0;
- (void)setMovieNameLabel:(id)arg0;
- (void)setSubInfoLabel:(id)arg0;
- (void)setVersionsView:(id)arg0;
- (void)setRatingDetailLabel:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)init;
- (id)groupID;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)challenge;
- (id)ratingLabel;
- (void)setChallenge:(id)arg0;
- (id)sourceLabel;
- (id)ratingView;
- (void)setRatingView:(id)arg0;
- (void)setRatingLabel:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
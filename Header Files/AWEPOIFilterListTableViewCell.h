//
//     Generated by private class-dump
//

@class UIView, UIColor, UIImageView, UIButton, AWEPOICouponDescriptionView, AWEPOIFilterCateringIconContainerView, AWEUserFavoritePOIInfo, UILabel;

@interface AWEPOIFilterListTableViewCell : UITableViewCell {
    BOOL _needPlayVideo;
    UIColor *_contentBackgroundColor;
    UIColor *_contentHighlightBackgroundColor;
    UILabel *_titleLabel;
    AWEPOIFilterCateringIconContainerView *_cateringIconContainerView;
    UILabel *_priceLabel;
    UILabel *_poiNameTagLabel;
    UILabel *_poiTypeTagLabel;
    UILabel *_poiDistanceLabel;
    UIImageView *_coverView;
    UILabel *_offlineLabel;
    UIButton *_rankButton;
    UIView *_speratorView;
    AWEPOICouponDescriptionView *_couponView;
    UIImageView *_activityIconView;
    UIImageView *_playIcon;
    AWEUserFavoritePOIInfo *_model;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEPOIFilterCateringIconContainerView *cateringIconContainerView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *poiNameTagLabel;
@property (retain, nonatomic) UILabel *poiTypeTagLabel;
@property (retain, nonatomic) UILabel *poiDistanceLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *offlineLabel;
@property (retain, nonatomic) UIButton *rankButton;
@property (retain, nonatomic) UIView *speratorView;
@property (retain, nonatomic) AWEPOICouponDescriptionView *couponView;
@property (retain, nonatomic) UIImageView *activityIconView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) AWEUserFavoritePOIInfo *model;
@property (nonatomic) BOOL needPlayVideo;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIColor *contentHighlightBackgroundColor;

+ (double)cellHeightForFavoritePOIModel:(id)arg0;
+ (id)identifier;

- (void)p_setupUI;
- (id)couponView;
- (void)setCouponView:(id)arg0;
- (id)playIcon;
- (void)setPlayIcon:(id)arg0;
- (id)poiTypeTagLabel;
- (id)poiNameTagLabel;
- (id)cateringIconContainerView;
- (id)rankButton;
- (id)speratorView;
- (id)poiDistanceLabel;
- (void)configWithModel:(id)arg0 canShowPrice:(BOOL)arg1;
- (id)contentHighlightBackgroundColor;
- (void)setNeedPlayVideo:(BOOL)arg0;
- (void)configWithFavoritePOIModel:(id)arg0 canShowPrice:(BOOL)arg1;
- (void)setContentHighlightBackgroundColor:(id)arg0;
- (BOOL)needPlayVideo;
- (void)setCateringIconContainerView:(id)arg0;
- (void)setPoiNameTagLabel:(id)arg0;
- (void)setPoiTypeTagLabel:(id)arg0;
- (void)setPoiDistanceLabel:(id)arg0;
- (id)offlineLabel;
- (void)setOfflineLabel:(id)arg0;
- (void)setRankButton:(id)arg0;
- (void)setSperatorView:(id)arg0;
- (id)activityIconView;
- (void)setActivityIconView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setContentBackgroundColor:(id)arg0;
- (id)contentBackgroundColor;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end

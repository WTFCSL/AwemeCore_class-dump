//
//     Generated by private class-dump
//

@class UIImageView, AWEPaymentBadgeView, UIView, UILabel;
@protocol AWEDiscoverDMediumTagViewProtocol;

@interface AWEFavoriteGeneralCollectionViewCell : UICollectionViewCell {
    BOOL _shownFlag;
    UIImageView *_imageView;
    AWEPaymentBadgeView *_paymentBadgeView;
    UIView<AWEDiscoverDMediumTagViewProtocol> *_tagView;
    UILabel *_textLabel;
    UILabel *_offlineLabel;
    unsigned long long _type;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIView<AWEDiscoverDMediumTagViewProtocol> *tagView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *offlineLabel;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shownFlag;

+ (id)identifier;

- (void)p_setupUI;
- (void)configWithEffectModel:(id)arg0;
- (void)configWithMusicModel:(id)arg0;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:(id)arg0;
- (void)configWithGoodModel:(id)arg0;
- (id)offlineLabel;
- (void)setOfflineLabel:(id)arg0;
- (void)setShownFlag:(BOOL)arg0;
- (BOOL)shownFlag;
- (void)configWithModel:(id)arg0 favoriteType:(unsigned long long)arg1;
- (void)configWithPOIModel:(id)arg0;
- (void)configWithMixModel:(id)arg0;
- (void)configWithMovieModel:(id)arg0;
- (void)configWithChallengeModel:(id)arg0;
- (void)configWithPlayletModel:(id)arg0;
- (void)configWithBatManModel:(id)arg0;
- (void)configureWithNovelModel:(id)arg0;
- (void)setImageViewWithUrlArray:(id)arg0 defaultImage:(id)arg1;
- (BOOL)shouldTrackForShown;
- (void)didTrackForShown;
- (id)textLabel;
- (void).cxx_destruct;
- (id)imageView;
- (unsigned long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setTextLabel:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end

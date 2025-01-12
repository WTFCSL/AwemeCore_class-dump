//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESECShopScoreStyle, UILabel;

@interface IESECStoreReputationScoreView : UIView <IESECStoreReputationDefaultScoreProtocol> {
    BOOL _showRatingIcons;
    IESECShopScoreStyle *_style;
    NSString *defaultScoreText;
    UILabel *_ratingIconsLabel;
    UIImageView *_backgroundImageView;
    UILabel *_scoreLabel;
    UILabel *_defaultLabel;
}

@property (retain, nonatomic) UILabel *ratingIconsLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *defaultLabel;
@property (retain, nonatomic) IESECShopScoreStyle *style;
@property (copy, nonatomic) NSString *defaultScoreText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ratingIconsLabel;
- (id)starImagePatternsWithScore:(double)arg0;
- (id)defaultScoreText;
- (void)setDefaultScoreText:(id)arg0;
- (void)updateScoreViewWithScore:(float)arg0;
- (void)updateScoreViewWithPercent:(double)arg0;
- (void)setRatingIconsLabel:(id)arg0;
- (id)style;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStyle:(id)arg0;
- (void)setupViews;
- (void)setBackgroundImageView:(id)arg0;
- (id)defaultLabel;
- (void)setDefaultLabel:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end

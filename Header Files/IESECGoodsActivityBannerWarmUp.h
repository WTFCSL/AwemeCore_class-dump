//
//     Generated by private class-dump
//

@class UILabel;

@interface IESECGoodsActivityBannerWarmUp : IESECGoodsActivityBanner {
    UILabel *_rightTopLabel;
    UILabel *_bottomLeftLabel;
    UILabel *_bottomMiddleLabel;
    UILabel *_bottomRightLabel;
}

@property (retain, nonatomic) UILabel *rightTopLabel;
@property (retain, nonatomic) UILabel *bottomLeftLabel;
@property (retain, nonatomic) UILabel *bottomMiddleLabel;
@property (retain, nonatomic) UILabel *bottomRightLabel;

- (id)bottomLeftLabel;
- (id)bottomRightLabel;
- (void)setBottomLeftLabel:(id)arg0;
- (void)setBottomRightLabel:(id)arg0;
- (void)setupGradientLayer;
- (id)bottomMiddleLabel;
- (void)setBottomMiddleLabel:(id)arg0;
- (id)rightTopLabel;
- (void)setRightTopLabel:(id)arg0;
- (void)handleActivityUpdateNotification:(id)arg0;
- (void)setupRightViewForIPActivity;
- (void)setupRightViewForBigMode;
- (void)setupActivityLabel;
- (void)updateContent;
- (void).cxx_destruct;
- (id)bottomLabel;

@end

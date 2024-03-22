//
//     Generated by private class-dump
//

@class UILabel, CAGradientLayer;

@interface AWEPaymentVideoTagView : UIView {
    UILabel *_infoLabel;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *infoLabel;

- (void)configureUI:(long long)arg0;
- (void)setupBackground;
- (void)setupBackgroundColor:(long long)arg0;
- (id)init;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end

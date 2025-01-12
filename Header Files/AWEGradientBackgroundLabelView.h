//
//     Generated by private class-dump
//

@class CAGradientLayer, UIColor, UIImageView, NSString, UILabel, UIImage;

@interface AWEGradientBackgroundLabelView : UIView {
    UIColor *_startColor;
    UIColor *_endColor;
    NSString *_tagContentString;
    UIImage *_image;
    UIColor *_textColor;
    UILabel *_tagContentLabel;
    CAGradientLayer *_gradientLayer;
    UIImageView *_iconImageView;
}

@property (retain, nonatomic) UILabel *tagContentLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (copy, nonatomic) NSString *tagContentString;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *textColor;

- (void)setTagContentString:(id)arg0;
- (void)showTagView;
- (id)tagContentLabel;
- (id)tagContentString;
- (void)setTagContentLabel:(id)arg0;
- (id)init;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg0;
- (void)setTextColor:(id)arg0;
- (void)layoutSubviews;
- (id)iconImageView;
- (id)textColor;
- (void)setIconImageView:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (void)setStartColor:(id)arg0;
- (void)setEndColor:(id)arg0;
- (id)startColor;
- (id)endColor;

@end

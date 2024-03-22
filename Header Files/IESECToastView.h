//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, IESECToastConfig, UILabel;

@interface IESECToastView : UIView {
    IESECToastConfig *_config;
    NSString *_text;
    UIImage *_icon;
    UIImageView *_iconView;
    UILabel *_textLabel;
    double _maxTotalWidth;
    double _maxTotalHeight;
}

@property (retain, nonatomic) IESECToastConfig *config;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double maxTotalWidth;
@property (nonatomic) double maxTotalHeight;

+ (void)showText:(id)arg0;
+ (void)showText:(id)arg0 icon:(id)arg1 withConfig:(id)arg2 onView:(id)arg3;
+ (void)showText:(id)arg0 icon:(id)arg1;
+ (void)showText:(id)arg0 icon:(id)arg1 withConfig:(id)arg2;

- (void)showOnView:(id)arg0;
- (void)startShowAnimation;
- (double)maxTotalWidth;
- (void)setMaxTotalWidth:(double)arg0;
- (void)setMaxTotalHeight:(double)arg0;
- (void)setupVerticalStyle;
- (void)setupHorizontalStyle;
- (double)maxTotalHeight;
- (id)initWithConfig:(id)arg0 text:(id)arg1 icon:(id)arg2;
- (id)textLabel;
- (id)icon;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)iconView;
- (id)config;
- (void)setIconView:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;

@end

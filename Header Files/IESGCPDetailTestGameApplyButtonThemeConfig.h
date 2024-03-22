//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface IESGCPDetailTestGameApplyButtonThemeConfig : NSObject {
    BOOL _userInteractionEnabled;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_backgroundColor;
    NSString *_title;
    UIColor *_titleColor;
}

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

+ (id)testGameApplyButtonThemeConfigWithState:(unsigned long long)arg0 contentStyle:(id)arg1 themeConfig:(id)arg2;

- (void)setupDarkBackgroundStyleButtonThemeFrom:(unsigned long long)arg0 contentStyle:(id)arg1;
- (void)setupLightBackgroundStyleButtonThemeFrom:(unsigned long long)arg0 contentStyle:(id)arg1;
- (double)borderWidth;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (double)cornerRadius;
- (id)titleColor;
- (void)setBorderWidth:(double)arg0;
- (BOOL)userInteractionEnabled;
- (id)title;
- (void)setTitleColor:(id)arg0;
- (id)backgroundColor;
- (void)setCornerRadius:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setTitle:(id)arg0;

@end
//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface IESGCPDetailReserveButtonThemeConfig : NSObject {
    BOOL _userInteractionEnabled;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_backgroundColor;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_subTitle;
    UIColor *_subTitleColor;
}

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIColor *subTitleColor;

+ (id)reserveButtonThemeConfigFrom:(id)arg0 contentStyle:(id)arg1 reserveButtonState:(unsigned long long)arg2 reserveButtonData:(id)arg3;

- (void)setSubTitleColor:(id)arg0;
- (id)subTitleColor;
- (void)setupOldDetailReserveButtonThemeFrom:(unsigned long long)arg0;
- (void)setupDarkBackgroundStyleButtonThemeFrom:(unsigned long long)arg0 contentStyle:(id)arg1 isV3StructureConfig:(BOOL)arg2 reserveButtonData:(id)arg3;
- (void)setupLightBackgroundStyleButtonThemeFrom:(unsigned long long)arg0 contentStyle:(id)arg1 reserveButtonData:(id)arg2;
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
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setCornerRadius:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setTitle:(id)arg0;

@end

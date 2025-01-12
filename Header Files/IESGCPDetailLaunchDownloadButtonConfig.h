//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface IESGCPDetailLaunchDownloadButtonConfig : NSObject {
    BOOL _userInteractionEnabled;
    BOOL _isImageShow;
    BOOL _isDoubleStyle;
    double _borderWidth;
    UIColor *_borderColor;
    NSString *_title;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    NSString *_subTitle;
    UIColor *_subTitleColor;
    NSString *_iconURL;
    NSString *_subWebpURL;
    double _cornerRadius;
}

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (nonatomic) BOOL isImageShow;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *subWebpURL;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isDoubleStyle;

+ (id)betaTestDownloadButtonConfigFrom:(id)arg0 contentStyle:(id)arg1 buttonText:(id)arg2;
+ (id)cloudLaunchButtonSupportConfigFrom:(id)arg0 contentStyle:(id)arg1;
+ (id)supportDownloadConfigFrom:(id)arg0 subTitle:(id)arg1;
+ (id)notSupportDownloadConfigFrom:(id)arg0 buttonText:(id)arg1;
+ (id)heliumLaunchSupportConfigFrom:(id)arg0 contentStyle:(id)arg1;
+ (id)heliumLaunchUnSupportConfigFrom:(id)arg0 contentStyle:(id)arg1;
+ (id)launchDownloadButtonDisableCommonStyleFrom:(id)arg0;
+ (id)miniPlayButtonSupportConfigFrom:(id)arg0 contentStyle:(id)arg1;
+ (id)testGameDownloadButtonConfigFrom:(id)arg0 contentStyle:(id)arg1 buttonText:(id)arg2;
+ (id)testGameDownloadUnsupportedButtonConfigFrom:(id)arg0 buttonText:(id)arg1;

- (void)setSubTitleColor:(id)arg0;
- (id)subTitleColor;
- (id)subWebpURL;
- (BOOL)isDoubleStyle;
- (BOOL)isImageShow;
- (void)setIsImageShow:(BOOL)arg0;
- (void)setIsDoubleStyle:(BOOL)arg0;
- (void)setSubWebpURL:(id)arg0;
- (double)borderWidth;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
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

//
//     Generated by private class-dump
//

@class UIColor, NSString, UIFont, UIImage;

@interface AWETabBarInnerViewUIConfig : NSObject <AWETabBarInnerViewUIConfigLightModeProtocol> {
    BOOL _iconRounded;
    BOOL _textShouldTransForm;
    long long _status;
    NSString *_text;
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIImage *_loadingViewImage;
    UIColor *_textColor;
    UIFont *_textFont;
    double _iconAlpha;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *loadingViewImage;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) BOOL iconRounded;
@property (nonatomic) BOOL textShouldTransForm;
@property (nonatomic) double iconAlpha;
@property (readonly, nonatomic) BOOL isSelected;

+ (void)_aweLazyRegisterLoad_LightMode;

- (void)switchToLightModeWithProgress:(double)arg0;
- (void)tabBarStatusDidChanged:(long long)arg0;
- (id)normalImage;
- (void)setNormalImage:(id)arg0;
- (id)loadingViewImage;
- (void)setLoadingViewImage:(id)arg0;
- (BOOL)iconRounded;
- (void)setIconRounded:(BOOL)arg0;
- (BOOL)textShouldTransForm;
- (void)setTextShouldTransForm:(BOOL)arg0;
- (BOOL)isLightMode;
- (id)business_init;
- (void)business_tabBarStatusDidChanged:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)status;
- (void)setText:(id)arg0;
- (void)setIconAlpha:(double)arg0;
- (double)iconAlpha;
- (void)setStatus:(long long)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textFont;
- (BOOL)isSelected;
- (id)textColor;
- (void)setSelectedImage:(id)arg0;
- (id)selectedImage;
- (void)setTextFont:(id)arg0;
- (void)setLightMode:(BOOL)arg0;

@end

//
//     Generated by private class-dump
//

@class UIFont, NSString, UIColor, UIImage, NSNumber;

@interface IESGCPEmptyViewConfig : NSObject {
    BOOL _hasImage;
    BOOL _hasRemindText;
    BOOL _hasAuxiliaryText;
    BOOL _hasButton;
    NSString *_placeholderImageName;
    NSString *_placeholderImageUrl;
    NSString *_remindText;
    UIFont *_remindTextFont;
    UIColor *_remindTextColor;
    NSString *_auxiliaryText;
    UIFont *_auxiliaryTextFont;
    UIColor *_auxiliaryTextColor;
    NSString *_buttonText;
    UIColor *_buttonTextColor;
    UIFont *_buttonTextFont;
    NSNumber *_buttonCornerRadius;
    UIColor *_buttonColor;
    UIColor *_buttonBorderColor;
    NSNumber *_buttonBorderWidth;
    NSNumber *_buttonTopMargin;
    UIImage *_buttonBGImage;
    UIImage *_buttonRightIconImage;
    UIColor *_buttonRightIconTintColor;
    id /* block */ _onClickButton;
    struct CGSize { double width; double height; } _placeholderImageViewSize;
    struct CGSize { double width; double height; } _buttonSize;
    struct CGSize { double width; double height; } _buttonRightIconSize;
}

@property (nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasRemindText;
@property (nonatomic) BOOL hasAuxiliaryText;
@property (nonatomic) BOOL hasButton;
@property (retain, nonatomic) NSString *placeholderImageName;
@property (retain, nonatomic) NSString *placeholderImageUrl;
@property (nonatomic) struct CGSize { double width; double height; } placeholderImageViewSize;
@property (retain, nonatomic) NSString *remindText;
@property (retain, nonatomic) UIFont *remindTextFont;
@property (retain, nonatomic) UIColor *remindTextColor;
@property (retain, nonatomic) NSString *auxiliaryText;
@property (retain, nonatomic) UIFont *auxiliaryTextFont;
@property (retain, nonatomic) UIColor *auxiliaryTextColor;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIFont *buttonTextFont;
@property (retain, nonatomic) NSNumber *buttonCornerRadius;
@property (retain, nonatomic) UIColor *buttonColor;
@property (retain, nonatomic) UIColor *buttonBorderColor;
@property (retain, nonatomic) NSNumber *buttonBorderWidth;
@property (retain, nonatomic) NSNumber *buttonTopMargin;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (retain, nonatomic) UIImage *buttonBGImage;
@property (retain, nonatomic) UIImage *buttonRightIconImage;
@property (retain, nonatomic) UIColor *buttonRightIconTintColor;
@property (nonatomic) struct CGSize { double width; double height; } buttonRightIconSize;
@property (copy, nonatomic) id /* block */ onClickButton;

+ (id)liveNetworkErrorViewWithStyle:(long long)arg0 retryBlock:(id /* block */)arg1;

- (void)setButtonBorderColor:(id)arg0;
- (id)buttonBorderColor;
- (void)setAuxiliaryText:(id)arg0;
- (void)setAuxiliaryTextColor:(id)arg0;
- (void)setAuxiliaryTextFont:(id)arg0;
- (void)setPlaceholderImageName:(id)arg0;
- (void)setButtonTextFont:(id)arg0;
- (void)setOnClickButton:(id /* block */)arg0;
- (id /* block */)onClickButton;
- (id)remindText;
- (void)setRemindText:(id)arg0;
- (id)placeholderImageName;
- (id)buttonBorderWidth;
- (id)placeholderImageUrl;
- (id)auxiliaryText;
- (id)buttonRightIconImage;
- (id)buttonRightIconTintColor;
- (struct CGSize { double x0; double x1; })buttonRightIconSize;
- (struct CGSize { double x0; double x1; })placeholderImageViewSize;
- (id)remindTextFont;
- (id)remindTextColor;
- (id)auxiliaryTextFont;
- (id)auxiliaryTextColor;
- (id)buttonTopMargin;
- (id)buttonBGImage;
- (id)buttonTextFont;
- (void)setButtonBorderWidth:(id)arg0;
- (BOOL)hasRemindText;
- (void)setHasRemindText:(BOOL)arg0;
- (BOOL)hasAuxiliaryText;
- (void)setHasAuxiliaryText:(BOOL)arg0;
- (void)setPlaceholderImageUrl:(id)arg0;
- (void)setPlaceholderImageViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setRemindTextFont:(id)arg0;
- (void)setRemindTextColor:(id)arg0;
- (void)setButtonTopMargin:(id)arg0;
- (void)setButtonBGImage:(id)arg0;
- (void)setButtonRightIconImage:(id)arg0;
- (void)setButtonRightIconTintColor:(id)arg0;
- (void)setButtonRightIconSize:(struct CGSize { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (id)buttonTextColor;
- (void)setButtonColor:(id)arg0;
- (BOOL)hasImage;
- (id)buttonColor;
- (struct CGSize { double x0; double x1; })buttonSize;
- (id)buttonText;
- (void)setButtonTextColor:(id)arg0;
- (void)setButtonSize:(struct CGSize { double x0; double x1; })arg0;
- (id)buttonCornerRadius;
- (void)setButtonCornerRadius:(id)arg0;
- (void)setButtonText:(id)arg0;
- (BOOL)hasButton;
- (void)setHasImage:(BOOL)arg0;
- (void)setHasButton:(BOOL)arg0;

@end

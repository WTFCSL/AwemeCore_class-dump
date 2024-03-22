//
//     Generated by private class-dump
//

@class UIColor, UIFont;

@interface AWENaviBarConfiguration : NSObject {
    UIColor *_backgroundColor;
    UIColor *_naviBarTitleColor;
    UIFont *_naviBarTitleFont;
    UIFont *_MainTitleFont;
    UIColor *_MainTitleColor;
    UIFont *_subTitleFont;
    UIColor *_subTitileColor;
    double _naviBarHeight;
    double _leftFixMargin;
    double _rightFixMargin;
    double _buttonHorizontalPadding;
    double _buttonHeight;
    double _buttonMinWidth;
    double _buttonMaxWidth;
    double _itemSpace;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *naviBarTitleColor;
@property (retain, nonatomic) UIFont *naviBarTitleFont;
@property (retain, nonatomic) UIFont *MainTitleFont;
@property (retain, nonatomic) UIColor *MainTitleColor;
@property (retain, nonatomic) UIFont *subTitleFont;
@property (retain, nonatomic) UIColor *subTitileColor;
@property (nonatomic) double naviBarHeight;
@property (nonatomic) double leftFixMargin;
@property (nonatomic) double rightFixMargin;
@property (nonatomic) double buttonHorizontalPadding;
@property (readonly, nonatomic) double leftContentTotalMargin;
@property (readonly, nonatomic) double rightContentTotalMargin;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonMinWidth;
@property (nonatomic) double buttonMaxWidth;
@property (nonatomic) double itemSpace;

+ (id)sharedConfiguration;

- (void)setButtonMaxWidth:(double)arg0;
- (id)immersiveImageForButtonPresetStyle:(id)arg0;
- (id)imageForButtonPresetStyle:(id)arg0;
- (void)setLeftFixMargin:(double)arg0;
- (void)setRightFixMargin:(double)arg0;
- (void)setButtonMinWidth:(double)arg0;
- (void)setNaviBarTitleColor:(id)arg0;
- (void)setNaviBarTitleFont:(id)arg0;
- (void)setMainTitleFont:(id)arg0;
- (void)setMainTitleColor:(id)arg0;
- (void)setSubTitileColor:(id)arg0;
- (void)setNaviBarHeight:(double)arg0;
- (id)imageForButtonPresetStyle:(id)arg0 naviBarStyle:(unsigned long long)arg1;
- (id)styleImageMap;
- (double)leftFixMargin;
- (double)rightFixMargin;
- (id)constImageForButtonPresetStyle:(id)arg0;
- (double)leftContentTotalMargin;
- (double)rightContentTotalMargin;
- (id)naviBarTitleColor;
- (id)naviBarTitleFont;
- (id)MainTitleFont;
- (id)MainTitleColor;
- (id)subTitileColor;
- (double)naviBarHeight;
- (double)buttonMinWidth;
- (double)buttonMaxWidth;
- (double)itemSpace;
- (void)setItemSpace:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)buttonHeight;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (double)buttonHorizontalPadding;
- (id)subTitleFont;
- (void)setSubTitleFont:(id)arg0;
- (void)setButtonHeight:(double)arg0;
- (void)setButtonHorizontalPadding:(double)arg0;

@end

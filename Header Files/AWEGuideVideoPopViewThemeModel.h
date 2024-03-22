//
//     Generated by private class-dump
//

@class UIColor, UIImage, NSURL;

@interface AWEGuideVideoPopViewThemeModel : NSObject {
    BOOL _hasRemeberTips;
    BOOL _remeberTipsChecked;
    long long _popViewStyle;
    UIColor *_leftBtnBgColor;
    UIColor *_leftBtnTitleColor;
    UIColor *_rightBtnBgColor;
    UIColor *_rightBtnTitleColor;
    UIImage *_rightBtnIcon;
    NSURL *_rightBtnIconUrl;
}

@property (nonatomic) long long popViewStyle;
@property (retain, nonatomic) UIColor *leftBtnBgColor;
@property (retain, nonatomic) UIColor *leftBtnTitleColor;
@property (retain, nonatomic) UIColor *rightBtnBgColor;
@property (retain, nonatomic) UIColor *rightBtnTitleColor;
@property (retain, nonatomic) UIImage *rightBtnIcon;
@property (retain, nonatomic) NSURL *rightBtnIconUrl;
@property (nonatomic) BOOL hasRemeberTips;
@property (nonatomic) BOOL remeberTipsChecked;

+ (id)qingtaoThemeModelWithPopViewStyle:(long long)arg0;
+ (id)xiguaThemeModelWithPopViewStyle:(long long)arg0;

- (BOOL)hasRemeberTips;
- (long long)popViewStyle;
- (id)rightBtnTitleColor;
- (id)rightBtnBgColor;
- (id)rightBtnIcon;
- (id)rightBtnIconUrl;
- (id)leftBtnTitleColor;
- (id)leftBtnBgColor;
- (BOOL)remeberTipsChecked;
- (void)setPopViewStyle:(long long)arg0;
- (void)setLeftBtnBgColor:(id)arg0;
- (void)setLeftBtnTitleColor:(id)arg0;
- (void)setRightBtnBgColor:(id)arg0;
- (void)setRightBtnTitleColor:(id)arg0;
- (void)setRightBtnIcon:(id)arg0;
- (void)setRightBtnIconUrl:(id)arg0;
- (void)setHasRemeberTips:(BOOL)arg0;
- (void)setRemeberTipsChecked:(BOOL)arg0;
- (void).cxx_destruct;

@end

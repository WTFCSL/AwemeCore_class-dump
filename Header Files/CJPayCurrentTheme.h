//
//     Generated by private class-dump
//

@class CJPayDeskTheme;

@interface CJPayCurrentTheme : NSObject {
    CJPayDeskTheme *_currentTheme;
    CJPayDeskTheme *_withDrawTheme;
    long long _showStyle;
}

@property (retain, nonatomic) CJPayDeskTheme *currentTheme;
@property (retain, nonatomic) CJPayDeskTheme *withDrawTheme;
@property (nonatomic) long long showStyle;

+ (id)shared;

- (long long)showStyle;
- (void)setShowStyle:(long long)arg0;
- (void)setCurrentTheme:(id)arg0;
- (id)withDrawTheme;
- (void)setWithDrawTheme:(id)arg0;
- (void).cxx_destruct;
- (id)currentTheme;
- (id)bgColor;
- (id)fontColor;

@end

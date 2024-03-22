//
//     Generated by private class-dump
//

@class UIColor, NSMutableDictionary, NSDictionary, BDNovelReaderFont, BDNovelReaderTheme;

@interface BDNovelReaderConfig : BDReaderConfig {
    BOOL _isEyesCareEnabled;
    BOOL _hasReadHistory;
    double _screenBrightness;
    NSMutableDictionary *_allThemeConfigs;
    BDNovelReaderFont *_font;
    NSDictionary *_ttsHighLightColors;
}

@property (copy, nonatomic) NSDictionary *ttsHighLightColors;
@property (nonatomic) BOOL isEyesCareEnabled;
@property (nonatomic) double screenBrightness;
@property (retain, nonatomic) NSMutableDictionary *allThemeConfigs;
@property (readonly, nonatomic) UIColor *ttsHighLightColor;
@property (readonly, nonatomic) BOOL isDarkMode;
@property (readonly, nonatomic) BOOL isScrollMode;
@property (nonatomic) BOOL hasReadHistory;
@property (copy, nonatomic) BDNovelReaderFont *font;
@property (readonly, nonatomic) BDNovelReaderTheme *currentTheme;

+ (BOOL)isValidFontSize:(double)arg0;
+ (id)fontSizeList;
+ (id)defaultConfig;

- (BOOL)isScrollMode;
- (void)innerConfigBackground:(unsigned long long)arg0;
- (id)allThemeConfigs;
- (id)ttsHighLightColors;
- (void)setAllThemeConfigs:(id)arg0;
- (BOOL)isDefaultFontSize;
- (void)adapterScaleIfNeed;
- (BOOL)hasReadHistory;
- (void)setTtsHighLightColors:(id)arg0;
- (void)setHasReadHistory:(BOOL)arg0;
- (id)ttsHighLightColor;
- (BOOL)isEyesCareEnabled;
- (id)themeConfigWithType:(unsigned long long)arg0;
- (id)currentBackgroundKeyString;
- (id)currentPageModeKeyString;
- (void)setIsEyesCareEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setBackgroundType:(unsigned long long)arg0;
- (void)setScreenBrightness:(double)arg0;
- (id)font;
- (void)setFont:(id)arg0;
- (double)screenBrightness;
- (id)currentTheme;
- (BOOL)isDarkMode;

@end

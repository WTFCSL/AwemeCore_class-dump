//
//     Generated by private class-dump
//

@class UIColor;

@interface AWESearchUIInfoModel : AWEBaseApiModel {
    BOOL _hideSeparator;
    BOOL _activityCardBottom;
    BOOL _hideTitle;
    BOOL _inFloatingBgColor;
    BOOL _isInBackground;
    BOOL _isInRectangleBackground;
    BOOL _isWaterfallLayout;
    BOOL _dividerTransparentNeedClear;
    BOOL _enableCardStrongStyle;
    BOOL _isSingleRange;
    UIColor *_backgroundColorLight;
    UIColor *_backgroundColorDark;
    long long _lightThemeStyle;
    long long _darkThemeStyle;
    unsigned long long _suggestWordsConfig;
    unsigned long long _cornerType;
    long long _qualityStyleCornerType;
}

@property (retain, nonatomic) UIColor *backgroundColorLight;
@property (retain, nonatomic) UIColor *backgroundColorDark;
@property (nonatomic) BOOL hideSeparator;
@property (nonatomic) BOOL activityCardBottom;
@property (nonatomic) BOOL hideTitle;
@property (nonatomic) BOOL inFloatingBgColor;
@property (nonatomic) long long lightThemeStyle;
@property (nonatomic) long long darkThemeStyle;
@property (nonatomic) unsigned long long suggestWordsConfig;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isInRectangleBackground;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL isWaterfallLayout;
@property (nonatomic) BOOL dividerTransparentNeedClear;
@property (nonatomic) BOOL enableCardStrongStyle;
@property (nonatomic) long long qualityStyleCornerType;
@property (nonatomic) BOOL isSingleRange;

+ (id)backgroundColorLightJSONTransformer;
+ (id)backgroundColorDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsInBackground:(BOOL)arg0;
- (BOOL)activityCardBottom;
- (void)setActivityCardBottom:(BOOL)arg0;
- (BOOL)enableCardStrongStyle;
- (void)setEnableCardStrongStyle:(BOOL)arg0;
- (long long)lightThemeStyle;
- (long long)darkThemeStyle;
- (unsigned long long)suggestWordsConfig;
- (void)setLightThemeStyle:(long long)arg0;
- (void)setDarkThemeStyle:(long long)arg0;
- (BOOL)isInRectangleBackground;
- (BOOL)isWaterfallLayout;
- (BOOL)dividerTransparentNeedClear;
- (void)setIsInRectangleBackground:(BOOL)arg0;
- (BOOL)inFloatingBgColor;
- (void)setInFloatingBgColor:(BOOL)arg0;
- (void)setIsWaterfallLayout:(BOOL)arg0;
- (void)setDividerTransparentNeedClear:(BOOL)arg0;
- (long long)qualityStyleCornerType;
- (void)setQualityStyleCornerType:(long long)arg0;
- (BOOL)isSingleRange;
- (void)setIsSingleRange:(BOOL)arg0;
- (void)setSuggestWordsConfig:(unsigned long long)arg0;
- (void)setBackgroundColorLight:(id)arg0;
- (id)backgroundColorDark;
- (id)backgroundColorLight;
- (void).cxx_destruct;
- (void)setBackgroundColorDark:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isInBackground;
- (BOOL)hideTitle;
- (void)setHideTitle:(BOOL)arg0;
- (void)setHideSeparator:(BOOL)arg0;
- (BOOL)hideSeparator;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;

@end
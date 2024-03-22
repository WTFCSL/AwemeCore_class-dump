//
//     Generated by private class-dump
//

@interface IESLiveDanmakuSettingConfiguration : NSObject {
    BOOL _giftSwitchOn;
    BOOL _carnivalSwitchOn;
    BOOL _alreadyHasLocalConfig;
    long long _areaType;
    long long _fontSizeType;
    long long _alphaPercentValue;
    unsigned long long _scene;
}

@property (nonatomic) BOOL alreadyHasLocalConfig;
@property (nonatomic) long long areaType;
@property (nonatomic) long long fontSizeType;
@property (nonatomic) long long alphaPercentValue;
@property (nonatomic) BOOL giftSwitchOn;
@property (nonatomic) BOOL carnivalSwitchOn;
@property (nonatomic) unsigned long long scene;

+ (id)hasLocalKey;
+ (id)areaTypeKey;
+ (id)fontSizeTypeKey;
+ (id)alphaPercentKey;
+ (id)giftSwitchOnKey;
+ (id)carnivalSwitchOnKey;
+ (id)localConfigIfExist;
+ (id)identifier;

- (long long)fontSizeType;
- (long long)alphaPercentValue;
- (void)setFontSizeType:(long long)arg0;
- (void)setAlreadyHasLocalConfig:(BOOL)arg0;
- (void)setAlphaPercentValue:(long long)arg0;
- (void)setGiftSwitchOn:(BOOL)arg0;
- (void)setCarnivalSwitchOn:(BOOL)arg0;
- (void)validateLocalConfigIfNeeded;
- (BOOL)giftSwitchOn;
- (BOOL)carnivalSwitchOn;
- (BOOL)alreadyHasLocalConfig;
- (id)init;
- (void)setScene:(unsigned long long)arg0;
- (unsigned long long)scene;
- (long long)areaType;
- (void)setAreaType:(long long)arg0;

@end

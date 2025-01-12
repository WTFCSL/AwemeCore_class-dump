//
//     Generated by private class-dump
//

@class AWEThemeChooseTimeModel;

@interface AWESettingThemeManagerModel : NSObject <NSCoding, NSCopying> {
    BOOL _autoChange;
    BOOL _lastModeLightEnable;
    int _lastABValue;
    unsigned long long _changeType;
    AWEThemeChooseTimeModel *_darkTime;
    AWEThemeChooseTimeModel *_lightTime;
}

@property (nonatomic) BOOL autoChange;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) AWEThemeChooseTimeModel *darkTime;
@property (retain, nonatomic) AWEThemeChooseTimeModel *lightTime;
@property (nonatomic) BOOL lastModeLightEnable;
@property (nonatomic) int lastABValue;

- (BOOL)autoChange;
- (id)darkTime;
- (id)lightTime;
- (BOOL)lastModeLightEnable;
- (int)lastABValue;
- (void)setAutoChange:(BOOL)arg0;
- (void)setDarkTime:(id)arg0;
- (void)setLightTime:(id)arg0;
- (void)setLastModeLightEnable:(BOOL)arg0;
- (void)setLastABValue:(int)arg0;
- (unsigned long long)changeType;
- (void)setChangeType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end

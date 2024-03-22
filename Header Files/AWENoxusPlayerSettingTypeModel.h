//
//     Generated by private class-dump
//

@class NSString;

@interface AWENoxusPlayerSettingTypeModel : NSObject {
    BOOL _isFocused;
    BOOL _isGuide;
    BOOL _isFinalGuide;
    BOOL _isRemotePlay;
    unsigned long long _type;
    unsigned long long _speedType;
    long long _newSpeedType;
    unsigned long long _pixelType;
    double _value;
    NSString *_title;
    NSString *_tag;
    NSString *_minRatio;
    NSString *_eid;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long speedType;
@property (nonatomic) long long newSpeedType;
@property (nonatomic) unsigned long long pixelType;
@property (nonatomic) double value;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isFocused;
@property (nonatomic) BOOL isGuide;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *minRatio;
@property (copy, nonatomic) NSString *eid;
@property (nonatomic) BOOL isFinalGuide;
@property (nonatomic) BOOL isRemotePlay;

- (BOOL)isRemotePlay;
- (void)setIsRemotePlay:(BOOL)arg0;
- (void)setIsGuide:(BOOL)arg0;
- (BOOL)isGuide;
- (unsigned long long)speedType;
- (void)setSpeedType:(unsigned long long)arg0;
- (void)setIsFinalGuide:(BOOL)arg0;
- (long long)newSpeedType;
- (BOOL)isFinalGuide;
- (void)setNewSpeedType:(long long)arg0;
- (BOOL)isFocused;
- (void).cxx_destruct;
- (double)value;
- (unsigned long long)type;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setValue:(double)arg0;
- (void)setTitle:(id)arg0;
- (id)eid;
- (void)setEid:(id)arg0;
- (void)setIsFocused:(BOOL)arg0;
- (unsigned long long)pixelType;
- (id)minRatio;
- (void)setMinRatio:(id)arg0;
- (void)setPixelType:(unsigned long long)arg0;

@end
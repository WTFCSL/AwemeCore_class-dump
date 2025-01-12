//
//     Generated by private class-dump
//

@class NSString, IESEffectModel;

@interface AWETeenPropPickerItem : NSObject <NSCopying> {
    BOOL _selected;
    unsigned long long _type;
    NSString *_effectId;
    NSString *_title;
    NSString *_coverImageName;
    NSString *_guideText;
    NSString *_tabCode;
    NSString *_trackerShootType;
    IESEffectModel *_effect;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverImageName;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *tabCode;
@property (copy, nonatomic) NSString *trackerShootType;
@property (retain, nonatomic) IESEffectModel *effect;

- (void)setGuideText:(id)arg0;
- (id)guideText;
- (id)tabCode;
- (id)trackerShootType;
- (id)initWithType:(unsigned long long)arg0 effect:(id)arg1;
- (void)setCoverImageName:(id)arg0;
- (void)setTabCode:(id)arg0;
- (void)setTrackerShootType:(id)arg0;
- (id)coverImageName;
- (id)effect;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)type;
- (id)initWithType:(unsigned long long)arg0;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isSelected;
- (void)setTitle:(id)arg0;
- (id)effectId;
- (void)setEffectId:(id)arg0;

@end

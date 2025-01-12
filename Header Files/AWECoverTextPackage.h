//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWECoverTextPackage : MTLModel <MTLJSONSerializing> {
    unsigned long long _layoutType;
    unsigned long long _orientation;
    long long _paddingStart;
    long long _paddingEnd;
    long long _paddingTop;
    long long _paddingBottom;
    double _rotation;
    NSArray *_textConfigs;
    NSString *_effectPath;
}

@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) long long paddingStart;
@property (nonatomic) long long paddingEnd;
@property (nonatomic) long long paddingTop;
@property (nonatomic) long long paddingBottom;
@property (nonatomic) double rotation;
@property (retain, nonatomic) NSArray *textConfigs;
@property (copy, nonatomic) NSString *effectPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)effectPath;
- (void)setEffectPath:(id)arg0;
- (void)setPaddingEnd:(long long)arg0;
- (void)setPaddingStart:(long long)arg0;
- (id)textConfigs;
- (long long)paddingStart;
- (long long)paddingEnd;
- (void)setTextConfigs:(id)arg0;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (long long)paddingTop;
- (void)setPaddingBottom:(long long)arg0;
- (unsigned long long)orientation;
- (void)setPaddingTop:(long long)arg0;
- (long long)paddingBottom;
- (double)rotation;
- (void)setOrientation:(unsigned long long)arg0;

@end

//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface AWESearchTagText : MTLModel <MTLJSONSerializing> {
    int _showStyle;
    NSArray *_segments;
    NSString *_backgroundColor;
    NSString *_borderColor;
    NSArray *_gradientColors;
    NSNumber *_marginTop;
    NSNumber *_marginBottom;
    NSNumber *_marginLeft;
    NSNumber *_marginRight;
    NSNumber *_radius;
    NSNumber *_fontSize;
}

@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) int showStyle;
@property (retain, nonatomic) NSNumber *marginTop;
@property (retain, nonatomic) NSNumber *marginBottom;
@property (retain, nonatomic) NSNumber *marginLeft;
@property (retain, nonatomic) NSNumber *marginRight;
@property (retain, nonatomic) NSNumber *radius;
@property (retain, nonatomic) NSNumber *fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (int)showStyle;
- (void)setShowStyle:(int)arg0;
- (id)segments;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setFontSize:(id)arg0;
- (void)setBorderColor:(id)arg0;
- (id)radius;
- (id)fontSize;
- (void)setSegments:(id)arg0;
- (id)backgroundColor;
- (void)setRadius:(id)arg0;
- (id)gradientColors;
- (void)setBackgroundColor:(id)arg0;
- (void)setGradientColors:(id)arg0;
- (id)marginTop;
- (void)setMarginTop:(id)arg0;
- (id)marginRight;
- (void)setMarginRight:(id)arg0;
- (id)marginBottom;
- (void)setMarginBottom:(id)arg0;
- (id)marginLeft;
- (void)setMarginLeft:(id)arg0;

@end

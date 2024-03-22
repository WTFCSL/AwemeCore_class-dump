//
//     Generated by private class-dump
//

@class NSString, CSSPrimitiveValue;

@interface SVGLength : NSObject {
    int unitType;
    float value;
    float valueInSpecifiedUnits;
    NSString *valueAsString;
    CSSPrimitiveValue *internalCSSPrimitiveValue;
}

@property (retain, nonatomic) CSSPrimitiveValue *internalCSSPrimitiveValue;
@property (readonly, nonatomic) int unitType;
@property (nonatomic) float value;
@property (nonatomic) float valueInSpecifiedUnits;
@property (retain, nonatomic) NSString *valueAsString;

+ (float)pixelsPerInchForCurrentDevice;
+ (id)svgLengthZero;
+ (id)svgLengthFromNSString:(id)arg0;
+ (void)initialize;

- (float)pixelsValueWithDimension:(float)arg0;
- (void)setInternalCSSPrimitiveValue:(id)arg0;
- (id)internalCSSPrimitiveValue;
- (id)initWithCSSPrimitiveValue:(id)arg0;
- (float)valueInSpecifiedUnits;
- (void)setValueInSpecifiedUnits:(float)arg0;
- (void)setValueAsString:(id)arg0;
- (float)pixelsValue;
- (id)init;
- (id)valueAsString;
- (float)numberValue;
- (void).cxx_destruct;
- (float)value;
- (void)setValue:(float)arg0;
- (int)unitType;

@end

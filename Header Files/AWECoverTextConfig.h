//
//     Generated by private class-dump
//

@class AWECoverTextShadow, NSString, NSArray, UIFont;

@interface AWECoverTextConfig : MTLModel <MTLJSONSerializing> {
    double _paddingTop;
    double _paddingStart;
    double _paddingBottom;
    double _paddingEnd;
    long long _layerWeight;
    double _marginStart;
    double _marginEnd;
    double _marginTop;
    double _marginBottom;
    NSString *_fontID;
    double _fontSize;
    unsigned long long _fontStyle;
    unsigned long long _gradientType;
    unsigned long long _gradientOrientation;
    NSString *_colorStart;
    NSString *_colorEnd;
    unsigned long long _drawMode;
    long long _numberOfLines;
    unsigned long long _textAlignment;
    double _lineSpaceMult;
    double _lineSpaceAdd;
    double _letterSpaceMult;
    NSString *_placeHolderString;
    NSString *_placeHolderTextColor;
    NSString *_inputCursorColor;
    NSArray *_strokeConfigs;
    NSArray *_coverConfigs;
    NSArray *_backgroundCofigs;
    AWECoverTextShadow *_shadowConfig;
    double _minWidth;
    double _minHeight;
    UIFont *_font;
}

@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingStart;
@property (nonatomic) double paddingBottom;
@property (nonatomic) double paddingEnd;
@property (nonatomic) long long layerWeight;
@property (nonatomic) double marginStart;
@property (nonatomic) double marginEnd;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (copy, nonatomic) NSString *fontID;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic) unsigned long long gradientType;
@property (nonatomic) unsigned long long gradientOrientation;
@property (copy, nonatomic) NSString *colorStart;
@property (copy, nonatomic) NSString *colorEnd;
@property (nonatomic) unsigned long long drawMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) unsigned long long textAlignment;
@property (nonatomic) double lineSpaceMult;
@property (nonatomic) double lineSpaceAdd;
@property (nonatomic) double letterSpaceMult;
@property (copy, nonatomic) NSString *placeHolderString;
@property (copy, nonatomic) NSString *placeHolderTextColor;
@property (copy, nonatomic) NSString *inputCursorColor;
@property (retain, nonatomic) NSArray *strokeConfigs;
@property (retain, nonatomic) NSArray *coverConfigs;
@property (retain, nonatomic) NSArray *backgroundCofigs;
@property (retain, nonatomic) AWECoverTextShadow *shadowConfig;
@property (nonatomic) double minWidth;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strokeConfigsJSONTransformer;
+ (id)coverConfigsJSONTransformer;
+ (id)backgroundCofigsJSONTransformer;
+ (id)shadowConfigJSONTransformer;
+ (id)generateFontFromEffectModelPath:(id)arg0 fontSize:(double)arg1 style:(unsigned long long)arg2;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setPaddingEnd:(double)arg0;
- (void)setPaddingStart:(double)arg0;
- (void)setMarginEnd:(double)arg0;
- (void)setMarginStart:(double)arg0;
- (void)setFontID:(id)arg0;
- (id)fontID;
- (long long)layerWeight;
- (void)setLayerWeight:(long long)arg0;
- (void)setPlaceHolderString:(id)arg0;
- (id)placeHolderString;
- (id)placeHolderTextColor;
- (void)setPlaceHolderTextColor:(id)arg0;
- (double)marginStart;
- (double)marginEnd;
- (double)paddingStart;
- (double)paddingEnd;
- (id)colorStart;
- (void)setColorStart:(id)arg0;
- (id)colorEnd;
- (void)setColorEnd:(id)arg0;
- (double)lineSpaceMult;
- (void)setLineSpaceMult:(double)arg0;
- (double)lineSpaceAdd;
- (void)setLineSpaceAdd:(double)arg0;
- (double)letterSpaceMult;
- (void)setLetterSpaceMult:(double)arg0;
- (id)inputCursorColor;
- (void)setInputCursorColor:(id)arg0;
- (id)strokeConfigs;
- (void)setStrokeConfigs:(id)arg0;
- (id)coverConfigs;
- (void)setCoverConfigs:(id)arg0;
- (id)backgroundCofigs;
- (void)setBackgroundCofigs:(id)arg0;
- (id)shadowConfig;
- (void)setShadowConfig:(id)arg0;
- (void)setFontStyle:(unsigned long long)arg0;
- (unsigned long long)fontStyle;
- (double)minWidth;
- (void).cxx_destruct;
- (double)paddingTop;
- (void)setFontSize:(double)arg0;
- (void)setPaddingBottom:(double)arg0;
- (double)fontSize;
- (void)setMinHeight:(double)arg0;
- (void)setPaddingTop:(double)arg0;
- (double)paddingBottom;
- (unsigned long long)textAlignment;
- (id)font;
- (long long)numberOfLines;
- (void)setMinWidth:(double)arg0;
- (void)setNumberOfLines:(long long)arg0;
- (void)setFont:(id)arg0;
- (void)setTextAlignment:(unsigned long long)arg0;
- (double)minHeight;
- (double)marginTop;
- (void)setMarginTop:(double)arg0;
- (unsigned long long)drawMode;
- (void)setDrawMode:(unsigned long long)arg0;
- (unsigned long long)gradientType;
- (double)marginBottom;
- (void)setMarginBottom:(double)arg0;
- (void)setGradientType:(unsigned long long)arg0;
- (unsigned long long)gradientOrientation;
- (void)setGradientOrientation:(unsigned long long)arg0;

@end

//
//     Generated by private class-dump
//

@class UIFont, NSString, IESSoloKTVTemplateBorderModel, NSDictionary, NSMutableArray;

@interface IESSoloKTVTemplateAttributeModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    NSString *_fontURL;
    double _fontSizePX;
    long long _alignment;
    NSMutableArray *_colors;
    IESSoloKTVTemplateBorderModel *_border;
    UIFont *_font;
    UIFont *_fontPX;
}

@property (retain, nonatomic) NSString *fontURL;
@property (nonatomic) double fontSizePX;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSMutableArray *colors;
@property (retain, nonatomic) IESSoloKTVTemplateBorderModel *border;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *fontPX;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorsJSONTransformer;
+ (id)borderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)fontPX;
- (void)setFontPX:(id)arg0;
- (double)fontSizePX;
- (void)setFontSizePX:(double)arg0;
- (long long)getNSAlignment;
- (id)getColorFrame:(int)arg0;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (void)setAlignment:(long long)arg0;
- (long long)alignment;
- (id)colors;
- (void)setBorder:(id)arg0;
- (id)font;
- (id)border;
- (void)setFont:(id)arg0;
- (void)setFontURL:(id)arg0;
- (id)fontURL;

@end
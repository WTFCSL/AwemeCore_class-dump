//
//     Generated by private class-dump
//

@class UIColor, NSMutableDictionary, NSString, NSDictionary;

@interface AWEPOIDetailSkinConfig : MTLModel <MTLJSONSerializing> {
    UIColor *_primaryColor;
    UIColor *_textInverseColor;
    UIColor *_backgroundColor;
    UIColor *_pageBackgroundColor;
    UIColor *_imagePlaceholderColor;
    NSString *_backgroundTextureUrl;
    NSString *_font;
    NSString *_cardBorderRadius;
    NSString *_buttonBorderRadius;
    NSDictionary *_rawData;
    NSDictionary *_rootData;
    NSMutableDictionary *_subSkinConfigs;
}

@property (retain, nonatomic) NSMutableDictionary *subSkinConfigs;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *textInverseColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *pageBackgroundColor;
@property (retain, nonatomic) UIColor *imagePlaceholderColor;
@property (copy, nonatomic) NSString *backgroundTextureUrl;
@property (copy, nonatomic) NSString *font;
@property (copy, nonatomic) NSString *cardBorderRadius;
@property (copy, nonatomic) NSString *buttonBorderRadius;
@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSDictionary *rootData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)backgroundColorJSONTransformer;
+ (id)urlStringWithValue:(id)arg0;
+ (id)primaryColorJSONTransformer;
+ (id)textInverseColorJSONTransformer;
+ (id)backgroundTextureUrlJSONTransformer;
+ (id)pageBackgroundColorJSONTransformer;
+ (id)imagePlaceholderColorJSONTransformer;

- (id)imgUrlWithConfigKey:(id)arg0;
- (id)configValueFor:(id)arg0;
- (id)pageBackgroundColor;
- (id)backgroundTextureUrl;
- (id)imagePlaceholderColor;
- (id)colorWithConfigKey:(id)arg0;
- (id)buttonBorderRadius;
- (id)textInverseColor;
- (id)getSkin:(id)arg0;
- (id)subSkinConfigs;
- (id)rootData;
- (void)setRootData:(id)arg0;
- (void)setTextInverseColor:(id)arg0;
- (void)setPageBackgroundColor:(id)arg0;
- (void)setImagePlaceholderColor:(id)arg0;
- (void)setBackgroundTextureUrl:(id)arg0;
- (id)cardBorderRadius;
- (void)setCardBorderRadius:(id)arg0;
- (void)setButtonBorderRadius:(id)arg0;
- (void)setSubSkinConfigs:(id)arg0;
- (id)primaryColor;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (void)setPrimaryColor:(id)arg0;
- (id)font;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (void)setFont:(id)arg0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;

@end

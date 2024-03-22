//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEBottomViewConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_leftImage;
    NSString *_bgImage;
    NSString *_bgColor;
    NSString *_title;
    NSString *_subTitle;
    NSString *_textBtn;
    NSString *_colorBtn;
    NSString *_bgColorBtn;
    NSString *_bdColorBtn;
    NSString *_bdWidthButton;
    NSString *_schema;
    NSArray *_eventModels;
}

@property (copy, nonatomic) NSString *leftImage;
@property (copy, nonatomic) NSString *bgImage;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *textBtn;
@property (copy, nonatomic) NSString *colorBtn;
@property (copy, nonatomic) NSString *bgColorBtn;
@property (copy, nonatomic) NSString *bdColorBtn;
@property (copy, nonatomic) NSString *bdWidthButton;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *eventModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)eventModels;
- (id)textBtn;
- (void)setTextBtn:(id)arg0;
- (id)colorBtn;
- (void)setColorBtn:(id)arg0;
- (id)bgColorBtn;
- (void)setBgColorBtn:(id)arg0;
- (id)bdColorBtn;
- (void)setBdColorBtn:(id)arg0;
- (id)bdWidthButton;
- (void)setBdWidthButton:(id)arg0;
- (void)setEventModels:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)schema;
- (void)setTitle:(id)arg0;
- (id)leftImage;
- (void)setLeftImage:(id)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end

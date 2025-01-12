//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEVideoHallPopupInfoModel : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_img;
    NSString *_title;
    NSString *_intro;
    NSString *_buttonText;
    NSString *_schema;
}

@property (retain, nonatomic) AWEURLModel *img;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *intro;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIntro:(id)arg0;
- (void)setImg:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)buttonText;
- (id)schema;
- (void)setTitle:(id)arg0;
- (void)setButtonText:(id)arg0;
- (id)img;
- (id)intro;

@end

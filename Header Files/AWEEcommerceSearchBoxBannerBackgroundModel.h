//
//     Generated by private class-dump
//

@class NSString, AWESearchBackgroundGradientModel, AWEURLModel;

@interface AWEEcommerceSearchBoxBannerBackgroundModel : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_singleBackgroundImg;
    AWEURLModel *_doubleBackgroundImg;
    NSString *_backgroundColor;
    AWESearchBackgroundGradientModel *_bgGradientColor;
}

@property (retain, nonatomic) AWEURLModel *singleBackgroundImg;
@property (retain, nonatomic) AWEURLModel *doubleBackgroundImg;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *bgGradientColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgGradientColorJSONTransformer;
+ (id)singleBackgroundImgJSONTransformer;
+ (id)doubleBackgroundImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bgGradientColor;
- (void)setBgGradientColor:(id)arg0;
- (id)singleBackgroundImg;
- (void)setSingleBackgroundImg:(id)arg0;
- (id)doubleBackgroundImg;
- (void)setDoubleBackgroundImg:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;

@end

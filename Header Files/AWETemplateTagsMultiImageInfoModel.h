//
//     Generated by private class-dump
//

@class NSArray, AWETemplateTagsMultiImageStyleModel;

@interface AWETemplateTagsMultiImageInfoModel : AWEBaseApiModel {
    NSArray *_images;
    AWETemplateTagsMultiImageStyleModel *_style;
}

@property (copy, nonatomic) NSArray *images;
@property (retain, nonatomic) AWETemplateTagsMultiImageStyleModel *style;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (id)style;
- (id)images;
- (void).cxx_destruct;
- (void)setStyle:(id)arg0;
- (void)setImages:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString, AWETemplateTagsTextInfoStyleModel;

@interface AWETemplateTagsTextInfoModel : AWEBaseApiModel {
    NSString *_content;
    AWETemplateTagsTextInfoStyleModel *_style;
}

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWETemplateTagsTextInfoStyleModel *style;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)style;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setStyle:(id)arg0;

@end

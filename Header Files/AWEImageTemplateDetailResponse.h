//
//     Generated by private class-dump
//

@class AWEImageTemplateDetailModel;

@interface AWEImageTemplateDetailResponse : AWEBaseApiModel {
    AWEImageTemplateDetailModel *_templateDetail;
}

@property (retain, nonatomic) AWEImageTemplateDetailModel *templateDetail;

+ (id)templateDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)templateDetail;
- (void)setTemplateDetail:(id)arg0;
- (void).cxx_destruct;

@end
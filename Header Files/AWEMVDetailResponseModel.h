//
//     Generated by private class-dump
//

@class AWEAweMVTemplateModel;

@interface AWEMVDetailResponseModel : AWEBaseApiModel {
    AWEAweMVTemplateModel *_templateModel;
}

@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;

+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;

@end

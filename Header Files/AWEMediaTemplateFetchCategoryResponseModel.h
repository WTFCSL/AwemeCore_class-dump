//
//     Generated by private class-dump
//

@class AWEMediaTemplateCategoryDataResponseModel;

@interface AWEMediaTemplateFetchCategoryResponseModel : AWEBaseApiModel {
    AWEMediaTemplateCategoryDataResponseModel *_categoryData;
}

@property (retain, nonatomic) AWEMediaTemplateCategoryDataResponseModel *categoryData;

+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setCategoryData:(id)arg0;
- (id)categoryData;

@end

//
//     Generated by private class-dump
//

@class NSArray;

@interface ACCMVCategoryReponseModel : ACCBaseApiModel {
    NSArray *_categories;
}

@property (copy, nonatomic) NSArray *categories;

+ (id)categoriesJSONTransformer;
+ (id)createFromLokiCategories:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)categories;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;

@end
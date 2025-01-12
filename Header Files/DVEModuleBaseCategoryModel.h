//
//     Generated by private class-dump
//

@class NSString, DVEEffectCategory;

@interface DVEModuleBaseCategoryModel : NSObject <DVEPickerCategoryModel> {
    double cachedWidth;
    DVEEffectCategory *_category;
}

@property (retain, nonatomic) DVEEffectCategory *category;
@property (nonatomic) double cachedWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadModelListIfNeeded;
- (BOOL)isLoading;
- (double)cachedWidth;
- (id)category;
- (void).cxx_destruct;
- (void)setCategory:(id)arg0;
- (id)models;
- (BOOL)favorite;
- (id)name;
- (void)setCachedWidth:(double)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString;

@interface ACCMVCategoryModel : MTLModel <MTLJSONSerializing> {
    BOOL _isDefault;
    long long _categoryID;
    NSString *_categoryName;
    unsigned long long _categoryType;
}

@property (nonatomic) long long categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) unsigned long long categoryType;
@property (nonatomic) BOOL isDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)categoryID;
- (unsigned long long)categoryType;
- (BOOL)isDefault;
- (void)setCategoryID:(long long)arg0;
- (void)setIsDefault:(BOOL)arg0;
- (void)setCategoryType:(unsigned long long)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface ACCStickerCategoryModel : MTLModel <MTLJSONSerializing> {
    BOOL _isDefault;
    BOOL _hasMore;
    NSString *_categoryID;
    NSString *_categoryName;
    NSString *_categoryKey;
    NSArray *_categoryIcons;
    NSArray *_tags;
    NSArray *_effectIDs;
    NSString *_extra;
    long long _cursor;
    long long _sortingPosition;
    unsigned long long _dataSource;
    NSArray *_lokiEffects;
    NSArray *_stickerEffects;
}

@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSArray *categoryIcons;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *effectIDs;
@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (nonatomic) unsigned long long dataSource;
@property (copy, nonatomic) NSArray *lokiEffects;
@property (copy, nonatomic) NSArray *stickerEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lokiEffectsJSONTransformer;
+ (id)stickerEffectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (long long)sortingPosition;
- (void)setSortingPosition:(long long)arg0;
- (void)setCategoryKey:(id)arg0;
- (BOOL)dataValid;
- (void)setStickerEffects:(id)arg0;
- (id)stickerEffects;
- (id)lokiEffects;
- (id)categoryIcons;
- (void)setCategoryIcons:(id)arg0;
- (void)setLokiEffects:(id)arg0;
- (long long)cursor;
- (void)setDataSource:(unsigned long long)arg0;
- (unsigned long long)dataSource;
- (void).cxx_destruct;
- (id)categoryID;
- (id)tags;
- (id)extra;
- (BOOL)isDefault;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTags:(id)arg0;
- (void)setCategoryID:(id)arg0;
- (void)setIsDefault:(BOOL)arg0;
- (void)setCursor:(long long)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (id)categoryKey;
- (id)effectIDs;
- (void)setEffectIDs:(id)arg0;

@end

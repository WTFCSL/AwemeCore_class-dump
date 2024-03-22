//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESCategoryModel : MTLModel <MTLJSONSerializing> {
    BOOL _isDefault;
    BOOL _hasMore;
    BOOL _isRecommend;
    NSString *_categoryIdentifier;
    NSString *_categoryName;
    NSString *_categoryKey;
    NSArray *_normalIconUrls;
    NSArray *_selectedIconUrls;
    NSArray *_tags;
    NSString *_tagsUpdatedTimeStamp;
    NSArray *_effects;
    NSArray *_effectIDs;
    NSString *_extra;
    NSArray *_collection;
    long long _cursor;
    long long _sortingPosition;
    NSString *_normalIconUri;
    unsigned long long _normalIconUrlType;
    NSString *_normalIconMD5;
    NSString *_selectedIconUri;
    unsigned long long _selectedIconUrlType;
    NSString *_selectedIconMD5;
    unsigned long long _rankingType;
    long long _parentCategoryId;
    NSArray *_childCategories;
}

@property (retain, nonatomic) NSArray *aweStickers;
@property (nonatomic) BOOL ieslive_loading;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSArray *normalIconUrls;
@property (copy, nonatomic) NSArray *selectedIconUrls;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *tagsUpdatedTimeStamp;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSArray *effectIDs;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSArray *downloadedEffects;
@property (readonly, copy, nonatomic) NSString *normalIconUri;
@property (readonly, nonatomic) unsigned long long normalIconUrlType;
@property (readonly, copy, nonatomic) NSString *normalIconMD5;
@property (readonly, copy, nonatomic) NSString *selectedIconUri;
@property (readonly, nonatomic) unsigned long long selectedIconUrlType;
@property (readonly, copy, nonatomic) NSString *selectedIconMD5;
@property (readonly, nonatomic) unsigned long long rankingType;
@property (readonly, nonatomic) BOOL isRecommend;
@property (readonly, nonatomic) long long parentCategoryId;
@property (readonly, copy, nonatomic) NSArray *childCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)sortingPosition;
- (void)setSortingPosition:(long long)arg0;
- (id)normalIconUrls;
- (id)selectedIconUrls;
- (void)updateCategoryWithResponse:(id)arg0 isLoadMore:(BOOL)arg1;
- (void)setCategoryKey:(id)arg0;
- (void)setNormalIconUrls:(id)arg0;
- (void)setSelectedIconUrls:(id)arg0;
- (id)tagsUpdatedTimeStamp;
- (void)setTagsUpdatedTimeStamp:(id)arg0;
- (id)normalIconUri;
- (unsigned long long)normalIconUrlType;
- (id)normalIconMD5;
- (id)selectedIconUri;
- (unsigned long long)selectedIconUrlType;
- (id)selectedIconMD5;
- (BOOL)isRecommend;
- (long long)parentCategoryId;
- (id)childCategories;
- (BOOL)showRedDotWithTag:(id)arg0;
- (void)markAsReaded;
- (void)updateEffects:(id)arg0 collection:(id)arg1;
- (void)fillEffectsWithEffectsMap:(id)arg0;
- (id)downloadedEffects;
- (void)setAweStickers:(id)arg0;
- (id)aweStickers;
- (BOOL)shouldUseIconDisplay;
- (BOOL)isVoipCategory;
- (BOOL)ieslive_loading;
- (void)setIeslive_loading:(BOOL)arg0;
- (void)setCategoryIdentifier:(id)arg0;
- (long long)cursor;
- (id)categoryIdentifier;
- (void)setCollection:(id)arg0;
- (void).cxx_destruct;
- (id)tags;
- (unsigned long long)rankingType;
- (id)extra;
- (BOOL)isDefault;
- (id)effects;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (unsigned long long)hash;
- (void)setTags:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)setCursor:(long long)arg0;
- (id)collection;
- (void)setEffects:(id)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (id)categoryKey;
- (id)effectIDs;
- (void)setEffectIDs:(id)arg0;

@end
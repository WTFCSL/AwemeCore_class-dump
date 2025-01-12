//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary;

@interface IESCategoryEffectsModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    NSString *_version;
    NSString *_categoryKey;
    NSArray *_collection;
    NSArray *_bindEffects;
    long long _cursor;
    long long _sortingPosition;
    NSArray *_effects;
    NSMutableDictionary *_effectsMap;
}

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSMutableDictionary *effectsMap;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (readonly, copy, nonatomic) NSArray *bindEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)bindEffects;
- (long long)sortingPosition;
- (void)setSortingPosition:(long long)arg0;
- (void)setCategoryKey:(id)arg0;
- (id)effectsMap;
- (void)setEffectsMap:(id)arg0;
- (id)downloadedEffects;
- (long long)cursor;
- (void)setCollection:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)effects;
- (id)version;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;
- (id)collection;
- (void)setEffects:(id)arg0;
- (id)categoryKey;

@end

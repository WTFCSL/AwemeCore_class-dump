//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, IESECWinGoodsSortModel;

@interface IESECWinHybridSortModel : MTLModel <MTLJSONSerializing> {
    NSArray *_sortTypes;
    NSDictionary *_layoutStyles;
    NSArray *_subCategoryList;
    NSArray *_filterTypes;
    IESECWinGoodsSortModel *_selectedSortItem;
    long long _currentSort;
}

@property (copy, nonatomic) NSArray *sortTypes;
@property (copy, nonatomic) NSDictionary *layoutStyles;
@property (copy, nonatomic) NSArray *subCategoryList;
@property (copy, nonatomic) NSArray *filterTypes;
@property (retain, nonatomic) IESECWinGoodsSortModel *selectedSortItem;
@property (nonatomic) long long currentSort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortTypesJSONTransformer;
+ (id)filterTypesJSONTransformer;
+ (id)layoutStylesJSONTransformer;
+ (id)subCategoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)selectedSortItem;
- (void)setSelectedSortItem:(id)arg0;
- (id)sortTypes;
- (void)setSortTypes:(id)arg0;
- (id)subCategoryList;
- (void)setSubCategoryList:(id)arg0;
- (void)setCurrentSort:(long long)arg0;
- (id)layoutStyles;
- (void)setLayoutStyles:(id)arg0;
- (long long)currentSort;
- (void).cxx_destruct;
- (id)filterTypes;
- (void)setFilterTypes:(id)arg0;

@end

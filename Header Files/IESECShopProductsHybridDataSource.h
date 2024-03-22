//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESECShopProductsFilterControl, NSDictionary, IESECShopBizExtraModel, NSString, IESECShopProductsExposureTracker, IESECShopProductsClientState, IESECListKitListModel, IESECShopProductsPromotionalFilterState, NSArray, IESECListKitBFFViewController, IESECShopProductsHybridContext, IESECObjectMapper;

@interface IESECShopProductsHybridDataSource : NSObject <IESECShopProductsExposureTrackerDataSource, IESECShopProductsDataSource> {
    IESECShopProductsHybridContext *_context;
    unsigned long long _counter;
    IESECObjectMapper *_objectMapper;
    IESECShopProductsExposureTracker *_exposureTracker;
    NSArray *_reservedSections;
    NSMutableDictionary *_reservedConfigurations;
    BOOL _initialRequest;
    BOOL _hasMore;
    IESECShopProductsFilterControl *_filterControl;
    IESECShopProductsClientState *_clientState;
    IESECListKitBFFViewController *_listKitViewController;
    IESECShopProductsPromotionalFilterState *_promotionalFilterState;
    NSString *_paginationParams;
    IESECShopBizExtraModel *_bizExtra;
    unsigned long long _sortOrder;
    NSArray *_reservedSectionIDs;
    NSDictionary *_externalRequestParams;
    IESECListKitListModel *_candidateModel;
    NSString *_appearanceAnimationItemID;
}

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *reservedSectionIDs;
@property (retain, nonatomic) IESECShopProductsFilterControl *filterControl;
@property (retain, nonatomic) IESECShopProductsClientState *clientState;
@property (weak, nonatomic) IESECListKitBFFViewController *listKitViewController;
@property (nonatomic, getter=isInitialRequest) BOOL initialRequest;
@property (retain, nonatomic) IESECShopProductsPromotionalFilterState *promotionalFilterState;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) IESECShopBizExtraModel *bizExtra;
@property (nonatomic) unsigned long long sortOrder;
@property (copy, nonatomic) NSDictionary *externalRequestParams;
@property (retain, nonatomic) IESECListKitListModel *candidateModel;
@property (copy, nonatomic) NSString *appearanceAnimationItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateListSpanSize:(id)arg0 style:(unsigned long long)arg1;

- (id)bizExtra;
- (void)setBizExtra:(id)arg0;
- (id)reservedSectionIDs;
- (void)setReservedSectionIDs:(id)arg0;
- (id)paginationParams;
- (void)setPaginationParams:(id)arg0;
- (id)promotionalFilterState;
- (void)setPromotionalFilterState:(id)arg0;
- (id)goodsCardViewModelWithGoodsModel:(id)arg0;
- (id)exposureTrackerAllProductIDs;
- (id)sectionSnapshot:(id)arg0 index:(long long *)arg1;
- (id)sectionSnapshotAtIndex:(long long)arg0;
- (void)updateActivityFilterButtonIfNeededWithListModel:(id)arg0;
- (void)updateHasTopModuleIfNeeded:(id)arg0;
- (void)requestHybridListWithExtenalParameter:(id)arg0 completion:(id /* block */)arg1;
- (id)sectionSnapshot:(id)arg0;
- (id)initWithHybridContext:(id)arg0;
- (id)itemDataAtIndexPath:(id)arg0;
- (void)resetExceptFilter;
- (void)updatePreloadedList:(id)arg0;
- (void)fetchListWithCompletion:(id /* block */)arg0;
- (void)fetchListWithProductIDs:(id)arg0 completion:(id /* block */)arg1;
- (void)productDidDisplay:(id)arg0 atIndex:(long long)arg1;
- (void)removeCachedViewModelWithProduct:(id)arg0;
- (void)removeUnexposedProducts;
- (id)filterControl;
- (void)setFilterControl:(id)arg0;
- (id)listKitViewController;
- (void)setListKitViewController:(id)arg0;
- (BOOL)isInitialRequest;
- (id)externalRequestParams;
- (void)setExternalRequestParams:(id)arg0;
- (id)candidateModel;
- (void)setCandidateModel:(id)arg0;
- (id)appearanceAnimationItemID;
- (void)setAppearanceAnimationItemID:(id)arg0;
- (unsigned long long)sortOrder;
- (void)deleteAllItems;
- (void).cxx_destruct;
- (id)clientState;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setSortOrder:(unsigned long long)arg0;
- (id)snapshot;
- (void)reset;
- (void)setClientState:(id)arg0;
- (void)setInitialRequest:(BOOL)arg0;

@end
//
//     Generated by private class-dump
//

@class NSSet;

@protocol AWEUserRecommendTableDataSourceProtocol <NSObject>

@property (copy, nonatomic) NSSet *userIDsToFilter;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)removeAllModels;
- (void)removeModels:(id)arg0;
- (BOOL)insertModel:(id)arg0 atIndex:(unsigned long long)arg1;
- (BOOL)hasFetchedData;
- (void)setUserIDsToFilter:(id)arg0 filterExisting:(BOOL)arg1;
- (void)removeModel:(id)arg0;
- (void)setUserIDsToFilter:(id)arg0;
- (void)refreshWithBDNetworkTagContext:(id)arg0 completion:(id /* block */)arg1;
- (void)removeModelAtIndex:(unsigned long long)arg0;
- (id)userIDsToFilter;
- (BOOL)addModels:(id)arg0;
- (void)clearDataController;
- (BOOL)containsUserID:(id)arg0;
- (void)removeModelsAtIndexes:(id)arg0;
- (long long)indexOfModelCellType:(long long)arg0;
- (long long)indexOfUserID:(id)arg0;
- (BOOL)insertModels:(id)arg0 atIndexes:(id)arg1;
- (void)removeLastModel;
- (void)removeModelsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)addModel:(id)arg0;
- (id)models;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (BOOL)isLoadingData;
- (long long)dataState;

@end
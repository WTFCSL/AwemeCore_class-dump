//
//     Generated by private class-dump
//

@protocol AFDRangeABTestManagerProtocol <NSObject>

+ (id)shareInstance;

- (id)currentServerDate;
- (void)insertOrReplaceModel:(id)arg0 completion:(id /* block */)arg1;
- (id)getModelWhereDateIn7Days:(id)arg0;
- (void)deleteModels;
- (id)getTodayModel;
- (void)dispatchAsyncWhenReadWrite:(id /* block */)arg0;
- (void)trackClientABFilterSolidDateHit:(id)arg0;
- (void)insertOrReplaceModels:(id)arg0 needUpdateCacheDic:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)deleteAllModels;
- (id)getAllModels;
- (id)getCacheDic;
- (void)deleteCacheDicStorage;

@end

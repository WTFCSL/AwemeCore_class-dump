//
//     Generated by private class-dump
//

@class WCTDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface ACCMomentMediaDataProvider : NSObject {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WCTDatabase *_libraryDatabase;
}

@property (retain, nonatomic) WCTDatabase *libraryDatabase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;

+ (id)createTableQueue;
+ (id)normalProvider;
+ (void)setNeedUpgradeDatabase;
+ (void)completeUpgradeDatabase;
+ (id)upgradeProvider;
+ (void)initialize;
+ (id)defaultProvider;

- (void)updateAsset:(id)arg0;
- (void)updateBIMResult:(id)arg0 completion:(id /* block */)arg1;
- (void)cleanPrepareAssetsWithCompletion:(id /* block */)arg0;
- (id)libraryDatabase;
- (void)setLibraryDatabase:(id)arg0;
- (void)cleanAllTable;
- (void)loadBIMResultToSelectObj:(id /* block */)arg0;
- (void)loadBIMResultWithLimit:(long long)arg0 pageIndex:(long long)arg1 resultBlock:(id /* block */)arg2;
- (void)loadBIMWithLocalIdentifiers:(id)arg0 resultBlock:(id /* block */)arg1;
- (void)cleanBIMWhichNotExistInAssetResult:(id)arg0 scanDate:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadBIMWithUids:(id)arg0 resultBlock:(id /* block */)arg1;
- (void)loadLocalIdentifiersWithUids:(id)arg0 resultBlock:(id /* block */)arg1;
- (void)updateCIMSimIds:(id)arg0 bimUids:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCIMPeopleIds:(id)arg0 bimUids:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareDatabaseWithPath:(id)arg0;
- (id)initForNormalDatabase;
- (id)initForUpgradeDatabase;
- (void)updateAssetResult:(id)arg0 filter:(id /* block */)arg1 scanDate:(unsigned long long)arg2 limitCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)loadPrepareAssetsWithLimit:(long long)arg0 pageIndex:(long long)arg1 videoLoadConfig:(long long)arg2 resultBlock:(id /* block */)arg3;
- (void)allBIMCount:(id /* block */)arg0;
- (void)cleanRedundancyBIMCount:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)databaseQueue;
- (id)init;
- (void).cxx_destruct;
- (void)setDatabaseQueue:(id)arg0;

@end
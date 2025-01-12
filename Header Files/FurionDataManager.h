//
//     Generated by private class-dump
//

@class FurionDataStash, NSArray, NSDictionary, NSMutableDictionary, NSCache;

@interface FurionDataManager : NSObject {
    BOOL _dataSourcesIsReady;
    FurionDataStash *_dataStash;
    NSDictionary *_dataSourceNameMap;
    NSDictionary *_groupName_dataSourceNameMap;
    NSArray *_dataSources;
    NSMutableDictionary *_registerInfoMap;
    NSMutableDictionary *_registerBizInfoMap;
    NSCache *_factorToDataSourceCache;
}

@property (retain, nonatomic) FurionDataStash *dataStash;
@property (retain, nonatomic) NSDictionary *dataSourceNameMap;
@property (retain, nonatomic) NSDictionary *groupName_dataSourceNameMap;
@property (retain, nonatomic) NSArray *dataSources;
@property (retain, nonatomic) NSMutableDictionary *registerInfoMap;
@property (retain, nonatomic) NSMutableDictionary *registerBizInfoMap;
@property (retain, nonatomic) NSCache *factorToDataSourceCache;
@property (nonatomic) BOOL dataSourcesIsReady;

- (id)getFactorsWithQueryGroups:(id)arg0 bizInfo:(id)arg1 error:(id *)arg2;
- (void)startSession:(id)arg0 factorName:(id)arg1 dataSource:(id)arg2;
- (void)endSession:(id)arg0 factorName:(id)arg1 dataSource:(id)arg2;
- (void)registerFactorGroup:(id)arg0 bizInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)registerCombineFactor:(id)arg0 bizInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)addFactorCollectConfigDict:(id)arg0;
- (void)addFactorReportConfigDict:(id)arg0;
- (id)registerInfoMap;
- (void)addFactor:(id)arg0 value:(id)arg1 group:(id)arg2 dataSource:(id)arg3;
- (id)getFactorWithKey:(id)arg0 extParams:(id)arg1 bizInfo:(id)arg2 error:(id *)arg3;
- (id)dataSourceNameMap;
- (id)dataStash;
- (id)_getFactorsInStashWithQueryGroups:(id)arg0 bizInfo:(id)arg1 error:(id *)arg2;
- (id)registerBizInfoMap;
- (id)getDataSourceWithGroupName:(id)arg0;
- (id)groupName_dataSourceNameMap;
- (id)factorToDataSourceCache;
- (id)getFactorsWithConfigDict:(id)arg0 extParams:(id)arg1 bizInfo:(id)arg2 error:(id *)arg3;
- (void)addAppSessionFactorConfigDict:(id)arg0;
- (BOOL)dataSourcesIsReady;
- (void)setDataSourcesIsReady:(BOOL)arg0;
- (void)setDataStash:(id)arg0;
- (void)setDataSourceNameMap:(id)arg0;
- (void)setGroupName_dataSourceNameMap:(id)arg0;
- (void)setRegisterInfoMap:(id)arg0;
- (void)setRegisterBizInfoMap:(id)arg0;
- (void)setFactorToDataSourceCache:(id)arg0;
- (id)dataSources;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSources:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface AWELocalUserCenterUpdatePlanResponseModel : AWEBaseApiModel {
    NSArray *_tableNames;
    NSDictionary *_tableMetas;
    NSArray *_reportConfigs;
}

@property (retain, nonatomic) NSArray *tableNames;
@property (retain, nonatomic) NSDictionary *tableMetas;
@property (retain, nonatomic) NSArray *reportConfigs;

+ (id)reportConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tableMetas;
- (id)reportConfigs;
- (void)setTableMetas:(id)arg0;
- (void)setReportConfigs:(id)arg0;
- (void).cxx_destruct;
- (id)tableNames;
- (void)setTableNames:(id)arg0;

@end
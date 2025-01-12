//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDCertLimitModel;

@interface BDCertLimitBindTask : NSObject {
    BOOL _noFallback;
    NSString *_prioryId;
    NSString *_associateId;
    NSDictionary *_searchMap;
    NSDictionary *_limitMap;
    NSDictionary *_conditionMap;
    NSDictionary *_fallbackSearchMap;
    NSDictionary *_fallbackLimitMap;
    NSDictionary *_fallbackConditionMap;
    BDCertLimitModel *_result;
}

@property (copy, nonatomic) NSString *prioryId;
@property (copy, nonatomic) NSString *associateId;
@property (copy, nonatomic) NSDictionary *searchMap;
@property (copy, nonatomic) NSDictionary *limitMap;
@property (copy, nonatomic) NSDictionary *conditionMap;
@property (copy, nonatomic) NSDictionary *fallbackSearchMap;
@property (copy, nonatomic) NSDictionary *fallbackLimitMap;
@property (copy, nonatomic) NSDictionary *fallbackConditionMap;
@property (nonatomic) BOOL noFallback;
@property (retain, nonatomic) BDCertLimitModel *result;

- (void)setPrioryId:(id)arg0;
- (void)setAssociateId:(id)arg0;
- (void)setSearchMap:(id)arg0;
- (void)setLimitMap:(id)arg0;
- (void)setConditionMap:(id)arg0;
- (void)setFallbackSearchMap:(id)arg0;
- (void)setFallbackLimitMap:(id)arg0;
- (void)setFallbackConditionMap:(id)arg0;
- (id)searchLimitId;
- (id)searchConditionIdsWithLimitId:(id)arg0;
- (id)searchConditionWithId:(id)arg0;
- (id)searchMap;
- (id)prioryId;
- (id)searchLimitIdInDict:(id)arg0 withKey:(id)arg1;
- (id)associateId;
- (id)fallbackSearchMap;
- (id)limitMap;
- (id)fallbackLimitMap;
- (id)conditionMap;
- (id)fallbackConditionMap;
- (void)execute;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)result;
- (void)setNoFallback:(BOOL)arg0;
- (BOOL)noFallback;

@end

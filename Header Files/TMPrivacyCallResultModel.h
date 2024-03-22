//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, TMPrivacyBPEAInfoModel;

@interface TMPrivacyCallResultModel : NSObject {
    BOOL _isValid;
    BOOL _isDowngrade;
    NSString *_uuid;
    NSString *_className;
    NSString *_methodName;
    NSString *_api;
    long long _permissionStatus;
    NSString *_permissionType;
    NSString *_privacyType;
    NSArray *_dataTypes;
    NSDictionary *_privacyApiParams;
    NSDictionary *_ruleInputParmas;
    unsigned long long _apiId;
    NSString *_strategyMD5;
    NSArray *_strategies;
    NSDictionary *_jsbInfo;
    TMPrivacyBPEAInfoModel *_bpeaInfo;
    NSArray *_pageInfo;
    NSString *_stack;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *api;
@property (nonatomic) long long permissionStatus;
@property (copy, nonatomic) NSString *permissionType;
@property (copy, nonatomic) NSString *privacyType;
@property (copy, nonatomic) NSArray *dataTypes;
@property (copy, nonatomic) NSDictionary *privacyApiParams;
@property (copy, nonatomic) NSDictionary *ruleInputParmas;
@property (nonatomic) unsigned long long apiId;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isDowngrade;
@property (copy, nonatomic) NSString *strategyMD5;
@property (copy, nonatomic) NSArray *strategies;
@property (retain, nonatomic) NSDictionary *jsbInfo;
@property (copy, nonatomic) TMPrivacyBPEAInfoModel *bpeaInfo;
@property (copy, nonatomic) NSArray *pageInfo;
@property (copy, nonatomic) NSString *stack;

- (id)privacyType;
- (void)setPrivacyType:(id)arg0;
- (long long)permissionStatus;
- (void)setStrategies:(id)arg0;
- (BOOL)isDowngrade;
- (unsigned long long)apiId;
- (void)setStrategyMD5:(id)arg0;
- (void)setApiId:(unsigned long long)arg0;
- (id)strategyMD5;
- (id)initWithPrivacyEvent:(id)arg0;
- (id)jsonDictForAppLog;
- (id)bpeaInfo;
- (void)setBpeaInfo:(id)arg0;
- (BOOL)__enableCollectStackForParams:(id)arg0;
- (id)jsonDictForCustomException;
- (void)setIsDowngrade:(BOOL)arg0;
- (void)setPermissionStatus:(long long)arg0;
- (id)privacyApiParams;
- (void)setPrivacyApiParams:(id)arg0;
- (id)ruleInputParmas;
- (void)setRuleInputParmas:(id)arg0;
- (id)jsbInfo;
- (void)setJsbInfo:(id)arg0;
- (void)setClassName:(id)arg0;
- (id)className;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (BOOL)isValid;
- (void)setStack:(id)arg0;
- (id)stack;
- (id)uuid;
- (id)dataTypes;
- (void)setDataTypes:(id)arg0;
- (id)permissionType;
- (id)strategies;
- (id)api;
- (id)methodName;
- (void)setMethodName:(id)arg0;
- (void)setPermissionType:(id)arg0;
- (id)pageInfo;
- (void)setPageInfo:(id)arg0;
- (void)setApi:(id)arg0;

@end
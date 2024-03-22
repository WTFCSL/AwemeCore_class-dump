//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECCpsTrackerReportParamsConfig : MTLModel <MTLJSONSerializing> {
    BOOL _optional;
    NSString *_paramKey;
    NSString *_urlMapName;
    NSArray *_rules;
    NSString *_checkTypeOp;
}

@property (copy, nonatomic) NSString *paramKey;
@property (copy, nonatomic) NSString *urlMapName;
@property (retain, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *checkTypeOp;
@property (nonatomic) BOOL optional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)paramKey;
- (void)setParamKey:(id)arg0;
- (id)urlMapName;
- (void)setUrlMapName:(id)arg0;
- (id)checkTypeOp;
- (void)setCheckTypeOp:(id)arg0;
- (void)setOptional:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setRules:(id)arg0;
- (id)rules;
- (BOOL)optional;

@end

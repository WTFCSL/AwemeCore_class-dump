//
//     Generated by private class-dump
//

@class NSArray, IESECAddressServiceAddressBTMTraceConfig, NSString;

@interface IESECAddressServiceConfigAddressStrategy : MTLModel <MTLJSONSerializing> {
    NSArray *_mainBTMList;
    NSArray *_ruleList;
    IESECAddressServiceAddressBTMTraceConfig *_btmTraceConfig;
}

@property (copy, nonatomic) NSArray *mainBTMList;
@property (copy, nonatomic) NSArray *ruleList;
@property (retain, nonatomic) IESECAddressServiceAddressBTMTraceConfig *btmTraceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainBTMListJSONTransformer;
+ (id)ruleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)btmTraceConfig;
- (id)mainBTMList;
- (void)setMainBTMList:(id)arg0;
- (void)setBtmTraceConfig:(id)arg0;
- (void).cxx_destruct;
- (id)ruleList;
- (void)setRuleList:(id)arg0;

@end

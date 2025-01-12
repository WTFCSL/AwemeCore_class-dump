//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPOIParamsRuleItem : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    NSString *_errorMsg;
    NSString *_owner;
    NSString *_version;
    NSString *_iOSVersion;
    NSArray *_paramConfigs;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *iOSVersion;
@property (copy, nonatomic) NSArray *paramConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)paramConfigs;
- (void)setParamConfigs:(id)arg0;
- (id)owner;
- (void)setOwner:(id)arg0;
- (id)iOSVersion;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setName:(id)arg0;
- (id)name;
- (void)setIOSVersion:(id)arg0;

@end

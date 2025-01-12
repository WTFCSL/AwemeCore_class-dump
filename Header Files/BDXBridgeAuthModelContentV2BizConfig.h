//
//     Generated by private class-dump
//

@class NSArray, BDXBridgeAuthModelContentV2PublicKey, NSSet, NSDictionary, NSNumber, NSString;

@interface BDXBridgeAuthModelContentV2BizConfig : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSArray *_safeURLs;
    BDXBridgeAuthModelContentV2PublicKey *_publicKey;
    long long _group;
    NSSet *_includedMethods;
    NSSet *_excludedMethods;
    NSDictionary *_methodCallLimitDictionary;
    NSNumber *_feAuthVersion;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *safeURLs;
@property (readonly, nonatomic) BDXBridgeAuthModelContentV2PublicKey *publicKey;
@property (readonly, nonatomic) long long group;
@property (readonly, copy, nonatomic) NSSet *includedMethods;
@property (readonly, copy, nonatomic) NSSet *excludedMethods;
@property (readonly, copy, nonatomic) NSDictionary *methodCallLimitDictionary;
@property (readonly, copy, nonatomic) NSNumber *feAuthVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)groupJSONTransformer;
+ (id)includedMethodsJSONTransformer;
+ (id)excludedMethodsJSONTransformer;
+ (id)safeURLsJSONTransformer;
+ (id)publicKeyJSONTransformer;
+ (id)methodCallLimitDictionaryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)includedMethods;
- (id)excludedMethods;
- (id)safeURLs;
- (id)methodCallLimitDictionary;
- (id)feAuthVersion;
- (id)publicKey;
- (void).cxx_destruct;
- (long long)type;
- (long long)group;

@end

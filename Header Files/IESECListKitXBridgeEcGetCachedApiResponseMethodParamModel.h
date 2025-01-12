//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitXBridgeEcGetCachedApiResponseMethodParamModel : BDXBridgeModel {
    NSString *_apiKey;
    NSString *_majorKey;
    NSString *_subKey;
    NSString *_subSubKey;
}

@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *majorKey;
@property (copy, nonatomic) NSString *subKey;
@property (copy, nonatomic) NSString *subSubKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)majorKey;
- (id)subKey;
- (id)subSubKey;
- (void)setMajorKey:(id)arg0;
- (void)setSubKey:(id)arg0;
- (void)setSubSubKey:(id)arg0;
- (void).cxx_destruct;
- (void)setApiKey:(id)arg0;
- (id)apiKey;

@end

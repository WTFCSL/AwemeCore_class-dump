//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeCallIronManMethodMethodParamModel : BDXBridgeModel {
    NSString *_method;
    NSString *_containerId;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)method;
- (id)containerId;
- (void)setMethod:(id)arg0;
- (void)setContainerId:(id)arg0;
- (id)params;
- (void)setParams:(id)arg0;

@end

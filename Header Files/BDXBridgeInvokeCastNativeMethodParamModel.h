//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeInvokeCastNativeMethodParamModel : BDXBridgeModel {
    NSString *_action;
    NSString *_uuid;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (id)uuid;
- (id)params;
- (void)setParams:(id)arg0;

@end
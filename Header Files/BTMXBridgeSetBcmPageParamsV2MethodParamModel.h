//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BTMXBridgeSetBcmPageParamsV2MethodParamModel : BDXBridgeModel {
    BOOL _clear_old_value;
    NSDictionary *_bcm;
}

@property (nonatomic) BOOL clear_old_value;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bcm;
- (BOOL)clear_old_value;
- (void)setClear_old_value:(BOOL)arg0;
- (void)setBcm:(id)arg0;
- (void).cxx_destruct;

@end

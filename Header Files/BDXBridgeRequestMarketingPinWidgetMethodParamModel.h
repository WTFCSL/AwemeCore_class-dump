//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeRequestMarketingPinWidgetMethodParamModel : BDXBridgeModel {
    NSString *_key;
    NSNumber *_operation;
    id _extra;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *operation;
@property (retain, nonatomic) id extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setOperation:(id)arg0;
- (id)key;
- (id)operation;
- (void).cxx_destruct;
- (id)extra;
- (void)setKey:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeShareRedPacketMethodParamModel : BDXBridgeModel {
    NSString *_schema;
    NSString *_scene;
    NSString *_value;
    NSString *_identifyId;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *identifyId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)identifyId;
- (void)setIdentifyId:(id)arg0;
- (void)setSchema:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setValue:(id)arg0;
- (id)schema;
- (id)scene;

@end
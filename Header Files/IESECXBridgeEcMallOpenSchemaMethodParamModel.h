//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECXBridgeEcMallOpenSchemaMethodParamModel : BDXBridgeModel {
    BOOL _autoHalfPage;
    NSString *_schema;
    NSString *_btm;
    NSString *_mallSchema;
    NSDictionary *_bcm;
    NSString *_scene;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL autoHalfPage;
@property (copy, nonatomic) NSString *mallSchema;
@property (copy, nonatomic) NSDictionary *bcm;
@property (copy, nonatomic) NSString *scene;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)btm;
- (void)setBtm:(id)arg0;
- (id)bcm;
- (void)setBcm:(id)arg0;
- (BOOL)autoHalfPage;
- (id)mallSchema;
- (void)setAutoHalfPage:(BOOL)arg0;
- (void)setMallSchema:(id)arg0;
- (void)setSchema:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)schema;
- (id)scene;

@end

//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeBulletStartRecordMethodParamModel : BDXBridgeModel {
    BOOL _once;
    NSString *_key;
    NSNumber *_frequency;
    NSDictionary *_category;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *frequency;
@property (copy, nonatomic) NSDictionary *category;
@property (nonatomic) BOOL once;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (id)category;
- (void).cxx_destruct;
- (void)setCategory:(id)arg0;
- (void)setKey:(id)arg0;
- (void)setFrequency:(id)arg0;
- (id)frequency;
- (BOOL)once;
- (void)setOnce:(BOOL)arg0;

@end
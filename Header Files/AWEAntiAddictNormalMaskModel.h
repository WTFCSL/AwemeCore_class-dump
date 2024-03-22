//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEAntiAddictNormalMaskModel : MTLModel <MTLJSONSerializing> {
    NSArray *_relaxDayMaterials;
    NSArray *_relaxNightMaterials;
    NSArray *_sleepMaterials;
    NSArray *_blockMaterials;
    NSArray *_blockNightMaterials;
}

@property (readonly, copy, nonatomic) NSArray *relaxDayMaterials;
@property (readonly, copy, nonatomic) NSArray *relaxNightMaterials;
@property (readonly, copy, nonatomic) NSArray *sleepMaterials;
@property (readonly, copy, nonatomic) NSArray *blockMaterials;
@property (readonly, copy, nonatomic) NSArray *blockNightMaterials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relaxDayMaterialsJSONTransformer;
+ (id)relaxNightMaterialsJSONTransformer;
+ (id)sleepMaterialsJSONTransformer;
+ (id)blockMaterialsJSONTransformer;
+ (id)blockNightMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)blockMaterials;
- (id)blockNightMaterials;
- (id)relaxDayMaterials;
- (id)relaxNightMaterials;
- (id)sleepMaterials;
- (void).cxx_destruct;

@end
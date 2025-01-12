//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEHPPinTopConfigChannelModel : MTLModel <MTLJSONSerializing> {
    NSString *_tabID;
    NSArray *_commonModels;
    NSArray *_customModels;
}

@property (copy, nonatomic) NSString *tabID;
@property (retain, nonatomic) NSArray *commonModels;
@property (retain, nonatomic) NSArray *customModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customModelsJSONTransformer;
+ (id)commonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setTabID:(id)arg0;
- (id)customModels;
- (id)commonModels;
- (void)setCustomModels:(id)arg0;
- (void)setCommonModels:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)tabID;

@end

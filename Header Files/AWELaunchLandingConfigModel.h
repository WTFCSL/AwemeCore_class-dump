//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWELaunchLandingConfigModel : MTLModel <MTLJSONSerializing> {
    NSArray *_landingModels;
}

@property (retain, nonatomic) NSArray *landingModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)landingModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)landingModels;
- (void)setLandingModels:(id)arg0;
- (void).cxx_destruct;

@end

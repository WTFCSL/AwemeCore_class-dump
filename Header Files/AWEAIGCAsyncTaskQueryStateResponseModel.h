//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEAIGCAsyncTaskQueryStateResponseModel : ACCBaseApiModel <MTLJSONSerializing> {
    NSArray *_generationList;
}

@property (copy, nonatomic) NSArray *generationList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)generationList;
- (void)setGenerationList:(id)arg0;
- (void).cxx_destruct;

@end

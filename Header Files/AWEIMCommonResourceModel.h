//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEIMCommonResourceModel : MTLModel <MTLJSONSerializing> {
    NSArray *_resources;
}

@property (copy, nonatomic) NSArray *resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)resources;
- (void).cxx_destruct;
- (void)setResources:(id)arg0;

@end
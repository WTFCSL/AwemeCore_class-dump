//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESPolicyCleanRequestModel : MTLModel <MTLJSONSerializing> {
    NSArray *_resourceList;
}

@property (copy, nonatomic) NSArray *resourceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)resourceList;
- (void).cxx_destruct;
- (void)setResourceList:(id)arg0;

@end

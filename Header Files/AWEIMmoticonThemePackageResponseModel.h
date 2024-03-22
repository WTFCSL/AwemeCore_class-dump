//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEIMmoticonThemeResponseModel, NSNumber, AWEIMSpecialEmojiResourceModel;

@interface AWEIMmoticonThemePackageResponseModel : MTLModel <MTLJSONSerializing> {
    NSArray *_resources;
    NSNumber *_status_code;
    AWEIMmoticonThemeResponseModel *_interactiveResources;
    AWEIMSpecialEmojiResourceModel *_specialResources;
}

@property (copy, nonatomic) NSArray *resources;
@property (retain, nonatomic) NSNumber *status_code;
@property (retain, nonatomic) AWEIMmoticonThemeResponseModel *interactiveResources;
@property (retain, nonatomic) AWEIMSpecialEmojiResourceModel *specialResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourcesJSONTransformer;
+ (id)interactiveResourcesJSONTransformer;
+ (id)specialResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)interactiveResources;
- (void)setInteractiveResources:(id)arg0;
- (id)specialResources;
- (void)setSpecialResources:(id)arg0;
- (id)resources;
- (void).cxx_destruct;
- (void)setResources:(id)arg0;
- (void)setStatus_code:(id)arg0;
- (id)status_code;

@end

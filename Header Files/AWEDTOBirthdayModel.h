//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEDTOBirthdayModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templatesJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;

- (id)templates;
- (void)setTemplates:(id)arg0;

@end

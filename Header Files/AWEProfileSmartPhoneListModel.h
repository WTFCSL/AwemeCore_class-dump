//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEProfileSmartPhoneListModel : MTLModel <MTLJSONSerializing> {
    NSArray *_smartPhoneModelList;
}

@property (copy, nonatomic) NSArray *smartPhoneModelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)smartPhoneModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)smartPhoneModelList;
- (void)setSmartPhoneModelList:(id)arg0;
- (void).cxx_destruct;

@end

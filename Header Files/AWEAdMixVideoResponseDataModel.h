//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEAdMixVideoResponseDataModel : MTLModel <MTLJSONSerializing> {
    NSArray *_adItems;
}

@property (copy, nonatomic) NSArray *adItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)adItems;
- (void)setAdItems:(id)arg0;
- (void).cxx_destruct;

@end

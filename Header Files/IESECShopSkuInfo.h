//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECShopSkuInfo : MTLModel <MTLJSONSerializing> {
    BOOL _canSwitch;
    NSArray *_items;
}

@property (nonatomic) BOOL canSwitch;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canSwitch;
- (void)setCanSwitch:(BOOL)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;

@end
//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEGoodsSKUSpec : MTLModel <MTLJSONSerializing> {
    NSArray *_items;
    NSString *_name;
}

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setName:(id)arg0;
- (id)name;

@end

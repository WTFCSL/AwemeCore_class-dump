//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyGuideMaskModel : MTLModel <MTLJSONSerializing> {
    long long _itemIndex;
    NSString *_itemID;
    long long _autoDimissTime;
}

@property (nonatomic) long long itemIndex;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long autoDimissTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)autoDimissTime;
- (void)setAutoDimissTime:(long long)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (long long)itemIndex;
- (void)setItemIndex:(long long)arg0;

@end

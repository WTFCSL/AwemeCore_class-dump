//
//     Generated by private class-dump
//

@interface AWEClassroomModel.ClassroomItemModel : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ itemId;
    void /* unknown type, empty encoding */ itemType;
    void /* unknown type, empty encoding */ goods;
}

@property (nonatomic) void /* unknown type, empty encoding */ itemId;
@property (nonatomic) void /* unknown type, empty encoding */ itemType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ goods;

+ (id)goodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)goods;
- (void)setGoods:(id)arg0;
- (long long)itemType;
- (id)init;
- (void)setItemType:(long long)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (long long)itemId;
- (void)setItemId:(long long)arg0;

@end

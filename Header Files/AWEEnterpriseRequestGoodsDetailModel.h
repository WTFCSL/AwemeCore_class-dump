//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEEnterpriseRequestGoodsDetailModel : MTLModel <MTLJSONSerializing> {
    long long _total;
    NSArray *_goodsArray;
}

@property (nonatomic) long long total;
@property (copy, nonatomic) NSArray *goodsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)goodsArray;
- (void)setGoodsArray:(id)arg0;
- (long long)total;
- (void).cxx_destruct;
- (void)setTotal:(long long)arg0;

@end

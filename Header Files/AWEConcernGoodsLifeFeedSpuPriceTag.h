//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernGoodsLifeFeedSpuPriceTag : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    NSString *_price;
}

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *price;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)priceJSONTransformer;

- (id)price;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setPrice:(id)arg0;

@end

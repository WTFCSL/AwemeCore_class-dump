//
//     Generated by private class-dump
//

@class NSString;

@interface IESECShopCartsInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_cartsURL;
    long long _productsNum;
}

@property (copy, nonatomic) NSString *cartsURL;
@property (nonatomic) long long productsNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cartsURL;
- (void)setCartsURL:(id)arg0;
- (long long)productsNum;
- (void)setProductsNum:(long long)arg0;
- (void).cxx_destruct;

@end

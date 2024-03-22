//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface IESECShopRecommendGoodsBaseInfo : MTLModel <MTLJSONSerializing> {
    NSString *_productID;
    NSString *_title;
    NSNumber *_sales;
    NSArray *_images;
}

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *sales;
@property (copy, nonatomic) NSArray *images;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (id)sales;
- (void)setSales:(id)arg0;
- (id)productID;
- (id)images;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)title;
- (void)setImages:(id)arg0;
- (void)setTitle:(id)arg0;

@end
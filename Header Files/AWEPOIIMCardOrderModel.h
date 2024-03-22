//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEPOIIMCardOrderModel : AWEPOIIMCardModel {
    NSString *_order_id;
    NSString *_product_url;
    NSString *_product_name;
    NSNumber *_count;
    NSNumber *_pay_amount;
    NSString *_detail_url;
    NSString *_skuId;
    NSString *_card_type;
}

@property (copy, nonatomic) NSString *order_id;
@property (copy, nonatomic) NSString *product_url;
@property (copy, nonatomic) NSString *product_name;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *pay_amount;
@property (copy, nonatomic) NSString *detail_url;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSString *card_type;

- (id)skuId;
- (void)setSkuId:(id)arg0;
- (id)product_url;
- (id)product_name;
- (id)pay_amount;
- (void)setProduct_name:(id)arg0;
- (void)setProduct_url:(id)arg0;
- (id)card_type;
- (void)setCard_type:(id)arg0;
- (id)order_id;
- (void)setOrder_id:(id)arg0;
- (void)setPay_amount:(id)arg0;
- (id)detail_url;
- (void)setDetail_url:(id)arg0;
- (void)setCount:(id)arg0;
- (void).cxx_destruct;
- (id)count;

@end
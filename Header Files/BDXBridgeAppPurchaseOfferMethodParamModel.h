//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeAppPurchaseOfferMethodParamModel : BDXBridgeModel {
    NSString *_item_id;
    NSNumber *_item_type;
    NSNumber *_quantity;
    NSNumber *_checkLogin;
    NSDictionary *_offer;
    NSDictionary *_log_extra;
}

@property (copy, nonatomic) NSString *item_id;
@property (retain, nonatomic) NSNumber *item_type;
@property (retain, nonatomic) NSNumber *quantity;
@property (retain, nonatomic) NSNumber *checkLogin;
@property (copy, nonatomic) NSDictionary *offer;
@property (copy, nonatomic) NSDictionary *log_extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)log_extra;
- (void)setLog_extra:(id)arg0;
- (id)checkLogin;
- (void)setCheckLogin:(id)arg0;
- (id)item_id;
- (void)setItem_id:(id)arg0;
- (id)item_type;
- (void)setItem_type:(id)arg0;
- (void).cxx_destruct;
- (void)setQuantity:(id)arg0;
- (void)setOffer:(id)arg0;
- (id)offer;
- (id)quantity;

@end

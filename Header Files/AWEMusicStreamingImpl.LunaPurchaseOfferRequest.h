//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaPurchaseOfferRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* unknown type, empty encoding */ offerID;
    void /* unknown type, empty encoding */ paymentMethod;
    void /* unknown type, empty encoding */ paymentItemID;
    void /* unknown type, empty encoding */ paymentItemType;
    void /* unknown type, empty encoding */ quantity;
}

@property (nonatomic, copy) NSString *offerID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ paymentMethod;
@property (nonatomic, copy) NSString *paymentItemID;
@property (nonatomic) void /* unknown type, empty encoding */ paymentItemType;
@property (nonatomic) void /* unknown type, empty encoding */ quantity;

- (Class)responseModelClass;
- (void)setOfferID:(id)arg0;
- (id)paymentItemID;
- (void)setPaymentItemID:(id)arg0;
- (long long)paymentItemType;
- (void)setPaymentItemType:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)path;
- (void)setQuantity:(long long)arg0;
- (id)params;
- (long long)quantity;
- (long long)paymentMethod;
- (id)offerID;

@end

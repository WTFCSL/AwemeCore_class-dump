//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaValidatePurchaseResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* unknown type, empty encoding */ orderID;
    void /* unknown type, empty encoding */ orderStatus;
    void /* unknown type, empty encoding */ orderInfo;
    void /* unknown type, empty encoding */ vipInfo;
    void /* unknown type, empty encoding */ paymentItem;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic) void /* unknown type, empty encoding */ orderStatus;
@property (nonatomic, readonly) long long _orderStatus;
@property (nonatomic, retain) void /* unknown type, empty encoding */ orderInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ vipInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ paymentItem;

+ (id)orderInfoJSONTransformer;
+ (id)vipInfoJSONTransformer;
+ (id)paymentItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)orderID;
- (void)setOrderID:(id)arg0;
- (long long)orderStatus;
- (void)setOrderStatus:(long long)arg0;
- (long long)_orderStatus;
- (id)orderInfo;
- (void)setOrderInfo:(id)arg0;
- (id)vipInfo;
- (void)setVipInfo:(id)arg0;
- (id)paymentItem;
- (void)setPaymentItem:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end

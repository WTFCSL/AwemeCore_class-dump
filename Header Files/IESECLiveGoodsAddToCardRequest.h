//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@interface IESECLiveGoodsAddToCardRequest : IESECLiveAPIBaseRequest {
    NSString *_promotionID;
    NSString *_productID;
    NSDictionary *_skuParams;
    NSDictionary *_extraParams;
    NSNumber *_channelID;
    NSNumber *_channelType;
}

@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSDictionary *skuParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSNumber *channelType;

- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)buildParams;
- (id)skuParams;
- (void)setSkuParams:(id)arg0;
- (id)productID;
- (id)channelType;
- (id)channelID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (void)setChannelID:(id)arg0;
- (void)setChannelType:(id)arg0;

@end

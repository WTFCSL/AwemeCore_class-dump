//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIResponder;

@interface IESECRelationSKUInfo : NSObject {
    NSString *_promotionId;
    NSString *_productId;
    NSString *_authorId;
    long long _skuType;
    NSString *_orderURL;
    NSString *_ecomSceneId;
    NSString *_cartTrack;
    NSDictionary *_trackParams;
    NSDictionary *_orderEntranceInfo;
    NSString *_BtmID;
    NSString *_btm;
    NSDictionary *_bcm;
    UIResponder *_host;
    NSString *_buyInTrack;
    NSString *_cBizCombo;
}

@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) long long skuType;
@property (copy, nonatomic) NSString *orderURL;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (copy, nonatomic) NSString *cartTrack;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *orderEntranceInfo;
@property (copy, nonatomic) NSString *BtmID;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (weak, nonatomic) UIResponder *host;
@property (retain, nonatomic) NSString *buyInTrack;
@property (retain, nonatomic) NSString *cBizCombo;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)promotionId;
- (void)setPromotionId:(id)arg0;
- (id)btm;
- (void)setBtm:(id)arg0;
- (id)bcm;
- (void)setBcm:(id)arg0;
- (id)cartTrack;
- (void)setCartTrack:(id)arg0;
- (void)setBtmID:(id)arg0;
- (id)ecomSceneId;
- (void)setEcomSceneId:(id)arg0;
- (id)cBizCombo;
- (void)setCBizCombo:(id)arg0;
- (long long)skuType;
- (void)setSkuType:(long long)arg0;
- (id)buyInTrack;
- (id)orderEntranceInfo;
- (void)setOrderEntranceInfo:(id)arg0;
- (id)BtmID;
- (void)setBuyInTrack:(id)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;
- (id)productId;
- (id)orderURL;
- (void)setOrderURL:(id)arg0;
- (void)setProductId:(id)arg0;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end

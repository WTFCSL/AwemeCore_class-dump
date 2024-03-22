//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, AWEPOIGoodsDetailPlayInfoModel, AWEPOIGoodsDetailPlayCouponInfoModel;

@interface AWEPOIGoodsDetailSharePlayInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_playShareId;
    AWEPOIGoodsDetailPlayInfoModel *_playInfo;
    AWEPOIGoodsDetailPlayCouponInfoModel *_masterCoupon;
    AWEPOIGoodsDetailPlayCouponInfoModel *_guestCoupon;
    NSDictionary *_fromUser;
    NSArray *_toUser;
    long long _status;
}

@property (copy, nonatomic) NSString *playShareId;
@property (retain, nonatomic) AWEPOIGoodsDetailPlayInfoModel *playInfo;
@property (retain, nonatomic) AWEPOIGoodsDetailPlayCouponInfoModel *masterCoupon;
@property (retain, nonatomic) AWEPOIGoodsDetailPlayCouponInfoModel *guestCoupon;
@property (retain, nonatomic) NSDictionary *fromUser;
@property (retain, nonatomic) NSArray *toUser;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setToUser:(id)arg0;
- (void)setFromUser:(id)arg0;
- (void)setPlayInfo:(id)arg0;
- (id)playInfo;
- (id)playShareId;
- (void)setPlayShareId:(id)arg0;
- (id)masterCoupon;
- (void)setMasterCoupon:(id)arg0;
- (id)guestCoupon;
- (void)setGuestCoupon:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (id)fromUser;
- (id)toUser;

@end
//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, AWEDouPlusChargeOptionsResponseModel, AWEDouPlusIAPProductModel;

@interface AWEDouPlusRechargeViewModel : NSObject {
    AWEDouPlusChargeOptionsResponseModel *_chargeOptionsModel;
    id /* block */ _clickDouPlusIAPProductBlock;
    AWEDouPlusIAPProductModel *_selectedProductModel;
    NSDictionary *_bizParams;
    NSArray *_couponModelList;
    NSDictionary *_trackCommonParams;
    NSArray *_productInfos;
}

@property (retain, nonatomic) AWEDouPlusChargeOptionsResponseModel *chargeOptionsModel;
@property (retain, nonatomic) NSArray *couponModelList;
@property (copy, nonatomic) NSDictionary *trackCommonParams;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSArray *productInfos;
@property (copy, nonatomic) id /* block */ clickDouPlusIAPProductBlock;
@property (retain, nonatomic) AWEDouPlusIAPProductModel *selectedProductModel;

- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (id)couponModelList;
- (void)setCouponModelList:(id)arg0;
- (id)initWithParamDict:(id)arg0;
- (void)setChargeOptionsModel:(id)arg0;
- (id)chargeOptionsModel;
- (void)fetchDouplusChargeOptions;
- (void)trackerClickChargeButton;
- (void)monitorPayStatusWithPaySuccess:(BOOL)arg0 payNumberString:(id)arg1 error:(id)arg2;
- (void)douPlusChargeWithProductModel:(id)arg0 couponModel:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)postStatusNotificationWithParams:(id)arg0 douPlusWebVCList:(id)arg1;
- (void)trackerDouPlusPayStatus:(BOOL)arg0 payNumberString:(id)arg1;
- (void)setTrackCommonParams:(id)arg0;
- (id)trackCommonParams;
- (void)prefetchProductInfo;
- (id)productInfoWithIAPID:(id)arg0;
- (void)setProductInfos:(id)arg0;
- (id)productInfos;
- (id /* block */)clickDouPlusIAPProductBlock;
- (void)setClickDouPlusIAPProductBlock:(id /* block */)arg0;
- (id)selectedProductModel;
- (void)setSelectedProductModel:(id)arg0;
- (void).cxx_destruct;

@end

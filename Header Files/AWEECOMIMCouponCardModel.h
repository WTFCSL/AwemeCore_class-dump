//
//     Generated by private class-dump
//

@class AWEECOMIMCouponModel;

@interface AWEECOMIMCouponCardModel : AWEECOMIMBaseCardModel {
    AWEECOMIMCouponModel *_couponItemModel;
}

@property (retain, nonatomic) AWEECOMIMCouponModel *couponItemModel;

+ (Class)cardViewClass;

- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)setCouponItemModel:(id)arg0;
- (id)couponItemModel;
- (void).cxx_destruct;

@end

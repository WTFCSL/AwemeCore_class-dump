//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol CJPayDyPayPromotionActivity;

@interface CJPayDyPayPromotionVoucherInfo : JSONModel {
    BOOL _isShowVoucherPage;
    NSArray<CJPayDyPayPromotionActivity> *_promotionActivitys;
    NSString *_promotionDesc;
    NSArray *_promotionActivitysTrack;
}

@property (copy, nonatomic) NSArray<CJPayDyPayPromotionActivity> *promotionActivitys;
@property (copy, nonatomic) NSString *promotionDesc;
@property (nonatomic) BOOL isShowVoucherPage;
@property (copy, nonatomic) NSArray *promotionActivitysTrack;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)promotionDesc;
- (void)setPromotionDesc:(id)arg0;
- (id)promotionActivitysTrack;
- (BOOL)isShowVoucherPage;
- (id)promotionActivitys;
- (id)getActivityArrayTrackParam;
- (void)setPromotionActivitys:(id)arg0;
- (void)setIsShowVoucherPage:(BOOL)arg0;
- (void)setPromotionActivitysTrack:(id)arg0;
- (void).cxx_destruct;

@end

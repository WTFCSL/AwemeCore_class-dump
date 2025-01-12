//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBalanceResultPromotionModel : JSONModel {
    NSString *_leftDiscountAmount;
    NSString *_leftDiscountDesc;
    NSString *_rightTopDesc;
    NSString *_rightBottomDesc;
    NSString *_voucherEndTime;
    NSString *_jumpUrl;
}

@property (copy, nonatomic) NSString *leftDiscountAmount;
@property (copy, nonatomic) NSString *leftDiscountDesc;
@property (copy, nonatomic) NSString *rightTopDesc;
@property (copy, nonatomic) NSString *rightBottomDesc;
@property (copy, nonatomic) NSString *voucherEndTime;
@property (copy, nonatomic) NSString *jumpUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)jumpUrl;
- (void)setJumpUrl:(id)arg0;
- (id)leftDiscountAmount;
- (id)leftDiscountDesc;
- (id)rightTopDesc;
- (id)rightBottomDesc;
- (id)voucherEndTime;
- (void)setLeftDiscountAmount:(id)arg0;
- (void)setLeftDiscountDesc:(id)arg0;
- (void)setRightTopDesc:(id)arg0;
- (void)setRightBottomDesc:(id)arg0;
- (void)setVoucherEndTime:(id)arg0;
- (void).cxx_destruct;

@end

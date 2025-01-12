//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayDyPayPromotionActivity : JSONModel {
    NSString *_activityId;
    NSString *_label;
    NSString *_tag;
    NSString *_prizeDesc;
    NSString *_voucherWorth;
    NSString *_voucherMeasure;
    NSString *_voucherType;
    NSString *_leftMsgDesc;
    NSString *_voucherLeftDesc;
}

@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *prizeDesc;
@property (copy, nonatomic) NSString *voucherWorth;
@property (copy, nonatomic) NSString *voucherMeasure;
@property (copy, nonatomic) NSString *voucherType;
@property (copy, nonatomic) NSString *leftMsgDesc;
@property (copy, nonatomic) NSString *voucherLeftDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)voucherType;
- (void)setVoucherType:(id)arg0;
- (id)prizeDesc;
- (void)setPrizeDesc:(id)arg0;
- (id)voucherWorth;
- (void)setVoucherWorth:(id)arg0;
- (id)voucherMeasure;
- (void)setVoucherMeasure:(id)arg0;
- (id)leftMsgDesc;
- (void)setLeftMsgDesc:(id)arg0;
- (id)voucherLeftDesc;
- (void)setVoucherLeftDesc:(id)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)label;
- (id)activityId;
- (void)setActivityId:(id)arg0;

@end

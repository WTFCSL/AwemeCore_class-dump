//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBalancePromotionModel : JSONModel {
    BOOL _hasBindCardLottery;
    NSString *_promotionDescription;
    NSString *_resourceNo;
    NSString *_planNo;
    NSString *_materialNo;
    NSString *_bizType;
    NSString *_bindCardInfo;
}

@property (copy, nonatomic) NSString *promotionDescription;
@property (copy, nonatomic) NSString *resourceNo;
@property (copy, nonatomic) NSString *planNo;
@property (copy, nonatomic) NSString *materialNo;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) BOOL hasBindCardLottery;
@property (copy, nonatomic) NSString *bindCardInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)bizType;
- (void)setBizType:(id)arg0;
- (id)bindCardInfo;
- (void)setBindCardInfo:(id)arg0;
- (id)promotionDescription;
- (void)setPromotionDescription:(id)arg0;
- (id)resourceNo;
- (void)setResourceNo:(id)arg0;
- (id)planNo;
- (void)setPlanNo:(id)arg0;
- (id)materialNo;
- (void)setMaterialNo:(id)arg0;
- (BOOL)hasBindCardLottery;
- (void)setHasBindCardLottery:(BOOL)arg0;
- (void).cxx_destruct;

@end

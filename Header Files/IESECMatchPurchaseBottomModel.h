//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailButtonTipsModel;

@interface IESECMatchPurchaseBottomModel : MTLModel <MTLJSONSerializing> {
    BOOL _grayButton;
    NSString *_buyText;
    NSString *_discountText;
    NSString *_links;
    long long _applyCoupon;
    NSString *_wordColor;
    IESECGoodsDetailButtonTipsModel *_buttonTips;
    NSString *_benifitTip;
    double _totalPrice;
}

@property (copy, nonatomic) NSString *buyText;
@property (copy, nonatomic) NSString *discountText;
@property (copy, nonatomic) NSString *links;
@property (nonatomic) long long applyCoupon;
@property (nonatomic) BOOL grayButton;
@property (copy, nonatomic) NSString *wordColor;
@property (retain, nonatomic) IESECGoodsDetailButtonTipsModel *buttonTips;
@property (copy, nonatomic) NSString *benifitTip;
@property (nonatomic) double totalPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)totalPrice;
- (void)setTotalPrice:(double)arg0;
- (long long)applyCoupon;
- (void)setApplyCoupon:(long long)arg0;
- (void)setWordColor:(id)arg0;
- (id)wordColor;
- (id)discountText;
- (void)setDiscountText:(id)arg0;
- (id)buttonTips;
- (id)benifitTip;
- (id)buyText;
- (void)setBuyText:(id)arg0;
- (BOOL)grayButton;
- (void)setGrayButton:(BOOL)arg0;
- (void)setButtonTips:(id)arg0;
- (void)setBenifitTip:(id)arg0;
- (id)links;
- (void).cxx_destruct;
- (void)setLinks:(id)arg0;

@end

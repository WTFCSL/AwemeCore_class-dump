//
//     Generated by private class-dump
//

@class IESECFeedPromotionWrapperModel, NSString;

@interface IESECTrendGoodsProductPriceModel : NSObject <IESECGoodsPriceLabelModel> {
    IESECFeedPromotionWrapperModel *_model;
}

@property (retain, nonatomic) IESECFeedPromotionWrapperModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minPrice;
- (id)maxPrice;
- (id)marketPrice;
- (BOOL)hasGapPrice;
- (id)price;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)header;

@end

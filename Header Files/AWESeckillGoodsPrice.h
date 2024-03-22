//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEGoodsModelProtocol;

@interface AWESeckillGoodsPrice : NSObject <IESECGoodsPriceLabelModel> {
    id<AWEGoodsModelProtocol> _goodsModel;
}

@property (retain, nonatomic) id<AWEGoodsModelProtocol> goodsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minPrice;
- (id)maxPrice;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)marketPrice;
- (BOOL)hasGapPrice;
- (id)initWithGoodsModel:(id)arg0;
- (id)price;
- (void).cxx_destruct;

@end

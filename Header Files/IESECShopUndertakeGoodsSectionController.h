//
//     Generated by private class-dump
//

@class NSString, IESECTracker, IESECShopGoodsAddToCartHandler, IESECObjectMapper;

@interface IESECShopUndertakeGoodsSectionController : IESECShopGoodsSectionController <IESECStoreGoodsCardViewDelegate> {
    IESECTracker *_tracker;
    IESECObjectMapper *_undertakeObjectMapper;
    IESECShopGoodsAddToCartHandler *_addToCartHandler;
}

@property (retain, nonatomic) IESECObjectMapper *undertakeObjectMapper;
@property (retain, nonatomic) IESECShopGoodsAddToCartHandler *addToCartHandler;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0 relationGoodsModel:(id)arg1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 relationGoodsModel:(id)arg1;
- (void)configureObjectMapper;
- (id)undertakeObjectMapper;
- (id)addToCartHandler;
- (void)tapOnSourceView:(id)arg0 jump:(BOOL)arg1;
- (void)tapAddToCartButton:(id)arg0 withTouchPoint:(struct CGPoint { double x0; double x1; })arg1 atIndex:(long long)arg2;
- (void)setUndertakeObjectMapper:(id)arg0;
- (void)setAddToCartHandler:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end

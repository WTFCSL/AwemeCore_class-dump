//
//     Generated by private class-dump
//

@protocol AWEFeedGoodsCardViewCellProtocol <NSObject>

@property (copy, nonatomic) id /* block */ closeCurrentCardBlock;
@property (copy, nonatomic) id /* block */ purchaseGoodsBlock;

- (id /* block */)purchaseGoodsBlock;
- (id /* block */)closeCurrentCardBlock;
- (void)configureWithGoodsModel:(id)arg0;
- (void)setCloseCurrentCardBlock:(id /* block */)arg0;
- (void)setPurchaseGoodsBlock:(id /* block */)arg0;

@end

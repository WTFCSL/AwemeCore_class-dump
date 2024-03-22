//
//     Generated by private class-dump
//

@class IESECRelationGoodsCardViewModel, NSString, IESECShopProductsHybridContext, UIView, IESECRelationSlideshowContainer, NSMutableDictionary;
@protocol IESECShopGoodsCellProtocol;

@interface IESECShopProductsProductCell : UICollectionViewCell <IESECStoreNewFlexGoodsCellDelegate> {
    NSMutableDictionary *_views;
    struct optional<IESECShopProductsProductCellType> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _currentType;
    IESECRelationGoodsCardViewModel *_viewModel;
    BOOL _animated;
    IESECShopProductsHybridContext *_context;
    id /* block */ _addToCartAction;
}

@property (weak, nonatomic) IESECShopProductsHybridContext *context;
@property (readonly, nonatomic) IESECRelationGoodsCardViewModel *viewModel;
@property (readonly, nonatomic) UIView<IESECShopGoodsCellProtocol> *currentContentCell;
@property (readonly, nonatomic) IESECRelationSlideshowContainer *slideshowContainer;
@property (copy, nonatomic) id /* block */ addToCartAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForType:(unsigned long long)arg0;
- (id)currentContentCell;
- (id)slideshowContainer;
- (void)handleAddToCartButtonClick:(id)arg0 cartButton:(id)arg1;
- (BOOL)setCurrentCellType:(unsigned long long)arg0;
- (void)updateView:(id)arg0 forType:(unsigned long long)arg1;
- (void)setAddToCartAction:(id /* block */)arg0;
- (void)updateCurrentCellWithModel:(id)arg0;
- (void)doAnimationIfNeeded;
- (id /* block */)addToCartAction;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (id)viewModel;
- (void)layoutSubviews;
- (id).cxx_construct;
- (id)currentCell;

@end
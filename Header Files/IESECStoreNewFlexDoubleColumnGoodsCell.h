//
//     Generated by private class-dump
//

@class IESECGoodsPriceLabel, IESECLLView, NSString, IESECRelationSlideshowContainer, IESECRelationGoodsCardViewModel, IESECStoreGoodsCardStatusView;
@protocol IESECStoreNewFlexGoodsCellDelegate;

@interface IESECStoreNewFlexDoubleColumnGoodsCell : UICollectionViewCell <IESECShopGoodsCellProtocol> {
    IESECRelationGoodsCardViewModel *_viewModel;
    id /* block */ _addToCartAction;
    IESECStoreGoodsCardStatusView *_statusView;
    id<IESECStoreNewFlexGoodsCellDelegate> delegate;
    IESECGoodsPriceLabel *cachedCalculateLabel;
    IESECLLView *_llView;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (weak, nonatomic) id<IESECStoreNewFlexGoodsCellDelegate> delegate;
@property (retain, nonatomic) IESECGoodsPriceLabel *cachedCalculateLabel;
@property (readonly, nonatomic) IESECRelationSlideshowContainer *slideshowContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithViewModel:(id)arg0;
+ (id /* block */)cellBuilderWithViewModel:(id)arg0;
+ (id /* block */)cellBuilderWithViewModel:(id)arg0 addToCartAction:(id /* block */)arg1 calculateLabel:(id)arg2;

- (id)cardViewModel;
- (id)llView;
- (void)setLlView:(id)arg0;
- (void)bindObject:(id)arg0;
- (id)cachedCalculateLabel;
- (void)setCachedCalculateLabel:(id)arg0;
- (id)currentCoverImageView;
- (id)slideshowContainer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class IESECWinLivingProductObject, IESECLLView;
@protocol IESECWinFlexGoodsCellProtocol;

@interface IESECWinSearchSingleColumnCell : UICollectionViewCell {
    IESECWinLivingProductObject *_object;
    id<IESECWinFlexGoodsCellProtocol> _delegate;
    IESECLLView *_llView;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (weak, nonatomic) id<IESECWinFlexGoodsCellProtocol> delegate;

+ (id /* block */)cellBuilderWithObject:(id)arg0;

- (id)llView;
- (void)setLlView:(id)arg0;
- (void)bindObject:(id)arg0;
- (void)clickGoodsSourceView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end

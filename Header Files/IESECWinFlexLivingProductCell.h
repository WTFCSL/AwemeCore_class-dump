//
//     Generated by private class-dump
//

@class NSString, IESECWinLivingProductObject, IESECLLView;
@protocol IESECWinFlexLivingProductCellDelegate;

@interface IESECWinFlexLivingProductCell : UICollectionViewCell <IESECRelationGoodsCardViewModelDelegate> {
    IESECWinLivingProductObject *_object;
    id<IESECWinFlexLivingProductCellDelegate> _delegate;
    IESECLLView *_llView;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) id<IESECWinFlexLivingProductCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)arg0;

- (id)llView;
- (void)setLlView:(id)arg0;
- (void)bindObject:(id)arg0;
- (void)clickReplayButtonView;
- (void)clickAddButtonView;
- (void)clickBuyButtonView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end

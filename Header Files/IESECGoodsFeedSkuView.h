//
//     Generated by private class-dump
//

@class IESECGoodsFeedSkuHorizonFlowView, NSString, UIImageView, UILabel, UIView, IESECGoodsSpecInfo;
@protocol IESECGoodsFeedSkuViewDelegate;

@interface IESECGoodsFeedSkuView : UIView <IESECGoodsFeedSkuHorizonFlowViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    id<IESECGoodsFeedSkuViewDelegate> _delegate;
    IESECGoodsFeedSkuHorizonFlowView *_flowView;
    UIImageView *_mainImage;
    UIView *_mainImageView;
    UILabel *_skuNumberLabel;
    IESECGoodsSpecInfo *_skuInfo;
}

@property (retain, nonatomic) UIImageView *mainImage;
@property (retain, nonatomic) UIView *mainImageView;
@property (retain, nonatomic) UILabel *skuNumberLabel;
@property (retain, nonatomic) IESECGoodsSpecInfo *skuInfo;
@property (weak, nonatomic) id<IESECGoodsFeedSkuViewDelegate> delegate;
@property (retain, nonatomic) IESECGoodsFeedSkuHorizonFlowView *flowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mainImageView;
- (id)mainImage;
- (void)setMainImageView:(id)arg0;
- (void)setMainImage:(id)arg0;
- (void)updateUIWithModel:(id)arg0;
- (id)skuInfo;
- (void)setSkuInfo:(id)arg0;
- (void)slideToIndex:(long long)arg0;
- (void)selectedFlowViewCell:(long long)arg0;
- (id)skuNumberLabel;
- (id)flowView;
- (void)clickMainImage:(id)arg0;
- (void)updateMainImageWihtSelected:(BOOL)arg0;
- (void)setFlowView:(id)arg0;
- (void)setSkuNumberLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end

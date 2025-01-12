//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIImageView, UIButton, YYLabel, UICollectionView, AWEAdSearchLiveECommerceProductCardModel, UILabel;
@protocol AWEAdSearchLiveECommerceProductCardDelegate, AWEAdTagView;

@interface AWEAdSearchLiveECommerceProductCard : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEAdSearchLiveECommerceProductCard> {
    id<AWEAdSearchLiveECommerceProductCardDelegate> delegate;
    UIView *_eCommerceProductView;
    UIImageView *_goodsImageView;
    UIView *_imageDescContainer;
    UIView *_imageDescCircleView;
    UILabel *_goodsImageDescLabel;
    YYLabel *_infoLabel;
    UILabel *_currencySymbolLabel;
    UILabel *_priceLabel;
    UILabel *_extraInfoLabel;
    AWEAdSearchLiveECommerceProductCardModel *_model;
    NSArray *_models;
    UIButton *_learnMoreBtn;
    UILabel<AWEAdTagView> *_adTagView;
    UICollectionView *_eCommerceProductListCollectionView;
}

@property (retain, nonatomic) UIView *eCommerceProductView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIView *imageDescContainer;
@property (retain, nonatomic) UIView *imageDescCircleView;
@property (retain, nonatomic) UILabel *goodsImageDescLabel;
@property (retain, nonatomic) YYLabel *infoLabel;
@property (retain, nonatomic) UILabel *currencySymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *extraInfoLabel;
@property (retain, nonatomic) AWEAdSearchLiveECommerceProductCardModel *model;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) UIButton *learnMoreBtn;
@property (retain, nonatomic) UILabel<AWEAdTagView> *adTagView;
@property (retain, nonatomic) UICollectionView *eCommerceProductListCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAdSearchLiveECommerceProductCardDelegate> delegate;

- (id)adTagView;
- (void)setupSubview;
- (id)learnMoreBtn;
- (void)setLearnMoreBtn:(id)arg0;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (void)setAdTagView:(id)arg0;
- (id)eCommerceProductListCollectionView;
- (id)eCommerceProductView;
- (id)imageDescContainer;
- (id)goodsImageDescLabel;
- (id)imageDescCircleView;
- (id)currencySymbolLabel;
- (id)extraInfoLabel;
- (void)updateExtraInfoLabelWithModel:(id)arg0;
- (void)eCommerceProductView:(id)arg0;
- (void)updateWithECommerceModel:(id)arg0;
- (void)updateWithECommerceList:(id)arg0;
- (double)liveECommerceProductCardHeight;
- (void)setECommerceProductView:(id)arg0;
- (void)setImageDescContainer:(id)arg0;
- (void)setImageDescCircleView:(id)arg0;
- (void)setGoodsImageDescLabel:(id)arg0;
- (void)setCurrencySymbolLabel:(id)arg0;
- (void)setExtraInfoLabel:(id)arg0;
- (void)setECommerceProductListCollectionView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)models;
- (id)delegate;
- (void)setModels:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end

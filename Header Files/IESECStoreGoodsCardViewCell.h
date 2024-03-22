//
//     Generated by private class-dump
//

@class IESECStoreGoodsCardViewModel, UIImageView, IESECShopGoodsTitleLabel, IESECStoreGoodsCardStatusView, IESECStoreGoodsRecommendInfoView, UILabel, IESECGoodsPriceLabel, UIButton, UIView, NSString, CAShapeLayer, IESECStoreGoodsTagsContainerOptView, IESECShopGoodsSourceView;
@protocol IESECStoreGoodsCardViewDelegate;

@interface IESECStoreGoodsCardViewCell : UICollectionViewCell <IGListBindable> {
    BOOL _shouldShowSalesLabel;
    BOOL _shouldShowPricePrefix;
    id<IESECStoreGoodsCardViewDelegate> _delegate;
    long long _titleLabelLines;
    IESECStoreGoodsCardViewModel *_viewModel;
    IESECStoreGoodsCardStatusView *_goodsStatusView;
    UIView *_imageContainer;
    UIImageView *_goodsImageView;
    IESECShopGoodsTitleLabel *_goodsTitleLabel;
    IESECStoreGoodsTagsContainerOptView *_goodsTagsContainer;
    IESECGoodsPriceLabel *_goodsPriceLabel;
    UILabel *_goodsSalesLabel;
    UIButton *_addCartButton;
    CAShapeLayer *_dashline;
    IESECStoreGoodsRecommendInfoView *_recommendInfoView;
    IESECShopGoodsSourceView *_goodsJumpView;
}

@property (retain, nonatomic) IESECStoreGoodsCardViewModel *viewModel;
@property (retain, nonatomic) IESECStoreGoodsCardStatusView *goodsStatusView;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECShopGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) IESECStoreGoodsTagsContainerOptView *goodsTagsContainer;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) UILabel *goodsSalesLabel;
@property (retain, nonatomic) UIButton *addCartButton;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (retain, nonatomic) IESECStoreGoodsRecommendInfoView *recommendInfoView;
@property (retain, nonatomic) IESECShopGoodsSourceView *goodsJumpView;
@property (weak, nonatomic) id<IESECStoreGoodsCardViewDelegate> delegate;
@property (nonatomic) long long titleLabelLines;
@property (nonatomic) BOOL shouldShowSalesLabel;
@property (nonatomic) BOOL shouldShowPricePrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (void)bindViewModel:(id)arg0;
- (id)goodsTitleLabel;
- (id)goodsPriceLabel;
- (void)setGoodsTitleLabel:(id)arg0;
- (void)setGoodsPriceLabel:(id)arg0;
- (id)goodsSalesLabel;
- (void)setGoodsSalesLabel:(id)arg0;
- (BOOL)shouldShowPricePrefix;
- (id)dashline;
- (void)setDashline:(id)arg0;
- (id)addCartButton;
- (void)setAddCartButton:(id)arg0;
- (long long)titleLabelLines;
- (void)setTitleLabelLines:(long long)arg0;
- (BOOL)shouldShowSalesLabel;
- (void)setShouldShowSalesLabel:(BOOL)arg0;
- (void)setShouldShowPricePrefix:(BOOL)arg0;
- (double)p_dashLineWidth;
- (id)recommendInfoView;
- (void)setRecommendInfoView:(id)arg0;
- (id)goodsStatusView;
- (id)goodsTagsContainer;
- (id)goodsJumpView;
- (void)remakeConstraints:(id)arg0;
- (void)didTapAddCartButton:(id)arg0 event:(id)arg1;
- (void)didTapGoodsJumpView;
- (void)setGoodsStatusView:(id)arg0;
- (void)setGoodsTagsContainer:(id)arg0;
- (void)setGoodsJumpView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setupViews;
- (id)imageContainer;
- (void)setImageContainer:(id)arg0;

@end

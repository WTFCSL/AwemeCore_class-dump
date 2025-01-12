//
//     Generated by private class-dump
//

@class UIImageView, UILabel, IESECLivePriceLabel, IESECLiveListCellPriceScrollBannerItemModel;
@protocol IESECLiveListCellPriceItemViewDelegate;

@interface IESECLiveListCellPriceItemView : UICollectionViewCell {
    UIImageView *_coverImage;
    UILabel *_descView;
    IESECLivePriceLabel *_priceLabel;
    IESECLiveListCellPriceScrollBannerItemModel *_itemModel;
    id<IESECLiveListCellPriceItemViewDelegate> _delegate;
}

@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) UILabel *descView;
@property (retain, nonatomic) IESECLivePriceLabel *priceLabel;
@property (retain, nonatomic) IESECLiveListCellPriceScrollBannerItemModel *itemModel;
@property (weak, nonatomic) id<IESECLiveListCellPriceItemViewDelegate> delegate;

+ (id)identity;

- (void)setCoverImage:(id)arg0;
- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (id)descView;
- (void)setDescView:(id)arg0;
- (void)tapCell;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)coverImage;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (void)updateModel:(id)arg0;

@end

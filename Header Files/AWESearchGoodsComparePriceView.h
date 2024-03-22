//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, AWESearchMerchandiseShopInfo;

@interface AWESearchGoodsComparePriceView : UIView {
    AWESearchMerchandiseShopInfo *_comparePriceInfo;
    UIView *_bg;
    UILabel *_comparePriceName;
    UILabel *_lowestPriceLabel;
    UILabel *_guideWord;
    UIImageView *_comparePriceIcon;
    UIImageView *_arrowIcon;
}

@property (retain, nonatomic) AWESearchMerchandiseShopInfo *comparePriceInfo;
@property (retain, nonatomic) UIView *bg;
@property (retain, nonatomic) UILabel *comparePriceName;
@property (retain, nonatomic) UILabel *lowestPriceLabel;
@property (retain, nonatomic) UILabel *guideWord;
@property (retain, nonatomic) UIImageView *comparePriceIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;

+ (double)comparePriceHeight;

- (id)comparePriceInfo;
- (void)setComparePriceInfo:(id)arg0;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg0;
- (id)guideWord;
- (id)bg;
- (void)setBg:(id)arg0;
- (void)setGuideWord:(id)arg0;
- (id)comparePriceIcon;
- (id)comparePriceName;
- (id)lowestPriceLabel;
- (void)setComparePriceName:(id)arg0;
- (void)setLowestPriceLabel:(id)arg0;
- (void)setComparePriceIcon:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
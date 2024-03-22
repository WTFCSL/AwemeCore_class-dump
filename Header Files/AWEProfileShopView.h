//
//     Generated by private class-dump
//

@class UIImageView, UIButton, UIView;

@interface AWEProfileShopView : UIView {
    BOOL _shouldShowcase;
    UIImageView *_shopArrowView;
    UIButton *_shopButton;
    UIView *_goodsYellowDot;
    UIView *_sepView;
}

@property (retain, nonatomic) UIImageView *shopArrowView;
@property (retain, nonatomic) UIButton *shopButton;
@property (retain, nonatomic) UIView *goodsYellowDot;
@property (retain, nonatomic) UIView *sepView;
@property (nonatomic) BOOL shouldShowcase;

- (id)sepView;
- (void)setSepView:(id)arg0;
- (id)shopButton;
- (void)setShopButton:(id)arg0;
- (void)setShouldShowcase:(BOOL)arg0;
- (BOOL)shouldShowcase;
- (void)updateAccessibilityLabel:(id)arg0;
- (id)goodsYellowDot;
- (id)shopArrowView;
- (id)initWithShouldShowcase:(BOOL)arg0;
- (void)updateShopViewWithCommerceShowcaseName:(id)arg0 isShopIronMan:(BOOL)arg1 isCurrentUser:(BOOL)arg2 hasNewGoods:(BOOL)arg3 shouldShowcase:(BOOL)arg4;
- (void)hideNewGoodsHint;
- (void)setShopArrowView:(id)arg0;
- (void)setGoodsYellowDot:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;

@end
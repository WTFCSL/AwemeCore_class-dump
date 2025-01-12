//
//     Generated by private class-dump
//

@class AWEECOMIMSubCardOrderCard, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMSubCardProductSalesCard, AWEECOMIMCardComponentMultiIconLabelView;

@interface AWEECOMIMTransferUserToShopCardView : AWEECOMIMCardBaseView {
    AWEECOMIMCardComponentCommonTitleView *_headerView;
    AWEECOMIMSubCardProductSalesCard *_productCardView;
    AWEECOMIMSubCardOrderCard *_orderCardView;
    AWEECOMIMCardComponentMultiIconLabelView *_descView;
}

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardProductSalesCard *productCardView;
@property (retain, nonatomic) AWEECOMIMSubCardOrderCard *orderCardView;
@property (retain, nonatomic) AWEECOMIMCardComponentMultiIconLabelView *descView;

+ (double)heightWithWidth:(double)arg0 model:(id)arg1;
+ (BOOL)isDynamicHeight;

- (id)descView;
- (void)setDescView:(id)arg0;
- (id)orderCardView;
- (void)setOrderCardView:(id)arg0;
- (id)productCardView;
- (void)setProductCardView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)headerView;
- (void)updateData;

@end

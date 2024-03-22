//
//     Generated by private class-dump
//

@class AWEECOMIMSubCardOrderCard, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMCardComponentMultiLabelView, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMModifyExpShipTimeCardView : AWEECOMIMCardBaseView {
    AWEECOMIMCardComponentCommonTitleView *_headerView;
    AWEECOMIMSubCardOrderCard *_orderCardView;
    AWEECOMIMCardComponentMultiLabelView *_descView;
    AWEECOMIMCardComponentOperationPanel *_btnPanel;
}

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardOrderCard *orderCardView;
@property (retain, nonatomic) AWEECOMIMCardComponentMultiLabelView *descView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;

+ (double)heightWithWidth:(double)arg0 model:(id)arg1;
+ (BOOL)isDynamicHeight;

- (id)descView;
- (void)setDescView:(id)arg0;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:(id)arg0;
- (void)setBtnPanel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)headerView;
- (void)updateData;

@end

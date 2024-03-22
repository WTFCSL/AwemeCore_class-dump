//
//     Generated by private class-dump
//

@class AWEECOMIMSubCardOrderCard, UIStackView, AWEECOMIMCardComponentCommonTitleView, NSMutableArray, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMLogisticsCardView : AWEECOMIMCardBaseView {
    AWEECOMIMCardComponentCommonTitleView *_headerView;
    AWEECOMIMSubCardOrderCard *_orderCardView;
    NSMutableArray *_logisticsViewList;
    UIStackView *_logisticsStackView;
    AWEECOMIMCardComponentOperationPanel *_btnPanel;
}

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardOrderCard *orderCardView;
@property (readonly, nonatomic) NSMutableArray *logisticsViewList;
@property (retain, nonatomic) UIStackView *logisticsStackView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;

+ (double)heightWithWidth:(double)arg0 model:(id)arg1;
+ (BOOL)isDynamicHeight;

- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:(id)arg0;
- (void)setBtnPanel:(id)arg0;
- (id)logisticsStackView;
- (void)setLogisticsViewCount:(unsigned long long)arg0;
- (id)logisticsViewList;
- (id)createNewLogisticsView;
- (void)setLogisticsStackView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)headerView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)updateData;

@end
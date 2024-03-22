//
//     Generated by private class-dump
//

@class NSString, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMSubCardOrderPayCard, AWEECOMIMCardRightsView, AWEECOMIMCardComponentSingleLabelView, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMOrderPayCareCardView : AWEECOMIMCardBaseView <AWEECOMIMCardCountdownDelegate> {
    AWEECOMIMCardComponentCommonTitleView *_headerView;
    AWEECOMIMSubCardOrderPayCard *_orderCardView;
    AWEECOMIMCardRightsView *_rightsView;
    AWEECOMIMCardComponentSingleLabelView *_descView;
    AWEECOMIMCardComponentOperationPanel *_btnPanel;
}

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardOrderPayCard *orderCardView;
@property (retain, nonatomic) AWEECOMIMCardRightsView *rightsView;
@property (retain, nonatomic) AWEECOMIMCardComponentSingleLabelView *descView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithWidth:(double)arg0 model:(id)arg1;
+ (BOOL)isDynamicHeight;

- (id)descView;
- (void)setDescView:(id)arg0;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:(id)arg0;
- (void)setBtnPanel:(id)arg0;
- (void)countdownDone:(unsigned long long)arg0;
- (id)rightsView;
- (void)setRightsView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)headerView;
- (void)updateData;

@end

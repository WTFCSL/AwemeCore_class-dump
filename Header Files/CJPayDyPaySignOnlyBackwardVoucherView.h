//
//     Generated by private class-dump
//

@class NSArray, NSString, CJPayDynamicLayoutView, CJPayDyPaySignOnlyBackwardModel;

@interface CJPayDyPaySignOnlyBackwardVoucherView : UIView <CJPayDynamicLayoutViewDelegate> {
    CJPayDynamicLayoutView *_voucherShowView;
    NSArray *_dynamicViewList;
    CJPayDyPaySignOnlyBackwardModel *_model;
}

@property (retain, nonatomic) CJPayDynamicLayoutView *voucherShowView;
@property (copy, nonatomic) NSArray *dynamicViewList;
@property (retain, nonatomic) CJPayDyPaySignOnlyBackwardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)p_setupConstraints;
- (void)hideAllVouchersTime;
- (void)updateCountDownVoucherTag:(id)arg0 voucherCanUse:(BOOL)arg1;
- (id)dynamicViewList;
- (id)voucherShowView;
- (void)p_createVoucherViewList;
- (void)setDynamicViewList:(id)arg0;
- (void)setVoucherShowView:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end
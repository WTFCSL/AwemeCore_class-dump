//
//     Generated by private class-dump
//

@class CJPaySignPayDeductMethodView, CJPaySignPayModel, UIView, CJPayServiceDetailView;

@interface CJPaySignPayDeductDetailView : UIView {
    CJPayServiceDetailView *_serviceDetailView;
    UIView *_bottomDivideLine;
    CJPaySignPayDeductMethodView *_deductMethodView;
    CJPaySignPayModel *_model;
    id /* block */ _payMethodClick;
}

@property (retain, nonatomic) CJPayServiceDetailView *serviceDetailView;
@property (retain, nonatomic) UIView *bottomDivideLine;
@property (retain, nonatomic) CJPaySignPayDeductMethodView *deductMethodView;
@property (retain, nonatomic) CJPaySignPayModel *model;
@property (copy, nonatomic) id /* block */ payMethodClick;

- (void)p_setupUI;
- (void)p_setupConstraints;
- (id)serviceDetailView;
- (void)setServiceDetailView:(id)arg0;
- (void)setPayMethodClick:(id /* block */)arg0;
- (id)bottomDivideLine;
- (id)deductMethodView;
- (id)p_createServerItemListModel;
- (id /* block */)payMethodClick;
- (id)initWithModel:(id)arg0 payMethodClick:(id /* block */)arg1;
- (void)updateDeductMethodView:(id)arg0;
- (void)setBottomDivideLine:(id)arg0;
- (void)setDeductMethodView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end

//
//     Generated by private class-dump
//

@class UIView, CJPayUnionBindCardChooseViewModel, CJPayUnionBindCardChooseHeaderView, CJPayAccountInsuranceTipView, CJPayCommonProtocolView, CJPayStyleButton, UITableView, MASConstraint, CJPayBindCardScrollView;

@interface CJPayUnionBindCardChooseView : UIView {
    CJPayBindCardScrollView *_scrollView;
    UITableView *_tableView;
    CJPayCommonProtocolView *_protocolView;
    CJPayStyleButton *_confirmButton;
    CJPayUnionBindCardChooseHeaderView *_headerView;
    id /* block */ _protocolClickBlock;
    CJPayUnionBindCardChooseViewModel *_viewModel;
    UIView *_scrollContentView;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
    MASConstraint *_protocolTopBaseScrollViewConstraint;
    MASConstraint *_safeGuideTipViewHeightConstraint;
    MASConstraint *_confirmButtonBaseSafeGuideTipViewConstraint;
    MASConstraint *_confirmButtonBaseSelfViewConstraint;
}

@property (retain, nonatomic) CJPayBindCardScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayUnionBindCardChooseHeaderView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) MASConstraint *protocolTopBaseScrollViewConstraint;
@property (retain, nonatomic) MASConstraint *safeGuideTipViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *confirmButtonBaseSafeGuideTipViewConstraint;
@property (retain, nonatomic) MASConstraint *confirmButtonBaseSelfViewConstraint;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (weak, nonatomic) CJPayUnionBindCardChooseViewModel *viewModel;

- (id)protocolView;
- (void)setProtocolView:(id)arg0;
- (void)p_setupUI;
- (void)p_setupData;
- (id)safeGuardTipView;
- (void)setProtocolClickBlock:(id /* block */)arg0;
- (void)setSafeGuardTipView:(id)arg0;
- (id /* block */)protocolClickBlock;
- (void)reloadWithViewModel:(id)arg0;
- (void)setProtocolTopBaseScrollViewConstraint:(id)arg0;
- (void)setConfirmButtonBaseSafeGuideTipViewConstraint:(id)arg0;
- (void)setConfirmButtonBaseSelfViewConstraint:(id)arg0;
- (void)setSafeGuideTipViewHeightConstraint:(id)arg0;
- (void)p_updateViewConstraint;
- (id)protocolTopBaseScrollViewConstraint;
- (id)confirmButtonBaseSafeGuideTipViewConstraint;
- (id)confirmButtonBaseSelfViewConstraint;
- (id)safeGuideTipViewHeightConstraint;
- (void)setScrollView:(id)arg0;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (id)scrollContentView;
- (id)initWithViewModel:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)headerView;
- (id)scrollView;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setScrollContentView:(id)arg0;

@end

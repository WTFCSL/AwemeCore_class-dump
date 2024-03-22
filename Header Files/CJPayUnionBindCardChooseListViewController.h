//
//     Generated by private class-dump
//

@class CJPayUnionBindCardChooseViewModel, CJPayUnionBindCardChooseView, NSString;

@interface CJPayUnionBindCardChooseListViewController : CJPayFullPageBaseViewController <UITableViewDelegate, UITableViewDataSource, CJPayBindCardPageProtocol> {
    CJPayUnionBindCardChooseView *_chooseView;
    CJPayUnionBindCardChooseViewModel *_viewModel;
}

@property (retain, nonatomic) CJPayUnionBindCardChooseView *chooseView;
@property (retain, nonatomic) CJPayUnionBindCardChooseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (void)p_setupUI;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)createAssociatedModelWithParams:(id)arg0;
- (void)p_buttonClick;
- (void)p_showSingleButtonAlertWithResponse:(id)arg0;
- (void)p_sendSMS;
- (id)p_buttonInfoActions:(id)arg0;
- (id)p_ysfBankList;
- (id)chooseView;
- (void)p_initSelectCardsForSync;
- (void)p_syncCard;
- (id)p_selectCardList;
- (void)p_setPwd;
- (void)closeBindCardProcessWithResult:(BOOL)arg0 token:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)p_verifySMS:(id)arg0;
- (void)p_cellClickTracker:(id)arg0;
- (void)setChooseView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewDidLoad;
- (void)back;

@end

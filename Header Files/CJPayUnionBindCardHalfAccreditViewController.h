//
//     Generated by private class-dump
//

@class CJPayUnionBindCardHalfAccreditViewModel, CJPayUnionBindCardHalfAccreditView, NSString;

@interface CJPayUnionBindCardHalfAccreditViewController : CJPayHalfPageBaseViewController <CJPayBindCardPageProtocol> {
    id /* block */ _agreeCompletion;
    id /* block */ _protocolListClick;
    CJPayUnionBindCardHalfAccreditView *_accreditView;
    CJPayUnionBindCardHalfAccreditViewModel *_viewModel;
}

@property (retain, nonatomic) CJPayUnionBindCardHalfAccreditView *accreditView;
@property (retain, nonatomic) CJPayUnionBindCardHalfAccreditViewModel *viewModel;
@property (copy, nonatomic) id /* block */ agreeCompletion;
@property (copy, nonatomic) id /* block */ protocolListClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (void)p_setupUI;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)createAssociatedModelWithParams:(id)arg0;
- (id /* block */)agreeCompletion;
- (void)setAgreeCompletion:(id /* block */)arg0;
- (id /* block */)protocolListClick;
- (void)setProtocolListClick:(id /* block */)arg0;
- (void)p_gotoCardListVC;
- (id)p_buttonInfoActions:(id)arg0;
- (id)accreditView;
- (void)p_unionSignRequest;
- (void)p_protocolClickBlock;
- (void)setAccreditView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (void)back;

@end
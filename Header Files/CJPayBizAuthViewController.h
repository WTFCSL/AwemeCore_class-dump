//
//     Generated by private class-dump
//

@class NSString, CJPayBizAuthVerifyModel, CJPayAuthVerifiedView, CJPayCommonProtocolModel;

@interface CJPayBizAuthViewController : CJPayHalfPageBaseViewController <CJPayBindCardPageProtocol, CJPayBaseLoadingProtocol> {
    BOOL _isFirstAppear;
    id /* block */ _authVerifiedBlock;
    id /* block */ _noAuthCompletionBlock;
    CJPayAuthVerifiedView *_authView;
    id /* block */ _authCompletionBlock;
    id /* block */ _clickExclamatoryMarkBlock;
    CJPayCommonProtocolModel *_protocolModel;
    CJPayBizAuthVerifyModel *_viewModel;
}

@property (retain, nonatomic) CJPayAuthVerifiedView *authView;
@property (copy, nonatomic) id /* block */ authCompletionBlock;
@property (copy, nonatomic) id /* block */ clickExclamatoryMarkBlock;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (retain, nonatomic) CJPayBizAuthVerifyModel *viewModel;
@property (copy, nonatomic) id /* block */ authVerifiedBlock;
@property (copy, nonatomic) id /* block */ noAuthCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (void)setIsFirstAppear:(BOOL)arg0;
- (id /* block */)authCompletionBlock;
- (void)setAuthCompletionBlock:(id /* block */)arg0;
- (void)p_setupUI;
- (id /* block */)clickExclamatoryMarkBlock;
- (id /* block */)authVerifiedBlock;
- (void)setAuthVerifiedBlock:(id /* block */)arg0;
- (void)setClickExclamatoryMarkBlock:(id /* block */)arg0;
- (id)protocolModel;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)setNoAuthCompletionBlock:(id /* block */)arg0;
- (void)createAssociatedModelWithParams:(id)arg0;
- (void)p_setupAuthViewUI;
- (void)setProtocolModel:(id)arg0;
- (id /* block */)noAuthCompletionBlock;
- (void)p_showSingleButtonAlert:(id)arg0;
- (void)stopLoading;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (BOOL)isFirstAppear;
- (void)setAuthView:(id)arg0;
- (id)authView;
- (double)containerHeight;

@end

//
//     Generated by private class-dump
//

@class NSString, NSDictionary, LSIMChatDetailVC, UIView;
@protocol LSIMLoadingViewProtocol;

@interface LSIMChatDetailImplVC : UIViewController <LSListVCDelegate, AWERouterViewControllerProtocol> {
    BOOL _isShowingLoadingView;
    BOOL _agreementFailed;
    NSDictionary *_routerParams;
    long long _type;
    LSIMChatDetailVC *_detailVC;
    UIView<LSIMLoadingViewProtocol> *_loadingView;
}

@property (retain, nonatomic) NSDictionary *routerParams;
@property (nonatomic) long long type;
@property (retain, nonatomic) LSIMChatDetailVC *detailVC;
@property (retain, nonatomic) UIView<LSIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isShowingLoadingView;
@property (nonatomic) BOOL agreementFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)detailVC;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (BOOL)isTopVC;
- (void)setDetailVC:(id)arg0;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)arg0;
- (void)p_showAgreementIfNeed;
- (void)setAgreementFailed:(BOOL)arg0;
- (BOOL)agreementFailed;
- (BOOL)isShowingLoadingView;
- (void)setIsShowingLoadingView:(BOOL)arg0;
- (void)setupChatDetailVC;
- (void)setupServiceClient;
- (void)listVC:(id)arg0 closePageWithAnimated:(BOOL)arg1;
- (void)listVC:(id)arg0 pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)listVC:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (void)viewDidLoad;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)hideLoadingView;

@end

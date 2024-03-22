//
//     Generated by private class-dump
//

@class NSString, UIView, AWEAuthorizeStateManager, AWEVCDAccountAlertModel;
@protocol AWEAuthorizeAlertViewProtocol;

@interface AWEAuthorizeAlertViewController : UIViewController <AWEAuthorizeViewDelegate> {
    BOOL _isLive;
    id /* block */ _didClickBlock;
    NSString *_enterFrom;
    unsigned long long _accountStatus;
    UIView<AWEAuthorizeAlertViewProtocol> *_alertView;
    id /* block */ _completionBlock;
    id /* block */ _liveCompletionBlock;
    id /* block */ _didShowBlock;
    AWEVCDAccountAlertModel *_model;
    AWEAuthorizeStateManager *_authorizeStateManager;
}

@property (retain, nonatomic) UIView<AWEAuthorizeAlertViewProtocol> *alertView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ liveCompletionBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (retain, nonatomic) AWEVCDAccountAlertModel *model;
@property (retain, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long accountStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id /* block */)didShowBlock;
- (void)setDidShowBlock:(id /* block */)arg0;
- (id)enterFrom;
- (void)agreeAction;
- (id /* block */)didClickBlock;
- (void)setDidClickBlock:(id /* block */)arg0;
- (void)setLiveCompletionBlock:(id /* block */)arg0;
- (void)setAuthorizeStateManager:(id)arg0;
- (id)authorizeStateManager;
- (BOOL)needCloseInterConnect;
- (id)bindPhoneIfNeeded;
- (id)closeInterConnect;
- (void)processSuccess;
- (id)agreeAuthorize;
- (id /* block */)liveCompletionBlock;
- (void)monitorAccountAuthorize:(long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
- (void)nextTimeAction;
- (id)initWithAccountModel:(id)arg0 didShowBlock:(id /* block */)arg1 complete:(id /* block */)arg2;
- (id)initWithAccountModel:(id)arg0 didShowBlock:(id /* block */)arg1 liveComplete:(id /* block */)arg2;
- (unsigned long long)accountStatus;
- (BOOL)isLive;
- (void)setModel:(id)arg0;
- (void)setAccountStatus:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (id /* block */)completionBlock;
- (id)model;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)viewDidLoad;
- (id)alertView;
- (void)setIsLive:(BOOL)arg0;

@end
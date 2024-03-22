//
//     Generated by private class-dump
//

@class DYASecurityTicketModel, DYRouterModel, DYReusedMobileView, NSString, AWEUILoadingView;

@interface DYReusedMobileViewController : UIViewController <DYReusedMobileManagerProtocol> {
    DYRouterModel *_routerModel;
    DYASecurityTicketModel *_ticket;
    DYReusedMobileView *_reusedMobileView;
    NSString *_phoneNumber;
    NSString *_smsCodeKey;
    NSString *_verifyTicket;
    unsigned long long _platform;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) DYASecurityTicketModel *ticket;
@property (retain, nonatomic) DYReusedMobileView *reusedMobileView;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *smsCodeKey;
@property (retain, nonatomic) NSString *verifyTicket;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleConfigCommonAdapterClass;

- (id)verifyTicket;
- (void)setVerifyTicket:(id)arg0;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (id)smsCodeKey;
- (void)setSmsCodeKey:(id)arg0;
- (void)helpAction;
- (id)aAWEUserModuleConfigCommonAdapter;
- (id)initWithContext:(id)arg0 ticketModel:(id)arg1;
- (void)handleVerifyResult:(id)arg0;
- (id)reusedMobileView;
- (void)loginWithOriginMobile;
- (void)signUpWithReusedMobile;
- (void)handleLoginResultError:(id)arg0 Account:(id)arg1 ticket:(id)arg2;
- (void)isMineAction;
- (void)notMineAction;
- (void)setReusedMobileView:(id)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)setPlatform:(unsigned long long)arg0;
- (unsigned long long)platform;
- (void)viewDidLoad;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)trackEventWithName:(id)arg0;

@end

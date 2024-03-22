//
//     Generated by private class-dump
//

@class NSString, DYRouterModel, NSTimer;

@interface DYReBindNotChineseMainLandFillInOldCodeViewModel : AWEBaseViewModel {
    BOOL _enableNextButton;
    BOOL _shouldShowNextPage;
    NSString *_errorMessage;
    long long _curCountDown;
    NSString *_url;
    unsigned long long _alertType;
    DYRouterModel *_context;
    NSTimer *_timer;
}

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property BOOL shouldShowNextPage;
@property (copy) NSString *url;
@property unsigned long long alertType;
@property (retain) DYRouterModel *context;
@property (retain) NSTimer *timer;

- (void)setCurCountDown:(long long)arg0;
- (void)countDownAction:(id)arg0;
- (long long)curCountDown;
- (void)setCountDownAndTimer:(long long)arg0;
- (void)handleSendCode;
- (void)handleNextAction:(id)arg0;
- (void)handleCaptchaChange:(id)arg0;
- (void)setEnableNextButton:(BOOL)arg0;
- (BOOL)enableNextButton;
- (void)setShouldShowNextPage:(BOOL)arg0;
- (BOOL)shouldShowNextPage;
- (void)trackError:(id)arg0 api:(id)arg1;
- (BOOL)hasThirdPartyLogin;
- (void)rebindinH5:(id)arg0;
- (void)checkHasPassword:(id)arg0;
- (void)trackSecondNumberResult:(id)arg0;
- (void)handlePhoneNotUsable;
- (id)getTicketModel;
- (id)timer;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setAlertType:(unsigned long long)arg0;
- (void)setUrl:(id)arg0;
- (void)fetchData;
- (void)setTimer:(id)arg0;
- (id)context;
- (void)dealloc;
- (unsigned long long)alertType;
- (id)url;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;

@end

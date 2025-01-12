//
//     Generated by private class-dump
//

@class NSString, NSTimer, DYRouterModel;

@interface DYBindFillInCodeViewModel : AWEBaseViewModel {
    BOOL _enableNextButton;
    NSString *_errorMessage;
    long long _curCountDown;
    NSTimer *_timer;
    DYRouterModel *_context;
}

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property (retain) NSTimer *timer;
@property (retain) DYRouterModel *context;

- (void)setCurCountDown:(long long)arg0;
- (void)countDownAction:(id)arg0;
- (long long)curCountDown;
- (void)setCountDownAndTimer:(long long)arg0;
- (void)handleSendCode;
- (void)handleNextAction:(id)arg0;
- (void)handleCaptchaChange:(id)arg0;
- (void)setEnableNextButton:(BOOL)arg0;
- (void)trackSendCodeResult:(id)arg0;
- (void)trackClickBind;
- (void)showBindSuccessToast;
- (void)trackBindSuccess;
- (void)trackBindResult:(id)arg0;
- (id)uidType;
- (BOOL)enableNextButton;
- (id)timer;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)fetchData;
- (void)setTimer:(id)arg0;
- (id)context;
- (void)dealloc;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;

@end

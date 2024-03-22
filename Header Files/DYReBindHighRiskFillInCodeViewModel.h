//
//     Generated by private class-dump
//

@class NSString, DYRouterModel, NSTimer;

@interface DYReBindHighRiskFillInCodeViewModel : AWEBaseViewModel {
    BOOL _enableNextButton;
    BOOL _bindSuccess;
    BOOL _shouldDismissViewController;
    BOOL _isResend;
    NSString *_errorMessage;
    long long _curCountDown;
    DYRouterModel *_context;
    NSTimer *_timer;
}

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property BOOL shouldDismissViewController;
@property (retain) DYRouterModel *context;
@property (retain) NSTimer *timer;
@property BOOL isResend;
@property (readonly) BOOL bindSuccess;

- (BOOL)bindSuccess;
- (void)setCurCountDown:(long long)arg0;
- (void)countDownAction:(id)arg0;
- (long long)curCountDown;
- (void)setCountDownAndTimer:(long long)arg0;
- (void)handleSendCode;
- (void)handleNextAction:(id)arg0;
- (void)handleCaptchaChange:(id)arg0;
- (void)setEnableNextButton:(BOOL)arg0;
- (BOOL)enableNextButton;
- (void)setShouldDismissViewController:(BOOL)arg0;
- (BOOL)shouldDismissViewController;
- (BOOL)isResend;
- (void)setIsResend:(BOOL)arg0;
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

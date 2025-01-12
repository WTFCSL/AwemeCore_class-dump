//
//     Generated by private class-dump
//

@class NSString, DYRouterModel, DYBindPhoneHelperInstance;

@interface DYReBindHighRiskFillInNewPhoneNumberViewModel : AWEBaseViewModel {
    BOOL _enableNextButton;
    BOOL _shouldShowNextPage;
    NSString *_errorMessage;
    DYRouterModel *_context;
    DYBindPhoneHelperInstance *_bindHelper;
}

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property (retain) DYRouterModel *context;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;

+ (id)checkValidPhoneNumber:(id)arg0;

- (void)handleNextAction:(id)arg0;
- (void)setEnableNextButton:(BOOL)arg0;
- (BOOL)enableNextButton;
- (void)handlePhoneNumberChange:(id)arg0;
- (void)setShouldShowNextPage:(BOOL)arg0;
- (id)sendCodeIfNeeded:(id)arg0;
- (id)bindHelper;
- (BOOL)shouldShowNextPage;
- (void)setBindHelper:(id)arg0;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString, DYBindPhoneHelperInstance;

@interface DYBindFillInPhoneNumberViewModel : AWEBaseViewModel {
    BOOL _enableNextButton;
    BOOL _shouldShowNextPage;
    NSString *_errorMessage;
    DYBindPhoneHelperInstance *_bindHelper;
}

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;

+ (id)checkValidPhoneNumber:(id)arg0;

- (void)handleNextAction:(id)arg0;
- (void)setEnableNextButton:(BOOL)arg0;
- (id)uidType;
- (BOOL)enableNextButton;
- (void)handlePhoneNumberChange:(id)arg0;
- (void)setShouldShowNextPage:(BOOL)arg0;
- (id)sendCodeIfNeeded:(id)arg0;
- (id)bindHelper;
- (void)trackSendCodeResult:(id)arg0 phoneNumber:(id)arg1;
- (BOOL)shouldShowNextPage;
- (void)setBindHelper:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;

@end

//
//     Generated by private class-dump
//

@protocol CJPayChooseDyPayMethodDelegate <NSObject>

- (void)changePayMethod:(id)arg0 loadingView:(id)arg1;

@optional

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)signPayWithPayContext:(id)arg0 loadingView:(id)arg1;
- (void)pushChoosePayMethodVC:(id)arg0 animated:(BOOL)arg1;
- (void)changeCombinedBankPayMethod:(id)arg0 loadingView:(id)arg1;
- (id)payContextExtParams;
- (id)getPayDisabledReasonMap;
- (void)refreshOrderResSinceChangePayMethod;

@end

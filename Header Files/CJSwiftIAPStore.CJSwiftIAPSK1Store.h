//
//     Generated by private class-dump
//

@interface CJSwiftIAPStore.CJSwiftIAPSK1Store : NSObject <SKPaymentTransactionObserver> {
    void /* unknown type, empty encoding */ productsDic;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ productRequestDelegates;
    void /* unknown type, empty encoding */ callBackDic;
    void /* unknown type, empty encoding */ restoreCallBack;
    void /* unknown type, empty encoding */ restoredTransactions;
    void /* unknown type, empty encoding */ isFirstLaunch;
}

- (void)paymentQueue:(id)arg0 updatedTransactions:(id)arg1;
- (void)paymentQueue:(id)arg0 restoreCompletedTransactionsFailedWithError:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg0;
- (BOOL)paymentQueue:(id)arg0 shouldAddStorePayment:(id)arg1 forProduct:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end

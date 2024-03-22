//
//     Generated by private class-dump
//

@class IESLiveToastLoadingViewController, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveGameOpenPlatformPaymentManager : NSObject <IESLiveGameOpenPlatformPaymentInterface> {
    BOOL _isPaying;
    NSObject<OS_dispatch_queue> *_requestPayQueue;
    IESLiveToastLoadingViewController *_loadingController;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestPayQueue;
@property (retain, nonatomic) IESLiveToastLoadingViewController *loadingController;
@property (nonatomic) BOOL isPaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (BOOL)isPaying;
- (void)setIsPaying:(BOOL)arg0;
- (void)pay:(id)arg0 completion:(id /* block */)arg1;
- (id)paymentPreConditionCheck:(id)arg0;
- (void)_pay:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)validateEntry:(id)arg0;
- (void)reportEvent:(id)arg0 appID:(id)arg1 status:(long long)arg2 params:(id)arg3;
- (void)startPayWithEntry:(id)arg0 completion:(id /* block */)arg1;
- (void)requestOrderIdWithEntry:(id)arg0 completion:(id /* block */)arg1;
- (void)showConfirmPaymentViewWithEntry:(id)arg0 completion:(id /* block */)arg1;
- (void)chargeDiamonds:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)errorToastWithCode:(long long)arg0;
- (void)requestPayWithEntry:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)shouldRetryPayRequestWithError:(id)arg0 orderStatus:(long long)arg1;
- (void)retryPayRequestWithEntry:(id)arg0 orderID:(id)arg1 completion:(id /* block */)arg2 maxRetryCount:(long long)arg3;
- (id)errorWithOrderStatus:(int)arg0;
- (void)p_requestPayWithEntry:(id)arg0 orderID:(id)arg1 completion:(id /* block */)arg2;
- (id)requestPayQueue;
- (void)p_queryOrderWithEntry:(id)arg0 completion:(id /* block */)arg1;
- (void)setRequestPayQueue:(id)arg0;
- (void).cxx_destruct;
- (id)loadingController;
- (void)setLoadingController:(id)arg0;

@end
//
//     Generated by private class-dump
//

@class IESLiveChargeLoadingView, RACDisposable, NSString;
@protocol IESLiveCJPayService;

@interface IESLiveCJPayPiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    id<IESLiveCJPayService> _cjpayService;
    IESLiveChargeLoadingView *_loadingView;
    RACDisposable *_handler;
}

@property (retain, nonatomic) id<IESLiveCJPayService> cjpayService;
@property (weak, nonatomic) IESLiveChargeLoadingView *loadingView;
@property (retain, nonatomic) RACDisposable *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)p_removeLoading;
- (id)cjpayService;
- (void)setCjpayService:(id)arg0;
- (void)p_addLoadingViewIfNeeded;
- (void)registerAuthYapilaWithBridge:(id)arg0;
- (void)registerCJPayH5DeskWithBridge:(id)arg0;
- (void)registerCJPayAuthWithBridge:(id)arg0;
- (void)registerDeleteCouponWithBridge:(id)arg0;
- (void)registerOpenUniversalPayDeskWithBridge:(id)arg0;
- (void)registerIAPWithPiper:(id)arg0;
- (void)pr_buyProductWithIapID:(id)arg0 productId:(id)arg1 source:(id)arg2 extra:(id)arg3 callBack:(id /* block */)arg4;
- (void).cxx_destruct;
- (void)setHandler:(id)arg0;
- (id)handler;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
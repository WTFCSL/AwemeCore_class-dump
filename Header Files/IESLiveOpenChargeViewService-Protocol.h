//
//     Generated by private class-dump
//

@protocol IESLiveOpenChargeViewService <NSObject>

- (void)openHalfChargeViewIn:(id)arg0 trackInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)openCurrentLiveChargeViewIn:(id)arg0 trackInfo:(id)arg1 completion:(id /* block */)arg2 dismiss:(id /* block */)arg3;
- (void)openCurrentLiveChargeViewIn:(id)arg0 trackInfo:(id)arg1 isInTopView:(BOOL)arg2 autoDismiss:(BOOL)arg3 completion:(id /* block */)arg4 dismiss:(id /* block */)arg5;
- (void)openCustomChargeViewIn:(id)arg0 trackInfo:(id)arg1 chargeCompletion:(id /* block */)arg2;
- (void)dismissChargeView;
- (void)dismissCustomChargeView;

@end

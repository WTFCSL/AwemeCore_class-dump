//
//     Generated by private class-dump
//

@protocol IESLiveInternalRouterAdapter <NSObject>

@optional

- (id)openHybridWithScheme:(id)arg0 eventParams:(id)arg1;
- (id)openFullScreenHybridWithURL:(id)arg0 kernalType:(unsigned long long)arg1 eventParams:(id)arg2;
- (id)openPopupHybridWithURL:(id)arg0 gravity:(long long)arg1 kernalType:(long long)arg2 eventParams:(id)arg3;
- (void)dismissAllPopupHybridView;
- (void)dismissAllBottomPoupHybridView;
- (void)dismissAllCenterPopupHybridView;
- (void)dismissBottomPopupWithKernalType:(unsigned long long)arg0;
- (void)dismissCenterPopupWithKernalType:(unsigned long long)arg0;
- (void)dismissLynxPopupView;
- (BOOL)pushUserProfile:(id)arg0 secUID:(id)arg1 animated:(BOOL)arg2;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;

@end

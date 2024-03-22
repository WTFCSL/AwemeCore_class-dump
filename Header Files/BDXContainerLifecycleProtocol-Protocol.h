//
//     Generated by private class-dump
//

@protocol BDXContainerLifecycleProtocol <NSObject>

@optional

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)lynxViewDidProcessRender:(id)arg0;
- (void)containerWillCreated:(id)arg0 view:(id)arg1;
- (void)containerDidCreated:(id)arg0 view:(id)arg1;
- (void)containerWillDestory:(id)arg0;
- (void)containerDidPageReady:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnShow:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnShow:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnHide:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnHide:(id)arg0 sourceParam:(id)arg1;
- (void)containerViewControllerViewDidAppear:(id)arg0;
- (void)containerViewControllerViewDidDisAppear:(id)arg0;
- (BOOL)container:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(id)arg2;
- (BOOL)container:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(id)arg2;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)containerOnTasmFinishByNative:(id)arg0;
- (void)containerOnTasmFinishByNative:(id)arg0;
- (void)containerWillConstructKitView:(id)arg0 source:(long long)arg1;
- (void)containerWillStartLoading:(id)arg0;
- (void)containerDidStartLoading:(id)arg0;
- (void)container:(id)arg0 didStartLoadingSuccessWithUrl:(id)arg1;
- (void)container:(id)arg0 didStartLoadingFailedWithUrl:(id)arg1;
- (void)container:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)container:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)containerDidFirstScreen:(id)arg0;
- (void)containerDidUpdate:(id)arg0;
- (void)container:(id)arg0 didRecieveError:(id)arg1;
- (void)container:(id)arg0 didReceivePerformance:(id)arg1;
- (void)container:(id)arg0 updateTitle:(id)arg1;
- (void)containerDidClose:(id)arg0;
- (void)container:(id)arg0 didStartAnimationWithDuration:(double)arg1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (void)container:(id)arg0 didEndAnimationWithDuration:(double)arg1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (void)containerDidPageUpdate:(id)arg0;
- (void)containerDidConstructJSRuntime:(id)arg0;
- (void)container:(id)arg0 didReceivePerformanceFirstLoad:(id)arg1 bulletPerfDict:(id)arg2;
- (void)container:(id)arg0 didFetchFromPool:(id)arg1;
- (void)container:(id)arg0 didReuseFromPool:(id)arg1;
- (void)container:(id)arg0 didRecycleIntoPool:(id)arg1;
- (void)container:(id)arg0 didFallBackWithURL:(id)arg1;
- (void)container:(id)arg0 onSetupLynxInfo:(id)arg1 bulletInfo:(id)arg2;
- (void)container:(id)arg0 onUpdateLynxInfo:(id)arg1 bulletInfo:(id)arg2;
- (void)container:(id)arg0 onKeyBoardChange:(id)arg1 eventType:(unsigned long long)arg2;
- (void)containerOnAppBecomeActive:(id)arg0;
- (void)containerOnAppBecomeActive:(id)arg0;
- (void)containerOnAppResignActive:(id)arg0;
- (void)containerOnAppResignActive:(id)arg0;
- (void)containerOnTakeScreenShot:(id)arg0;
- (void)containerOnTakeScreenShot:(id)arg0;
- (void)containerOnMemoryWarning:(id)arg0;
- (void)containerOnMemoryWarning:(id)arg0;
- (void)containerTapOnPopupMask:(id)arg0;
- (void)containerTapOnPopupMask:(id)arg0;
- (void)containerPopupStatusChange:(id)arg0 status:(long long)arg1;
- (void)containerOnBlockBackGesture:(id)arg0;
- (void)containerOnBlockBackGesture:(id)arg0;
- (void)containerUpFullScreen:(id)arg0 halfScreenCloseButtonAlpha:(double)arg1;
- (void)containerUpFullScreen:(id)arg0 backButtonAlpha:(double)arg1;
- (void)containerUpFullScreen:(id)arg0 updateHalfScreenButtonsTopOffsetWithContainerOnTop:(BOOL)arg1;

@end

//
//     Generated by private class-dump
//

@class IESLiveModalDialog, NSString, IESLiveScreenshotStartStore;
@protocol IESLiveSystemScreencastAwakenController;

@interface IESLiveScreenshotStartFragment : IESLiveGuideComponent <IESLiveScreencastLiveModuleStartInterface, IESLiveGuideActions> {
    id<IESLiveSystemScreencastAwakenController> _screencastAwakenController;
    IESLiveScreenshotStartStore *_store;
    id /* block */ _startExtensionSuccessfulHandler;
    IESLiveModalDialog *_broadcastDialog;
}

@property (retain, nonatomic) id<IESLiveSystemScreencastAwakenController> screencastAwakenController;
@property (retain, nonatomic) IESLiveScreenshotStartStore *store;
@property (copy, nonatomic) id /* block */ startExtensionSuccessfulHandler;
@property (retain, nonatomic) IESLiveModalDialog *broadcastDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)screencastLiveEnable;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)bindActions;
- (void)willCloseGuideViewController;
- (void)presentScreenshotStartWithRoom:(id)arg0 startExtensionSuccessfulHandler:(id /* block */)arg1;
- (void)bindXLiveObserveActions;
- (void)hookModalTransitionStyleSetting;
- (void)dismissStartViewAndCalledSuccessfulHandlerIfNeed;
- (void)showScreencastLiveView;
- (id)broadcastDialog;
- (void)presentSystemRecordPannelIfNeeded;
- (void)showStartAlertViewWithCompletion:(id /* block */)arg0;
- (id)screencastAwakenController;
- (void)broadcastPickerViewDidClosed;
- (void)setBroadcastDialog:(id)arg0;
- (id /* block */)startExtensionSuccessfulHandler;
- (void)setStartExtensionSuccessfulHandler:(id /* block */)arg0;
- (void)dismissScreencastLiveViewWithHandle:(id /* block */)arg0;
- (void)setScreencastAwakenController:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end

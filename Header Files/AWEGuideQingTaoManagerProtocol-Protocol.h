//
//     Generated by private class-dump
//

@protocol AWEGuideQingTaoManagerProtocol <NSObject>

@property (copy, nonatomic) id /* block */ appStoreCloseAction;

- (BOOL)isQingTaoExist;
- (void)openQingTaoApp:(id)arg0 defaultSchemeUrl:(id)arg1;
- (void)showGuideQingTaoAlertWithModel:(id)arg0 trackParams:(id)arg1 defaultAction:(id /* block */)arg2 openAppAction:(id /* block */)arg3 closeAction:(id /* block */)arg4;
- (id /* block */)appStoreCloseAction;
- (void)setAppStoreCloseAction:(id /* block */)arg0;
- (void)showGuideQingTaoAlertWithModel:(id)arg0 trackParams:(id)arg1 defaultAction:(id /* block */)arg2 closeAction:(id /* block */)arg3;
- (void)showYummeDiversionLynxPopView:(id)arg0 bridgeSubscriberCallback:(id /* block */)arg1;

@end
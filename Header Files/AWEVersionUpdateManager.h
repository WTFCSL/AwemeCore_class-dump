//
//     Generated by private class-dump
//

@class NSString, DUXAlertDialog;

@interface AWEVersionUpdateManager : NSObject <AWERouterInterceptorDelegate, DUXAlertDialogDelegate, AWEAlertProtocol> {
    id /* block */ _onClose;
    DUXAlertDialog *_dialog;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (weak, nonatomic) DUXAlertDialog *dialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (BOOL)interceptorActionBeforeTransferWithURLString:(id)arg0 userInfo:(id)arg1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)arg0;
- (void)viewControllerTransitionNotification:(id)arg0;
- (void)requestNewVersion;
- (BOOL)forceUpgradeCheckEncryptionEnable;
- (BOOL)checkEncryption;
- (void)updatePopupClickTrackWithCancel:(BOOL)arg0;
- (void)updatePopupShowTrack;
- (id)currentAppVersion;
- (void)updatePopupTrack:(BOOL)arg0 cancel:(BOOL)arg1;
- (void)_showUpgradeModal;
- (BOOL)canShowWithUpgradeStatus;
- (BOOL)versionCompareForNeedUpgrade;
- (id)showDialog;
- (BOOL)forceUpgradeAlwaysShowingEnable;
- (BOOL)dialogAutoDismiss;
- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)dialog;
- (void)setDialog:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end

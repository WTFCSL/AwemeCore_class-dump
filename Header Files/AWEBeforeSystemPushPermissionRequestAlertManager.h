//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBeforeSystemPushPermissionRequestAlertManager : NSObject <DUXAlertDialogDelegate, AWEAlertProtocol> {
    id /* block */ _onClose;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidDismiss:(id)arg0;
- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (void)p_setupUI;
- (void)p_reportPsort;
- (void)p_reportPsortNetwork;
- (void).cxx_destruct;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
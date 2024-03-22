//
//     Generated by private class-dump
//

@class DUXBottomNotification, AWEHPTabPinTopSnackBarConfigModel, NSString;
@protocol AWEHPPinTopComponentTaskProtocol;

@interface AWEHPTabPinTopSnackBar : NSObject <AWEAlertProtocol, AWEHPTabPinTopSnackBarProtocol> {
    DUXBottomNotification *_snackBar;
    AWEHPTabPinTopSnackBarConfigModel *_snackBarConfig;
    id<AWEHPPinTopComponentTaskProtocol> _task;
    id /* block */ _onClose;
}

@property (retain, nonatomic) DUXBottomNotification *snackBar;
@property (copy, nonatomic) AWEHPTabPinTopSnackBarConfigModel *snackBarConfig;
@property (retain, nonatomic) id<AWEHPPinTopComponentTaskProtocol> task;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (id)btnText;
- (id)autoDismissTime;
- (void)dismissSnackBar;
- (BOOL)shouldDismissWhenPointOutSide;
- (id)snackBar;
- (void)setSnackBar:(id)arg0;
- (void)setSnackBarConfig:(id)arg0;
- (id)snackBarConfig;
- (BOOL)isConfigValid:(id)arg0;
- (BOOL)enableShowSnackBar;
- (void)dismissTaskWithType:(long long)arg0;
- (id)setupSnackBar;
- (id)snackBarSetting;
- (void)showSnackBarIfNeedWith:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)didDismiss;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (void)setTask:(id)arg0;
- (id)task;
- (id /* block */)buttonAction;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end

//
//     Generated by private class-dump
//

@class DUXAlertDialog, DUXLoadingToast, NSString, AWEPublishBaseTask, UIView;
@protocol AWEPublishCancelDialogDelegate;

@interface AWEPublishCancelDialog : NSObject <AWEPublishTaskMessage, DUXAlertDialogDelegate, AWEPublishCancelDialogProtocol> {
    id<AWEPublishCancelDialogDelegate> _delegate;
    AWEPublishBaseTask *_targetTask;
    DUXAlertDialog *_alertDialog;
    id /* block */ _cancelHandler;
    DUXLoadingToast *_loadingView;
    UIView *_loadingBackgroundView;
}

@property (class, retain, nonatomic) AWEPublishCancelDialog *currentDialog;

@property (weak, nonatomic) id<AWEPublishCancelDialogDelegate> delegate;
@property (retain, nonatomic) AWEPublishBaseTask *targetTask;
@property (retain, nonatomic) DUXAlertDialog *alertDialog;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (retain, nonatomic) DUXLoadingToast *loadingView;
@property (retain, nonatomic) UIView *loadingBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setCurrentDialog:(id)arg0;
+ (id)currentDialog;

- (void)alertDialogDidClickMaskArea:(id)arg0;
- (void)alertDialogDidDismiss:(id)arg0;
- (void)task:(id)arg0 didRemoveWithResult:(long long)arg1 error:(id)arg2 info:(id)arg3;
- (void)task:(id)arg0 cancelWithResult:(BOOL)arg1;
- (void)trackShowEvent;
- (void)showWithTask:(id)arg0;
- (id)loadingBackgroundView;
- (void)setLoadingBackgroundView:(id)arg0;
- (id)reeditActionWithTask:(id)arg0;
- (id)saveAsDraftActionWithTask:(id)arg0;
- (id)resumeActionWithTask:(id)arg0 rollback:(BOOL)arg1;
- (void)setAlertDialog:(id)arg0;
- (id)alertDialog;
- (void)taskCancellationTimeout:(id)arg0;
- (void)trackReeditStatusWithSuccess:(BOOL)arg0 startTimestamp:(double)arg1;
- (void)trackClickEventWithActionType:(id)arg0;
- (BOOL)cancelTask:(id)arg0;
- (void)setCancelHandler:(id /* block */)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)targetTask;
- (void)setTargetTask:(id)arg0;
- (id /* block */)cancelHandler;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)hideLoadingView;

@end

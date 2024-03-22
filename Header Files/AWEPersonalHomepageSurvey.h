//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEQuestionnaireResponse;

@interface AWEPersonalHomepageSurvey : NSObject <BDXContainerLifecycleProtocol, AWEAlertProtocol> {
    AWEQuestionnaireResponse *_questionnaireResponse;
    id /* block */ _onClose;
    UIViewController *_viewController;
}

@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireResponse;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)containerWillStartLoading:(id)arg0;
- (void)containerDidStartLoading:(id)arg0;
- (void)containerDidClose:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)trackLoadResult:(BOOL)arg0 errorCode:(long long)arg1 errorMsg:(id)arg2;
- (void)onBroadcastNotification:(id)arg0;
- (void)setQuestionnaireResponse:(id)arg0;
- (id)questionnaireResponse;
- (id)init;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end

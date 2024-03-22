//
//     Generated by private class-dump
//

@class NSString, UIViewController;

@interface AWEHighRiskBindManager : NSObject <AWEUserMessage, AWEHighRiskBindManagerProtocol, AWEAlertProtocol> {
    BOOL isHighRiskEnded;
    UIViewController *_step1vc;
}

@property (weak, nonatomic) UIViewController *step1vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isHighRiskEnded;

+ (id)sharedInstance;

- (void)didFinishLogout;
- (void)didFinishBindPhone;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (void)handleBroadcastNotification:(id)arg0;
- (BOOL)isHighRiskEnded;
- (id)enterFrom:(long long)arg0;
- (void)setIsHighRiskEnded:(BOOL)arg0;
- (void)showViewControllerIfNeededFrom:(long long)arg0;
- (void)setStep1vc:(id)arg0;
- (void)finishBind;
- (id)step1vc;
- (void)showIfNeededFromLaunch;
- (BOOL)isHighRiskNumber;
- (void)showSkipAlert;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldShow;

@end
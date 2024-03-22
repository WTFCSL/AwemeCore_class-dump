//
//     Generated by private class-dump
//

@class NSString, AWEAccountPrivacyAndUserItemAlertView;

@interface AWEAccountPrivacyAndUserItemAlertManager : NSObject <AWEBasicModeMessage, AWEAlertProtocol, AWEAccountPrivacyAndUserItemAlertManagerProtocol> {
    BOOL _isAlertShowing;
    AWEAccountPrivacyAndUserItemAlertView *_alertView;
}

@property (retain, nonatomic) AWEAccountPrivacyAndUserItemAlertView *alertView;
@property (nonatomic) BOOL isAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (void)showQuitBasicModeAlert;
- (void)showQuitBasicModeAlertWithAgreeBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (void)showQuitAppInBasicModeAlertWithAgreeBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (void)markAlertAgreed;
- (void)basicModeDidChange:(BOOL)arg0;
- (BOOL)isAlertShowing;
- (void)setIsAlertShowing:(BOOL)arg0;
- (void)showIfNeeded;
- (BOOL)hasAgreed;
- (BOOL)shouldConfigSelas;
- (void)showIfNeededAndDecideHandler:(id /* block */)arg0;
- (void)onceGetStorageAlertAgreedKey;
- (void)setPrivacyAlertAgreedKey;
- (id)init;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (void)dealloc;
- (id)alertView;
- (BOOL)shouldShow;

@end

//
//     Generated by private class-dump
//

@class NSString, UIWindow, UIViewController;

@interface AWEBindPhoneAlertManager : NSObject <AWEUserMessage> {
    UIWindow *_window;
    UIWindow *_lastKeyWindow;
    UIViewController *_windowRootViewController;
}

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIViewController *windowRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAlertWithType:(unsigned long long)arg0;
+ (void)showBindPhoneAlertWithType:(unsigned long long)arg0 confirmBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
+ (void)showBindPhoneAlertWithType:(unsigned long long)arg0 confirmBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2 presentHandler:(id /* block */)arg3;
+ (BOOL)checkAndShowBindPhoneAlertWithType:(unsigned long long)arg0 confirmBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
+ (BOOL)checkAndShowBindPhoneAlertWithPrivacyType:(unsigned long long)arg0;
+ (id)sharedInstance;
+ (void)start;

- (void)didFinishLogout;
- (id)lastKeyWindow;
- (void)setLastKeyWindow:(id)arg0;
- (id)windowRootViewController;
- (void)setWindowRootViewController:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setWindow:(id)arg0;
- (id)window;
- (void)dealloc;

@end

//
//     Generated by private class-dump
//

@protocol RTVAccountStateObserver <NSObject>

@optional

- (void)accountDidLogin;
- (void)accountDidLogout;
- (void)accountSessionExpired;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;

@end

//
//     Generated by private class-dump
//

@protocol AWEUserQuickBindService <HTSService>

- (id)quickBindViewControllerWithPlatform:(unsigned long long)arg0 useType:(unsigned long long)arg1 enterFrom:(id)arg2 clientKey:(id)arg3 didCancelBindBlock:(id /* block */)arg4 didFinishBindBlock:(id /* block */)arg5;
- (void)showBindSafeMobileViewController:(unsigned long long)arg0 completionBlock:(id /* block */)arg1;

@optional

- (BOOL)enableQuickBindForHalfScreen:(unsigned long long)arg0;
- (id)getLastLoginUser;
- (id)getVisibleLoginWindow;
- (BOOL)isShowingLoginWindow;

@end

//
//     Generated by private class-dump
//

@protocol AWEPrivacyPermissionDecouplingManagerProtocol <NSObject>

+ (BOOL)shouldShowDuetDecouplingTipsPopupWithPrivacyType:(long long)arg0 originalDuetPermission:(long long)arg1 duetPermission:(long long)arg2;
+ (BOOL)showDuetDecouplingTipsPopupWithPrivacyType:(long long)arg0 confirmBlock:(id /* block */)arg1 enterMethod:(id)arg2 enterFrom:(id)arg3;
+ (BOOL)shouldShowStoryShareDecouplingTipsPopupWithPrivacyType:(long long)arg0 originalStorySharePermission:(long long)arg1 storySharePermission:(long long)arg2;
+ (BOOL)showStoryShareDecouplingTipsPopupWithPrivacyType:(long long)arg0 confirmBlock:(id /* block */)arg1 enterMethod:(id)arg2 enterFrom:(id)arg3;
+ (BOOL)shouldShowDownloadDecouplingTipsPopupWithPrivacyType:(long long)arg0 originalDownloadPermission:(long long)arg1 downloadPermission:(long long)arg2;
+ (BOOL)showDownloadDecouplingTipsPopupWithPrivacyType:(long long)arg0 confirmBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2 enterMethod:(id)arg3 enterFrom:(id)arg4;
+ (long long)decouplingPopupForPrivateAccountShowTimes;
+ (long long)decouplingHintForPrivateAccountShowTimes;
+ (void)updateDecouplingPopupForPrivateAccountShowTimes;
+ (id)privacyDecoulingHintText;
+ (void)updateDecouplingHintForPrivateAccountShowTimes;
+ (void)showDecouplingPopupForPrivateAccountWithConfirmBlock:(id /* block */)arg0 dismissBlock:(id /* block */)arg1 confirmText:(id)arg2 enterMethod:(id)arg3;

@end

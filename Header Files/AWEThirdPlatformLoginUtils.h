//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEThirdPlatformLoginUtils : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *platformFailureLog;

+ (id)modelForPlatform:(unsigned long long)arg0 isBeforeLogin:(BOOL)arg1;
+ (BOOL)shouldContinueLoginWithThirdPlatfrom:(id)arg0 buttonType:(unsigned long long)arg1;
+ (void)trackAlertShow:(unsigned long long)arg0 type:(unsigned long long)arg1;
+ (void)handleSSOLoginResult:(unsigned long long)arg0 isOAuthSuccess:(BOOL)arg1;
+ (id)currenDeviceLoginHistoryUser:(unsigned long long)arg0;
+ (BOOL)hasExceedErrorLimit:(unsigned long long)arg0;
+ (id)modelForForPlatform:(unsigned long long)arg0 type:(unsigned long long)arg1;
+ (id)modelForPlatform:(unsigned long long)arg0;
+ (void)trackClickForLoginPlatform:(unsigned long long)arg0 type:(unsigned long long)arg1;
+ (void)trackRightClickForLoginPlatform:(unsigned long long)arg0 type:(unsigned long long)arg1;
+ (void)trackNewAlertClickForLoginPlatform:(unsigned long long)arg0 type:(unsigned long long)arg1;
+ (void)jumpToURL:(id)arg0;
+ (void)jumpToRouter:(id)arg0;
+ (id)platformFailureLog;
+ (void)showClassisAlert:(id)arg0;
+ (id)getUserInfo:(id)arg0;
+ (id)getUserAvatar:(id)arg0;
+ (void)trackAlertShow:(id)arg0;
+ (id)secUIDForPlatform:(unsigned long long)arg0;
+ (BOOL)showAlertIfNeeded:(unsigned long long)arg0 error:(id)arg1;
+ (void)setPlatformFailureLog:(id)arg0;
+ (void)showAlert:(id)arg0;

@end

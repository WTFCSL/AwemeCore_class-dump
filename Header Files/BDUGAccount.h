//
//     Generated by private class-dump
//

@interface BDUGAccount : NSObject {
    BOOL _isLoginInOtherApps;
}

@property (nonatomic) BOOL isLoginInOtherApps;

+ (id)sharedInstance;

- (void)accountDidLoginNotification;
- (void)accountDidLogoutNotification;
- (void)accountSessionExpiredNotification;
- (void)bindPhoneNotification;
- (void)rebindPhoneNotification;
- (void)setIsLoginInOtherApps:(BOOL)arg0;
- (BOOL)isLoginInOtherApps;

@end

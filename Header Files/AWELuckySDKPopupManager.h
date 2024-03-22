//
//     Generated by private class-dump
//

@interface AWELuckySDKPopupManager : NSObject {
    BOOL _hasPrivacyAlertShown;
}

@property (nonatomic) BOOL hasPrivacyAlertShown;

+ (id)sharedManager;

- (void)setHasPrivacyAlertShown:(BOOL)arg0;
- (BOOL)canShowForNewAlertManager;
- (BOOL)__checkPrivacyAlertAlreadyShow;
- (void)__trackSlardarServiceWithEvent:(id)arg0 category:(id)arg1;
- (BOOL)isActivityPopupNeededShow;
- (BOOL)hasTeenAlertDone;
- (BOOL)isActivityPopupInSpecialPage;
- (BOOL)isAppInAuditing;
- (BOOL)shouldShowBindPhoneAlert;
- (BOOL)hasPrivacyAlertShown;

@end

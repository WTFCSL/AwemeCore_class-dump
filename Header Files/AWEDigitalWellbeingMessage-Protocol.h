//
//     Generated by private class-dump
//

@protocol AWEDigitalWellbeingMessage <NSObject>

@optional

- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)timeLockDidChange:(long long)arg0 isLogout:(BOOL)arg1;
- (void)serverTeenModeDidTakeEffectForFirstTime;
- (void)isForceServerTeenModeDidChange:(BOOL)arg0;
- (void)serverTeenModeDidRecalculateUnderFourTeenTeenModeStatus:(BOOL)arg0;
- (void)serverTeenModeDidChangeUnderFourTeenModeStatus;
- (void)unlockPageDidDismiss;
- (void)unlockPageWillAppear;
- (void)teenPersonalRecommendSwitchChanged:(BOOL)arg0;
- (void)digitalWellbeingDidTransferredToTimeManager;

@end

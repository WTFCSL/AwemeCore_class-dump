//
//     Generated by private class-dump
//

@protocol AWELandscapeAutoRotateConfigProtocol <NSObject>

+ (BOOL)canSupportLandscapeBoth;
+ (BOOL)isAutoRotateSwitchOpen;
+ (id)autoRotateSwitchStatusSource;
+ (BOOL)shouldShowAutoRotateSwitch;
+ (void)openAutoRotateSwitch:(BOOL)arg0 byStrategy:(BOOL)arg1;
+ (long long)autoRotateSwitchStrategy;
+ (BOOL)canAutoRoteScreenOrientation;
+ (void)openAutoRotateSwitch:(BOOL)arg0;
+ (void)turnOnAutoRotateSwitchByStrategyIfNeeded;
+ (BOOL)delayBeginMonitor;
+ (BOOL)updateEntryViewWhenAppear;

@end

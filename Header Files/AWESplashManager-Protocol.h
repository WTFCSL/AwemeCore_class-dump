//
//     Generated by private class-dump
//

@class NSString;

@protocol AWESplashManager <HTSService>

@property (nonatomic) BOOL forceIgnoreCurrentShow;
@property (nonatomic, readonly) BOOL shouldReshowSplashInU18Mode;
@property (nonatomic, copy) NSString *lastSplashId;
@property (nonatomic) long long lastSplashType;
@property (nonatomic) BOOL isFakeLaunchViewShowing;

- (void)setupWithConfig:(id)arg0;
- (void)setupWithConfig:(id)arg0;
- (BOOL)isSplashShowing;
- (BOOL)isSplashShown;
- (void)sendRealtimeSplashRequestWithWarmStart:(BOOL)arg0;
- (void)sendRealtimeSplashRequestWithWarmStart:(BOOL)arg0;
- (BOOL)willShowNormalSplash;
- (BOOL)isUserTappedOnSplash;
- (id)awesplash_imageNamed:(id)arg0;
- (void)showRealtimeBrandSplash;
- (BOOL)forceIgnoreCurrentShow;
- (void)setForceIgnoreCurrentShow:(BOOL)arg0;
- (BOOL)shouldReshowSplashInU18Mode;
- (id)lastSplashId;
- (void)setLastSplashId:(id)arg0;
- (long long)lastSplashType;
- (void)setLastSplashType:(long long)arg0;
- (BOOL)isFakeLaunchViewShowing;
- (void)setIsFakeLaunchViewShowing:(BOOL)arg0;
- (id)lastShowSplashInfo;
- (BOOL)isColdStart;
- (BOOL)isInU18Block;
- (id)bdasplashcore_imageNamed:(id)arg0;
- (BOOL)shouldAvoidForSplash;
- (BOOL)blockFeedCache;
- (BOOL)isTopMallSplashShowing;
- (BOOL)shouldShowTopMallSplash;
- (BOOL)safeIsTopMallSplashShowing;
- (BOOL)safeShouldShowTopMallSplash;
- (BOOL)disableSplashInPad;
- (id)hotSplashImage;
- (id)getImageFromSplashGeckoWith:(id)arg0;
- (id)getImageFromSplashGeckoWith:(id)arg0;
- (id)getImageDataFromSplashGeckoWith:(id)arg0;
- (id)getImageDataFromSplashGeckoWith:(id)arg0;
- (void)prePickAdModel;
- (void)ignoreSplashShowIfNeededWithDeeplink:(id)arg0;
- (void)ignoreSplashShowIfNeededWithDeeplink:(id)arg0;

@end
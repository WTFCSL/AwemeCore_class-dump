//
//     Generated by private class-dump
//

@interface AWEFeedNearbyMallCardResourceManager : NSObject

+ (id)loadCDNResourceData:(id)arg0;
+ (id)loadCDNBackgroundImage:(id)arg0;
+ (id)mallPanelPathFromBGTheme:(long long)arg0;
+ (id)mallLocationIconPathFromBGTheme:(long long)arg0;
+ (void)trackNearbyGeckoResourceMonitorWithResult:(long long)arg0 loadType:(long long)arg1 channel:(id)arg2 filePath:(id)arg3 errorMsg:(id)arg4 cdnLoadTime:(long long)arg5;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)backgroundImagePath;
- (id)lottiePath;
- (void)preloadMallCardResource;
- (id)lightLottiePath;
- (id)locationLottiePath;
- (id)bgLottiePath;
- (id)styleTwoBgImagePath;
- (id)poiContentBackgroundImagePath;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
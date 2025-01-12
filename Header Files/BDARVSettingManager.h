//
//     Generated by private class-dump
//

@interface BDARVSettingManager : NSObject

+ (id)defaultResolution;
+ (long long)halfAppStoreFrameY;
+ (BOOL)enableBDADSDKProtocol;
+ (BOOL)supportSuperResolution;
+ (BOOL)isLowBatteryThan:(double)arg0;
+ (long long)playerResolutionIsPreload:(BOOL)arg0;
+ (id)preloadDefaultResolution;
+ (BOOL)enableResolutionDegrade;
+ (long long)resolutionSlow4G;
+ (long long)resolution3G;
+ (long long)resolution2G;
+ (long long)resolutionSlow2G;
+ (BOOL)enableResolutionDegradeAtStall;
+ (BOOL)enableNewPlayerPreload;
+ (BOOL)enablePlayerPreloadOptimizeWithSDKAB:(id)arg0;
+ (BOOL)enablePlayerPreloadOptimizeAtBannerWithSDKAB:(id)arg0;
+ (BOOL)enablePlayerPreloadOptimizeAtPatchWithSDKAB:(id)arg0;
+ (long long)playerPreloadDelayTimeWithSDKAB:(id)arg0;
+ (long long)playerPreloadDelayTimeAtDouyinLite;
+ (BOOL)preloadResource;
+ (id)defaultReport;
+ (id)lowDeviceThreshold;
+ (long long)rewardedVideoRetryCount;
+ (BOOL)rewardedVideoDisableRetryForPreload;
+ (double)videoPreloadSize;
+ (double)videoPreloadCacheSize;
+ (long long)playerPreloadMaxNumber;
+ (long long)preloadResolution;
+ (BOOL)enablePreloadAppstoreAtNetPreloadWithSDKAB:(id)arg0;
+ (double)preloadAppstoreDelayTimeAtNetPreloadWithSDKAB:(id)arg0;
+ (BOOL)enablePreloadAppstoreAtShowWithSDKAB:(id)arg0;
+ (double)preloadAppstoreDelayTimeAtShowWithSDKAB:(id)arg0;
+ (BOOL)enablePreloadAppstoreAtFisrtFrameWithSDKAB:(id)arg0;
+ (double)preloadAppstoreDelayTimeAtFisrtFrameWithSDKAB:(id)arg0;
+ (BOOL)disableAllLocalTest;
+ (long long)startLoadingStyleType;
+ (BOOL)enableAppstoreClosedLoop;
+ (BOOL)BDARVNewLoadingProcess;
+ (BOOL)enableHybridMonitor;
+ (BOOL)enableCloseIndicatorWithRequest;
+ (BOOL)enableLoadingBeforeRender;
+ (BOOL)enablePlayBackEndedNew;
+ (BOOL)enableNATimeUpdate;
+ (BOOL)rewardedVideoEnableNewIndicator;
+ (BOOL)enableBDARAudioManager;
+ (BOOL)enableStopOPT;
+ (BOOL)enablePreloadAppstoreWithInspireScene:(id)arg0;
+ (BOOL)enablePreloadAppstoreAndPreloadAlways:(id)arg0;
+ (BOOL)enableAddInspireRequstExtraParams;
+ (BOOL)enableUrlCheck;
+ (id)reportPageWebURL;
+ (id)geckoChannelForAppId;
+ (id)reportDislikeOrigin;
+ (BOOL)enableCacheAtPlay;
+ (BOOL)enableCacheVideoInfo;
+ (BOOL)changeCallBackOrder;
+ (BOOL)enableVideoModelPriority;
+ (BOOL)enableSuperResolution;
+ (BOOL)enable720pSuperResolution;
+ (BOOL)enableBytevc1WithResolution:(long long)arg0;
+ (BOOL)enableBusinessVideoEngineConfig;
+ (long long)superResolutionStatus;
+ (BOOL)enablePlayerTracker;
+ (BOOL)isLowBattery;
+ (long long)expireTime;

@end

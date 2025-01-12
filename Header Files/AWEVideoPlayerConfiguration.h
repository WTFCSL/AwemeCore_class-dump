//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoPlayerConfiguration : NSObject <AWEAppAwemeSettingMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHDRBrightnessOffset:(id)arg0 brightness:(double)arg1;
+ (void)_setupIESVideoPlayerConfig;
+ (void)setupStrategyStateConfig;
+ (long long)optimizeVideoPlayerLogFlag;
+ (id)getVideoEngineLocalServerOptions;
+ (id)getPlayerOptions;
+ (id)getPlayerGlobalThreadPoolOptions;
+ (id)getPlayerStrategyOptions;
+ (void)configPreloadStrategy;
+ (void)setPlayerCustomHeader;
+ (id)getAppInfoConfig;
+ (id)getPlayerABConfig;
+ (id)getABValueWithKeys:(id)arg0;
+ (id)getVideoEngineLocalServerABConfig;
+ (id)getPlayerGlobalThreadPoolABConfig;
+ (id)getPlayerStrategyABConfig;
+ (void)initHDRProcessorModel;
+ (void)initHDRBrightnessConfig;
+ (void)initBMFProcessorModel;
+ (id)getVideoTypeStrategy:(id)arg0;
+ (double)getBrightnessOffset:(id)arg0 currentBrightness:(double)arg1;
+ (void)setHDRBrightnessStrategy:(id)arg0;
+ (id)sharedInstance;
+ (void)setup;

- (void)awemeSettingDidChange;
- (id)init;
- (void)dealloc;

@end

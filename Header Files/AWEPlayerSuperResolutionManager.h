//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlayerSuperResolutionManager : NSObject <AWEPlayerSuperResolutionManagerProtocol> {
    BOOL _enableSuperResolution;
    BOOL _adOnly;
    BOOL _enableDowngradeGearToSuperResolution;
    BOOL _preloadUseMax720P;
    BOOL _preloadResultHighest;
    long long _superResolution720Count_preload;
    long long _unSuperResolution720Count_preload;
    long long _minFpsThreshold;
    long long _minBatteryThreshold;
    long long _percentForCommon;
    long long _percentFor540;
    long long _percentFor720;
    long long _longlower;
    long long _longupper;
    long long _shortlower;
    long long _shortupper;
    long long _superResolution540Count;
    long long _unSuperResolution540Count;
    long long _superResolution720Count;
    long long _unSuperResolution720Count;
    long long _superResolutionCommonCount;
    long long _unSuperResolutionCommonCount;
    long long _vrMinFpsThreshold;
    long long _vrMinBatteryThreshold;
    long long _vrPercentForCommon;
    long long _vrLonglower;
    long long _vrLongupper;
    long long _vrShortlower;
    long long _vrShortupper;
    long long _vrSuperResolutionCommonCount;
    long long _vrUnSuperResolutionCommonCount;
}

@property (nonatomic) BOOL enableSuperResolution;
@property (nonatomic) long long minFpsThreshold;
@property (nonatomic) long long minBatteryThreshold;
@property (nonatomic) long long percentForCommon;
@property (nonatomic) long long percentFor540;
@property (nonatomic) long long percentFor720;
@property (nonatomic) BOOL adOnly;
@property (nonatomic) long long longlower;
@property (nonatomic) long long longupper;
@property (nonatomic) long long shortlower;
@property (nonatomic) long long shortupper;
@property (nonatomic) long long superResolution540Count;
@property (nonatomic) long long unSuperResolution540Count;
@property (nonatomic) long long superResolution720Count;
@property (nonatomic) long long unSuperResolution720Count;
@property (nonatomic) long long superResolutionCommonCount;
@property (nonatomic) long long unSuperResolutionCommonCount;
@property (nonatomic) BOOL enableDowngradeGearToSuperResolution;
@property (nonatomic) BOOL preloadUseMax720P;
@property (nonatomic) BOOL preloadResultHighest;
@property (nonatomic) long long vrMinFpsThreshold;
@property (nonatomic) long long vrMinBatteryThreshold;
@property (nonatomic) long long vrPercentForCommon;
@property (nonatomic) long long vrLonglower;
@property (nonatomic) long long vrLongupper;
@property (nonatomic) long long vrShortlower;
@property (nonatomic) long long vrShortupper;
@property (nonatomic) long long vrSuperResolutionCommonCount;
@property (nonatomic) long long vrUnSuperResolutionCommonCount;
@property (nonatomic) long long superResolution720Count_preload;
@property (nonatomic) long long unSuperResolution720Count_preload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setEnableSuperResolution:(BOOL)arg0;
- (BOOL)enableSuperResolution;
- (BOOL)isLowBattery:(long long)arg0;
- (BOOL)enableDowngradeGearToSuperResolution;
- (id)preloadDowngradeIfNeededWithBitrateModel:(id)arg0;
- (void)trackPreloadSRResultWithModel:(id)arg0;
- (void)configSuperResolutionWithVC:(id)arg0;
- (void)setMinFpsThreshold:(long long)arg0;
- (void)setMinBatteryThreshold:(long long)arg0;
- (void)setPercentFor540:(long long)arg0;
- (long long)minFpsThreshold;
- (long long)minBatteryThreshold;
- (long long)percentFor540;
- (BOOL)isDashWithModel:(id)arg0;
- (BOOL)isDynamicLinkWithVC:(id)arg0;
- (BOOL)check540PWithVC:(id)arg0;
- (BOOL)p_isFromFamiliarCacheWithModel:(id)arg0;
- (BOOL)__isYouthControlEnabled;
- (BOOL)adOnly;
- (BOOL)__enableOwnPlayerWithModel:(id)arg0;
- (id)__targetDowngradeSuperResolutionWithModel:(id)arg0;
- (BOOL)__isDynamicLinkWithModel:(id)arg0 bsModel:(id)arg1;
- (BOOL)__check720PWithModel:(id)arg0;
- (BOOL)__check720PercentWithModel:(id)arg0;
- (long long)superResolution720Count_preload;
- (void)setSuperResolution720Count_preload:(long long)arg0;
- (BOOL)preloadUseMax720P;
- (id)__AWEPlayVideoViewController_ModelURLArrayWithModel:(id)arg0 bsModel:(id)arg1;
- (id)__AWEPlayVideoViewController_PlayURLArrayWithModel:(id)arg0 bsModel:(id)arg1;
- (long long)percentFor720;
- (long long)unSuperResolution720Count_preload;
- (void)setUnSuperResolution720Count_preload:(long long)arg0;
- (BOOL)enableDowngradeGearWithSR;
- (BOOL)is720PWithVC:(id)arg0;
- (id)p_isFromFamiliarCacheNumberWithModel:(id)arg0;
- (void)setPercentForCommon:(long long)arg0;
- (void)setPercentFor720:(long long)arg0;
- (void)setAdOnly:(BOOL)arg0;
- (void)setLonglower:(long long)arg0;
- (void)setLongupper:(long long)arg0;
- (void)setShortlower:(long long)arg0;
- (void)setShortupper:(long long)arg0;
- (long long)percentForCommon;
- (void)setEnableDowngradeGearToSuperResolution:(BOOL)arg0;
- (void)setPreloadUseMax720P:(BOOL)arg0;
- (void)setPreloadResultHighest:(BOOL)arg0;
- (void)setVrMinFpsThreshold:(long long)arg0;
- (void)setVrMinBatteryThreshold:(long long)arg0;
- (void)setVrPercentForCommon:(long long)arg0;
- (void)setVrLonglower:(long long)arg0;
- (void)setVrLongupper:(long long)arg0;
- (void)setVrShortlower:(long long)arg0;
- (void)setVrShortupper:(long long)arg0;
- (long long)vrPercentForCommon;
- (long long)vrMinFpsThreshold;
- (long long)vrMinBatteryThreshold;
- (void)trackerInfoWithVC:(id)arg0 checked:(BOOL)arg1;
- (void)setBMFProcessConfig:(id)arg0;
- (void)configSuperResolutionForVR:(id)arg0;
- (BOOL)preloadResultHighest;
- (BOOL)checkCommonPAvailable;
- (BOOL)checkCommonPercentWithVC:(id)arg0;
- (long long)longlower;
- (long long)longupper;
- (long long)shortlower;
- (long long)shortupper;
- (long long)superResolutionCommonCount;
- (void)setSuperResolutionCommonCount:(long long)arg0;
- (BOOL)check540PercentWithVC:(id)arg0;
- (long long)superResolution540Count;
- (void)setSuperResolution540Count:(long long)arg0;
- (BOOL)check720PWithVC:(id)arg0;
- (BOOL)check720PercentWithVC:(id)arg0;
- (long long)superResolution720Count;
- (void)setSuperResolution720Count:(long long)arg0;
- (long long)unSuperResolution720Count;
- (void)setUnSuperResolution720Count:(long long)arg0;
- (long long)unSuperResolution540Count;
- (void)setUnSuperResolution540Count:(long long)arg0;
- (long long)unSuperResolutionCommonCount;
- (void)setUnSuperResolutionCommonCount:(long long)arg0;
- (long long)vrSuperResolutionCommonCount;
- (long long)vrUnSuperResolutionCommonCount;
- (void)setVrUnSuperResolutionCommonCount:(long long)arg0;
- (void)setVrSuperResolutionCommonCount:(long long)arg0;
- (BOOL)nunki_getEnalbeSR;
- (BOOL)checkVRCommonPercentWithVC:(id)arg0;
- (long long)vrLonglower;
- (long long)vrLongupper;
- (long long)vrShortlower;
- (long long)vrShortupper;
- (void)checkSuperResolutionWithVC:(id)arg0;
- (void)trackerVideoPlayInfoWithVC:(id)arg0 checked:(BOOL)arg1 isEndEvent:(BOOL)arg2;
- (BOOL)isLowBattery;
- (id)init;
- (void)setupData;

@end

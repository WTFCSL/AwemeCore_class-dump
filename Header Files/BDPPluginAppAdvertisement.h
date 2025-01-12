//
//     Generated by private class-dump
//

@class NSString;
@protocol BDPPluginAppAdvertisementVideoImplNewProtocol, BDPPluginAppAdvertisementBannerImplProtocol, BDPPluginAppAdvertisementInterstitialImplProtocol, BDPPluginAppAdvertisementVideoImplProtocol;

@interface BDPPluginAppAdvertisement : BDPBridgeInstancePlugin <BDPRewardVideoStateChangeDelegate> {
    id<BDPPluginAppAdvertisementBannerImplProtocol> _bannerAdvertisementImpl;
    id<BDPPluginAppAdvertisementVideoImplProtocol> _videoAdvertisementImpl;
    id<BDPPluginAppAdvertisementVideoImplNewProtocol> _videoAdvertisementNewImpl;
    id<BDPPluginAppAdvertisementBannerImplProtocol> _pangleBannerAdvertisementImpl;
    id<BDPPluginAppAdvertisementInterstitialImplProtocol> _interstitialAdvertisementImpl;
    long long _adType;
}

@property (class, retain, nonatomic) Class bannerAdvertisementPlugin;
@property (class, retain, nonatomic) Class videoAdvertisemnetPlugin;
@property (class, retain, nonatomic) Class videoAdvertisementNewPlugin;
@property (class, retain, nonatomic) Class pangleBannerAdvertisementPlugin;
@property (class, retain, nonatomic) Class interstitialAdvertisemnetPlugin;

@property (retain, nonatomic) id<BDPPluginAppAdvertisementBannerImplProtocol> bannerAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementVideoImplProtocol> videoAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementVideoImplNewProtocol> videoAdvertisementNewImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementBannerImplProtocol> pangleBannerAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementInterstitialImplProtocol> interstitialAdvertisementImpl;
@property (nonatomic) long long adType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)bannerAdvertisementPlugin;
+ (Class)videoAdvertisemnetPlugin;
+ (Class)interstitialAdvertisemnetPlugin;
+ (void)setBannerAdvertisementPlugin:(Class)arg0;
+ (void)setVideoAdvertisemnetPlugin:(Class)arg0;
+ (void)setInterstitialAdvertisemnetPlugin:(Class)arg0;
+ (Class)pangleBannerAdvertisementPlugin;
+ (Class)videoAdvertisementNewPlugin;
+ (void)setPangleBannerAdvertisementPlugin:(Class)arg0;
+ (void)setVideoAdvertisementNewPlugin:(Class)arg0;

- (id)bannerAdvertisementImpl;
- (id)videoAdvertisementImpl;
- (void)createVideoAdWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)operateVideoAdWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)interstitialAdvertisementImpl;
- (void)operateInterstitialAdWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setBannerAdvertisementImpl:(id)arg0;
- (void)setVideoAdvertisementImpl:(id)arg0;
- (void)setInterstitialAdvertisementImpl:(id)arg0;
- (id)pangleBannerAdvertisementImpl;
- (void)insertAdContainerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateAdContainerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeAdContainerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_createVideoAdImplIfNeedWithUniqueId:(id)arg0;
- (id)videoAdvertisementNewImpl;
- (void)setVideoAdvertisementNewImpl:(id)arg0;
- (void)_advertisementStateChangeWithUniqueID:(id)arg0 adUnitID:(id)arg1 state:(id)arg2 data:(id)arg3;
- (void)bdp_onErrorWithUniqueID:(id)arg0 adUnitId:(id)arg1 errCode:(long long)arg2 errorCode:(long long)arg3 errMsg:(id)arg4 errorType:(id)arg5;
- (void)bdp_onLoadedWithUniqueID:(id)arg0 adUnitId:(id)arg1;
- (void)bdp_didClickCloseWithUniqueID:(id)arg0 adUnitId:(id)arg1 count:(long long)arg2 mode:(id)arg3;
- (void)setPangleBannerAdvertisementImpl:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)adType;
- (void)setAdType:(long long)arg0;

@end

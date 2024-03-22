//
//     Generated by private class-dump
//

@class CSJRewardedVideoModel, CSJNativeAd, NSArray, CSJAdSlot, NSString, CSJDislikeContext, CSJNativeExpressAdManager, CSJNativeExpressAdView, NSDictionary, CSJADViewTrackInfo;
@protocol CSJRewardedVideoAdDelegate, CSJNativeExpressRewardedVideoAdDelegate;

@interface CSJNativeExpressRewardedVideoAd : NSObject <CSJNativeExpressAdViewDelegate, CSJNativeExpressVideoAdDelegate, CSJVideoAdDelegate, CSJInterstitialAdDelegate, CSJMopubAdMarkUpDelegate, CSJAdClientBiddingProtocol> {
    BOOL isRewardedVideo;
    BOOL _materialMetaIsFromPreload;
    BOOL _didSetADM;
    BOOL _renderResultDidCallback;
    BOOL _playFinishDidCallback;
    BOOL _isShow;
    BOOL _triggerNativeAdDidLoadCallback;
    BOOL _triggerNativeAdDidDownloadCallback;
    CSJRewardedVideoModel *_rewardedVideoModel;
    id<CSJNativeExpressRewardedVideoAdDelegate> _delegate;
    id<CSJNativeExpressRewardedVideoAdDelegate> _rewardPlayAgainInteractionDelegate;
    double _expireTimestamp;
    CSJADViewTrackInfo *_trackInfo;
    CSJNativeExpressAdManager *_nativeExpressAdManager;
    CSJAdSlot *_adSlot;
    CSJNativeAd *_purePlayableNativeAd;
    CSJNativeExpressAdView *_expressAdView;
    NSArray *_expressAdViewArray;
    CSJDislikeContext *_dislikeContext;
    long long _realSlotRenderType;
    id<CSJRewardedVideoAdDelegate> _normalRewardPlayAgainInteractionDelegate;
}

@property (nonatomic) BOOL materialMetaIsFromPreload;
@property (nonatomic) double expireTimestamp;
@property (retain, nonatomic) CSJADViewTrackInfo *trackInfo;
@property (nonatomic) BOOL didSetADM;
@property (nonatomic) BOOL renderResultDidCallback;
@property (nonatomic) BOOL playFinishDidCallback;
@property (retain, nonatomic) CSJNativeExpressAdManager *nativeExpressAdManager;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) CSJNativeAd *purePlayableNativeAd;
@property (retain, nonatomic) CSJNativeExpressAdView *expressAdView;
@property (copy, nonatomic) NSArray *expressAdViewArray;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (nonatomic) BOOL triggerNativeAdDidLoadCallback;
@property (nonatomic) BOOL triggerNativeAdDidDownloadCallback;
@property (nonatomic) long long realSlotRenderType;
@property (weak, nonatomic) id<CSJRewardedVideoAdDelegate> normalRewardPlayAgainInteractionDelegate;
@property (retain, nonatomic) CSJRewardedVideoModel *rewardedVideoModel;
@property (weak, nonatomic) id<CSJNativeExpressRewardedVideoAdDelegate> delegate;
@property (weak, nonatomic) id<CSJNativeExpressRewardedVideoAdDelegate> rewardPlayAgainInteractionDelegate;
@property (readonly, copy, nonatomic) NSDictionary *mediaExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isRewardedVideo;

- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (void)setExpressAdView:(id)arg0;
- (id)expressAdView;
- (void)setAdSlot:(id)arg0;
- (BOOL)didSetADM;
- (id)dislikeContext;
- (void)setDislikeContext:(id)arg0;
- (void)win:(id)arg0;
- (void)loss:(id)arg0 lossReason:(id)arg1 winBidder:(id)arg2;
- (void)setDidSetADM:(BOOL)arg0;
- (id)mediaExt;
- (void)nativeExpressAdSuccessToLoad:(id)arg0 views:(id)arg1;
- (void)nativeExpressAdFailToLoad:(id)arg0 error:(id)arg1;
- (void)nativeExpressAdViewRenderSuccess:(id)arg0;
- (void)nativeExpressAdViewRenderFail:(id)arg0 error:(id)arg1;
- (void)nativeExpressAdViewDidClick:(id)arg0;
- (void)nativeExpressAdViewDidCloseOtherController:(id)arg0 interactionType:(long long)arg1;
- (void)setAdMarkup:(id)arg0;
- (id)biddingToken;
- (void)loadAdData;
- (id)getAdCreativeToken;
- (void)setNativeExpressAdManager:(id)arg0;
- (id)nativeExpressAdManager;
- (void)setRealSlotRenderType:(long long)arg0;
- (void)setTriggerNativeAdDidLoadCallback:(BOOL)arg0;
- (void)setTriggerNativeAdDidDownloadCallback:(BOOL)arg0;
- (void)setPurePlayableNativeAd:(id)arg0;
- (long long)realSlotRenderType;
- (BOOL)isAdValid;
- (id)reportMaterial;
- (BOOL)materialMetaIsFromPreload;
- (id)purePlayableNativeAd;
- (void)showDataUpload;
- (void)showNewExpressWithRootViewController:(id)arg0 ritSceneStr:(id)arg1;
- (void)showOldExpressWithRootViewController:(id)arg0 ritSceneStr:(id)arg1;
- (BOOL)needUseNativeExpressVC;
- (BOOL)needNavbarWhenPresent:(id)arg0;
- (id)rootViewInfoDic;
- (void)p_showLog:(id)arg0 adModel:(id)arg1 extraDic:(id)arg2;
- (void)purePlayableShow;
- (void)handleSuccessLoadForPurePlayableWithNativeAd:(id)arg0;
- (void)videoAdWillClose;
- (void)videoAdDidClose;
- (unsigned long long)nativeExpressVideoAdType;
- (BOOL)triggerNativeAdDidDownloadCallback;
- (BOOL)triggerNativeAdDidLoadCallback;
- (void)p_adShowTimeLog;
- (void)nativeExpressVideoAdDidClickSkip;
- (void)nativeExpressVideoAdEndcardWillClose;
- (void)nativeExpressVideoAdEndcardDidClose;
- (void)videoAdDidClick;
- (void)videoAdDidPlayFinishWithError:(id)arg0;
- (void)setRewardedVideoModel:(id)arg0;
- (void)videoAdDidClickSkip;
- (double)getExpireTimestamp;
- (void)didCloseOtherControllerWithInteractionType:(long long)arg0;
- (void)p_trackShowEventWithMaterial:(id)arg0;
- (void)setMaterialMetaIsFromPreload:(BOOL)arg0;
- (id)rewardedVideoModel;
- (void)nativeExpressVideoAdDidPlayFinishWithError:(id)arg0;
- (void)nativeExpressVideoAdServerRewardDidSucceedVerify:(BOOL)arg0;
- (void)videoAdServerRewardDidSucceedVerify:(BOOL)arg0;
- (void)nativeExpressVideoAdServerRewardDidFailWithError:(id)arg0;
- (void)videoAdServerRewardDidFailWithError:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidDownLoadVideo;
- (void)safeDelegate_nativeExpressRewardedVideoAdWillVisible;
- (id)expressAdViewArray;
- (void)showRewardDrawLandscapeWithRootViewController:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidVisible;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidClick;
- (void)showRewardDrawWithParentViewController:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidLoad;
- (void)safeDelegate_nativeExpressRewardedVideoAdCallback;
- (void)safeDelegate_nativeExpressRewardedVideoAdViewRenderSuccess;
- (void)setExpressAdViewArray:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdWithError:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdViewRenderFailWithError:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidCloseOtherControllerWithInteractionType:(long long)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidPlayFinishWithError:(id)arg0;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidClickSkip;
- (void)safeDelegate_nativeExpressRewardedVideoAdWillClose;
- (void)safeDelegate_nativeExpressRewardedVideoAdDidClose;
- (void)safeDelegate_nativeExpressRewardedVideoAdServerRewardDidSucceedWithVerify:(BOOL)arg0;
- (BOOL)renderResultDidCallback;
- (void)setRenderResultDidCallback:(BOOL)arg0;
- (id)initWithSlot:(id)arg0 rewardedVideoModel:(id)arg1;
- (BOOL)showAdFromRootViewController:(id)arg0 ritScene:(long long)arg1 ritSceneDescribe:(id)arg2;
- (void)setPlayFinishDidCallback:(BOOL)arg0;
- (BOOL)playFinishDidCallback;
- (void)setNormalRewardPlayAgainInteractionDelegate:(id)arg0;
- (void)setRewardPlayAgainInteractionDelegate:(id)arg0;
- (id)rewardPlayAgainInteractionDelegate;
- (id)initWithSlotID:(id)arg0 rewardedVideoModel:(id)arg1;
- (id)normalRewardPlayAgainInteractionDelegate;
- (id)adSlot;
- (BOOL)isRewardedVideo;
- (BOOL)showAdFromRootViewController:(id)arg0;
- (void)setIsRewardedVideo:(BOOL)arg0;
- (void)_applicationDidEnterBackground;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)_applicationWillEnterForeground;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setPrice:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (double)expireTimestamp;
- (void)setExpireTimestamp:(double)arg0;

@end

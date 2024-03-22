//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWEAdWeChatMiniAppInfo, AWEAdOpenWeChatMiniAppLogInfo, AWEAdMultiPlatformPreferredModel, AWEAdWebviewInfo, NSDictionary, CMCEvent, AWECommerceTransitionController, NSNumber;
@protocol AWEBDARifleViewDelegate, AWEBDARifleViewPopupEventProtocol;

@interface AWEAdTaskContext : NSObject {
    BOOL _appStoreEnabled;
    BOOL _reuseDisabled;
    BOOL _forceIgnoreImmersiveMode;
    BOOL _isLink;
    BOOL _shouldTracking;
    BOOL _disableScrollInLiveStream;
    BOOL _disableOpenOtherTrack;
    BOOL _disableLandingPageTrack;
    BOOL _isFromLive;
    BOOL _shouldSkipTask;
    BOOL _disableLandingPage;
    BOOL _enterLiveNeedAutoOpenGoodDeatil;
    BOOL _shouldUseFullscreen;
    BOOL _useFullScreenDissolveTransition;
    BOOL _useFadeInPush;
    BOOL _useTopSlideFadeInPush;
    BOOL _playableWithRifle;
    BOOL _isAutoJump;
    BOOL _disableOpenWechatMiniAppInOpenOtherAppTask;
    BOOL _isBiddingAdsWechatEntrance;
    AWEAwemeModel *_awemeModel;
    AWEAdWebviewInfo *_adWebviewInfo;
    NSString *_appID;
    NSString *_adRit;
    unsigned long long _preloadType;
    NSString *_event;
    NSNumber *_creativeID;
    NSNumber *_adID;
    NSNumber *_groupID;
    NSString *_logExtra;
    NSDictionary *_extra;
    NSString *_linkAction;
    NSString *_extraTrackRefer;
    NSString *_skanParameters;
    NSDictionary *_extraLogInfo;
    NSString *_webURL;
    NSString *_downloadURL;
    NSString *_webTitle;
    id /* block */ _closeBlock;
    NSString *_lightWebURL;
    NSDictionary *_lightConfigParamDict;
    NSString *_openURL;
    long long _openAppPosition;
    AWEAdMultiPlatformPreferredModel *_multiPlatformPreferredModel;
    NSString *_ironManURL;
    AWEAdWeChatMiniAppInfo *_wechatMPInfo;
    AWEAdOpenWeChatMiniAppLogInfo *_openWechatLogInfo;
    NSString *_schema;
    NSString *_enterFromMerge;
    long long _webLandingStyle;
    CMCEvent *_sourceEvent;
    AWECommerceTransitionController *_transitionController;
    NSString *_referString;
    unsigned long long _downloadScene;
    NSString *_complianceData;
    id /* block */ _openWechatMiniAppSuccessBlock;
    id /* block */ _openWechatMiniAppFailBlock;
}

@property (nonatomic) unsigned long long lynxLandingStyle;
@property (nonatomic) BOOL hideLynxNavBar;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *accessKey;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> lifecycleDelegate;
@property (weak, nonatomic) id<AWEBDARifleViewPopupEventProtocol> popupEventDelegate;
@property (nonatomic) unsigned long long rifleScene;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAdWebviewInfo *adWebviewInfo;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *adRit;
@property (nonatomic) unsigned long long preloadType;
@property (copy, nonatomic) NSString *event;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *linkAction;
@property (copy, nonatomic) NSString *extraTrackRefer;
@property (copy, nonatomic) NSString *skanParameters;
@property (retain, nonatomic) NSDictionary *extraLogInfo;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) BOOL appStoreEnabled;
@property (nonatomic) BOOL reuseDisabled;
@property (copy, nonatomic) NSString *webTitle;
@property (nonatomic) BOOL forceIgnoreImmersiveMode;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSString *lightWebURL;
@property (retain, nonatomic) NSDictionary *lightConfigParamDict;
@property (nonatomic) BOOL isLink;
@property (nonatomic) BOOL shouldTracking;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) long long openAppPosition;
@property (retain, nonatomic) AWEAdMultiPlatformPreferredModel *multiPlatformPreferredModel;
@property (copy, nonatomic) NSString *ironManURL;
@property (retain, nonatomic) AWEAdWeChatMiniAppInfo *wechatMPInfo;
@property (retain, nonatomic) AWEAdOpenWeChatMiniAppLogInfo *openWechatLogInfo;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (nonatomic) BOOL disableScrollInLiveStream;
@property (nonatomic) BOOL disableOpenOtherTrack;
@property (nonatomic) BOOL disableLandingPageTrack;
@property (nonatomic) BOOL isFromLive;
@property (nonatomic) BOOL shouldSkipTask;
@property (nonatomic) long long webLandingStyle;
@property (retain, nonatomic) CMCEvent *sourceEvent;
@property (retain, nonatomic) AWECommerceTransitionController *transitionController;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL disableLandingPage;
@property (nonatomic) BOOL enterLiveNeedAutoOpenGoodDeatil;
@property (nonatomic) BOOL shouldUseFullscreen;
@property (nonatomic) BOOL useFullScreenDissolveTransition;
@property (nonatomic) BOOL useFadeInPush;
@property (nonatomic) BOOL useTopSlideFadeInPush;
@property (nonatomic) BOOL playableWithRifle;
@property (nonatomic) unsigned long long downloadScene;
@property (copy, nonatomic) NSString *complianceData;
@property (nonatomic) BOOL isAutoJump;
@property (nonatomic) BOOL disableOpenWechatMiniAppInOpenOtherAppTask;
@property (nonatomic) BOOL isBiddingAdsWechatEntrance;
@property (copy, nonatomic) id /* block */ openWechatMiniAppSuccessBlock;
@property (copy, nonatomic) id /* block */ openWechatMiniAppFailBlock;

- (id)awemeModel;
- (id)referString;
- (void)setExtra:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setWebTitle:(id)arg0;
- (void)setOpenURL:(id)arg0;
- (id)complianceData;
- (void)setComplianceData:(id)arg0;
- (void)setLynxURL:(id)arg0;
- (void)setRifleScene:(unsigned long long)arg0;
- (void)setCreativeID:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)setWechatMPInfo:(id)arg0;
- (void)setAppStoreEnabled:(BOOL)arg0;
- (void)setReuseDisabled:(BOOL)arg0;
- (void)setSkanParameters:(id)arg0;
- (BOOL)appStoreEnabled;
- (void)setPreloadType:(unsigned long long)arg0;
- (id)popupEventDelegate;
- (void)setPopupEventDelegate:(id)arg0;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (id)lynxURL;
- (id)webTitle;
- (id)extraLogInfo;
- (void)setDownloadScene:(unsigned long long)arg0;
- (unsigned long long)downloadScene;
- (id)ironManURL;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (id)skanParameters;
- (void)setIronManURL:(id)arg0;
- (id)adRit;
- (void)setAdRit:(id)arg0;
- (void)setExtraLogInfo:(id)arg0;
- (BOOL)shouldUseFullscreen;
- (void)setShouldUseFullscreen:(BOOL)arg0;
- (void)setExtraTrackRefer:(id)arg0;
- (void)setOpenWechatLogInfo:(id)arg0;
- (void)setIsBiddingAdsWechatEntrance:(BOOL)arg0;
- (void)setShouldSkipTask:(BOOL)arg0;
- (BOOL)playableWithRifle;
- (BOOL)disableScrollInLiveStream;
- (BOOL)enterLiveNeedAutoOpenGoodDeatil;
- (id)lightWebURL;
- (unsigned long long)lynxLandingStyle;
- (void)setUseFadeInPush:(BOOL)arg0;
- (BOOL)hideLynxNavBar;
- (BOOL)useFadeInPush;
- (BOOL)reuseDisabled;
- (long long)webLandingStyle;
- (id)lightConfigParamDict;
- (id)adWebviewInfo;
- (BOOL)useFullScreenDissolveTransition;
- (void)setAdWebviewInfo:(id)arg0;
- (BOOL)forceIgnoreImmersiveMode;
- (BOOL)useTopSlideFadeInPush;
- (BOOL)disableLandingPageTrack;
- (id)extraTrackRefer;
- (unsigned long long)rifleScene;
- (BOOL)shouldSkipTask;
- (BOOL)disableOpenOtherTrack;
- (long long)openAppPosition;
- (BOOL)disableOpenWechatMiniAppInOpenOtherAppTask;
- (id)multiPlatformPreferredModel;
- (BOOL)isAutoJump;
- (void)setIsAutoJump:(BOOL)arg0;
- (BOOL)disableLandingPage;
- (void)setOpenAppPosition:(long long)arg0;
- (void)setIsLink:(BOOL)arg0;
- (void)setShouldTracking:(BOOL)arg0;
- (id)wechatMPInfo;
- (id)openWechatLogInfo;
- (void)setDisableOpenWechatMiniAppInOpenOtherAppTask:(BOOL)arg0;
- (BOOL)isBiddingAdsWechatEntrance;
- (void)setMultiPlatformPreferredModel:(id)arg0;
- (void)setForceIgnoreImmersiveMode:(BOOL)arg0;
- (void)setEnterLiveNeedAutoOpenGoodDeatil:(BOOL)arg0;
- (void)setDisableScrollInLiveStream:(BOOL)arg0;
- (void)setLightWebURL:(id)arg0;
- (void)setSourceEvent:(id)arg0;
- (void)setUseFullScreenDissolveTransition:(BOOL)arg0;
- (void)setWebLandingStyle:(long long)arg0;
- (void)setLynxLandingStyle:(unsigned long long)arg0;
- (void)setUseTopSlideFadeInPush:(BOOL)arg0;
- (void)setLightConfigParamDict:(id)arg0;
- (void)setHideLynxNavBar:(BOOL)arg0;
- (BOOL)shouldTracking;
- (void)setDisableOpenOtherTrack:(BOOL)arg0;
- (void)setDisableLandingPageTrack:(BOOL)arg0;
- (BOOL)isFromLive;
- (void)setIsFromLive:(BOOL)arg0;
- (void)setDisableLandingPage:(BOOL)arg0;
- (void)setPlayableWithRifle:(BOOL)arg0;
- (id /* block */)openWechatMiniAppSuccessBlock;
- (void)setOpenWechatMiniAppSuccessBlock:(id /* block */)arg0;
- (id /* block */)openWechatMiniAppFailBlock;
- (void)setOpenWechatMiniAppFailBlock:(id /* block */)arg0;
- (void)setSchema:(id)arg0;
- (void)setGroupID:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)groupID;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)transitionController;
- (id)extra;
- (id)appID;
- (void)setDownloadURL:(id)arg0;
- (void)setTransitionController:(id)arg0;
- (id)downloadURL;
- (id)sourceEvent;
- (id)schema;
- (BOOL)isLink;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)openURL;
- (id)linkAction;
- (void)setLinkAction:(id)arg0;
- (id)creativeID;
- (unsigned long long)preloadType;

@end
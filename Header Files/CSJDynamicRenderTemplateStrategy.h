//
//     Generated by private class-dump
//

@class UIView, NSString, CSJWebViewOwner, BUTimer, NSMutableDictionary, NSDictionary, CSJWKWebViewClient, BUPlayableAd;
@protocol CSJWebViewDynamicRenderDelegate;

@interface CSJDynamicRenderTemplateStrategy : CSJDynamicRenderStrategy <BUWebViewDelegate, CSJWebViewDynamicRenderInterface, BUPlayableAdDelegate, CSJWKWebViewClientInterceptionDelegate> {
    BOOL _haveDetectBlank;
    id<CSJWebViewDynamicRenderDelegate> implementation_delegate;
    CSJWebViewOwner *_webViewOwner;
    CSJWKWebViewClient *_webview;
    BUPlayableAd *_playableAd;
    NSDictionary *_relatedMaterialMetaJSON;
    BUTimer *_renderTimer;
    BUTimer *_retryTimer;
    NSMutableDictionary *_webview_time_trackDictionary;
    UIView *_dialogView;
}

@property (retain, nonatomic) CSJWebViewOwner *webViewOwner;
@property (retain, nonatomic) CSJWKWebViewClient *webview;
@property (retain, nonatomic) BUPlayableAd *playableAd;
@property (copy, nonatomic) NSDictionary *relatedMaterialMetaJSON;
@property (nonatomic) BOOL haveDetectBlank;
@property (retain, nonatomic) BUTimer *renderTimer;
@property (retain, nonatomic) BUTimer *retryTimer;
@property (retain, nonatomic) NSMutableDictionary *webview_time_trackDictionary;
@property (retain, nonatomic) UIView *dialogView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSJWebViewDynamicRenderDelegate> implementation_delegate;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (long long)renderType;
- (id)initWithRenderEngineViewModel:(id)arg0 containerView:(id)arg1;
- (void)setWebview_time_trackDictionary:(id)arg0;
- (void)setupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)registerJsBridge;
- (void)registerMiddlePageJSBridge;
- (void)registerJSBridge3;
- (void)pbu_playableRecycle;
- (id)playableAd;
- (void)setImplementation_delegate:(id)arg0;
- (void)render_really;
- (void)safeImplementationDelegate_dynamicRenderTemplateStrategyWillRender:(id)arg0;
- (void)pbu_renderEndWithSuccessView:(id)arg0 error:(id)arg1;
- (void)__pbu_internal_webview_load;
- (id)webViewOwner;
- (void)pbu_resetAndTrigger;
- (void)startRenderTimerWithTimeInterval:(double)arg0;
- (BOOL)haveDetectBlank;
- (void)setHaveDetectBlank:(BOOL)arg0;
- (void)invokeWebEvent:(id)arg0 data:(id)arg1;
- (void)setRelatedMaterialMetaJSON:(id)arg0;
- (void)fireEventRelatedMaterialMeta;
- (void)setWebViewOwner:(id)arg0;
- (void)pbu_setup_playable;
- (void)stopRenderTimer;
- (void)renderTimerAction;
- (void)setRenderTimer:(id)arg0;
- (id)renderTimer;
- (BOOL)canMemoryEnvSupportRetry;
- (void)stopRetryTimer;
- (void)retryTimerAction;
- (id)webview_time_trackDictionary;
- (void)safeImplementationDelegate_dynamicRenderTemplateStrategyDidRender:(id)arg0;
- (void)updateWithThemeStatus:(long long)arg0;
- (id)implementation_delegate;
- (void)sendTrackDataFromURLString:(id)arg0;
- (void)registJS_ClientData;
- (id)relatedMaterialMetaJSON;
- (void)registerAdInfo;
- (void)registerGetTemplateInfo;
- (void)registerDynamicTrack;
- (void)registerClickEvent;
- (void)registRenderDidFinish;
- (void)registerWebview_time_track;
- (void)registerOpenPrivacy;
- (void)registerPreventTouchEvent;
- (void)registVideoInfo;
- (void)registerOpenPlayable;
- (void)registerOpenSKOverlay;
- (void)registAdAnalysisData;
- (void)registerRewardPlayAgain;
- (id)buJSB3_show_skoverlayWithViewModel:(id)arg0;
- (id)jsCallNative_dynamicTrackWithParams:(id)arg0;
- (id)jsCallNative_renderDidFinishWithParams:(id)arg0;
- (void)jsCallNative_webview_time_trackWithParams:(id)arg0;
- (void)jsCallNative_preventTouchEventWithParams:(id)arg0;
- (void)jsCallNative_openPlayableWithParams:(id)arg0;
- (id)jsCallNative_interactiveStartWithParams:(id)arg0;
- (id)jsCallNative_interactiveFinishWithParams:(id)arg0;
- (id)jsCallNative_interactiveEnd;
- (id)pbu_csj_piperArray;
- (void)_showDialogWithContent:(id)arg0;
- (void)setPlayableAd:(id)arg0;
- (id)pbu_valid_playable_url;
- (void)_onDialogCloseButton;
- (long long)implementation_renderIndex;
- (void)implementation_render_really;
- (double)implementation_timeOut;
- (void)playableAd:(id)arg0 loadRequest:(id)arg1;
- (void)playableAd:(id)arg0 registerHandlerBlock:(id /* block */)arg1 forJSMethod:(id)arg2;
- (void)playableAd:(id)arg0 fireEvent:(id)arg1 params:(id)arg2;
- (void)playableAd:(id)arg0 executeJavaScript:(id)arg1 completion:(id /* block */)arg2;
- (void)openAppStoreInPlayableAd:(id)arg0 params:(id)arg1;
- (void)sendRewardFromH5CallbackInPlayableAd:(id)arg0;
- (long long)netTypeForDeviceInPlayableAd:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })webViewFrameInPlayableAd:(id)arg0;
- (id)playableAdCurrentURL:(id)arg0;
- (void)buWKWebViewClientInterceptedWithStartTime:(double)arg0 url:(id)arg1 type:(id)arg2 isCache:(BOOL)arg3 extraDic:(id)arg4;
- (void)reportExpressAdShowWithBool:(BOOL)arg0;
- (void)detectBlankIfNeed;
- (void)reportShowEventIfNeed;
- (void)reportMaterialMetaIfNeedWithRelatedMaterialMetaJson:(id)arg0;
- (void)refreshWKWebViewIfNeed;
- (void)sendPlayableStateChange:(BOOL)arg0 reduceDuration:(long long)arg1;
- (void)sendShowSkipInLiveScene:(BOOL)arg0;
- (void)sendShowToast:(id)arg0;
- (void)registerInterstitialWebViewClose;
- (id)buJSB3_interactiveStartWithViewModel:(id)arg0;
- (id)buJSB3_interactiveFinishWithViewModel:(id)arg0;
- (id)buJSB3_interactiveEndWithViewModel:(id)arg0;
- (id)buJSB3_getTemplateInfoWithViewModel:(id)arg0;
- (id)buJSB3_adInfoWithViewModel:(id)arg0;
- (id)buJSB3_renderDidFinishWithViewModel:(id)arg0;
- (id)buJSB3_dynamicTrackWithViewModel:(id)arg0;
- (id)buJSB3_clickEventWithViewModel:(id)arg0;
- (id)buJSB3_openPrivacyWithViewModel:(id)arg0;
- (id)buJSB3_webview_time_trackWithViewModel:(id)arg0;
- (id)buJSB3_preventTouchEventWithViewModel:(id)arg0;
- (id)buJSB3_adInfoDialogWithViewModel:(id)arg0;
- (id)buJSB3_interstitial_webview_closeWithViewModel:(id)arg0;
- (id)buJSB3_openPlayableWithViewModel:(id)arg0;
- (id)buJSB3_rewardPlayAgainWithViewModel:(id)arg0;
- (id)buJSB3_muteVideoWithViewModel:(id)arg0;
- (id)buJSB3_changeVideoStateWithViewModel:(id)arg0;
- (id)buJSB3_getCurrentVideoStateWithViewModel:(id)arg0;
- (id)buJSB3_skipVideoWithViewModel:(id)arg0;
- (id)buJSB3_startVideoTransformWithViewModel:(id)arg0;
- (id)buJSB3_getPlayTimeCurrentWithViewModel:(id)arg0;
- (id)buJSB3_immersiveVideoPageBackWithViewModel:(id)arg0;
- (id)buJSB3_getMaterialMetaWithViewModel:(id)arg0;
- (id)buJSB3_adAnalysisDataWithViewModel:(id)arg0;
- (id)buJSB3_requestPauseVideoWithViewModel:(id)arg0;
- (id)jsCallNative_open_app_store;
- (id)jsCallNative_rewardPlayAgainWithParams:(id)arg0;
- (void)playableAdRenderFailed:(id)arg0;
- (void)playableEventReportNotification:(id)arg0;
- (id)logKeyName;
- (void).cxx_destruct;
- (void)setRetryTimer:(id)arg0;
- (id)retryTimer;
- (void)connectionChanged:(id)arg0;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;
- (void)render;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (id)dialogView;
- (void)setDialogView:(id)arg0;
- (double)timeOut;
- (void)addObservers;
- (void)startRetryTimer;
- (id)webview;
- (void)setWebview:(id)arg0;

@end

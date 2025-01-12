//
//     Generated by private class-dump
//

@class CSJWKWebViewClient, NSURL, NSDate, NSDictionary, BUWebViewProgressView, CSJCustomNavigationBarView, NSMutableArray, CSJWebViewBottomBar, UIView, CSJASlotContext, NSString, CSJAdSlot, UIViewController, BUTimer, NSError, CSJDislikeContext;
@protocol CSJAd;

@interface CSJWebViewControllerViewModel : NSObject <WKScriptMessageHandler, UIViewControllerTransitioningDelegate, WKUIDelegate, CSJCustomNavigationBarDelegate, BUWebViewDelegate> {
    BOOL _isNavBarHidden;
    BOOL _isHiddenProgress;
    BOOL _supportAlert;
    BOOL _hasTerminateTrack;
    BOOL _isFromClick;
    BOOL _isBackground;
    BOOL _isAppear;
    BOOL _observingHeartBeat;
    BOOL _enableBrowseTimer;
    BOOL _needRecoverFullLinkTimer;
    BOOL _hasEnterBackground;
    BOOL _needReportClick;
    CSJWKWebViewClient *_webView;
    id<CSJAd> _adInfo;
    CSJAdSlot *_adSlot;
    NSString *_webTitle;
    id /* block */ _CloseBlock;
    NSURL *_requestURL;
    NSDictionary *_relatedMaterialMeta;
    NSString *_createExtraString;
    id /* block */ _hasLoadLubanListPage;
    unsigned long long _landingPageType;
    unsigned long long _pageType;
    CSJASlotContext *_context;
    id /* block */ _downloadDidCloseStoreController;
    NSDictionary *_session_params;
    UIView *_view;
    UIViewController *_parentVC;
    CSJDislikeContext *_dislikeContext;
    NSString *_stashCid;
    NSString *_stashLogExtra;
    long long _heartBeatOverTime;
    id /* block */ _heartBeatCallback;
    BUTimer *_heartBeatTimer;
    UIView *_maskView;
    BUTimer *_browseTimer;
    long long _browseTime;
    CSJCustomNavigationBarView *_customNavigationView;
    CSJWebViewBottomBar *_bottomBar;
    BUWebViewProgressView *_progressView;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) BOOL isLuban;
@property (copy, nonatomic) NSDictionary *luban_json;
@property (copy, nonatomic) id /* block */ loadLubanJsonFail;
@property (retain, nonatomic) NSMutableArray *luban_product_ids;
@property (retain, nonatomic) NSDate *startdate;
@property (nonatomic) long long currentStatus;
@property (nonatomic) long long backgroundStatus;
@property (nonatomic) long long js_max_scroll_percent;
@property (nonatomic) BOOL isTrackLoad_Finish;
@property (nonatomic) BOOL isTrackLoad_result;
@property (nonatomic) BOOL isFirstLoad_start;
@property (retain, nonatomic) NSError *loadFailError;
@property (nonatomic) BOOL isLoadingAndClose;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (copy, nonatomic) NSString *stashCid;
@property (copy, nonatomic) NSString *stashLogExtra;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) long long heartBeatOverTime;
@property (copy, nonatomic) id /* block */ heartBeatCallback;
@property (retain, nonatomic) BUTimer *heartBeatTimer;
@property (nonatomic) BOOL observingHeartBeat;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL enableBrowseTimer;
@property (retain, nonatomic) BUTimer *browseTimer;
@property (nonatomic) long long browseTime;
@property (nonatomic) BOOL needRecoverFullLinkTimer;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) CSJCustomNavigationBarView *customNavigationView;
@property (retain, nonatomic) CSJWebViewBottomBar *bottomBar;
@property (nonatomic) BOOL isNavBarHidden;
@property (retain, nonatomic) BUWebViewProgressView *progressView;
@property (nonatomic) BOOL hasEnterBackground;
@property (nonatomic) BOOL needReportClick;
@property (retain, nonatomic) CSJWKWebViewClient *webView;
@property (readonly, nonatomic) id<CSJAd> adInfo;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (copy, nonatomic) NSString *webTitle;
@property (nonatomic) BOOL isHiddenProgress;
@property (copy, nonatomic) id /* block */ CloseBlock;
@property (retain, nonatomic) NSURL *requestURL;
@property (nonatomic, getter=isSupportAlert) BOOL supportAlert;
@property (nonatomic) BOOL hasTerminateTrack;
@property (retain, nonatomic) NSDictionary *relatedMaterialMeta;
@property (copy, nonatomic) NSString *createExtraString;
@property (copy, nonatomic) id /* block */ hasLoadLubanListPage;
@property (nonatomic) unsigned long long landingPageType;
@property (nonatomic) BOOL isFromClick;
@property (nonatomic) unsigned long long pageType;
@property (weak, nonatomic) CSJASlotContext *context;
@property (copy, nonatomic) id /* block */ downloadDidCloseStoreController;
@property (copy) NSDictionary *session_params;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchHookConsoleLog;
- (BOOL)hasEnterBackground;
- (void)setWebTitle:(id)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (id)adInfo;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)trackShow;
- (id)webTitle;
- (void)registerJSBridge3;
- (id)buJSB3_adInfoWithViewModel:(id)arg0;
- (id)buJSB3_getMaterialMetaWithViewModel:(id)arg0;
- (BOOL)isTrackLoad_Finish;
- (id)loadFailError;
- (id /* block */)CloseBlock;
- (void)setAdSlot:(id)arg0;
- (id)trackTag;
- (id)dislikeContext;
- (void)setDislikeContext:(id)arg0;
- (id)initWithRequestURL:(id)arg0 adinfo:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 isNavBarHidden:(BOOL)arg3 landingPageType:(unsigned long long)arg4 isFromClick:(BOOL)arg5;
- (BOOL)enableBrowseForReward;
- (id)customNavigationView;
- (id)initWithRequestURL:(id)arg0 adinfo:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 isNavBarHidden:(BOOL)arg3;
- (void)setIsHiddenProgress:(BOOL)arg0;
- (BOOL)isOverseaLPNewStyle;
- (void)setIsNavBarHidden:(BOOL)arg0;
- (BOOL)useLandingPageNewStyle;
- (void)addAccessibilityIdentifier;
- (void)handleViewWillAppear:(BOOL)arg0;
- (id)adSlot;
- (void)handleViewDidAppear:(BOOL)arg0;
- (void)handleViewDidDisappear:(BOOL)arg0;
- (void)handleViewWillLayoutSubviews;
- (void)appDidEnterBackgroundNotification:(id)arg0;
- (id)getTrackTag;
- (void)appWillEnterForegroundNotification:(id)arg0;
- (void)setIsTrackLoad_Finish:(BOOL)arg0;
- (void)trackLoading;
- (void)jsCallNative_commonConvertWithParams:(id)arg0;
- (void)openInternalStoreWithMaterial:(id)arg0;
- (void)goClose:(id)arg0;
- (BOOL)isRealPlayablePage;
- (void)customNavigationBarDidClickCloseButton:(id)arg0;
- (void)customNavigationBarDidClickDislikeButton:(id)arg0;
- (void)handleTapWithInfo:(id)arg0;
- (id)buJSB3_commonConvertWithViewModel:(id)arg0;
- (void)sendTrackDataWithParameters:(id)arg0;
- (void)setLoadLubanJsonFail:(id /* block */)arg0;
- (void)setLuban_json:(id)arg0;
- (id /* block */)loadLubanJsonFail;
- (void)setLuban_product_ids:(id)arg0;
- (id)luban_product_ids;
- (id)jsCallNative_getTeMaiAds;
- (void)jsCallNative_send_temai_product_idsWithParams:(id)arg0;
- (id)buJSB3_getTeMaiAdsWithViewModel:(id)arg0;
- (id)buJSB3_send_temai_product_idsWithViewModel:(id)arg0;
- (id)buJSB3_getNetworkDataWithViewModel:(id)arg0;
- (double)getRewardInterval;
- (void)onRewardTimerOut;
- (id)_renderDict;
- (void)setStartdate:(id)arg0;
- (BOOL)isFirstLoad_start;
- (id)startdate;
- (BOOL)isLoadingAndClose;
- (id)durationFromStartDate;
- (void)setFinishdate:(id)arg0;
- (BOOL)isTrackLoad_result;
- (void)setLoadFailError:(id)arg0;
- (id)showdate;
- (long long)js_max_scroll_percent;
- (id)durationFromFinishShowDate;
- (void)setShowdate:(id)arg0;
- (void)setEnterForegrounddate:(id)arg0;
- (void)setIsLoadingAndClose:(BOOL)arg0;
- (id)finishdate;
- (id)enterForegrounddate;
- (id)durationFromFinishDate;
- (id)durationFromEnterForegroundDate;
- (long long)backgroundStatus;
- (void)configLubanInfoWithURL:(id)arg0;
- (void)preloadWebViewAndData;
- (void)buildRelatedMaterialMeta;
- (void)trackOpenWithTag:(id)arg0;
- (void)setLandingPageType:(unsigned long long)arg0;
- (id)jsCallNative_adInfo;
- (void)jsCallNative_sendLogWithParams:(id)arg0;
- (id)relatedMaterialMeta;
- (id)jsCallNative_getMaterialMeta;
- (id)createExtraString;
- (id)jsCallNative_getNativeSiteCustomData;
- (void)jsCallNative_close;
- (void)jsCallNative_openAdLandPageLinksWithParams:(id)arg0;
- (id)jsCallNative_download_app_adWithParams:(id)arg0;
- (id)jsCallNative_click_button;
- (void)receiveH5HeartBeat:(id)arg0;
- (unsigned long long)landingPageType;
- (id)stashCid;
- (id)stashLogExtra;
- (id)pbu_urlWithString:(id)arg0;
- (void)openWebViewNewPageWithUrl:(id)arg0;
- (void)goClose;
- (void)setStashCid:(id)arg0;
- (void)setStashLogExtra:(id)arg0;
- (long long)heartBeatOverTime;
- (id /* block */)heartBeatCallback;
- (void)startNewHeartBeatTime;
- (id /* block */)downloadDidCloseStoreController;
- (void)setIsTrackLoad_result:(BOOL)arg0;
- (void)setIsFirstLoad_start:(BOOL)arg0;
- (BOOL)isLuban;
- (id)luban_json;
- (void)setIsLuban:(BOOL)arg0;
- (void)trackCloseWith:(long long)arg0 tag:(id)arg1;
- (id)session_params;
- (void)setRelatedMaterialMeta:(id)arg0;
- (void)setCreateExtraString:(id)arg0;
- (void)stopHeartBeatTime;
- (void)stopBrowseTimer;
- (BOOL)isNavBarHidden;
- (void)creatNavigationItems;
- (void)createBottomBar;
- (void)_onPanGR:(id)arg0;
- (void)hiddenCloseButton;
- (id /* block */)hasLoadLubanListPage;
- (void)registerJSBridgePlugin;
- (void)registerLubanJSBridgePlugin;
- (void)preloadLubanData;
- (void)setBrowseTime:(long long)arg0;
- (void)setEnableBrowseTimer:(BOOL)arg0;
- (long long)browseTime;
- (void)onRewardTimerUpdate:(long long)arg0;
- (void)buildCustormNavigationViewFrame;
- (void)buildBottomBarFrame;
- (void)buildWebviewFrame;
- (void)startBrowseTimer;
- (void)registShowConsole;
- (void)addScriptMessageHandleForName:(id)arg0;
- (double)webview_y;
- (BOOL)getOfflineSwitch;
- (void)registerUserAgent;
- (void)_onGoBackButton;
- (void)_onGoForwardButton;
- (void)_onReloadButton;
- (void)_onSafariButton;
- (BOOL)isHiddenProgress;
- (BOOL)handleScrollPercentWith:(id)arg0;
- (BOOL)handleTaptWith:(id)arg0;
- (BOOL)bu_shouldStartLoadWithRequestWithURL:(id)arg0;
- (BOOL)p_handleAppStoreRequest:(id)arg0;
- (void)trackLoadStartWith:(long long)arg0 tag:(id)arg1;
- (void)registJS_ScrollPercent;
- (void)trackLoadFinishWithTag:(id)arg0;
- (void)registJSPerformance;
- (void)trackLoadFailWithError:(id)arg0 tag:(id)arg1;
- (BOOL)hasTerminateTrack;
- (void)setHasTerminateTrack:(BOOL)arg0;
- (id)origUA;
- (id)sdkUA;
- (BOOL)isSupportAlert;
- (void)setJs_max_scroll_percent:(long long)arg0;
- (BOOL)enableBrowseTimer;
- (void)onBrowseTimerUpdate;
- (void)setBrowseTimer:(id)arg0;
- (id)browseTimer;
- (BOOL)observingHeartBeat;
- (void)setObservingHeartBeat:(BOOL)arg0;
- (void)setHeartBeatOverTime:(long long)arg0;
- (void)setHeartBeatCallback:(id /* block */)arg0;
- (void)onHeartBeatTimerOut;
- (void)setHeartBeatTimer:(id)arg0;
- (id)heartBeatTimer;
- (void)trackStayWithTag:(id)arg0;
- (void)setBackgroundStatus:(long long)arg0;
- (void)setHasEnterBackground:(BOOL)arg0;
- (void)trackEnterForeground;
- (void)dislikeButtonTapped:(id)arg0;
- (void)goback:(id)arg0;
- (BOOL)needRecoverFullLinkTimer;
- (void)setNeedRecoverFullLinkTimer:(BOOL)arg0;
- (BOOL)isFromClick;
- (id)webClickTrack;
- (BOOL)needReportClick;
- (void)customNavigationBarDidClickBackButton:(id)arg0;
- (id)initWithRequestURL:(id)arg0 adinfo:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 isNavBarHidden:(BOOL)arg3 landingPageType:(unsigned long long)arg4;
- (id)buJSB3_getATTStatusWithViewModel:(id)arg0;
- (id)buJSB3_click_buttonWithViewModel:(id)arg0;
- (id)buJSB3_sendLogWithViewModel:(id)arg0;
- (id)buJSB3_openAdLandPageLinksWithViewModel:(id)arg0;
- (id)buJSB3_getNativeSiteCustomDataWithViewModel:(id)arg0;
- (id)buJSB3_closeWithViewModel:(id)arg0;
- (id)buJSB3_adInfoStashWithViewModel:(id)arg0;
- (id)buJSB3_download_app_adWithViewModel:(id)arg0;
- (id)buJSB3_heart_beatWithViewModel:(id)arg0;
- (void)bu_loadRequest:(id)arg0;
- (void)handleViewWillDisappear:(BOOL)arg0;
- (void)handleDidReceiveMemoryWarning;
- (void)registJS_Tap;
- (void)observeHeartBeatWithOverTime:(long long)arg0 callback:(id /* block */)arg1;
- (void)cancelObserveHeartBeat;
- (void)responseViewFirstClick:(struct BUWebViewClickStruct { struct CGPoint { double x0; double x1; } x0; id x1; })arg0;
- (void)responseViewClick:(struct BUWebViewClickStruct { struct CGPoint { double x0; double x1; } x0; id x1; })arg0;
- (void)responseViewDidScroll:(struct BUWebViewClickStruct { struct CGPoint { double x0; double x1; } x0; id x1; })arg0 offset:(struct CGPoint { double x0; double x1; })arg1;
- (void)setSupportAlert:(BOOL)arg0;
- (void)setHasLoadLubanListPage:(id /* block */)arg0;
- (void)setIsFromClick:(BOOL)arg0;
- (void)setDownloadDidCloseStoreController:(id /* block */)arg0;
- (void)setSession_params:(id)arg0;
- (void)setCustomNavigationView:(id)arg0;
- (void)setNeedReportClick:(BOOL)arg0;
- (unsigned long long)pageType;
- (void)handleError:(id)arg0;
- (void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setWebView:(id)arg0;
- (void)setIsBackground:(BOOL)arg0;
- (id)webView;
- (long long)currentStatus;
- (void).cxx_destruct;
- (void)setCurrentStatus:(long long)arg0;
- (void)setContext:(id)arg0;
- (void)setBottomBar:(id)arg0;
- (id)maskView;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setView:(id)arg0;
- (id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3;
- (id)requestURL;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)context;
- (void)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGSize { double x0; double x1; })size;
- (void)setPageType:(unsigned long long)arg0;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)setRequestURL:(id)arg0;
- (id)bottomBar;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)view;
- (BOOL)isBackground;
- (void)setMaskView:(id)arg0;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;
- (BOOL)shouldTrack;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (BOOL)useCache;
- (double)_bottomBarHeight;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (void)showCloseButton;
- (void)handleViewDidLoad;
- (void)createWebView;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end

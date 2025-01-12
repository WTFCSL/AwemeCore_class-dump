//
//     Generated by private class-dump
//

@class NSString, BUPlayableAd, NSMutableSet, AWEAwemeModel, NSMutableArray, UIView;
@protocol AWEFeedPlayableContainerLifeCycleProtocol;

@interface AWEFeedPlayableWebViewController : AWEAdWebViewController <BUPlayableAdDelegate, IESFalconGurdInterceptionDelegate, AWEFeedPlayableContainerProtocol> {
    BOOL hasPlayableContainerShow;
    BOOL mainSceneReady;
    BOOL isPlayableLoadFailed;
    BOOL _isContainerShow;
    BOOL _isLoadFinshed;
    NSString *cardSessionID;
    double containerLoadDuration;
    double entireRenderDuration;
    id<AWEFeedPlayableContainerLifeCycleProtocol> lifecycleDelegate;
    BUPlayableAd *playableSDK;
    NSString *prerenderStage;
    NSString *section;
    NSString *videoSessionID;
    UIView *containerView;
    double contentLoadDuration;
    AWEAwemeModel *model;
    long long _playableResponseCode;
    long long _currentRetryCount;
    double _loadStartTimeStamp;
    double _loadFinishTimeStamp;
    long long _reqeustTimes;
    long long _requestHitTimes;
    NSMutableArray *_performanceArray;
    double _htmlLoadDuration;
    double _renderDuration;
    double _htmlStartToMainSceneReadyDuration;
    double _mainSceneReadyTimeStamp;
    double _viewableChangeTimeStamp;
    double _viewableToRealPlayableStartDuration;
    NSMutableSet *_geckoLogs;
}

@property (nonatomic) long long playableResponseCode;
@property (nonatomic) long long currentRetryCount;
@property (nonatomic) double loadStartTimeStamp;
@property (nonatomic) double loadFinishTimeStamp;
@property (nonatomic) long long reqeustTimes;
@property (nonatomic) long long requestHitTimes;
@property (retain, nonatomic) NSMutableArray *performanceArray;
@property (nonatomic) BOOL isLoadFinshed;
@property (nonatomic) double htmlLoadDuration;
@property (nonatomic) double renderDuration;
@property (nonatomic) double htmlStartToMainSceneReadyDuration;
@property (nonatomic) double mainSceneReadyTimeStamp;
@property (nonatomic) double viewableChangeTimeStamp;
@property (nonatomic) double viewableToRealPlayableStartDuration;
@property (retain, nonatomic) NSMutableSet *geckoLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BUPlayableAd *playableSDK;
@property (weak, nonatomic) id<AWEFeedPlayableContainerLifeCycleProtocol> lifecycleDelegate;
@property (nonatomic) BOOL mainSceneReady;
@property (copy, nonatomic) NSString *section;
@property (nonatomic) BOOL hasPlayableContainerShow;
@property (copy, nonatomic) NSString *videoSessionID;
@property (copy, nonatomic) NSString *cardSessionID;
@property (copy, nonatomic) NSString *prerenderStage;
@property (nonatomic) double entireRenderDuration;
@property (nonatomic) double containerLoadDuration;
@property (nonatomic) double contentLoadDuration;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isContainerShow;
@property (nonatomic) BOOL isPlayableLoadFailed;

- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)playableAd:(id)arg0 loadRequest:(id)arg1;
- (void)playableAd:(id)arg0 registerHandlerBlock:(id /* block */)arg1 forJSMethod:(id)arg2;
- (void)playableAd:(id)arg0 fireEvent:(id)arg1 params:(id)arg2;
- (void)playableAd:(id)arg0 executeJavaScript:(id)arg1 completion:(id /* block */)arg2;
- (id)playableAd:(id)arg0 openAdLandPageLinks:(id)arg1;
- (long long)netTypeForDeviceInPlayableAd:(id)arg0;
- (void)playableAdRenderFailed:(id)arg0 errorCode:(unsigned long long)arg1;
- (void)playableStuck:(id)arg0 params:(id)arg1;
- (void)playableLoadMainScene:(id)arg0 success:(BOOL)arg1;
- (void)playableEnterSection:(id)arg0 params:(id)arg1;
- (void)playablePlayFinish:(id)arg0;
- (void)playableTransformModuleShow:(id)arg0;
- (void)playableTransformModuleChangeColor:(id)arg0;
- (void)playableClickHotArea:(id)arg0 params:(id)arg1;
- (void)playableRealPlayStart:(id)arg0;
- (void)playableJSSDKLoadSuccess:(id)arg0;
- (void)playableShouldDetectBlankScreen:(id)arg0 detectType:(unsigned long long)arg1;
- (void)playableAlphaPlayerPlay:(id)arg0 params:(id)arg1;
- (void)playableTransformModuleHighlight:(id)arg0;
- (void)playableSendClickEvent:(id)arg0 params:(id)arg1;
- (void)playableOpenSystemSettings:(id)arg0 type:(unsigned long long)arg1;
- (void)playableEventReportNotification:(id)arg0;
- (id)ntType;
- (BOOL)hasPlayableContainerShow;
- (id)playableSDK;
- (BOOL)mainSceneReady;
- (void)setHasPlayableContainerShow:(BOOL)arg0;
- (void)resetPlayable;
- (void)setMainSceneReady:(BOOL)arg0;
- (id)cardSessionID;
- (id)videoSessionID;
- (id)prerenderStage;
- (double)entireRenderDuration;
- (double)containerLoadDuration;
- (double)contentLoadDuration;
- (void)setPlayableSDK:(id)arg0;
- (void)setVideoSessionID:(id)arg0;
- (void)setCardSessionID:(id)arg0;
- (void)setPrerenderStage:(id)arg0;
- (void)setEntireRenderDuration:(double)arg0;
- (void)setContainerLoadDuration:(double)arg0;
- (void)setContentLoadDuration:(double)arg0;
- (BOOL)isContainerShow;
- (void)setIsContainerShow:(BOOL)arg0;
- (BOOL)isPlayableLoadFailed;
- (void)setIsPlayableLoadFailed:(BOOL)arg0;
- (void)updateLogPanel:(id)arg0;
- (void)showLogPanel;
- (void)hideLogPanel;
- (void)clearLog;
- (void)setLoadStartTimeStamp:(double)arg0;
- (double)loadStartTimeStamp;
- (void)setupPlayableEventNotification;
- (void)removePlayableEventNotification;
- (void)setReqeustTimes:(long long)arg0;
- (void)setRequestHitTimes:(long long)arg0;
- (void)setGeckoLogs:(id)arg0;
- (void)setViewableChangeTimeStamp:(double)arg0;
- (double)viewableChangeTimeStamp;
- (void)setViewableToRealPlayableStartDuration:(double)arg0;
- (void)resetDebugVariables;
- (void)setLoadFinishTimeStamp:(double)arg0;
- (double)loadFinishTimeStamp;
- (void)setHtmlLoadDuration:(double)arg0;
- (void)setIsLoadFinshed:(BOOL)arg0;
- (long long)reqeustTimes;
- (long long)requestHitTimes;
- (double)htmlLoadDuration;
- (void)excuteJSBMethod:(id)arg0 params:(id)arg1;
- (id)globalErrorString:(unsigned long long)arg0;
- (void)setMainSceneReadyTimeStamp:(double)arg0;
- (double)mainSceneReadyTimeStamp;
- (void)setRenderDuration:(double)arg0;
- (void)setHtmlStartToMainSceneReadyDuration:(double)arg0;
- (void)trackPlayablePerformance;
- (double)viewableToRealPlayableStartDuration;
- (double)htmlStartToMainSceneReadyDuration;
- (BOOL)isLoadFinshed;
- (long long)playableResponseCode;
- (void)setPlayableResponseCode:(long long)arg0;
- (id)performanceArray;
- (void)setPerformanceArray:(id)arg0;
- (id)geckoLogs;
- (id)webviewSettings;
- (BOOL)falconSchemeHandlerEnable;
- (void)falconInterceptedRequest:(id)arg0 willLoadFromCache:(BOOL)arg1 statModel:(id)arg2;
- (void)setModel:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (void)setSection:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)section;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (void)setupWebView;
- (long long)currentRetryCount;
- (void)setCurrentRetryCount:(long long)arg0;
- (double)renderDuration;
- (void)loadRequest;
- (void)handleURLResponse:(id)arg0;

@end

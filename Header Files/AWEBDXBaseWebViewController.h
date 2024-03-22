//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEWebViewAppearanceStateUpdater, NSDictionary, BDXWebView, AWEWebRouterParam, MASConstraint, AVAudioPlayer, NSNumber;
@protocol IESWebViewProtocol;

@interface AWEBDXBaseWebViewController : BDXViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, WKNavigationDelegate, AWEWebViewControllerProtocol, UIGestureRecognizerDelegate> {
    BOOL _isPopOver;
    BOOL _loadCompleted;
    BOOL _closeButtonVisible;
    BOOL _hideNavigationBar;
    BOOL _scrollViewObserverAdded;
    BOOL _willCloseWebView;
    BOOL _onlyPreventClose;
    NSString *requestURL;
    UIView<IESWebViewProtocol> *webView;
    NSString *reactID;
    double _initialTimestamp;
    double _loadDuration;
    long long _kernel;
    NSDictionary *_additionalRequestParams;
    NSDictionary *_additionalRequestHeaderFields;
    NSNumber *_currentWebStatusBarStyleType;
    id /* block */ _didStartLoadHandler;
    id /* block */ _didFailToLoadHandler;
    id /* block */ _didFinishLoadHandler;
    id /* block */ _didCloseWebView;
    id /* block */ _willDisappearBlock;
    id /* block */ _didDisappearBlock;
    id /* block */ _viewControllerDeallocBlock;
    id /* block */ _jsCloseCallBackHandler;
    id /* block */ _didMoveFromParentHandler;
    id /* block */ _didClickNavLeftButtonHandler;
    id /* block */ _didClickCloseButtonHandler;
    AWEWebRouterParam *_webSchemeParam;
    MASConstraint *_webviewBottomConstraint;
    UIView *_scrollHeaderPlaceholderView;
    NSDictionary *_routeParamDict;
    double _loadTimeStamp;
    double _startTime;
    NSString *_lastEnterFrom;
    NSArray *_customNavigationItemEventIds;
    AWEWebViewAppearanceStateUpdater *_apperanceUpdater;
    AVAudioPlayer *_emptyAudioPlayer;
    NSArray *_backForwardList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *scrollHeaderPlaceholderView;
@property (nonatomic) BOOL scrollViewObserverAdded;
@property (retain, nonatomic) NSDictionary *routeParamDict;
@property (nonatomic) double loadTimeStamp;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *lastEnterFrom;
@property (copy, nonatomic) NSArray *customNavigationItemEventIds;
@property (nonatomic) BOOL willCloseWebView;
@property (readonly, nonatomic) BDXWebView *__webView;
@property (retain, nonatomic) AWEWebViewAppearanceStateUpdater *apperanceUpdater;
@property (retain, nonatomic) AVAudioPlayer *emptyAudioPlayer;
@property (copy, nonatomic) NSArray *backForwardList;
@property (nonatomic) BOOL onlyPreventClose;
@property (nonatomic) double initialTimestamp;
@property (readonly, copy, nonatomic) NSString *reactID;
@property (nonatomic) double loadDuration;
@property (nonatomic) long long kernel;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (copy, nonatomic) NSDictionary *additionalRequestHeaderFields;
@property (nonatomic) BOOL isPopOver;
@property (retain, nonatomic) NSNumber *currentWebStatusBarStyleType;
@property (copy, nonatomic) id /* block */ didStartLoadHandler;
@property (copy, nonatomic) id /* block */ didFailToLoadHandler;
@property (copy, nonatomic) id /* block */ didFinishLoadHandler;
@property (copy, nonatomic) id /* block */ didCloseWebView;
@property (copy, nonatomic) id /* block */ willDisappearBlock;
@property (copy, nonatomic) id /* block */ didDisappearBlock;
@property (copy, nonatomic) id /* block */ viewControllerDeallocBlock;
@property (copy, nonatomic) id /* block */ jsCloseCallBackHandler;
@property (copy, nonatomic) id /* block */ didMoveFromParentHandler;
@property (copy, nonatomic) id /* block */ didClickNavLeftButtonHandler;
@property (copy, nonatomic) id /* block */ didClickCloseButtonHandler;
@property (nonatomic) BOOL loadCompleted;
@property (retain, nonatomic) AWEWebRouterParam *webSchemeParam;
@property (nonatomic) BOOL closeButtonVisible;
@property (retain, nonatomic) MASConstraint *webviewBottomConstraint;
@property (nonatomic) BOOL forceDarkStyle;
@property (nonatomic) BOOL hideSourceLabel;
@property (nonatomic) BOOL hideNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *requestURL;
@property (readonly, nonatomic) UIView<IESWebViewProtocol> *webView;

+ (id)defaultPrecreator;
+ (BOOL)isToAppStoreRequestURLStr:(id)arg0;
+ (void)initialize;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (BOOL)container:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(id)arg2;
- (void)containerWillStartLoading:(id)arg0;
- (void)containerDidStartLoading:(id)arg0;
- (void)container:(id)arg0 didStartLoadingSuccessWithUrl:(id)arg1;
- (void)container:(id)arg0 didStartLoadingFailedWithUrl:(id)arg1;
- (void)didFinishLogin;
- (void)didCancelLogin;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (void)setupGesture;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)dismissLoadingView;
- (void)backButtonClicked;
- (id)reactID;
- (void)showSharePanel;
- (id)webTitle;
- (void)setAdditionalRequestHeaderFields:(id)arg0;
- (void)setLoadDuration:(double)arg0;
- (void)setupNotification;
- (void)showMorePanel;
- (void)setHideNavigationBar:(BOOL)arg0;
- (BOOL)hideNavigationBar;
- (id)hmdPageExtension;
- (void)setUploadPath:(id)arg0;
- (id)uploadPath;
- (void)stopAudioPlay;
- (void)registerTitleObserver;
- (void)handleBroadcastNotification:(id)arg0;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didClickAlbumAssetCell:(id)arg1;
- (void)albumViewControllerDidClickCancelButton:(id)arg0;
- (id)additionalRequestHeaderFields;
- (void)setHideSourceLabel:(BOOL)arg0;
- (void)setDidFailToLoadHandler:(id /* block */)arg0;
- (void)setViewControllerDeallocBlock:(id /* block */)arg0;
- (void)setDidCloseWebView:(id /* block */)arg0;
- (void)setDidFinishLoadHandler:(id /* block */)arg0;
- (void)handleCloseWebViewBlock;
- (id /* block */)didFinishLoadHandler;
- (id /* block */)didFailToLoadHandler;
- (BOOL)shouldFullScreen;
- (void)setForceDarkStyle:(BOOL)arg0;
- (void)handleAppStoreDismissNoti:(id)arg0;
- (void)setIsPopOver:(BOOL)arg0;
- (void)updateNavigationItemOnErrorIfNeeded;
- (BOOL)immersiveMode;
- (BOOL)forceDarkStyle;
- (void)updateStartTime;
- (void)setupTopBarColor;
- (void)showTopStatusBar;
- (void)hideTopStatusBar;
- (double)initialTimestamp;
- (void)setupWebViewLayout;
- (id /* block */)jsCloseCallBackHandler;
- (void)closeWebView;
- (void)handleCloseWebViewNoti:(id)arg0;
- (void)setDidStartLoadHandler:(id /* block */)arg0;
- (void)setLoadTimeStamp:(double)arg0;
- (double)loadTimeStamp;
- (id)lastEnterFrom;
- (void)setLastEnterFrom:(id)arg0;
- (void)setCurrentWebStatusBarStyleType:(id)arg0;
- (void)updateNavigationBarTitle:(id)arg0;
- (void)setJsCloseCallBackHandler:(id /* block */)arg0;
- (void)setUploadParameters:(id)arg0;
- (id)uploadParameters;
- (void)observeScrollIfNeeded;
- (BOOL)falconSchemeHandlerEnable;
- (void)trackHybridWithTrigger:(id)arg0;
- (BOOL)closeButtonVisible;
- (BOOL)shouldHandleTitleChangeWithURL:(id)arg0;
- (void)loadFailedWithError:(id)arg0;
- (id)webviewBottomConstraint;
- (void)setWebviewBottomConstraint:(id)arg0;
- (double)webViewTopPadding;
- (void)setRouteParamDict:(id)arg0;
- (id)apperanceUpdater;
- (id)currentWebStatusBarStyleType;
- (void)notifyWebViewEvent:(id)arg0;
- (void)setWillCloseWebView:(BOOL)arg0;
- (void)stayTimeTrackEvent;
- (BOOL)willCloseWebView;
- (id /* block */)didDisappearBlock;
- (void)setDidDisappearBlock:(id /* block */)arg0;
- (id /* block */)viewControllerDeallocBlock;
- (void)awe_upli_removeObservers;
- (void)handleNavBarSwitchStyleNoti:(id)arg0;
- (void)didReceiveShareRefreshNotification:(id)arg0;
- (void)handleJSBridgeConfigPopGestureNotification:(id)arg0;
- (void)webViewWillDisappear:(id)arg0;
- (void)adItemDidChange:(id)arg0;
- (void)awe_upli_addObservers;
- (void)setApperanceUpdater:(id)arg0;
- (BOOL)scrollViewObserverAdded;
- (void)setScrollViewObserverAdded:(BOOL)arg0;
- (void)setScrollHeaderPlaceholderView:(id)arg0;
- (id)scrollHeaderPlaceholderView;
- (void)checkRequestURL:(id)arg0;
- (id /* block */)didStartLoadHandler;
- (void)recordLoadDuration;
- (BOOL)hideSourceLabel;
- (BOOL)isPopOver;
- (void)setCustomNavigationItemEventIds:(id)arg0;
- (id)customNavigationItemEventIds;
- (void)setCloseButtonVisible:(BOOL)arg0;
- (BOOL)onlyPreventClose;
- (id)routeParamDict;
- (BOOL)getFalconSchemeHandlerWebIntercept;
- (id /* block */)didCloseWebView;
- (id)enterFromForHibridTrackWithEvent:(id)arg0;
- (void)addCustomerNavigationBarButtonFromBridge:(id)arg0;
- (void)customerButtonAction0;
- (void)customerButtonAction1;
- (void)setInitialTimestamp:(double)arg0;
- (void)setOnlyPreventClose:(BOOL)arg0;
- (void)handleUploadPhotoLibrayImageNoti:(id)arg0;
- (void)setUseSensitiveServer:(BOOL)arg0;
- (void)uploadFileCancel:(id)arg0;
- (BOOL)useSensitiveServer;
- (void)uploadSensitiveImage:(id)arg0;
- (id)p_compressImage:(id)arg0;
- (id)initWithRequestURL:(id)arg0 config:(id)arg1 context:(id)arg2;
- (void)onClickNaviRightButton;
- (id /* block */)didClickNavLeftButtonHandler;
- (void)onClickNaviLeftButton;
- (void)__setUpAppearanceStateUpdater;
- (id)webSchemeParam;
- (id)emptyAudioPlayer;
- (id /* block */)didMoveFromParentHandler;
- (void)setDidMoveFromParentHandler:(id /* block */)arg0;
- (BOOL)isCurrentWeb:(id)arg0;
- (BOOL)shouldRemoveUnusedAbility;
- (void)updateWebNavigationTitleByWebDocumentTitle;
- (id /* block */)didClickCloseButtonHandler;
- (void)setupLocation;
- (void)finishLoadWithWebview;
- (void)setBackForwardList:(id)arg0;
- (void)setDidClickNavLeftButtonHandler:(id /* block */)arg0;
- (void)setDidClickCloseButtonHandler:(id /* block */)arg0;
- (void)setWebSchemeParam:(id)arg0;
- (void)setEmptyAudioPlayer:(id)arg0;
- (void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)goBack;
- (void)setStartTime:(double)arg0;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (id)webView;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)type;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setType:(id)arg0;
- (id)requestURL;
- (double)startTime;
- (id)topViewController;
- (void)cancel;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)defaultBackgroundColor;
- (id)backForwardList;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)uploadImage:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (BOOL)hideStatusBar;
- (long long)kernel;
- (id)__webView;
- (void)setupWebView;
- (void)updateNavigationItem;
- (double)loadDuration;
- (void)setKernel:(long long)arg0;
- (BOOL)loadCompleted;
- (void)setLoadCompleted:(BOOL)arg0;
- (void)setAdditionalRequestParams:(id)arg0;
- (id)additionalRequestParams;
- (id /* block */)willDisappearBlock;
- (void)setWillDisappearBlock:(id /* block */)arg0;
- (void)setPickerController:(id)arg0;
- (id)pickerController;

@end

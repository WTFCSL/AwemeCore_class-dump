//
//     Generated by private class-dump
//

@class BDNovelWebContainerView, NSString, NSDictionary, NSArray, NSDate, UIView, BDNovelWebContainerViewControllerParams;
@protocol BDNovelWebContainerViewControllerDelegate, BDNovelBackButtonViewProtocol, BDNovelNavigationBarProtocol;

@interface BDNovelWebContainerViewController : UIViewController <BDNovelWebContainerViewDelegate> {
    BOOL _hideMore;
    BOOL _useOffline;
    BOOL _isStatusBarWhite;
    BOOL _currentViewAppear;
    id<BDNovelWebContainerViewControllerDelegate> _delegate;
    BDNovelWebContainerViewControllerParams *_vcParams;
    NSString *_webTitle;
    NSDictionary *_allParams;
    NSArray *_preloadInfos;
    NSDate *_startStayPageDate;
    UIView<BDNovelBackButtonViewProtocol> *_backButtonView;
    UIView<BDNovelNavigationBarProtocol> *_novelNavigationBar;
    BDNovelWebContainerView *_containerView;
    NSDictionary *_appendUrlQuery;
}

@property (nonatomic) BOOL hideMore;
@property (nonatomic) BOOL useOffline;
@property (nonatomic) BOOL isStatusBarWhite;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSDictionary *allParams;
@property (copy, nonatomic) NSArray *preloadInfos;
@property (retain, nonatomic) NSDate *startStayPageDate;
@property (retain, nonatomic) UIView<BDNovelBackButtonViewProtocol> *backButtonView;
@property (retain, nonatomic) UIView<BDNovelNavigationBarProtocol> *novelNavigationBar;
@property (retain, nonatomic) BDNovelWebContainerView *containerView;
@property (copy, nonatomic) NSDictionary *appendUrlQuery;
@property (nonatomic) BOOL currentViewAppear;
@property (weak, nonatomic) id<BDNovelWebContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) BDNovelWebContainerViewControllerParams *vcParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebTitle:(id)arg0;
- (id)webTitle;
- (void)setVcParams:(id)arg0;
- (void)setAppendUrlQuery:(id)arg0;
- (void)setPreloadInfos:(id)arg0;
- (void)handleWebViewSchemeParams:(id)arg0;
- (id)initWithRouteParams:(id)arg0 vcParams:(id)arg1 appendUrlQuery:(id)arg2;
- (id)initWithRouteParams:(id)arg0 vcParams:(id)arg1;
- (id)preloadInfos;
- (id)appendUrlQuery;
- (id)vcParams;
- (id)novelNavigationBar;
- (void)setCurrentViewAppear:(BOOL)arg0;
- (void)refreshStatusBarStyle;
- (void)setStartStayPageDate:(id)arg0;
- (void)_sendStayEventWithTimeInterval;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWebView;
- (double)customStatusBarHeight;
- (void)setUseOffline:(BOOL)arg0;
- (void)setIsStatusBarWhite:(BOOL)arg0;
- (BOOL)currentViewAppear;
- (id)startStayPageDate;
- (BOOL)useOffline;
- (void)webViewDidTerminate:(id)arg0;
- (id)initWithRouteParams:(id)arg0;
- (BOOL)hideMore;
- (void)setHideMore:(BOOL)arg0;
- (BOOL)isStatusBarWhite;
- (void)setNovelNavigationBar:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id)backButtonView;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (void)setBackButtonView:(id)arg0;
- (id)allParams;
- (void)setAllParams:(id)arg0;

@end

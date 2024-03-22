//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, UIView, BDNovelWebContainerViewController;
@protocol BDNovelLoadingViewProtocol;

@interface BDNovelStoryReaderViewController : UIViewController {
    BOOL _hasFinishLoad;
    BDNovelWebContainerViewController *_webCon;
    UIView *_loadingView;
    NSMutableDictionary *_params;
    NSString *_originScheme;
    UIView<BDNovelLoadingViewProtocol> *_loadingIndicatorView;
    UIView *_backgroundView;
    UIView *_shieldView;
    NSDictionary *_queryItems;
}

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *originScheme;
@property (retain, nonatomic) UIView<BDNovelLoadingViewProtocol> *loadingIndicatorView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL hasFinishLoad;
@property (retain, nonatomic) UIView *shieldView;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) BDNovelWebContainerViewController *webCon;

- (id)shieldView;
- (void)setShieldView:(id)arg0;
- (void)__hideLoadingIndicator;
- (void)webViewControllerDidStartLoad:(id)arg0;
- (void)webViewControllerDidFinishLoad:(id)arg0;
- (void)webViewController:(id)arg0 didFailLoadWithError:(id)arg1;
- (id)initWithRouteParams:(id)arg0;
- (id)originScheme;
- (void)setOriginScheme:(id)arg0;
- (id)initWithRouteParams:(id)arg0 originScheme:(id)arg1;
- (void)novelScreenCapture;
- (void)novelScreenRecord;
- (id)genContainerParams:(id)arg0;
- (void)setWebCon:(id)arg0;
- (void)__showLoadingIndicator;
- (void)__addLoadingIndicatorView;
- (void)setHasFinishLoad:(BOOL)arg0;
- (id)webCon;
- (id)screenRecordAndCaptureReportParams;
- (void)loadFailed;
- (id)homePageConfig;
- (BOOL)hasFinishLoad;
- (id)queryItems;
- (void)viewDidLayoutSubviews;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)params;
- (id)contentScrollView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (void)setQueryItems:(id)arg0;
- (void)setParams:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg0;

@end
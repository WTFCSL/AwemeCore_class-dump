//
//     Generated by private class-dump
//

@class NSString, AWEUITextLoadingView, AWEDouPlusPayDeskCoreView, AWEDouPlusPayDeskViewModel, AWEIAPStoreManager;

@interface AWEDouPlusPayDeskViewController : AWEDouPlusContainerViewController <AWEIAPStoreManagerDelegate, AWERouterViewControllerProtocol, AWEDouPlusPayDeskCoreViewDelegate> {
    BOOL _isPaySuccess;
    BOOL _isPaying;
    BOOL _shouldBackToLastPage;
    AWEDouPlusPayDeskCoreView *_deskCoreView;
    AWEDouPlusPayDeskViewModel *_viewModel;
    AWEUITextLoadingView *_loadingView;
    AWEIAPStoreManager *_iapStoreManager;
    long long _sceneType;
}

@property (retain, nonatomic) AWEDouPlusPayDeskCoreView *deskCoreView;
@property (retain, nonatomic) AWEDouPlusPayDeskViewModel *viewModel;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) AWEIAPStoreManager *iapStoreManager;
@property (nonatomic) BOOL isPaySuccess;
@property (nonatomic) BOOL isPaying;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL shouldBackToLastPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)dismissLoadingView;
- (double)coreAreaHeight;
- (void)dismissFromParentViewController;
- (void)confirmPayAction;
- (id)deskCoreView;
- (void)setShouldBackToLastPage:(BOOL)arg0;
- (BOOL)isPaySuccess;
- (void)dismissByPaySuccess:(BOOL)arg0;
- (BOOL)isPaying;
- (id)iapStoreManager;
- (void)setIsPaySuccess:(BOOL)arg0;
- (void)setIsPaying:(BOOL)arg0;
- (BOOL)shouldBackToLastPage;
- (void)didFinishProduct:(id)arg0 resultType:(long long)arg1 error:(id)arg2;
- (void)setDeskCoreView:(id)arg0;
- (void)setIapStoreManager:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end

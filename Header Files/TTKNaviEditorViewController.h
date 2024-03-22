//
//     Generated by private class-dump
//

@class NSString, AWENaviLoadingPageView, TTKNaviEditorComponentViewModelFactory, TTKNaviEditorComponentFactory, TTKNaviRouterServiceConfig, TTKNaviFeatureComponentViewModelContainer, NSMutableDictionary, TTKNaviFeatureComponentManager;
@protocol IESServiceRegister, IESServiceProvider;

@interface TTKNaviEditorViewController : UIViewController <TTKNaviFeatureComponentController, AWENaviFeatureComponentBizController, AWERouterViewControllerProtocol> {
    AWENaviLoadingPageView *_loadingView;
    TTKNaviFeatureComponentViewModelContainer *_viewModelContainer;
    TTKNaviFeatureComponentManager *_componentManager;
    TTKNaviEditorComponentFactory *_componentFactory;
    id<IESServiceRegister, IESServiceProvider> _businessServiceContainer;
    TTKNaviEditorComponentViewModelFactory *_viewModelFactory;
    TTKNaviRouterServiceConfig *_routerConfig;
    double _beginTime;
    NSMutableDictionary *_trackParamDic;
    double _didAppearTime;
}

@property (retain, nonatomic) AWENaviLoadingPageView *loadingView;
@property (retain, nonatomic) TTKNaviFeatureComponentViewModelContainer *viewModelContainer;
@property (retain, nonatomic) TTKNaviFeatureComponentManager *componentManager;
@property (retain, nonatomic) TTKNaviEditorComponentFactory *componentFactory;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> businessServiceContainer;
@property (retain, nonatomic) TTKNaviEditorComponentViewModelFactory *viewModelFactory;
@property (retain, nonatomic) TTKNaviRouterServiceConfig *routerConfig;
@property (nonatomic) double beginTime;
@property (retain, nonatomic) NSMutableDictionary *trackParamDic;
@property (nonatomic) double didAppearTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)routerConfig;
- (void)setComponentManager:(id)arg0;
- (id)viewModelContainer;
- (void)renderServiceDidFinishRender:(BOOL)arg0;
- (void)isUnfinishedRenderingOnExit;
- (id)trackParamDic;
- (void)setBusinessServiceContainer:(id)arg0;
- (id)businessServiceContainer;
- (void)setViewModelFactory:(id)arg0;
- (void)setViewModelContainer:(id)arg0;
- (void)setComponentFactory:(id)arg0;
- (id)componentFactory;
- (void)setDidAppearTime:(double)arg0;
- (void)setTrackParamDic:(id)arg0;
- (double)didAppearTime;
- (void)updateWithInputData:(id)arg0;
- (id)viewModelFactory;
- (void)onUserDidTakeScreenshot:(id)arg0;
- (id)initWithRouterConfig:(id)arg0;
- (void)setRouterConfig:(id)arg0;
- (id)root;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)close;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)setBeginTime:(double)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (double)beginTime;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)showProgress;
- (id)componentManager;

@end

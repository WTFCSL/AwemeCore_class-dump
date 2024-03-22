//
//     Generated by private class-dump
//

@class NSString, AWENaviProgressView, AWENaviDuetComponentViewModelFactory, NSMutableDictionary, UIButton, TTKNaviFeatureComponentViewModelContainer, AWENaviDuetComponentFactory, TTKNaviFeatureComponentManager;
@protocol IESServiceRegister, IESServiceProvider;

@interface AWENaviDuetViewController : UIViewController <TTKNaviFeatureComponentController, AWENaviFeatureComponentBizController, AWERouterViewControllerProtocol> {
    TTKNaviFeatureComponentViewModelContainer *_viewModelContainer;
    TTKNaviFeatureComponentManager *_componentManager;
    AWENaviDuetComponentFactory *_componentFactory;
    id<IESServiceRegister, IESServiceProvider> _businessServiceContainer;
    AWENaviDuetComponentViewModelFactory *_viewModelFactory;
    AWENaviProgressView *_loadingView;
    UIButton *_closeButton;
    double _beginTime;
    double _didAppearTime;
    NSMutableDictionary *_trackParamDic;
}

@property (retain, nonatomic) TTKNaviFeatureComponentViewModelContainer *viewModelContainer;
@property (retain, nonatomic) TTKNaviFeatureComponentManager *componentManager;
@property (retain, nonatomic) AWENaviDuetComponentFactory *componentFactory;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> businessServiceContainer;
@property (retain, nonatomic) AWENaviDuetComponentViewModelFactory *viewModelFactory;
@property (retain, nonatomic) AWENaviProgressView *loadingView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double beginTime;
@property (nonatomic) double didAppearTime;
@property (retain, nonatomic) NSMutableDictionary *trackParamDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
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
- (void)closeAnimated:(BOOL)arg0;
- (void)updateWithInputData:(id)arg0;
- (id)viewModelFactory;
- (id)root;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)close;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setBeginTime:(double)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (double)beginTime;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)componentManager;

@end

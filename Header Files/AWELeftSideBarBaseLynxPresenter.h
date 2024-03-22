//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface AWELeftSideBarBaseLynxPresenter : AWELeftSideBarBasePresenter <BDXContainerLifecycleProtocol> {
    UIView<BDXViewContainerProtocol> *_lynxView;
    double _loadingTime;
}

@property (nonatomic) double loadingTime;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)containerWillStartLoading:(id)arg0;
- (void)container:(id)arg0 didStartLoadingFailedWithUrl:(id)arg1;
- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)setLoadingTime:(double)arg0;
- (double)loadingTime;
- (id)sidebarCommonLynxProps;
- (void)leftSideBarLynxContainerWillStartLoading:(id)arg0;
- (void)leftSideBarLynxContainer:(id)arg0 didStartLoadingFailedWithUrl:(id)arg1;
- (void)leftSideBarLynxContainer:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)leftSideBarLynxContainer:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (double)leftSideBarLynxContainerWidth;
- (double)leftSideBarLynxContainerHeight;
- (id)getCurrentLynxScheme;
- (id)getCurrentLynxAccessibilityLabel;
- (void)leftSideBarPresenterOnReload:(id)arg0;
- (void)leftSideBarViewWillAppear;
- (void).cxx_destruct;

@end

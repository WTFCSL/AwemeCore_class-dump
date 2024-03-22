//
//     Generated by private class-dump
//

@class TTKNaviRenderView, NSString, AWENaviProgressView, AWENaviPlaceholderView;
@protocol IESServiceProvider, AWENaviDuetRenderServiceProtocol, AWENaviDuetViewContainerProtocol;

@interface AWENaviDuetPreviewComponent : AWENaviDuetBaseFeatureComponent <TTKNaviRenderMessageDelegate> {
    BOOL _componentHasAppeared;
    BOOL _isRebuilded;
    id<IESServiceProvider> _serviceProvider;
    id<AWENaviDuetViewContainerProtocol> _viewContainer;
    id<AWENaviDuetRenderServiceProtocol> _renderService;
    AWENaviPlaceholderView *_placeholderView;
    AWENaviProgressView *_progressView;
}

@property (readonly, weak, nonatomic) TTKNaviRenderView *preview;
@property (retain, nonatomic) id<AWENaviDuetViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<AWENaviDuetRenderServiceProtocol> renderService;
@property (nonatomic) BOOL componentHasAppeared;
@property (nonatomic) BOOL isRebuilded;
@property (retain, nonatomic) AWENaviPlaceholderView *placeholderView;
@property (retain, nonatomic) AWENaviProgressView *progressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRebuilded;
- (id)renderService;
- (void)didFinishLoadPackedMessages;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)setRenderService:(id)arg0;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)componentWillUnmount;
- (Class)componentViewModelClass;
- (void)p_setupRenderViewIfNeeded;
- (BOOL)componentHasAppeared;
- (void)setComponentHasAppeared:(BOOL)arg0;
- (void)fadeDismissProgressView;
- (id)actionViewModel;
- (void)setIsRebuilded:(BOOL)arg0;
- (id)placeholderView;
- (void).cxx_destruct;
- (id)preview;
- (void)setServiceProvider:(id)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)serviceProvider;
- (id)viewModel;
- (void)setPlaceholderView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWEPageContext, UIView, AWEDemaciaBaseContainer, UIViewController;
@protocol AWEDemaciaPageContextProtocol, AWEDemaciaContainerProtocol;

@interface AWEDemaciaBaseController : NSObject <AWEVideoPlayControllerDispatchProtocol, AWEVideoPlayRecognizeDispatchProtocol, AWEVideoPlayerLifeCycleProtocol> {
    BOOL _appear;
    UIView *_rootView;
    UIViewController<AWEDemaciaContainerProtocol> *_viewController;
    AWEDemaciaBaseContainer *_view;
    AWEPageContext<AWEDemaciaPageContextProtocol> *_context;
    AWEAwemeModel *_model;
}

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (retain, nonatomic) AWEDemaciaBaseContainer *view;
@property (weak, nonatomic) AWEPageContext<AWEDemaciaPageContextProtocol> *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL appear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)setAppear:(BOOL)arg0;
- (id)viewControllerShouldConformProtocolList;
- (id)contextShouldConformProtocolList;
- (void)setModel:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setData:(id)arg0;
- (void)setView:(id)arg0;
- (id)context;
- (void)reset;
- (void)viewDidLoad;
- (id)view;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (BOOL)appear;

@end

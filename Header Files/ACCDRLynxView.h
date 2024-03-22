//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, ACCDRGestureDispatchMessageHandler, NSURL, UIView, NSString;
@protocol ACCDRLynxContainerViewDelegate, ACCDRLynxUtilService, BDXLynxViewProtocol;

@interface ACCDRLynxView : UIView <BDXKitViewLifecycleProtocol, ACCDRLynxContainerViewProtocol> {
    id<ACCDRLynxContainerViewDelegate> _lifeCycleDelegate;
    UIView<BDXLynxViewProtocol> *_lynxView;
    NSURL *_currentURL;
    NSDictionary *_props;
    NSArray *_xbridges;
    id<ACCDRLynxUtilService> _utilService;
}

@property (retain, nonatomic) ACCDRGestureDispatchMessageHandler *gestureDispatchMessageHandler;
@property (retain, nonatomic) UIView<BDXLynxViewProtocol> *lynxView;
@property (retain, nonatomic) NSURL *currentURL;
@property (copy, nonatomic) NSDictionary *props;
@property (copy, nonatomic) NSArray *xbridges;
@property (retain, nonatomic) id<ACCDRLynxUtilService> utilService;
@property (weak, nonatomic) id<ACCDRLynxContainerViewDelegate> lifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)lifeCycleDelegate;
- (void)setLifeCycleDelegate:(id)arg0;
- (void)registerBridgeHandle:(id /* block */)arg0 forMethod:(id)arg1;
- (id)lynxView;
- (void)viewWillStartLoading:(id)arg0;
- (void)view:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)viewDidStartLoading:(id)arg0;
- (void)view:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)view:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)viewDidFirstScreen:(id)arg0;
- (void)view:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)view:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)viewDidUpdate:(id)arg0;
- (void)view:(id)arg0 didRecieveError:(id)arg1;
- (void)view:(id)arg0 didReceivePerformance:(id)arg1;
- (void)setLynxView:(id)arg0;
- (void)loadFailedWithURL:(id)arg0 error:(id)arg1;
- (id)globalPropsWithURLString:(id)arg0;
- (id)lynxParams;
- (void)setGestureDispatchMessageHandler:(id)arg0;
- (id)gestureDispatchMessageHandler;
- (void)setUtilService:(id)arg0;
- (void)setXbridges:(id)arg0;
- (void)registerXBridges;
- (void)registerContextAndReload;
- (id)xbridges;
- (id)utilService;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 templateUrl:(id)arg1 rawData:(id)arg2 lynxUtilService:(id)arg3;
- (void)loadTemplateWithXBridges:(id)arg0;
- (void)updateProps:(id)arg0;
- (void)reloadProps:(id)arg0;
- (void).cxx_destruct;
- (id)context;
- (id)props;
- (id)currentURL;
- (void)setCurrentURL:(id)arg0;
- (void)setProps:(id)arg0;

@end

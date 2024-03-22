//
//     Generated by private class-dump
//

@class DitoContainerRouterParamsParser, DitoContainerPageContext, DitoContainerNetworkHelper, NSString;

@interface DitoContainerViewController : AWEDitoViewController {
    DitoContainerRouterParamsParser *_routerParser;
    DitoContainerNetworkHelper *_networkHelper;
    NSString *_btmID;
}

@property (retain, nonatomic) DitoContainerRouterParamsParser *routerParser;
@property (retain, nonatomic) DitoContainerPageContext *context;
@property (retain, nonatomic) DitoContainerNetworkHelper *networkHelper;
@property (copy, nonatomic) NSString *btmID;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)registerExtensions;
- (id)performanceTrackParams;
- (void)didSendRequest;
- (id)trackParamsForPageAutoTrackWithEventName:(id)arg0 params:(id)arg1;
- (void)sendMainRequest;
- (id)DitoPageScene;
- (id)createRouterParser;
- (void)registerDitoContainerExtensions;
- (void)registerDitoContainerComponents;
- (void)bindDitoContainerStateAndAction;
- (void)requestWithRequestActionContext:(id)arg0;
- (void)dismissDitoContainer:(id)arg0;
- (id)routerParser;
- (void)setBtmID:(id)arg0;
- (id)networkHelper;
- (void)setupLynxContainerBuilder;
- (id)btmID;
- (void)setRouterParser:(id)arg0;
- (void)setNetworkHelper:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)createContext;
- (void)viewDidLoad;

@end

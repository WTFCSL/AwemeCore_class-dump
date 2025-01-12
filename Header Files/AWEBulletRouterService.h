//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBulletRouterService : NSObject <AWERouterDelegate, BDXServiceProtocol, BDXHostRouterServiceProtocol> {
    id /* block */ _beforeTransferBlock;
}

@property (copy, nonatomic) id /* block */ beforeTransferBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (id)createService;
+ (id)createPopContainerViewControllerAndOpen:(id)arg0;
+ (id)bizGlobalPropsWithSchema:(id)arg0;
+ (id)tracertMonitorWithQueryItem:(id)arg0 schema:(id)arg1;
+ (id)p_createContainerViewController:(id)arg0 queryItems:(id)arg1;
+ (id)p_generateBDXContextWithQueryItems:(id)arg0 urlString:(id)arg1;
+ (id)liteOfflinePrefix;
+ (unsigned long long)serviceType;

- (void)openSchemaByHost:(id)arg0 beforeOpenCompletion:(id /* block */)arg1 afterOpenCompletion:(id /* block */)arg2;
- (void)openSchemaByHost:(id)arg0 afterOpenCompletion:(id /* block */)arg1;
- (BOOL)openSchemaByHost:(id)arg0;
- (id)createContainerViewController:(id)arg0;
- (void)setBeforeTransferBlock:(id /* block */)arg0;
- (id /* block */)beforeTransferBlock;
- (void)routerDidCreateViewControllerBeforeTransferWithURLString:(id)arg0 targetViewController:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end

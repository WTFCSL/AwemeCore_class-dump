//
//     Generated by private class-dump
//

@class IESGCPDetailContentNode, NSString, IESGCPPreloadTaskManager, IESGCPGameZoneViewControllerRouterModel, IESGCPGameZoneAPI, IESGCPGameZoneComponentRegistery;

@interface IESGCPGameZoneViewModel : NSObject <IESGCPTrackContextProvider, IESGCPDIContextSubscriber, IESGCPGameZonePreloadTaskService> {
    IESGCPGameZoneAPI *_api;
    IESGCPDetailContentNode *_content;
    IESGCPGameZoneComponentRegistery *_registery;
    IESGCPGameZoneViewControllerRouterModel *_routerModel;
    IESGCPPreloadTaskManager *_preloadManager;
}

@property (retain, nonatomic) IESGCPGameZoneAPI *api;
@property (retain, nonatomic) IESGCPDetailContentNode *content;
@property (retain, nonatomic) IESGCPGameZoneComponentRegistery *registery;
@property (retain, nonatomic) IESGCPGameZoneViewControllerRouterModel *routerModel;
@property (retain, nonatomic) IESGCPPreloadTaskManager *preloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preloadManager;
- (void)setPreloadManager:(id)arg0;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (void)didSetGameCPDIContext;
- (id)provideTrackContext;
- (void)registerComponents;
- (id)initWithRouterModel:(id)arg0 trackContextParams:(id)arg1;
- (id)gameZonePreloadTasks;
- (void)refreshGameZoneData:(id /* block */)arg0;
- (void)startPreloadTask;
- (id)createComponentViews;
- (id)registery;
- (void)setRegistery:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)dealloc;
- (id)api;
- (void)setApi:(id)arg0;

@end

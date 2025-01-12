//
//     Generated by private class-dump
//

@class IESECLiveContext, NSDictionary, NSMutableDictionary, IESECLiveGoodsListViewModel, IESECLiveListDispatcherContainer, NSString;
@protocol IESECLiveGoodsListModuleDelegate, IESECLiveStorage, IESECLiveGoodsListViewEnvironment;

@interface IESECLiveGoodsListModule : NSObject <IESECLiveStorage, IESECLiveGoodsListEnvProvider, IESECLiveListDispatcherContainerDelegate> {
    IESECLiveListDispatcherContainer *_dispatcherContainer;
    IESECLiveGoodsListViewModel *_viewModel;
    IESECLiveContext *_baseContext;
    NSDictionary *_extraParams;
    NSMutableDictionary *_listInfoSavedInRoom;
    id<IESECLiveGoodsListModuleDelegate> _delegate;
}

@property (retain, nonatomic) IESECLiveGoodsListViewModel *viewModel;
@property (retain, nonatomic) IESECLiveContext *baseContext;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSMutableDictionary *listInfoSavedInRoom;
@property (weak, nonatomic) id<IESECLiveGoodsListModuleDelegate> delegate;
@property (retain, nonatomic) IESECLiveListDispatcherContainer *dispatcherContainer;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL hasPreloadedData;
@property (readonly, nonatomic) BOOL isPreloadCacheHit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<IESECLiveStorage> storage;
@property (readonly, weak, nonatomic) id<IESECLiveGoodsListViewEnvironment> env;

- (id)env;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)baseContext;
- (void)setBaseContext:(id)arg0;
- (void)widgetOrientationWillChange:(long long)arg0;
- (void)preloadListView;
- (void)iPadCloseTopFuncView:(BOOL *)arg0;
- (id)initWithLiveContext:(id)arg0 delegate:(id)arg1;
- (void)setListInfoSavedInRoom:(id)arg0;
- (id)dispatcherContainer;
- (BOOL)isPreloadCacheHit;
- (BOOL)hasPreloadedData;
- (void)p_createDefaultListContainerIfNeed;
- (void)p_showWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)forceLoginBeforeShowWithCompletion:(id /* block */)arg0;
- (id)p_panelContainer;
- (void)p_delegateReadyToShowListView:(id)arg0;
- (void)setDispatcherContainer:(id)arg0;
- (id)panelEnv;
- (id)listInfoSavedInRoom;
- (void)dispatcherContainerDidClose:(id)arg0;
- (void)showWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)prefetchData;
- (void).cxx_destruct;
- (id)storage;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (BOOL)isShowing;
- (void)reloadData;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (id)objectForKey:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)closeWithCompletion:(id /* block */)arg0;

@end

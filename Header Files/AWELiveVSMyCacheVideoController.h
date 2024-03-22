//
//     Generated by private class-dump
//

@class AWEVSCacheVideoEmptyView, AWELiveVSMyCacheVideoStore, NSString, UIView, UITableView;
@protocol IESVSVideoCacheService;

@interface AWELiveVSMyCacheVideoController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    id<IESVSVideoCacheService> _cacheService;
    UIView *_loadingView;
    AWEVSCacheVideoEmptyView *_emptyView;
    AWELiveVSMyCacheVideoStore *_store;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<IESVSVideoCacheService> cacheService;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWEVSCacheVideoEmptyView *emptyView;
@property (retain, nonatomic) AWELiveVSMyCacheVideoStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClick:(id)arg0;
- (void)p_setupUI;
- (void)p_showLoading;
- (void)p_fetchData;
- (void)p_setupNavBar;
- (void)p_removeLoading;
- (void)p_showNetworkAlert;
- (void)p_openRoomSchema:(id)arg0;
- (id)cacheService;
- (void)setCacheService:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)store;
- (void)setStore:(id)arg0;
- (void)viewDidLoad;
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)p_addObservers;

@end

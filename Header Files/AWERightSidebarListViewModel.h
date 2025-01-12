//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWERightSidebarRootViewModel;
@protocol AWERightSidebarListViewControllerProtocol, AWERightSidebarDataControllerAdapterProtocol, AWERightSidebarDataFactory;

@interface AWERightSidebarListViewModel : NSObject <AWERightSidebarListViewModelProtocol> {
    id /* block */ _refreshBlock;
    id /* block */ _loadMoreBeginBlock;
    id /* block */ _currentPlayIndexChangeBlock;
    UIViewController<AWERightSidebarListViewControllerProtocol> *_listViewController;
    id /* block */ _currentPlayStateChangeBlock;
    id<AWERightSidebarDataControllerAdapterProtocol> _dataControllerAdapter;
    id<AWERightSidebarDataFactory> _factory;
    long long _currentPlayIndex;
    AWERightSidebarRootViewModel *_rootViewModel;
}

@property (retain, nonatomic) id<AWERightSidebarDataControllerAdapterProtocol> dataControllerAdapter;
@property (retain, nonatomic) id<AWERightSidebarDataFactory> factory;
@property (nonatomic) long long currentPlayIndex;
@property (weak, nonatomic) AWERightSidebarRootViewModel *rootViewModel;
@property (retain, nonatomic) UIViewController<AWERightSidebarListViewControllerProtocol> *listViewController;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (copy, nonatomic) id /* block */ loadMoreBeginBlock;
@property (copy, nonatomic) id /* block */ currentPlayIndexChangeBlock;
@property (copy, nonatomic) id /* block */ currentPlayStateChangeBlock;
@property (readonly, nonatomic) long long fetchState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentPlayIndex;
- (void)setCurrentPlayIndex:(long long)arg0;
- (void)loadMoreBegin;
- (id)rootViewModel;
- (void)currentPlayIndexChange:(long long)arg0 currentModel:(id)arg1;
- (void)changePlayState:(BOOL)arg0 currentPlayIndex:(long long)arg1;
- (long long)fetchState;
- (id)dataControllerAdapter;
- (id /* block */)loadMoreBeginBlock;
- (id /* block */)currentPlayIndexChangeBlock;
- (id /* block */)currentPlayStateChangeBlock;
- (id)initWithDataControllerAdapter:(id)arg0 factory:(id)arg1 rootViewModel:(id)arg2;
- (void)refreshCallback;
- (void)loadMoreBeginCallback;
- (void)currentPlayIndexChangeCallback:(long long)arg0 currentModel:(id)arg1;
- (void)changePlayStateCallback:(BOOL)arg0 currentPlayIndex:(long long)arg1;
- (void)replaceDataControllerCallback:(id)arg0 selectIndex:(long long)arg1 success:(BOOL)arg2;
- (void)setLoadMoreBeginBlock:(id /* block */)arg0;
- (void)setCurrentPlayIndexChangeBlock:(id /* block */)arg0;
- (void)setCurrentPlayStateChangeBlock:(id /* block */)arg0;
- (void)loadMoreCompleteCallback:(id)arg0 error:(id)arg1;
- (void)setDataControllerAdapter:(id)arg0;
- (void)setRootViewModel:(id)arg0;
- (void)refresh;
- (void).cxx_destruct;
- (id)factory;
- (void)setFactory:(id)arg0;
- (void)setListViewController:(id)arg0;
- (id)listViewController;
- (void)setRefreshBlock:(id /* block */)arg0;
- (id /* block */)refreshBlock;

@end

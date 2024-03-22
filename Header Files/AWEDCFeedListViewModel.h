//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWEDCFeedConfig, AWEDCFeedPageContext, AWEListDataController;
@protocol AWEDCFeedDataManagerProtocol, AWEDCFeedListViewControllerProtocol;

@interface AWEDCFeedListViewModel : AWEBaseListViewModel <AWEDCFeedListViewModelProtocol> {
    AWEDCFeedPageContext *_context;
    UIViewController<AWEDCFeedListViewControllerProtocol> *_viewController;
    AWEDCFeedConfig *_config;
    AWEListDataController *_dataController;
    id<AWEDCFeedDataManagerProtocol> _dataManager;
}

@property (retain, nonatomic) AWEDCFeedConfig *config;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) id<AWEDCFeedDataManagerProtocol> dataManager;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fetchListData;
- (void)loadMoreListData;
- (BOOL)canRefresh;
- (void)setDataController:(id)arg0;
- (void)appendModels:(id)arg0 animated:(BOOL)arg1;
- (void)removeModels:(id)arg0 animated:(BOOL)arg1;
- (id)sectionBizContextWithIndexPath:(id)arg0;
- (BOOL)isRefreshingData;
- (id)filterDataArray:(id)arg0 args:(id)arg1;
- (id)awemeModelWithIndexPath:(id)arg0;
- (id)awemeModelWithID:(id)arg0;
- (id)allAwemeArray;
- (void)fetchListDataWithReason:(unsigned long long)arg0 params:(id)arg1 args:(id)arg2 completion:(id /* block */)arg3;
- (void)insertModels:(id)arg0 indexPath:(id)arg1 animated:(BOOL)arg2;
- (id)createSectionViewModelWith:(id)arg0;
- (void)setupContainerViewModel;
- (BOOL)isShowingSkeleton;
- (void)showSkeletonIfNeeded;
- (void)loadPlaceholderDataCompletion:(id /* block */)arg0;
- (void)loadMoreListDataWithReason:(unsigned long long)arg0 params:(id)arg1 args:(id)arg2 completion:(id /* block */)arg3;
- (void)replaceModels:(id)arg0 sync:(BOOL)arg1;
- (id)indexPathWithModel:(id)arg0;
- (void)setupDataManager;
- (void)replaceModels:(id)arg0 withoutFilter:(BOOL)arg1 sync:(BOOL)arg2;
- (id)setupDataControllerWithConfig:(id)arg0;
- (void)updateDataStateWithRequestType:(unsigned long long)arg0 response:(id)arg1 error:(id)arg2;
- (id)createSectionViewModelsWith:(id)arg0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })arg1;
- (void)updateFirstLoadCompleteStatusWithRefreshReason:(unsigned long long)arg0;
- (id)createSectionViewModelsWith:(id)arg0;
- (void)updateDataControllerWithDeleteModels:(id)arg0;
- (id)createSectionViewModelWith:(id)arg0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })arg1 index:(long long)arg2;
- (long long)indexWithIndexPath:(id)arg0;
- (long long)sectionModelCount;
- (id)dataManager;
- (void)setViewController:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)config;
- (void)setDataManager:(id)arg0;
- (id)context;
- (id)dataController;

@end
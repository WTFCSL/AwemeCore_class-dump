//
//     Generated by private class-dump
//

@class IESECWinTabListModel, IESECWinHybridContext, IESECInfinitelyRefreshFooter, IESECGradientView, IESECRelationInlineManager, NSString, IESECWinContext, IESECWinFeedStatusCell, UICollectionView, IESECListKitBFFViewController, IESECServiceProxy;
@protocol IESECWinMainScrollService, IESECWinGoodsService, IESECWinTabLayoutService, IESECWinTabService, IESECWinFeedLinkedService, IESECWinCategoryService, IESECWinComponentService, IESECWinLynxCardService, IESECWinLynxPreloadService, IESECWinCommonTrackService, IESECWinDataStatusService, IESECWinFeedService;

@interface IESECWinTabHybridViewController : UIViewController <IESECListKitBFFViewControllerDelegate, IESECListKitLynxCardLifeCycle, UIScrollViewDelegate, IESECWinTabViewControllerProtocol> {
    IESECWinContext *_context;
    unsigned long long _currentLayout;
    UICollectionView *_collectionView;
    unsigned long long _tabDataStatus;
    IESECListKitBFFViewController *_listVC;
    IESECWinTabListModel *_listModel;
    IESECWinHybridContext *_tabContext;
    id /* block */ _getSortRect;
    IESECInfinitelyRefreshFooter *_footer;
    IESECRelationInlineManager *_inlineManager;
    IESECWinFeedStatusCell *_statusCell;
    IESECGradientView *_gradientView;
    IESECServiceProxy<IESECWinTabService> *_tabService;
    IESECServiceProxy<IESECWinFeedService> *_feedService;
    IESECServiceProxy<IESECWinGoodsService> *_goodsService;
    IESECServiceProxy<IESECWinDataStatusService> *_statusService;
    IESECServiceProxy<IESECWinFeedLinkedService> *_linkedService;
    IESECServiceProxy<IESECWinMainScrollService> *_scrollService;
    IESECServiceProxy<IESECWinLynxCardService> *_lynxCardService;
    IESECServiceProxy<IESECWinCategoryService> *_categoryService;
    IESECServiceProxy<IESECWinComponentService> *_componentService;
    IESECServiceProxy<IESECWinTabLayoutService> *_tabLayoutService;
    IESECServiceProxy<IESECWinLynxPreloadService> *_preloadService;
    IESECServiceProxy<IESECWinDataStatusService> *_dataStatusService;
    IESECServiceProxy<IESECWinCommonTrackService> *_commonTrackService;
}

@property (retain, nonatomic) IESECWinTabListModel *listModel;
@property (retain, nonatomic) IESECInfinitelyRefreshFooter *footer;
@property (retain, nonatomic) IESECRelationInlineManager *inlineManager;
@property (retain, nonatomic) IESECWinFeedStatusCell *statusCell;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *statusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinComponentService> *componentService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxPreloadService> *preloadService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCommonTrackService> *commonTrackService;
@property (retain, nonatomic) IESECListKitBFFViewController *listVC;
@property (readonly, nonatomic) IESECWinHybridContext *tabContext;
@property (copy, nonatomic) id /* block */ getSortRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long tabDataStatus;

- (id)feedService;
- (void)setListModel:(id)arg0;
- (void)setTabDataStatus:(unsigned long long)arg0;
- (unsigned long long)tabDataStatus;
- (id)preloadService;
- (void)setPreloadService:(id)arg0;
- (id)listVC;
- (void)setListVC:(id)arg0;
- (id)tabContext;
- (void)lynxCard:(id)arg0 didUpdateDataWithLynxViewFromType:(unsigned long long)arg1 resource:(id)arg2 itemModel:(id)arg3 perfDict:(id)arg4;
- (id)listKitEnvIdentifier;
- (void)lynxCardModelDidCreate:(id)arg0 itemModel:(id)arg1 itemConfig:(id)arg2 index:(long long)arg3;
- (void)cellWillDisplay:(id)arg0 section:(long long)arg1 index:(long long)arg2 isFirstShow:(BOOL)arg3 lynxUrl:(id)arg4;
- (void)lynxCard:(id)arg0 setupPerf:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4;
- (void)lynxCard:(id)arg0 updatePerf:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4;
- (void)configTabLayout;
- (id)scrollService;
- (void)setScrollService:(id)arg0;
- (id)tabService;
- (void)setTabService:(id)arg0;
- (id)dataStatusService;
- (void)setDataStatusService:(id)arg0;
- (id)lynxCardService;
- (void)setLynxCardService:(id)arg0;
- (id)categoryService;
- (void)setCategoryService:(id)arg0;
- (id)commonTrackService;
- (id)componentService;
- (void)setComponentService:(id)arg0;
- (void)setCommonTrackService:(id)arg0;
- (id)inlineManager;
- (void)scrollDidEnd;
- (void)setInlineManager:(id)arg0;
- (void)initailData;
- (id)tabLayoutService;
- (void)setTabLayoutService:(id)arg0;
- (void)registerHybridList;
- (void)reloadViewController;
- (id)linkedService;
- (id)ecExtraGlobalProps:(id)arg0 index:(long long)arg1;
- (void)setLinkedService:(id)arg0;
- (void)setFeedService:(id)arg0;
- (id)goodsService;
- (void)setGoodsService:(id)arg0;
- (void)puzzleHybridPopControllerDismissedWithObject:(id)arg0;
- (id)statusService;
- (id)initWithContext:(id)arg0 tabList:(id)arg1;
- (void)setStatusService:(id)arg0;
- (void)setGetSortRect:(id /* block */)arg0;
- (void)tabVCWillShow;
- (void)tabVCDidShow;
- (void)updateTabLayout;
- (void)p_addTablistObserver;
- (void)loadFeedWithList:(id)arg0 withStatusFinish:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateWithListModel:(id)arg0;
- (void)updateWithTabList:(id)arg0;
- (void)setBackGroundGradientView;
- (void)tryToLoadMoreAfterFirstRender;
- (void)configFooterRefresh;
- (void)updateStatusCell;
- (id)statusCell;
- (id /* block */)getSortRect;
- (id)getStatusObject;
- (void)footerLoadMore;
- (void)setStatusCell:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (id)listModel;
- (void)setFooter:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setGradientView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)footer;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)gradientView;
- (void)viewDidLoad;
- (void)addObserver;
- (BOOL)footerVisible;
- (void)setUpViews;

@end

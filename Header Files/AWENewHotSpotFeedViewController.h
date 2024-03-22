//
//     Generated by private class-dump
//

@class AWENewHotSpotPageContext, NSString, AWENewHotSpotFeedDataController, NSDictionary, AWEUILoadingView, NSMutableArray, AWENewHotSpotFeedParamsModel, UIViewController, NSNumber;
@protocol AWENewHotSpotVideoFeedContainerProtocol;

@interface AWENewHotSpotFeedViewController : AWEHotSpotAutoPlayFeedViewController <AWENewHotSpotFeedVCProtocol> {
    BOOL _hasInitFetched;
    id /* block */ _changeTabBlock;
    id /* block */ _requestDataBlock;
    id /* block */ _dataInitFetchCompletionBlock;
    id /* block */ _cellStartShowingBlock;
    NSNumber *_hotInnerFeedVideoCount;
    AWENewHotSpotFeedDataController *_dataController;
    AWEUILoadingView *_loadingView;
    AWENewHotSpotPageContext *_context;
    AWENewHotSpotFeedParamsModel *_paramsModel;
    NSMutableArray *_hunterCacheKeyArray;
}

@property (retain, nonatomic) AWENewHotSpotFeedDataController *dataController;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWENewHotSpotPageContext *context;
@property (retain, nonatomic) AWENewHotSpotFeedParamsModel *paramsModel;
@property (nonatomic) BOOL hasInitFetched;
@property (retain, nonatomic) NSMutableArray *hunterCacheKeyArray;
@property (copy, nonatomic) id /* block */ changeTabBlock;
@property (copy, nonatomic) id /* block */ requestDataBlock;
@property (copy, nonatomic) id /* block */ dataInitFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ cellStartShowingBlock;
@property (retain, nonatomic) NSNumber *hotInnerFeedVideoCount;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) UIViewController<AWENewHotSpotVideoFeedContainerProtocol> *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setDataController:(id)arg0;
- (void)didDeleteAweme:(id)arg0;
- (void)handleConnectionChanged:(id)arg0;
- (long long)feedTabType;
- (void)commentLikeActionNotification:(id)arg0;
- (void)initialFetch;
- (id)jsonStringToDictionary:(id)arg0;
- (void)setHasInitFetched:(BOOL)arg0;
- (BOOL)hasInitFetched;
- (id)getScrollView;
- (id)paramsModel;
- (void)setParamsModel:(id)arg0;
- (void)commentDeleteNotification:(id)arg0;
- (void)setDataInitFetchCompletionBlock:(id /* block */)arg0;
- (void)insertPublishComment:(id)arg0;
- (void)dataControllerLoadMoreWithCompletionBlock:(id /* block */)arg0;
- (id /* block */)requestDataBlock;
- (void)locateHotSpotCommentIfNeeded;
- (id /* block */)dataInitFetchCompletionBlock;
- (void)configEndRefreshFooter;
- (id)updateCellModel:(id)arg0 containerWidth:(double)arg1;
- (void)setRequestDataBlock:(id /* block */)arg0;
- (void)cellControllerStartShowAtIndex:(long long)arg0;
- (BOOL)needReloadAutoPlayWithCellNewHeight:(double)arg0 originHeight:(double)arg1 withModel:(id)arg2;
- (long long)findIndexForAwemeInDataController:(id)arg0;
- (id)liveItemAtIndex:(long long)arg0;
- (id)hunterCacheKeyArray;
- (void)insertCardModelAtTop:(id)arg0;
- (id /* block */)cellStartShowingBlock;
- (id)awemeModelAtIndex:(long long)arg0;
- (void)setHotInnerFeedVideoCount:(id)arg0;
- (id /* block */)changeTabBlock;
- (void)setChangeTabBlock:(id /* block */)arg0;
- (id)hotInnerFeedVideoCount;
- (id)initWithContext:(id)arg0 paramsModel:(id)arg1;
- (void)insertPublishAweme:(id)arg0;
- (void)setCellStartShowingBlock:(id /* block */)arg0;
- (void)setHunterCacheKeyArray:(id)arg0;
- (void)configBlocks;
- (void)doCommonInit;
- (BOOL)shouldHideFooterAtSection:(long long)arg0;
- (id)cardModelAtIndex:(long long)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setContext:(id)arg0;
- (void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(long long)arg2;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)addObservers;
- (id)jsonStringWithObject:(id)arg0;

@end

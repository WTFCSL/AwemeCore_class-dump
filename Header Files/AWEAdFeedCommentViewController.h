//
//     Generated by private class-dump
//

@class AWEAwemeModel, AWEAdFeedCommentDataController, UIView, NSString, AWEAdFeedCommentEmptyPageView, AWEUILoadingView, UITableView, AWEAdCommentFilterView, UIViewController;
@protocol AWEAdCommentGuideView;

@interface AWEAdFeedCommentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEAdFeedCommentEmptyPageViewProtocol, AWEAdFeedCommentTableViewTopCellActionDelegate> {
    BOOL _isBGColorWhite;
    BOOL _showTopComment;
    BOOL _showBottomCard;
    BOOL _showFilter;
    UITableView *_tableView;
    UIViewController *_container;
    id /* block */ _fetchDataSucceed;
    NSString *_referString;
    unsigned long long _sceneType;
    AWEAwemeModel *_awemeModel;
    AWEAdFeedCommentDataController *_dataController;
    AWEAdFeedCommentEmptyPageView *_emptyContentView;
    UIView<AWEAdCommentGuideView> *_commentGuideView;
    AWEUILoadingView *_loadingView;
    AWEAdCommentFilterView *_filterView;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAdFeedCommentDataController *dataController;
@property (retain, nonatomic) AWEAdFeedCommentEmptyPageView *emptyContentView;
@property (retain, nonatomic) UIView<AWEAdCommentGuideView> *commentGuideView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEAdCommentFilterView *filterView;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UIViewController *container;
@property (copy, nonatomic) id /* block */ fetchDataSucceed;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL showTopComment;
@property (nonatomic) BOOL showBottomCard;
@property (nonatomic) BOOL showFilter;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (id)initWithAweme:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)setIsBGColorWhite:(BOOL)arg0;
- (BOOL)isBGColorWhite;
- (void)setShowTopComment:(BOOL)arg0;
- (void)setShowBottomCard:(BOOL)arg0;
- (void)setShowFilter:(BOOL)arg0;
- (void)updateTopSpacing:(double)arg0;
- (void)setFetchDataSucceed:(id /* block */)arg0;
- (void)initialFetch;
- (id)emptyContentView;
- (void)showNetworkError;
- (void)showEmptyPage;
- (void)showNormalPage;
- (id /* block */)fetchDataSucceed;
- (void)_endRefreshing;
- (void)showNetworkErrorWhileLoading;
- (void)updateEmptyViewWithNetworkError;
- (void)updateEmptyViewWithNetworkErrorWhileLoading;
- (void)updateEmptyViewWithNoResult;
- (void)fetchCommentDataWithCompletion:(id /* block */)arg0;
- (void)retryLoadData;
- (void)setEmptyContentView:(id)arg0;
- (BOOL)showTopComment;
- (void)cellAvatarOrNameDidClicked:(id)arg0 viewModel:(id)arg1 isAvatarClicked:(BOOL)arg2;
- (void)cellLongPressd:(id)arg0 viewModel:(id)arg1;
- (void)trackLandingCommentListShow;
- (BOOL)showFilter;
- (void)trackWithLabel:(id)arg0 refer:(id)arg1;
- (void)cellUpdateWithIndexPath:(id)arg0;
- (void)commentLikedStatusChangeWithComment:(id)arg0 indexPath:(id)arg1;
- (BOOL)showBottomCard;
- (id)tagNameWithSceneType;
- (id)commentGuideView;
- (void)setCommentGuideView:(id)arg0;
- (id)container;
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
- (id)filterView;
- (void)setContainer:(id)arg0;
- (void)setFilterView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;

@end

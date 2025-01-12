//
//     Generated by private class-dump
//

@class UIView, AWEDiscoverDPlayletCollectionButton, AWEPaymentDetailBuyButton, AWEDiscoverDPlayletDetailListDataController, NSString, AWEDiscoverDPlayletDetailHeaderView, AWEUILoadingView, UITableView, AWEPlayletInfoModel, UILabel, NSIndexPath;
@protocol AWEPlayletDetailListViewDelegate;

@interface AWEDiscoverDPlayletDetailListView : UIView <UITableViewDataSource, UITableViewDelegate, AWEPlayletDetailHeaderViewDelegate, AWEDiscoverDPlayletNetworkServiceDelegate, AWEPlayletPaymentMessage> {
    BOOL _fromPersonPage;
    BOOL _shouldReportMonitor;
    BOOL _showHeadContentView;
    BOOL _bottomAnimate;
    id<AWEPlayletDetailListViewDelegate> _delegate;
    UITableView *_tableView;
    AWEDiscoverDPlayletDetailHeaderView *_headContentView;
    double _topOffset;
    double _navBarHeight;
    NSString *_previousPage;
    NSString *_fromGroupID;
    NSString *_enterSource;
    AWEDiscoverDPlayletDetailListDataController *_dataController;
    AWEPlayletInfoModel *_playletModel;
    UILabel *_noContentTipLabel;
    AWEUILoadingView *_loadingView;
    UIView *_bottomCollectView;
    AWEDiscoverDPlayletCollectionButton *_bottomButton;
    double _originalScrollViewOffset;
    double _headerOriginHeight;
    double _currentOffset;
    NSIndexPath *_selectIndexPath;
    AWEPaymentDetailBuyButton *_paymentButton;
}

@property (retain, nonatomic) AWEDiscoverDPlayletDetailListDataController *dataController;
@property (retain, nonatomic) AWEPlayletInfoModel *playletModel;
@property (retain, nonatomic) UILabel *noContentTipLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL showHeadContentView;
@property (retain, nonatomic) UIView *bottomCollectView;
@property (retain, nonatomic) AWEDiscoverDPlayletCollectionButton *bottomButton;
@property (nonatomic) BOOL bottomAnimate;
@property (nonatomic) double originalScrollViewOffset;
@property (nonatomic) double headerOriginHeight;
@property (nonatomic) double currentOffset;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (retain, nonatomic) AWEPaymentDetailBuyButton *paymentButton;
@property (weak, nonatomic) id<AWEPlayletDetailListViewDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEDiscoverDPlayletDetailHeaderView *headContentView;
@property (nonatomic) double topOffset;
@property (nonatomic) double navBarHeight;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) BOOL fromPersonPage;
@property (copy, nonatomic) NSString *enterSource;
@property (nonatomic) BOOL shouldReportMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterSource:(id)arg0;
- (id)enterSource;
- (void)setDataController:(id)arg0;
- (void)configureUI;
- (id)fromGroupID;
- (void)loadMore;
- (void)setFromGroupID:(id)arg0;
- (void)addLoadMoreIfNeeded;
- (void)setOriginalScrollViewOffset:(double)arg0;
- (double)originalScrollViewOffset;
- (id)playletModel;
- (id)paymentButton;
- (void)setPlayletModel:(id)arg0;
- (BOOL)shouldShowPaymentButton;
- (void)setPaymentButton:(id)arg0;
- (void)playletDetailHeadView:(id)arg0 collectTaped:(id)arg1;
- (BOOL)fromPersonPage;
- (void)playletDetailHeadView:(id)arg0 continuePlayTaped:(id)arg1;
- (void)playletDetailHeadView:(id)arg0 changedHeight:(double)arg1;
- (void)updatePlayletID:(id)arg0 lastEpisode:(id)arg1;
- (void)updatePlayletInfo:(id)arg0;
- (void)dismissHintBubble;
- (void)setFromPersonPage:(BOOL)arg0;
- (void)updatePlayletPaymentInfoWithModels:(id)arg0;
- (id)headContentView;
- (id)noContentTipLabel;
- (id)bottomCollectView;
- (void)setBottomAnimate:(BOOL)arg0;
- (void)setHeaderOriginHeight:(double)arg0;
- (void)updatePaymentButtonIfNeeded;
- (double)headerOriginHeight;
- (void)setShowHeadContentView:(BOOL)arg0;
- (double)navBarHeight;
- (BOOL)bottomAnimate;
- (void)setSelectIndexPath:(id)arg0;
- (void)hideHeaderView:(BOOL)arg0;
- (BOOL)shouldReportMonitor;
- (void)setShouldReportMonitor:(BOOL)arg0;
- (void)scrollToEpisode:(id)arg0;
- (BOOL)showHeadContentView;
- (id)selectIndexPath;
- (void)showBottomCollection;
- (void)hideBottomCollection;
- (void)orderMix:(id)arg0;
- (void)setHintBubbleParams:(id)arg0;
- (id)videoAtIndex:(long long)arg0;
- (id)getScrollView;
- (void)setHeadContentView:(id)arg0;
- (void)setNavBarHeight:(double)arg0;
- (void)setNoContentTipLabel:(id)arg0;
- (void)setBottomCollectView:(id)arg0;
- (double)topOffset;
- (void)setTopOffset:(double)arg0;
- (double)currentOffset;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)clearData;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (long long)numberOfVideos;
- (void)setCurrentOffset:(double)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (id)bottomButton;
- (void)setBottomButton:(id)arg0;

@end

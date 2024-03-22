//
//     Generated by private class-dump
//

@class UICollectionView, NSDate, IESLiveFeedDrawerViewControllerContext, UILabel, IGListAdapter, MJRefreshHeader, IESLiveVSFeedChainDataSource, IESLiveFeedLoadMoreFooter, IESLiveErrorPlaceholderView, NSString, IESLiveWebpLoadingView, IESLiveEmptyView, UIImageView;

@interface IESLiveVSFeedChainViewController : UIViewController <IESLiveVSFeedChainDataSourceDelegate, IESLiveDrawerFeedContainerProtocol> {
    BOOL _disableRefresh;
    IESLiveFeedDrawerViewControllerContext *_context;
    IESLiveVSFeedChainDataSource *_dataSource;
    IGListAdapter *_adapter;
    unsigned long long _requestStatus;
    UIImageView *_backgroundView;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    MJRefreshHeader *_refreshHeader;
    IESLiveFeedLoadMoreFooter *_loadMoreFooter;
    IESLiveEmptyView *_errorView;
    IESLiveWebpLoadingView *_loadingView;
    IESLiveErrorPlaceholderView *_emptyView;
    NSDate *_feedDrawerEntranceClickTime;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) IESLiveVSFeedChainDataSource *dataSource;
@property (nonatomic) unsigned long long requestStatus;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MJRefreshHeader *refreshHeader;
@property (retain, nonatomic) IESLiveFeedLoadMoreFooter *loadMoreFooter;
@property (retain, nonatomic) IESLiveEmptyView *errorView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveErrorPlaceholderView *emptyView;
@property (retain, nonatomic) NSDate *feedDrawerEntranceClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;

- (void)setRefreshHeader:(id)arg0;
- (void)loadMoreData;
- (id)refreshHeader;
- (id)loadMoreFooter;
- (void)setLoadMoreFooter:(id)arg0;
- (void)trackAppear;
- (BOOL)canHideWithGesture;
- (BOOL)disableRefresh;
- (void)setDisableRefresh:(BOOL)arg0;
- (void)refreshConstrains;
- (void)updateEntranceClickTime:(id)arg0;
- (void)setFeedDrawerEntranceClickTime:(id)arg0;
- (id)feedDrawerEntranceClickTime;
- (void)dataSource:(id)arg0 status:(unsigned long long)arg1 hasMore:(BOOL)arg2;
- (id)emptyViewForDataSource:(id)arg0;
- (void)updateFeedDrawerViewControllerUI;
- (void)showOrHideTitleLabel:(BOOL)arg0;
- (void)srollToUP;
- (double)ipadForLabel;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setContext:(id)arg0;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)context;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (id)adapter;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setupSubviews;
- (void)setupAccessibility;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setAdapter:(id)arg0;
- (void)setRequestStatus:(unsigned long long)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (unsigned long long)requestStatus;
- (void)refreshData;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)reloadWithCompletion:(id /* block */)arg0;

@end
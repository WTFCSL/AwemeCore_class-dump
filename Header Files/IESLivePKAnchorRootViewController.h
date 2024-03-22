//
//     Generated by private class-dump
//

@class UIView, UIScrollView, IESLivePKPanelNoticeView, IESLivePKNormalPanelView, UICollectionViewFlowLayout, IESLivePKAnchorRootViewModel, NSIndexPath, NSString, UICollectionView, NSNumber, IESLivePKFlexActivityPanelView;
@protocol IESLiveScrollRefreshServiceAdapter, IESLivePerfSampler;

@interface IESLivePKAnchorRootViewController : IESLiveRevenueInteractPopupViewController <IESLivePKCustomPanelViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isScrolling;
    BOOL _viewDidLoaded;
    BOOL _hasRefreshed;
    BOOL _needTrackContentShow;
    BOOL _hasSwitched;
    BOOL _tabSelected;
    BOOL _tabInited;
    BOOL _delayTrackContentShow;
    BOOL _isPullDown;
    double _contentShowTimeStamp;
    NSNumber *_previousFlexActivityID;
    UIView *_expandNavBar;
    UIView *_emptyView;
    IESLivePKPanelNoticeView *_noticeView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_horizontalLayout;
    IESLivePKNormalPanelView *_normalPKPanelView;
    IESLivePKFlexActivityPanelView *_flexActivityPanelView;
    UIScrollView *_scrollView;
    id<IESLiveScrollRefreshServiceAdapter> _scrollRefresh;
    id<IESLivePerfSampler> _perfSampler;
    double _appearTime;
    IESLivePKAnchorRootViewModel *_viewModel;
    NSIndexPath *_normalPKIndexPath;
    double _tabAppearTimestamp;
    long long _showTime;
    long long _refreshTimes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
}

@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL viewDidLoaded;
@property (nonatomic) BOOL hasRefreshed;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) double contentShowTimeStamp;
@property (retain, nonatomic) NSNumber *previousFlexActivityID;
@property (retain, nonatomic) UIView *expandNavBar;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) IESLivePKPanelNoticeView *noticeView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *horizontalLayout;
@property (retain, nonatomic) IESLivePKNormalPanelView *normalPKPanelView;
@property (retain, nonatomic) IESLivePKFlexActivityPanelView *flexActivityPanelView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) id<IESLiveScrollRefreshServiceAdapter> scrollRefresh;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (weak, nonatomic) IESLivePKAnchorRootViewModel *viewModel;
@property (retain, nonatomic) NSIndexPath *normalPKIndexPath;
@property (nonatomic) BOOL needTrackContentShow;
@property (nonatomic) double tabAppearTimestamp;
@property (nonatomic) long long showTime;
@property (nonatomic) BOOL hasSwitched;
@property (nonatomic) long long refreshTimes;
@property (nonatomic) BOOL tabSelected;
@property (nonatomic) BOOL tabInited;
@property (nonatomic) BOOL delayTrackContentShow;
@property (nonatomic) BOOL isPullDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasRefreshed;
- (void)setHasRefreshed:(BOOL)arg0;
- (long long)useNewStyle;
- (long long)showTime;
- (void)setShowTime:(long long)arg0;
- (void)setViewDidLoaded:(BOOL)arg0;
- (BOOL)viewDidLoaded;
- (BOOL)hasSwitched;
- (void)setHasSwitched:(BOOL)arg0;
- (double)appearTime;
- (void)setAppearTime:(double)arg0;
- (id)noticeView;
- (void)setNoticeView:(id)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)contentViewDidSelected:(BOOL)arg0 type:(long long)arg1;
- (void)setupContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTabSelected:(BOOL)arg0;
- (long long)refreshTimes;
- (void)setRefreshTimes:(long long)arg0;
- (void)refreshPanel;
- (void)onSetupNavBar:(id)arg0;
- (id)expandNavBar;
- (void)trackInvitePanelClose;
- (void)setTabAppearTimestamp:(double)arg0;
- (void)setTabInited:(BOOL)arg0;
- (BOOL)tabInited;
- (BOOL)tabSelected;
- (double)tabAppearTimestamp;
- (void)updateViewsIfNeeded;
- (void)trackInviteBannerRefresh;
- (void)setupData:(id)arg0 loadType:(long long)arg1;
- (id)pkExpandNavBar:(id)arg0;
- (BOOL)couldRefreshPanel;
- (void)renderPKState:(long long)arg0;
- (void)setIsPullDown:(BOOL)arg0;
- (id)scrollRefresh;
- (void)regenerateExpandNavBar;
- (void)showTabCollectionViewIfNeeded;
- (void)switchPanelView;
- (void)updateNoticeViewIfNeeded;
- (BOOL)needTrackContentShow;
- (void)setNeedTrackContentShow:(BOOL)arg0;
- (void)trackContentShow:(BOOL)arg0;
- (BOOL)isPullDown;
- (void)refreshPanelThroughNetworkRequest;
- (void)refreshPanelWithCacheData:(id)arg0;
- (void)updateLayoutWithViewModel:(BOOL)arg0;
- (void)rollBackToPreviousTabIfNeeded;
- (void)setupViewsWithCacheData;
- (void)setupEmptyView;
- (BOOL)needShowTopTipsView;
- (void)setPreviousFlexActivityID:(id)arg0;
- (id)previousFlexActivityID;
- (id)normalPKIndexPath;
- (void)showNormalPKPanelView;
- (void)showFlexActivityPanelView;
- (void)cleanPanelView;
- (void)setFlexActivityPanelView:(id)arg0;
- (id)flexActivityPanelView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setupNormalPanelViewFrame;
- (void)setNormalPKPanelView:(id)arg0;
- (id)normalPKPanelView;
- (void)setNormalPKIndexPath:(id)arg0;
- (void)onClickedTabCellEventWithItem:(id)arg0 indexPath:(id)arg1;
- (void)setExpandNavBar:(id)arg0;
- (void)setDelayTrackContentShow:(BOOL)arg0;
- (void)setContentShowTimeStamp:(double)arg0;
- (double)contentShowTimeStamp;
- (BOOL)delayTrackContentShow;
- (void)setupLoadingProcess;
- (void)showPKSettingVC;
- (id)buildSearchCombineEntrance;
- (void)didClickSearchEntrance;
- (void)didClickHistoryEntrance;
- (void)showPKSearchVC;
- (void)showPKRecordVC;
- (void)showSelectTimeNoticePanel;
- (BOOL)shouldShowTopTipNotice;
- (void)showTopTipNoticePanel;
- (void)dismissNoticePanel;
- (void)panelView:(id)arg0 registerFlexActivityWithID:(unsigned long long)arg1;
- (void)setScrollRefresh:(id)arg0;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIsScrolling:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)setScrollView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)setHorizontalLayout:(id)arg0;
- (BOOL)isScrolling;
- (void)setCollectionView:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)horizontalLayout;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (id)scrollView;
- (void)setupCollectionView;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)clean;
- (void)layoutUI;

@end

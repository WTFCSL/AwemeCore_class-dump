//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWETeenAuthorInfoHeaderView, AWETeenMoreSheetView, UIButton, AWETeenDurationHelper, AWETeenAuthorBlockFooterView, UICollectionView, AWEFeedRefreshFooter, AWEUILoadingView, AWETeenAuthorHomeDataManager;

@interface AWETeenAuthorHomeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenSubscribeMessage, AWETeenBlockMessage, AWEZoomTransitionOuterContextProvider, AWEUserMessage, AWEPadUITrackerProtocol, AWETeenLongPressPanelBlockDelegate> {
    BOOL _isViewAppearing;
    BOOL _isFirstAppearing;
    BOOL _isFirstLoadWorkFinish;
    BOOL _isPush;
    BOOL _isRefreshing;
    NSString *_currentItemId;
    NSDictionary *_logPassback;
    id /* block */ _dismissBlock;
    UIButton *_navSubscribeButton;
    UICollectionView *_collectionView;
    AWETeenAuthorInfoHeaderView *_headerView;
    AWETeenAuthorBlockFooterView *_footerView;
    AWEFeedRefreshFooter *_refreshFooter;
    AWETeenAuthorHomeDataManager *_dataMgr;
    AWETeenAuthorHomeDataManager *_dataMgrBackUp;
    AWETeenDurationHelper *_durationHelper;
    AWEUILoadingView *_loadingView;
    NSDictionary *_extra;
    long long _entranceIndex;
    AWETeenMoreSheetView *_alertView;
    struct CGSize { double width; double height; } _transitionToSize;
}

@property (retain, nonatomic) UIButton *navSubscribeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWETeenAuthorInfoHeaderView *headerView;
@property (retain, nonatomic) AWETeenAuthorBlockFooterView *footerView;
@property (retain, nonatomic) AWEFeedRefreshFooter *refreshFooter;
@property (retain, nonatomic) AWETeenAuthorHomeDataManager *dataMgr;
@property (retain, nonatomic) AWETeenAuthorHomeDataManager *dataMgrBackUp;
@property (retain, nonatomic) AWETeenDurationHelper *durationHelper;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long entranceIndex;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL isFirstAppearing;
@property (nonatomic) BOOL isFirstLoadWorkFinish;
@property (nonatomic) BOOL isPush;
@property (nonatomic) struct CGSize { double width; double height; } transitionToSize;
@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) AWETeenMoreSheetView *alertView;
@property (copy, nonatomic) NSString *currentItemId;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;

- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (void)didFinishLogin;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setExtra:(id)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setIsViewAppearing:(BOOL)arg0;
- (void)setCurrentItemId:(id)arg0;
- (void)p_setupUI;
- (id)awe_padUITrackerPageEnterFrom;
- (void)p_endRefreshing;
- (void)p_setupNaviBar;
- (id)currentItemId;
- (id)refreshFooter;
- (void)setRefreshFooter:(id)arg0;
- (void)setEntranceIndex:(long long)arg0;
- (long long)entranceIndex;
- (void)p_loadData;
- (id)initWithUserModel:(id)arg0 extra:(id)arg1;
- (id)dataMgr;
- (void)setIsFirstAppearing:(BOOL)arg0;
- (void)didUpdateSubscribeStatus:(long long)arg0 secUserID:(id)arg1;
- (void)didUpdateBlockStatus:(long long)arg0 secUserID:(id)arg1;
- (id)durationHelper;
- (void)p_trackEnterIfNeeded;
- (void)setTransitionToSize:(struct CGSize { double x0; double x1; })arg0;
- (id)navSubscribeButton;
- (void)p_updateNavSubscribeStatus:(long long)arg0;
- (void)p_updateAlpha:(double)arg0;
- (void)p_loadMoreWorkData;
- (void)p_loadProfileData;
- (void)p_refreshWorkData:(BOOL)arg0;
- (BOOL)isFirstLoadWorkFinish;
- (BOOL)isFirstAppearing;
- (void)setIsFirstLoadWorkFinish:(BOOL)arg0;
- (void)subscribeAction:(id)arg0;
- (void)setDataMgrBackUp:(id)arg0;
- (id)dataMgrBackUp;
- (struct CGSize { double x0; double x1; })transitionToSize;
- (void)setDataMgr:(id)arg0;
- (void)p_updateSubscribeStatus:(long long)arg0;
- (void)p_updateBlockStatus:(long long)arg0;
- (void)p_reConfirmBlock;
- (void)p_subscribe:(BOOL)arg0;
- (id)getTitleAction:(id)arg0;
- (void)p_reComfirmUnsubscribe:(BOOL)arg0;
- (void)p_teenProfileMoreShowTracker;
- (void)p_teenBlockTracker;
- (void)p_block;
- (void)p_teenBlockFinishTracker;
- (void)p_teenReConfirmTracker:(BOOL)arg0;
- (void)reConfirmBlock;
- (id)initWithSecUserID:(id)arg0 extra:(id)arg1;
- (void)setNavSubscribeButton:(id)arg0;
- (void)setDurationHelper:(id)arg0;
- (BOOL)isPush;
- (void)setIsPush:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)footerView;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setAlertView:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (id)extra;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)headerView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)alertView;
- (void)appWillResignActive:(id)arg0;
- (BOOL)isRefreshing;
- (void)backAction;
- (void)moreAction;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)isViewAppearing;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)setIsRefreshing:(BOOL)arg0;

@end

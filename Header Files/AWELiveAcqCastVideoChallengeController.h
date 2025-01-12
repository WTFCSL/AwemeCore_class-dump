//
//     Generated by private class-dump
//

@class AWELiveAcqCastVideoChallengeDataManager, UICollectionView, AWEFeedRefreshFooter, AWEUILoadingView, UICollectionViewFlowLayout, NSString;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoChallengeController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _initialLoadMoreEnabled;
    BOOL _selecting;
    id<AWELiveAcqCastVideoViewModelProtocol> _viewModel;
    UICollectionView *_collectionView;
    AWELiveAcqCastVideoChallengeDataManager *_dataManager;
    AWEUILoadingView *_loadingView;
    AWEFeedRefreshFooter *_footer;
    UICollectionViewFlowLayout *_layout;
    struct CGPoint { double x; double y; } _savedContentOffset;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (retain, nonatomic) AWELiveAcqCastVideoChallengeDataManager *dataManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) BOOL selecting;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)_refreshData;
- (void)_loadMoreData;
- (BOOL)initialLoadMoreEnabled;
- (void)setInitialLoadMoreEnabled:(BOOL)arg0;
- (void)setSavedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })savedContentOffset;
- (void)p_endRefreshingWithMore:(BOOL)arg0 list:(id)arg1 error:(id)arg2;
- (id)aAWEPadRTVAdapter;
- (void)p_updateViewControllerState:(unsigned long long)arg0;
- (id)dataManager;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)setFooter:(id)arg0;
- (void)setLayout:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithViewModel:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (void)setViewModel:(id)arg0;
- (void)setDataManager:(id)arg0;
- (id)footer;
- (id)viewModel;
- (id)layout;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setSelecting:(BOOL)arg0;
- (BOOL)selecting;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (double)footerInset;
- (void)_setupUI;

@end

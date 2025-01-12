//
//     Generated by private class-dump
//

@class AWELiveAcqCastVideoPostDataManager, AWELiveAcqCastVideoMixDataManager, UICollectionView, NSString, UICollectionViewFlowLayout, AWEUILoadingView, NSError;
@protocol AWEUserProfileTabVCDelegate, AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoPostController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isPlayletUser;
    BOOL _firstLoaded;
    BOOL _initialLoadMoreEnabled;
    BOOL _selecting;
    UICollectionView *_collectionView;
    id<AWEUserProfileTabVCDelegate> _delegate;
    AWELiveAcqCastVideoPostDataManager *_dataManager;
    id<AWELiveAcqCastVideoViewModelProtocol> _viewModel;
    AWEUILoadingView *_loadingView;
    UICollectionViewFlowLayout *_layout;
    NSError *_refreshError;
    AWELiveAcqCastVideoMixDataManager *_mixDataManager;
}

@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSError *refreshError;
@property (nonatomic) BOOL selecting;
@property (retain, nonatomic) AWELiveAcqCastVideoMixDataManager *mixDataManager;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (retain, nonatomic) AWELiveAcqCastVideoPostDataManager *dataManager;
@property (nonatomic) BOOL isPlayletUser;
@property (nonatomic) BOOL firstLoaded;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)_loadMoreData;
- (BOOL)isPlayletUser;
- (void)_refreshDataWithCompletion:(id /* block */)arg0;
- (BOOL)initialLoadMoreEnabled;
- (void)setInitialLoadMoreEnabled:(BOOL)arg0;
- (void)p_endRefreshingWithMore:(BOOL)arg0 list:(id)arg1 error:(id)arg2;
- (id)aAWEPadRTVAdapter;
- (void)initDataWithCompletion:(id /* block */)arg0;
- (id)mixDataManager;
- (BOOL)firstLoaded;
- (id)sectionsArray;
- (unsigned long long)sectionTypeForIndex:(unsigned long long)arg0;
- (unsigned long long)indexForSectionType:(unsigned long long)arg0;
- (id)getConfigedCellIndexPath:(id)arg0;
- (void)refreshMixData;
- (void)setFirstLoaded:(BOOL)arg0;
- (void)startLoadMoreAction:(BOOL)arg0;
- (void)setRefreshError:(id)arg0;
- (void)setIsPlayletUser:(BOOL)arg0;
- (id)refreshError;
- (void)setMixDataManager:(id)arg0;
- (id)dataManager;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg0;
- (void)setLayout:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithViewModel:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (void)setViewModel:(id)arg0;
- (void)setDataManager:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (id)layout;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setSelecting:(BOOL)arg0;
- (BOOL)selecting;
- (BOOL)isCurrentUser;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (double)footerInset;
- (void)_setupUI;

@end

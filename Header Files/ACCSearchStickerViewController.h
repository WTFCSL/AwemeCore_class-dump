//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, NSMutableDictionary, UIButton, IESInfoStickerResponseModel, ACCSearchBar, UICollectionView;
@protocol ACCLoadingViewProtocol, ACCSearchStickerVCDelegate;

@interface ACCSearchStickerViewController : ACCStickerPannelAnimationVC <UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate> {
    BOOL _useAutoSearch;
    BOOL _canAutoSearch;
    BOOL _isLoadingData;
    id<ACCSearchStickerVCDelegate> _delegate;
    NSString *_uploadFramesURI;
    NSString *_creationId;
    NSString *_enterStatus;
    NSArray *_filterTags;
    unsigned long long _numberOfRows;
    double _itemGap;
    ACCSearchBar *_searchBar;
    UIButton *_dismissBtn;
    UIButton *_searchBtn;
    UICollectionView *_collectionView;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    IESInfoStickerResponseModel *_recommendModel;
    IESInfoStickerResponseModel *_searchModel;
    NSArray *_recommendList;
    NSArray *_searchList;
    NSString *_searchedKeyword;
    NSMutableDictionary *_downloadingDict;
    struct CGSize { double width; double height; } _itemSize;
}

@property (retain, nonatomic) ACCSearchBar *searchBar;
@property (retain, nonatomic) UIButton *dismissBtn;
@property (retain, nonatomic) UIButton *searchBtn;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) IESInfoStickerResponseModel *recommendModel;
@property (retain, nonatomic) IESInfoStickerResponseModel *searchModel;
@property (copy, nonatomic) NSArray *recommendList;
@property (copy, nonatomic) NSArray *searchList;
@property (nonatomic) BOOL canAutoSearch;
@property (nonatomic) BOOL isLoadingData;
@property (copy, nonatomic) NSString *searchedKeyword;
@property (retain, nonatomic) NSMutableDictionary *downloadingDict;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (weak, nonatomic) id<ACCSearchStickerVCDelegate> delegate;
@property (copy, nonatomic) NSString *uploadFramesURI;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *enterStatus;
@property (nonatomic) BOOL useAutoSearch;
@property (copy, nonatomic) NSArray *filterTags;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) double itemGap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)creationId;
- (void)setCreationId:(id)arg0;
- (void)setItemGap:(double)arg0;
- (double)itemGap;
- (id)recommendList;
- (void)setRecommendList:(id)arg0;
- (id)searchBtn;
- (void)setSearchBtn:(id)arg0;
- (void)setRecommendModel:(id)arg0;
- (id)recommendModel;
- (void)p_dismiss;
- (void)setEnterStatus:(id)arg0;
- (id)downloadingDict;
- (void)setDownloadingDict:(id)arg0;
- (void)setUploadFramesURI:(id)arg0;
- (void)setUseAutoSearch:(BOOL)arg0;
- (id)filterTags;
- (void)setFilterTags:(id)arg0;
- (void)setDismissBtn:(id)arg0;
- (void)fetchRecommendData:(BOOL)arg0;
- (void)fetchSearchData:(id)arg0 loadMore:(BOOL)arg1;
- (void)setCanAutoSearch:(BOOL)arg0;
- (void)p_configLoading:(BOOL)arg0;
- (id)uploadFramesURI;
- (id)p_filterStickerList:(id)arg0;
- (void)p_reloadData:(BOOL)arg0;
- (id)searchedKeyword;
- (BOOL)useAutoSearch;
- (id)dismissBtn;
- (void)p_refetchData;
- (id)p_stickerTrackParams:(id)arg0 index:(long long)arg1;
- (void)p_searchTextBecomeEmpty;
- (void)p_autoSearch;
- (void)p_manullySearch;
- (void)setSearchedKeyword:(id)arg0;
- (BOOL)canAutoSearch;
- (BOOL)p_shouldFilter:(id)arg0 tags:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)searchBar;
- (void)searchBarTextDidBeginEditing:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setSearchBar:(id)arg0;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setNumberOfRows:(unsigned long long)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)models;
- (id)delegate;
- (unsigned long long)numberOfRows;
- (void)setDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)viewDidLoad;
- (void)searchBarSearchButtonClicked:(id)arg0;
- (id)searchList;
- (void)setSearchList:(id)arg0;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (id)searchModel;
- (void)setSearchModel:(id)arg0;
- (id)enterStatus;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)isLoadingData;
- (void)setIsLoadingData:(BOOL)arg0;

@end
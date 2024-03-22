//
//     Generated by private class-dump
//

@class NSString, AWETeenSearchHistoryFooterView, AWETeenSearchHistoryViewModel;
@protocol AWETeenSearchVideoProtocol;

@interface AWETeenSearchHistoryViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    BOOL _needReportTrack;
    long long _displayModel;
    id<AWETeenSearchVideoProtocol> _delegate;
    id /* block */ _bottomLineChangeBlock;
    AWETeenSearchHistoryViewModel *_viewModel;
    AWETeenSearchHistoryFooterView *_footerView;
    long long _lastSearchTrackReportIndex;
    struct CGSize { double width; double height; } _rotationToSize;
}

@property (retain, nonatomic) AWETeenSearchHistoryViewModel *viewModel;
@property (nonatomic) long long displayModel;
@property (retain, nonatomic) AWETeenSearchHistoryFooterView *footerView;
@property (nonatomic) long long lastSearchTrackReportIndex;
@property (nonatomic) BOOL needReportTrack;
@property (nonatomic) struct CGSize { double width; double height; } rotationToSize;
@property (weak, nonatomic) id<AWETeenSearchVideoProtocol> delegate;
@property (copy, nonatomic) id /* block */ bottomLineChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (long long)displayModel;
- (void)setDisplayModel:(long long)arg0;
- (void)p_setupBinding;
- (void)searchWithKeyword:(id)arg0;
- (void)p_reloadCollectionView;
- (void)setRotationToSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })rotationToSize;
- (void)reloadCollectionViewForRotateToSize:(struct CGSize { double x0; double x1; })arg0;
- (void)p_footerButtonAction;
- (void)setNeedReportTrack:(BOOL)arg0;
- (void)setLastSearchTrackReportIndex:(long long)arg0;
- (id /* block */)bottomLineChangeBlock;
- (long long)lastSearchTrackReportIndex;
- (BOOL)needReportTrack;
- (void)trackAllSearchHistoryShow;
- (BOOL)shouldShowSearchHistory;
- (void)setBottomLineChangeBlock:(id /* block */)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)footerView;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setViewModel:(id)arg0;
- (id)initWithCollectionViewLayout:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;

@end
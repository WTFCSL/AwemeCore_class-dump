//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, UIView, UIScrollView, BDXPagerSmoothCollectionView;
@protocol BDXPagerSmoothViewDataSource, BDXPagerSmoothViewDelegate;

@interface BDXPagerSmoothView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _syncListContentOffsetEnabled;
    NSMutableDictionary *_listDict;
    BDXPagerSmoothCollectionView *_listCollectionView;
    long long _defaultSelectedIndex;
    id<BDXPagerSmoothViewDelegate> _delegate;
    id<BDXPagerSmoothViewDataSource> _dataSource;
    NSMutableDictionary *_listHeaderDict;
    UIView *_pagerHeaderContainerView;
    double _currentPagerHeaderContainerViewY;
    long long _currentIndex;
    UIScrollView *_currentListScrollView;
    double _heightForPagerHeader;
    double _heightForPinHeader;
    double _heightForPagerHeaderContainerView;
    double _currentListInitializeContentOffsetY;
    UIScrollView *_singleScrollView;
}

@property (weak, nonatomic) id<BDXPagerSmoothViewDataSource> dataSource;
@property (retain, nonatomic) BDXPagerSmoothCollectionView *listCollectionView;
@property (retain, nonatomic) NSMutableDictionary *listDict;
@property (retain, nonatomic) NSMutableDictionary *listHeaderDict;
@property (nonatomic, getter=isSyncListContentOffsetEnabled) BOOL syncListContentOffsetEnabled;
@property (retain, nonatomic) UIView *pagerHeaderContainerView;
@property (nonatomic) double currentPagerHeaderContainerViewY;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIScrollView *currentListScrollView;
@property (nonatomic) double heightForPagerHeader;
@property (nonatomic) double heightForPinHeader;
@property (nonatomic) double heightForPagerHeaderContainerView;
@property (nonatomic) double currentListInitializeContentOffsetY;
@property (retain, nonatomic) UIScrollView *singleScrollView;
@property (nonatomic) long long defaultSelectedIndex;
@property (weak, nonatomic) id<BDXPagerSmoothViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDefaultSelectedIndex:(long long)arg0;
- (id)listCollectionView;
- (void)setListCollectionView:(id)arg0;
- (void)listDidScroll:(id)arg0;
- (void)listDidAppear:(long long)arg0;
- (void)listDidDisappear:(long long)arg0;
- (id)pagerHeaderContainerView;
- (void)setPagerHeaderContainerView:(id)arg0;
- (id)listDict;
- (id)singleScrollView;
- (void)setCurrentListScrollView:(id)arg0;
- (void)setCurrentPagerHeaderContainerViewY:(double)arg0;
- (void)setSyncListContentOffsetEnabled:(BOOL)arg0;
- (id)listHeaderDict;
- (void)setHeightForPagerHeader:(double)arg0;
- (void)setHeightForPinHeader:(double)arg0;
- (double)heightForPagerHeader;
- (double)heightForPinHeader;
- (void)setHeightForPagerHeaderContainerView:(double)arg0;
- (double)heightForPagerHeaderContainerView;
- (void)setSingleScrollView:(id)arg0;
- (double)currentPagerHeaderContainerViewY;
- (void)setCurrentListInitializeContentOffsetY:(double)arg0;
- (double)currentListInitializeContentOffsetY;
- (void)horizontalScrollDidEndAtIndex:(long long)arg0;
- (long long)listIndexForListScrollView:(id)arg0;
- (id)currentListScrollView;
- (id)listHeaderForListScrollView:(id)arg0;
- (BOOL)isSyncListContentOffsetEnabled;
- (void)setListDict:(id)arg0;
- (void)setListHeaderDict:(id)arg0;
- (id)initWithDataSource:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)reloadData;
- (void)setCurrentIndex:(long long)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (long long)defaultSelectedIndex;
- (void)initializeViews;

@end
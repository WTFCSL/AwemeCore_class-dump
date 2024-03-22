//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, NSTimer, ACCImageAlbumEditPageProgressView, UIView, AWEStudioExcludeSelfView;
@protocol ACCImageAlbumEditPlayerViewDelegate, ACCImageAlbumEditPlayerViewDataSource;

@interface ACCImageAlbumEditPlayerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _needShowProgressView;
    BOOL _progressViewAnimationEnable;
    BOOL _disableTransitionAnimation;
    BOOL _scrollEnable;
    BOOL _enableAutoPlay;
    BOOL _isScrollByDragFlag;
    BOOL _isScrollToNextAnimating;
    BOOL _ignoreScrollToNextWhenAnimateFinishOnceFlag;
    long long _currentIndex;
    id<ACCImageAlbumEditPlayerViewDataSource> _dataSource;
    id<ACCImageAlbumEditPlayerViewDelegate> _delegate;
    double _bottomOffset;
    double _autoPlayInterval;
    UICollectionView *_collectionView;
    ACCImageAlbumEditPageProgressView *_pageProgressView;
    UIView *_scrollFakeAnimationContentView;
    AWEStudioExcludeSelfView *_interactionContainerView;
    NSTimer *_autoplayTimer;
    NSArray *_currentPreloadIndexs;
    long long _imageCountForPreload;
    struct CGSize { double width; double height; } _lastUpdateCollectionViewSize;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCImageAlbumEditPageProgressView *pageProgressView;
@property (retain, nonatomic) UIView *scrollFakeAnimationContentView;
@property (retain, nonatomic) AWEStudioExcludeSelfView *interactionContainerView;
@property (retain, nonatomic) NSTimer *autoplayTimer;
@property (nonatomic) struct CGSize { double width; double height; } lastUpdateCollectionViewSize;
@property (copy, nonatomic) NSArray *currentPreloadIndexs;
@property (nonatomic) BOOL enableAutoPlay;
@property (nonatomic) BOOL isScrollByDragFlag;
@property (nonatomic) long long imageCountForPreload;
@property (nonatomic) BOOL isScrollToNextAnimating;
@property (nonatomic) BOOL ignoreScrollToNextWhenAnimateFinishOnceFlag;
@property (readonly, nonatomic) long long currentIndex;
@property (weak, nonatomic) id<ACCImageAlbumEditPlayerViewDataSource> dataSource;
@property (weak, nonatomic) id<ACCImageAlbumEditPlayerViewDelegate> delegate;
@property (nonatomic) double bottomOffset;
@property (nonatomic) BOOL needShowProgressView;
@property (nonatomic) BOOL progressViewAnimationEnable;
@property (nonatomic) double autoPlayInterval;
@property (nonatomic) BOOL disableTransitionAnimation;
@property (nonatomic) BOOL scrollEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(long long)arg0;
- (void)setScrollEnable:(BOOL)arg0;
- (BOOL)scrollEnable;
- (BOOL)enableAutoPlay;
- (void)setEnableAutoPlay:(BOOL)arg0;
- (BOOL)needAdaptScreen;
- (void)updateInteractionContainerAlpha:(double)arg0;
- (id)pageProgressView;
- (void)setPageProgressView:(id)arg0;
- (id)interactionContainerView;
- (void)setAutoPlayInterval:(double)arg0;
- (void)setDisableTransitionAnimation:(BOOL)arg0;
- (double)progressBottomInsert;
- (id)playerGestureView;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (void)p_logInfoWithLogMsg:(id)arg0;
- (void)setAutoplayTimer:(id)arg0;
- (id)autoplayTimer;
- (void)p_stopAutoplayTimer;
- (void)p_updateAutoplayStatus;
- (long long)p_dataSourceCount;
- (void)setupViewsIfNeed;
- (void)setLastUpdateCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)p_updatePageControlActiveStatus;
- (double)autoPlayInterval;
- (BOOL)progressViewAnimationEnable;
- (void)scrollToIndex:(long long)arg0 isByAuto:(BOOL)arg1 withAnimation:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setIsScrollByDragFlag:(BOOL)arg0;
- (void)p_doScrollAnimationWithTargetIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)p_doSilentScrollToItemAtIndex:(long long)arg0;
- (id)p_previewViewAtIndex:(long long)arg0;
- (id)scrollFakeAnimationContentView;
- (void)setIsScrollToNextAnimating:(BOOL)arg0;
- (BOOL)ignoreScrollToNextWhenAnimateFinishOnceFlag;
- (void)setIgnoreScrollToNextWhenAnimateFinishOnceFlag:(BOOL)arg0;
- (BOOL)isScrollToNextAnimating;
- (void)p_stopScrollAnimationIfNeed;
- (double)p_getProgressBottomInsert;
- (BOOL)p_isAutoScrollEnvAllowed;
- (void)p_startAutoPlayTimer;
- (void)p_autoplayTimerHander;
- (BOOL)disableTransitionAnimation;
- (void)p_updatPlayerItemStatusWithContentOffsetX:(double)arg0;
- (BOOL)isIndex:(long long)arg0 inCurrentBounceWithOffsetX:(double)arg1 contentWith:(double)arg2;
- (void)p_updateCurrentIndexWithIndex:(long long)arg0;
- (long long)imageCountForPreload;
- (void)setImageCountForPreload:(long long)arg0;
- (void)p_updatePreloadStatusWithContentOffsetX:(double)arg0 contentWidth:(double)arg1 currentIndex:(long long)arg2;
- (id)currentPreloadIndexs;
- (void)setCurrentPreloadIndexs:(id)arg0;
- (BOOL)isScrollByDragFlag;
- (BOOL)needShowProgressView;
- (void)setScrollFakeAnimationContentView:(id)arg0;
- (void)setInteractionContainerView:(id)arg0;
- (void)p_onProgressViewSelectedIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })lastUpdateCollectionViewSize;
- (void)setProgressViewAnimationEnable:(BOOL)arg0;
- (void)setNeedShowProgressView:(BOOL)arg0;
- (BOOL)isDraggingOrScrolling;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (long long)currentIndex;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg0;

@end
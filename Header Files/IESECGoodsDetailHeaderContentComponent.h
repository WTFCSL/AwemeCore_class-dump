//
//     Generated by private class-dump
//

@class NSString, NSArray, IESECGoodsDetailHeaderContentCollectionDataSource, NSMutableDictionary, NSMutableArray, UICollectionView, IESECGoodsDetailHeaderFooter, UIScrollView;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderEventHandlerService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderTrackerService;

@interface IESECGoodsDetailHeaderContentComponent : IESECGoodsDetailHeaderFeatureComponent <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IESECGoodsDetailHeaderContentService> {
    BOOL _isInSwitchMode;
    BOOL _isShowingMoreView;
    BOOL _hasScrollWhenShowingMore;
    BOOL _hasScrollToTail;
    NSArray *_cells;
    IESECGoodsDetailHeaderFooter *_footer;
    UICollectionView *_collectionView;
    IESECGoodsDetailHeaderContentCollectionDataSource *_dataSource;
    long long _nowPage;
    double _nowOffsetX;
    double _halfOffsetX;
    double _fullOffsetX;
    double _nowPercent;
    id<IESECGoodsDetailHeaderStorageService> _storage;
    id<IESECGoodsDetailHeaderEventHandlerService> _handler;
    id<IESECGoodsDetailHeaderTrackerService> _tracker;
    id<IESECGoodsDetailHeaderViewManagerServeice> _viewManager;
    UIScrollView *_headerScrollView;
    NSMutableArray *_allIHeadtemViews;
    NSMutableDictionary *_headImageResourceMap;
    struct CGPoint { double x; double y; } _startOffset;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentCollectionDataSource *dataSource;
@property (nonatomic) long long nowPage;
@property (nonatomic) double nowOffsetX;
@property (nonatomic) double halfOffsetX;
@property (nonatomic) double fullOffsetX;
@property (nonatomic) BOOL isInSwitchMode;
@property (nonatomic) struct CGPoint { double x; double y; } startOffset;
@property (nonatomic) double nowPercent;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderEventHandlerService> handler;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTrackerService> tracker;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (nonatomic) BOOL isShowingMoreView;
@property (nonatomic) BOOL hasScrollWhenShowingMore;
@property (nonatomic) BOOL hasScrollToTail;
@property (retain, nonatomic) UIScrollView *headerScrollView;
@property (retain, nonatomic) NSMutableArray *allIHeadtemViews;
@property (retain, nonatomic) NSMutableDictionary *headImageResourceMap;
@property (copy, nonatomic) NSArray *cells;
@property (retain, nonatomic) IESECGoodsDetailHeaderFooter *footer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleHeaderBGImage:(id)arg0 withImage:(id)arg1 isType34:(BOOL)arg2 isNavBar:(BOOL)arg3 navBarHeight:(double)arg4;

- (void)loadComponent;
- (void)setViewManager:(id)arg0;
- (double)nowPercent;
- (void)setNowPercent:(double)arg0;
- (id)headerScrollView;
- (void)setHeaderScrollView:(id)arg0;
- (void)aimTargetIndex;
- (void)headerViewWillLoad;
- (void)headerViewDidScrollToMode:(long long)arg0;
- (BOOL)isNormalSize;
- (double)goodsHeadViewHeight;
- (void)headerViewDidLoad;
- (double)goodsHeadViewFullScreenHeight;
- (double)goodsHeadViewWidth:(long long)arg0;
- (void)setNowPage:(long long)arg0;
- (void)headerViewSizeChange;
- (void)recordOffset;
- (void)setIsInSwitchMode:(BOOL)arg0;
- (void)smallDeviceSizeChange;
- (void)bigDeviceSizeChange;
- (void)setupHeaderScrollView;
- (void)loadHeadImageResourceWith:(long long)arg0;
- (id)headImageResourceMap;
- (id)allIHeadtemViews;
- (void)trackSliceShowAction;
- (void)resetNowPage;
- (void)redirectPage;
- (BOOL)isShowingMoreView;
- (void)setHasScrollWhenShowingMore:(BOOL)arg0;
- (void)updateHeaderScrollViewOffset;
- (BOOL)hasScrollToTail;
- (void)setHasScrollToTail:(BOOL)arg0;
- (BOOL)hasScrollWhenShowingMore;
- (void)resetFooterTag;
- (void)registerSelfService;
- (long long)nowPage;
- (double)nowOffsetX;
- (void)setNowOffsetX:(double)arg0;
- (double)halfOffsetX;
- (void)setHalfOffsetX:(double)arg0;
- (double)fullOffsetX;
- (void)setFullOffsetX:(double)arg0;
- (BOOL)isInSwitchMode;
- (void)setIsShowingMoreView:(BOOL)arg0;
- (void)setAllIHeadtemViews:(id)arg0;
- (void)setHeadImageResourceMap:(id)arg0;
- (void)setStorage:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setDataSource:(id)arg0;
- (void)setFooter:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)storage;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)setCollectionView:(id)arg0;
- (struct CGPoint { double x0; double x1; })startOffset;
- (void)setStartOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setHandler:(id)arg0;
- (id)footer;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)handler;
- (id)cells;
- (id)mainView;
- (void)setCells:(id)arg0;
- (id)viewManager;

@end

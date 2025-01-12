//
//     Generated by private class-dump
//

@class AWELeftSideBarWatchVideoLaterContainerUIConfig, UICollectionView, NSString, UIView, AWELeftSideBarWatchVideoLaterHeaderUIConfig, AWELSBWatchVideoLaterHeaderView;
@protocol AWELeftSideBarItemContext, AWELeftSideBarWatchVideoLaterContainerViewDelegate;

@interface AWELeftSideBarWatchVideoLaterContainerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id<AWELeftSideBarWatchVideoLaterContainerViewDelegate> _delegate;
    UIView *_contentView;
    UICollectionView *_collectionView;
    AWELSBWatchVideoLaterHeaderView *_headerView;
    id<AWELeftSideBarItemContext> _context;
    AWELeftSideBarWatchVideoLaterContainerUIConfig *_containerUIConfig;
    AWELeftSideBarWatchVideoLaterHeaderUIConfig *_headerUIConfig;
    double _maxTitleHeight;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELSBWatchVideoLaterHeaderView *headerView;
@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterContainerUIConfig *containerUIConfig;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterHeaderUIConfig *headerUIConfig;
@property (nonatomic) double maxTitleHeight;
@property (weak, nonatomic) id<AWELeftSideBarWatchVideoLaterContainerViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *headerButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUIConfig;
- (void)setContainerUIConfig:(id)arg0;
- (void)setHeaderUIConfig:(id)arg0;
- (id)containerUIConfig;
- (id)headerUIConfig;
- (BOOL)useTitleStyle;
- (void)handleTapShowAllBtn:(id)arg0;
- (double)calculateContainerHeight;
- (void)reloadContaienerView;
- (void)updateHeaderTextWithUnreadCount:(long long)arg0;
- (id)headerButtonTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)initWithContext:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setContext:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (id)contentView;
- (id)delegate;
- (id)context;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupView;
- (double)maxTitleHeight;
- (void)setMaxTitleHeight:(double)arg0;
- (double)containerHeight;

@end

//
//     Generated by private class-dump
//

@class IESECGoodsFeedLargeCardCollectionViewCell, IESECTracker, IESECRelationFloatLynxContainerController, NSString, IESECRelationInlineManager, IESECWinFeedEnterParameters, UIImageView, IGListAdapter, UICollectionView, IESECWinFeedNavBar, IESECWindowFeedDataController;

@interface IESECWindowFeedViewController : UIViewController <UIScrollViewDelegate, IESECWinFeedNavBarDelegate, UICollectionViewDelegate, IGListDisplayDelegate, IGListAdapterDataSource, IESECommerceAddGoodsToCartMessage, IESECRelationInlinePlayerControllerDelegate> {
    long long _onceToken;
    BOOL _refreshing;
    IESECGoodsFeedLargeCardCollectionViewCell *_cellForCalculating;
    IESECWinFeedEnterParameters *_parameters;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IESECWinFeedNavBar *_navBar;
    IESECWindowFeedDataController *_dataController;
    IESECTracker *_tracker;
    IESECRelationInlineManager *_inlineManager;
    IESECRelationFloatLynxContainerController *_lynxController;
    UIImageView *_skeletonView;
}

@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECWinFeedNavBar *navBar;
@property (retain, nonatomic) IESECWindowFeedDataController *dataController;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECRelationInlineManager *inlineManager;
@property (retain, nonatomic) IESECRelationFloatLynxContainerController *lynxController;
@property (retain, nonatomic) UIImageView *skeletonView;
@property (retain, nonatomic) IESECGoodsFeedLargeCardCollectionViewCell *cellForCalculating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter;
- (id)skeletonView;
- (void)setSkeletonView:(id)arg0;
- (void)configBtmTrackerV2;
- (void)setListAdapter:(id)arg0;
- (void)backButtonDidTap;
- (id)cellForCalculating;
- (void)acceptShoppingCartNumberChanged:(id)arg0;
- (void)setCellForCalculating:(id)arg0;
- (void)panelSwitchDidChanged:(unsigned long long)arg0 state:(BOOL)arg1;
- (id)lynxController;
- (void)setLynxController:(id)arg0;
- (void)refreshCellsWithCompletion:(id /* block */)arg0;
- (void)__setUpViews;
- (void)__addInfiniteScroll;
- (id)inlineManager;
- (void)__loadMore;
- (void)scrollDidEnd;
- (void)cartButtonDidTap;
- (void)setInlineManager:(id)arg0;
- (id)tracker;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)initWithParameters:(id)arg0;
- (void)setTracker:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setParameters:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewDidLoad;
- (id)parameters;
- (id)dataController;
- (id)navBar;
- (void)setNavBar:(id)arg0;

@end

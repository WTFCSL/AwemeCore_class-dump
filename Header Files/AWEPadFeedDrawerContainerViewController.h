//
//     Generated by private class-dump
//

@class NSTimer, UIView, NSArray, NSString, AWEPadFeedDrawerDataController, UIButton, NSMutableArray, DUXPopover, UICollectionView, AWEPadFeedContentViewModel, NSIndexPath;

@interface AWEPadFeedDrawerContainerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIScrollViewDelegate, AWEMVPadAuthorRecommendFeedHeaderDelegate, AWEFeedTabItemViewControllerProtocol> {
    BOOL _isPanelShow;
    AWEPadFeedContentViewModel *_contentViewModel;
    AWEPadFeedDrawerDataController *_dataController;
    UICollectionView *_sideBarCollectionView;
    UIButton *_expendButton;
    UIView *_sideBarContainer;
    UIView *_touchMaskView;
    NSArray *_awemeModels;
    NSArray *_authorModels;
    NSMutableArray *_selectedArray;
    long long _isClosing;
    NSTimer *_timer;
    DUXPopover *_popOver;
    double _panelShowTime;
    double _panelCloseTime;
    NSIndexPath *_currentIndexPath;
    NSString *_listEnterMethod;
    struct CGPoint { double x; double y; } _originScrollViewContentOffset;
}

@property (retain, nonatomic) UICollectionView *sideBarCollectionView;
@property (retain, nonatomic) UIButton *expendButton;
@property (retain, nonatomic) UIView *sideBarContainer;
@property (retain, nonatomic) UIView *touchMaskView;
@property (retain, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) NSArray *authorModels;
@property (retain, nonatomic) NSMutableArray *selectedArray;
@property (nonatomic) long long isClosing;
@property (nonatomic) BOOL isPanelShow;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) DUXPopover *popOver;
@property (nonatomic) double panelShowTime;
@property (nonatomic) double panelCloseTime;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (copy, nonatomic) NSString *listEnterMethod;
@property (nonatomic) struct CGPoint { double x; double y; } originScrollViewContentOffset;
@property (retain, nonatomic) AWEPadFeedContentViewModel *contentViewModel;
@property (retain, nonatomic) AWEPadFeedDrawerDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;

+ (id)dataTypeWithModel:(id)arg0;
+ (id)idFromModel:(id)arg0;

- (id)referString;
- (void)pauseWithAnimation;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (void)onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (void)setDataController:(id)arg0;
- (void)invalidateCloseTimer;
- (id)awemeModels;
- (void)setAwemeModels:(id)arg0;
- (id)contentViewModel;
- (void)setContentViewModel:(id)arg0;
- (void)setOriginScrollViewContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })originScrollViewContentOffset;
- (void)didTapChangeButtonOnHeader;
- (void)addLoadMoreCallback;
- (void)setPopOver:(id)arg0;
- (void)fetchAuthorList;
- (id)sideBarContainer;
- (void)setListEnterMethod:(id)arg0;
- (id)listEnterMethod;
- (void)setPanelShowTime:(double)arg0;
- (void)fireCloseTimer;
- (void)tableViewCellDidEndDisplay:(id)arg0;
- (void)feedTableViewDidEndScroll:(id)arg0;
- (id)sideBarCollectionView;
- (void)setAuthorModels:(id)arg0;
- (void)setIsPanelShow:(BOOL)arg0;
- (id)expendButton;
- (void)updateViewWhenNetworkCompleteWihtError:(id)arg0;
- (void)trackMediumClientWihtModel:(id)arg0 index:(long long)arg1 event:(id)arg2;
- (id)authorModels;
- (void)expandCollectionView;
- (void)closeDrager;
- (double)panelCloseTime;
- (double)panelShowTime;
- (void)openDrager;
- (id)touchMaskView;
- (void)positionTranslateScal:(double)arg0;
- (void)setPanelCloseTime:(double)arg0;
- (BOOL)isPanelShow;
- (void)setSideBarCollectionView:(id)arg0;
- (void)setExpendButton:(id)arg0;
- (void)setSideBarContainer:(id)arg0;
- (void)setTouchMaskView:(id)arg0;
- (id)selectedArray;
- (void)setSelectedArray:(id)arg0;
- (long long)isClosing;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)reload;
- (id)timer;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3;
- (void)stop;
- (long long)type;
- (BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1;
- (id)currentIndexPath;
- (void)setTimer:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)addObserver;
- (void)setCurrentIndexPath:(id)arg0;
- (void)setupUI;
- (void)tapGesture:(id)arg0;
- (id)dataController;
- (void)panGesture:(id)arg0;
- (void)setIsClosing:(long long)arg0;
- (id)popOver;

@end

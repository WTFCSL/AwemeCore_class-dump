//
//     Generated by private class-dump
//

@class UIViewController;
@protocol ACCWaterfallViewControllerProtocol;

@protocol ACCWaterfallContentProviderProtocol <NSObject>

@property (weak, nonatomic) UIViewController<ACCWaterfallViewControllerProtocol> *viewController;
@property (readonly, nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;

- (id)accui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)setMinimumColumnSpacing:(double)arg0;
- (double)minimumColumnSpacing;
- (void)handleOnViewDidAppear;
- (void)refreshContentDataIsRetry:(BOOL)arg0 isPulled:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)loadMoreContentDataWithCompletion:(id /* block */)arg0;
- (void)refreshContentDataIsRetry:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)registerCellForcollectionView:(id)arg0;
- (unsigned long long)columnCount;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setViewController:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)viewController;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (BOOL)hasMore;
- (void)setColumnCount:(unsigned long long)arg0;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setSectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;

@optional

- (void)trackForLoadingCompleted:(double)arg0 responseDuration:(double)arg1 loadType:(long long)arg2 error:(id)arg3;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;

@end

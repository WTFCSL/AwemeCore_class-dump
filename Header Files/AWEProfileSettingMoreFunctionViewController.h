//
//     Generated by private class-dump
//

@class NSString, UICollectionView, AWEProfileSettingMoreFunctionViewModel, UIView;

@interface AWEProfileSettingMoreFunctionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWESettingBaseViewModelDelegate> {
    BOOL _headerViewLoaded;
    AWEProfileSettingMoreFunctionViewModel *_viewModel;
    UICollectionView *_collectionView;
    UIView *_focusView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEProfileSettingMoreFunctionViewModel *viewModel;
@property (retain, nonatomic) UIView *focusView;
@property (nonatomic) BOOL headerViewLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshView;
- (void)p_setupUI;
- (BOOL)headerViewLoaded;
- (void)setHeaderViewLoaded:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)focusView;
- (void)setFocusView:(id)arg0;

@end
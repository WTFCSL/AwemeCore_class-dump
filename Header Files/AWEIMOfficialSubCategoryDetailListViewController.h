//
//     Generated by private class-dump
//

@class AWEIMOfficialSubCategoryDetailListDataSource, NSString, UICollectionView, UIView;
@protocol AWEIMOfficialSubCategoryDetailListViewControllerDelegate;

@interface AWEIMOfficialSubCategoryDetailListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<AWEIMOfficialSubCategoryDetailListViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_lineView;
    AWEIMOfficialSubCategoryDetailListDataSource *_dataSource;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMOfficialSubCategoryDetailListDataSource *dataSource;
@property (weak, nonatomic) id<AWEIMOfficialSubCategoryDetailListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithData:(id)arg0 context:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (void)setupLayout;

@end

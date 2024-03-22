//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UIView;

@interface IESLivePKRecordFilterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    long long _selectedCategoryIndex;
    id /* block */ _foldedBlock;
    UIView *_maskView;
    UICollectionView *_collectionView;
    NSArray *_filterTabArray;
    double _filterWidth;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *filterTabArray;
@property (nonatomic) double filterWidth;
@property (nonatomic) long long selectedCategoryIndex;
@property (copy, nonatomic) id /* block */ foldedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)foldedFilterView;
- (id /* block */)foldedBlock;
- (id)filterTabArray;
- (id)initWithTabArray:(id)arg0 width:(double)arg1;
- (void)setFoldedBlock:(id /* block */)arg0;
- (void)setFilterTabArray:(id)arg0;
- (double)filterWidth;
- (void)setFilterWidth:(double)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)maskView;
- (void)setCollectionView:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setupViews;
- (void)setSelectedCategoryIndex:(long long)arg0;
- (long long)selectedCategoryIndex;

@end

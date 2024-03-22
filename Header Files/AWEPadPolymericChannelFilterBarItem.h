//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView;

@interface AWEPadPolymericChannelFilterBarItem : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSString *_filterKey;
    id /* block */ _selectBlock;
    NSArray *_filterValues;
    UICollectionView *_filterView;
}

@property (copy, nonatomic) NSString *filterKey;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (retain, nonatomic) NSArray *filterValues;
@property (retain, nonatomic) UICollectionView *filterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectBlock:(id /* block */)arg0;
- (id)filterValues;
- (id)filterKey;
- (id)initWithFilterKey:(id)arg0 filterValues:(id)arg1;
- (void)setFilterKey:(id)arg0;
- (void)setFilterValues:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg0;
- (id /* block */)selectBlock;

@end
//
//     Generated by private class-dump
//

@class AWETheaterTracker, NSString, UICollectionView, AWETheaterSectionModel;

@interface AWETheaterVajraSectionCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    AWETheaterTracker *_tracker;
    id /* block */ _willDisplayHandler;
    id /* block */ _vajraCellClickTrackBlock;
    AWETheaterSectionModel *_sectionModel;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) AWETheaterSectionModel *sectionModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (copy, nonatomic) id /* block */ willDisplayHandler;
@property (copy, nonatomic) id /* block */ vajraCellClickTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionModel;
- (void)setSectionModel:(id)arg0;
- (id /* block */)willDisplayHandler;
- (id /* block */)vajraCellClickTrackBlock;
- (void)configWithSectionModel:(id)arg0;
- (void)setWillDisplayHandler:(id /* block */)arg0;
- (void)setVajraCellClickTrackBlock:(id /* block */)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end

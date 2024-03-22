//
//     Generated by private class-dump
//

@class AWEVideoHallBlockInfo, NSString, UICollectionView, AWELVideoHallTracker;

@interface AWEVideoHallVajraCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    id /* block */ _willDisplayHandler;
    AWELVideoHallTracker *_tracker;
    id /* block */ _vajraCellClickTrackBlock;
    AWEVideoHallBlockInfo *_blockInfo;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) AWEVideoHallBlockInfo *blockInfo;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ willDisplayHandler;
@property (retain, nonatomic) AWELVideoHallTracker *tracker;
@property (copy, nonatomic) id /* block */ vajraCellClickTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)blockInfo;
- (void)setBlockInfo:(id)arg0;
- (id /* block */)willDisplayHandler;
- (id /* block */)vajraCellClickTrackBlock;
- (void)setWillDisplayHandler:(id /* block */)arg0;
- (void)setVajraCellClickTrackBlock:(id /* block */)arg0;
- (void)configWithBlockInfo:(id)arg0;
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

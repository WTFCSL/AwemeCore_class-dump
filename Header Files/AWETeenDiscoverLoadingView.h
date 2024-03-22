//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView;

@interface AWETeenDiscoverLoadingView : UIView <AWETeenWaterfallCollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    NSArray *_coverCellRatioArray;
    long long _channelIndex;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *coverCellRatioArray;
@property (nonatomic) long long channelIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setChannelIndex:(long long)arg0;
- (long long)collectionView:(id)arg0 layout:(id)arg1 columnCountForSection:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumColumnSpacingForSectionAtIndex:(long long)arg2;
- (id)initWithChannelIndex:(long long)arg0;
- (id)coverCellRatioArray;
- (void)setCoverCellRatioArray:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (long long)channelIndex;

@end

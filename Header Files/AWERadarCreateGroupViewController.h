//
//     Generated by private class-dump
//

@class NSString, UICollectionView;

@interface AWERadarCreateGroupViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    double _contentHeight;
    NSString *_enterFrom;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)p_trackCreateFaceToFaceGroupClicked;
- (void)p_transferToCommandVC;
- (void)p_trackCreateNeighbourhoodGroupClicked;
- (void)p_transferToNearbyVC;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (double)contentHeight;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)viewDidLoad;
- (void)setContentHeight:(double)arg0;

@end

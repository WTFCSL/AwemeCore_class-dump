//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UIView;

@interface AWEAwemeLongPressDislikeContainerCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id /* block */ _dismissBlock;
    id /* block */ _buttonClickedTrackBlock;
    NSArray *_models;
    UICollectionView *_collectionView;
    UIView *_containerView;
}

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (id /* block */)buttonClickedTrackBlock;
- (void)setButtonClickedTrackBlock:(id /* block */)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setContainerView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)models;
- (id)containerView;
- (void)setModels:(id)arg0;
- (void)setupUI;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end

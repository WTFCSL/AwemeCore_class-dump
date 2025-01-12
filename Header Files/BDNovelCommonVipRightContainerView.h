//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSMutableSet, UILabel, NSString;

@interface BDNovelCommonVipRightContainerView : BDNovelCommonVipBaseChildView <UICollectionViewDelegate, UICollectionViewDataSource> {
    UILabel *_vipAbilityLabel;
    UICollectionView *_collectionView;
    NSMutableSet *_showRightSet;
}

@property (retain, nonatomic) UILabel *vipAbilityLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableSet *showRightSet;
@property (readonly, copy, nonatomic) NSArray *rightList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rightList;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parentView:(id)arg1 viewModel:(id)arg2;
- (void)setVipAbilityLabel:(id)arg0;
- (void)setupNewView;
- (void)setupOldView;
- (id)vipAbilityLabel;
- (id)showRightSet;
- (void)setShowRightSet:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg0;

@end

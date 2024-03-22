//
//     Generated by private class-dump
//

@class AWEPlayInteractionSocialTagsViewModel, NSString, UICollectionView;

@interface AWEPlayInteractionSocialTagsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWENearbySocialTagsViewProtocol> {
    UICollectionView *_collectionView;
    AWEPlayInteractionSocialTagsViewModel *_viewModel;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEPlayInteractionSocialTagsViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)updateSocialTagsViewWithModel:(id)arg0;
- (void)onSocialTagShow;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
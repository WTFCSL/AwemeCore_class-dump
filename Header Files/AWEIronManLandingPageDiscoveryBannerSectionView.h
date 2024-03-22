//
//     Generated by private class-dump
//

@class NSString, AWEIronManLandingPageDiscoveryBannerViewModel, UICollectionView, UILabel;

@interface AWEIronManLandingPageDiscoveryBannerSectionView : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UILabel *_descLabel;
    UICollectionView *_collectionView;
    AWEIronManLandingPageDiscoveryBannerViewModel *_viewModel;
}

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) AWEIronManLandingPageDiscoveryBannerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)trackItemClickAtIndex:(unsigned long long)arg0;
- (void)trackItemShowAtIndex:(unsigned long long)arg0;
- (void)trackScrollAction;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)viewModel;
- (void)setUpUI;

@end

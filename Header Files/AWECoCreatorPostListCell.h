//
//     Generated by private class-dump
//

@class NSString, UICollectionView, UIView, AWECoCreatorPostListCellModel;

@interface AWECoCreatorPostListCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    AWECoCreatorPostListCellModel *_model;
    UIView *_container;
    UICollectionView *_collectionView;
    UIView *_fakeLoadingView;
}

@property (retain, nonatomic) AWECoCreatorPostListCellModel *model;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *fakeLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)cellWidth;
+ (double)cellHeight;

- (void)updateWithModel:(id)arg0 showLoading:(BOOL)arg1;
- (id)fakeLoadingView;
- (void)trackEnterPersonalDetail:(id)arg0;
- (BOOL)exitCurrentVCIfNeeded;
- (BOOL)shouldShowCountMaskLayer:(id)arg0;
- (void)enterUserProfilePageWithIndexPath:(id)arg0;
- (void)enterUserPostListWithIndexPath:(id)arg0;
- (void)setFakeLoadingView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)container;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (void)setContainer:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)configureSubviews;

@end

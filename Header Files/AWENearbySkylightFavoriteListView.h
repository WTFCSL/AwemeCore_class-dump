//
//     Generated by private class-dump
//

@class AWENearbySkylightFavoriteEmptyView, NSString, UIImageView, UICollectionView, UILabel, UIView, UIScrollView;
@protocol AWENearbySkylightFavoriteListViewDataSource, AWENearbySkylightFavoriteListViewDelegate;

@interface AWENearbySkylightFavoriteListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    BOOL _isSingle;
    id<AWENearbySkylightFavoriteListViewDataSource> _dataSource;
    id<AWENearbySkylightFavoriteListViewDelegate> _delegate;
    UIView *_topView;
    UILabel *_titleLabel;
    UILabel *_rightTitleLabel;
    UIImageView *_arrowImageView;
    UIScrollView *_contentView;
    UICollectionView *_collectionView;
    AWENearbySkylightFavoriteEmptyView *_emptyView;
}

@property (nonatomic) BOOL isSingle;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWENearbySkylightFavoriteEmptyView *emptyView;
@property (weak, nonatomic) id<AWENearbySkylightFavoriteListViewDataSource> dataSource;
@property (weak, nonatomic) id<AWENearbySkylightFavoriteListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScrollEnable:(BOOL)arg0;
- (void)__buildUI;
- (void)__layoutUI;
- (void)setIsSingle:(BOOL)arg0;
- (BOOL)isSingle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isSingle:(BOOL)arg1;
- (id)visibleIndexPathCells;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;
- (id)rightTitleLabel;
- (void)setRightTitleLabel:(id)arg0;

@end

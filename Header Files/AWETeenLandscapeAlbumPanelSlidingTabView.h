//
//     Generated by private class-dump
//

@class UIFont, NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, NSIndexPath;

@interface AWETeenLandscapeAlbumPanelSlidingTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id /* block */ _onTabClickedBlock;
    id /* block */ _trackTabClickedBlock;
    long long _itemsCountPerTab;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSArray *_tabTitles;
    NSArray *_tabCursors;
    NSIndexPath *_selectedIndexPath;
    UIFont *_tabTitleFont;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *tabTitles;
@property (copy, nonatomic) NSArray *tabCursors;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UIFont *tabTitleFont;
@property (copy, nonatomic) id /* block */ onTabClickedBlock;
@property (copy, nonatomic) id /* block */ trackTabClickedBlock;
@property (nonatomic) long long itemsCountPerTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (id)tabTitles;
- (void)setTabTitles:(id)arg0;
- (void)updateSelectedTabToCurrentEpisode:(long long)arg0;
- (id)initWithTotalEpisodesCount:(long long)arg0 andItemsCountPerTab:(long long)arg1;
- (void)setOnTabClickedBlock:(id /* block */)arg0;
- (void)p_layoutViews;
- (void)p_setupTabTitlesWithTotalEpisodesCount:(long long)arg0;
- (BOOL)p_isShowing;
- (id)tabCursors;
- (id /* block */)trackTabClickedBlock;
- (long long)itemsCountPerTab;
- (void)setTabCursors:(id)arg0;
- (id /* block */)onTabClickedBlock;
- (void)setTrackTabClickedBlock:(id /* block */)arg0;
- (void)setItemsCountPerTab:(long long)arg0;
- (void)setTabTitleFont:(id)arg0;
- (void)dismiss;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionViewLayout;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setCollectionViewLayout:(id)arg0;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (id)tabTitleFont;

@end

//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UICollectionView;

@interface AWETeenSearchResultAlbumNoDataViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    NSString *_keyword;
    NSString *_searchID;
    NSMutableArray *_dataSource;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getLabelHeightWithFixedWidth:(double)arg0 andFixedFont:(id)arg1 andContent:(id)arg2;
- (id)albumAtIndex:(long long)arg0;
- (void)setPlaceholderData:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setCollectionView:(id)arg0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView;

@interface IESFormatFinishFeedListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    NSArray *_feedList;
    id /* block */ _selectedFeedItem;
    UICollectionView *_colllectionView;
}

@property (retain, nonatomic) UICollectionView *colllectionView;
@property (retain, nonatomic) NSArray *feedList;
@property (copy, nonatomic) id /* block */ selectedFeedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feedList;
- (void)setFeedList:(id)arg0;
- (void)setSelectedFeedItem:(id /* block */)arg0;
- (id)colllectionView;
- (id /* block */)selectedFeedItem;
- (void)setColllectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end

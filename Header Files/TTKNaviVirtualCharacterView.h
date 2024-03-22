//
//     Generated by private class-dump
//

@class NSArray, UIImageView, UICollectionView, NSString;

@interface TTKNaviVirtualCharacterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id /* block */ _itemSelectedBlock;
    NSArray *_effects;
    UICollectionView *_collectionView;
    UIImageView *_backgroundImageView;
    long long _selectedIndex;
    long long _toIndex;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long toIndex;
@property (copy, nonatomic) id /* block */ itemSelectedBlock;
@property (copy, nonatomic) NSArray *effects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectItemAtIndex:(long long)arg0 animated:(BOOL)arg1 finished:(id /* block */)arg2;
- (void)setItemSelectedBlock:(id /* block */)arg0;
- (id /* block */)itemSelectedBlock;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setSelectedIndex:(long long)arg0;
- (id)backgroundImageView;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)effects;
- (long long)selectedIndex;
- (void)setEffects:(id)arg0;
- (long long)toIndex;
- (void)setToIndex:(long long)arg0;
- (void)setupSubviews;
- (void)setBackgroundImageView:(id)arg0;

@end

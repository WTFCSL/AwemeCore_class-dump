//
//     Generated by private class-dump
//

@class NSString, UICollectionView;

@interface AWENaviCategoryTabContentEmotionTableViewCell : TTKNaviCategoryTabContentTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_emotionCollectionView;
}

@property (retain, nonatomic) UICollectionView *emotionCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)emotionCollectionView;
- (void)p_bindViewModel;
- (id)p_getEmotionCollectionViewCellWithEffect:(id)arg0;
- (void)setEmotionCollectionView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)reload;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)layoutSubviews;

@end

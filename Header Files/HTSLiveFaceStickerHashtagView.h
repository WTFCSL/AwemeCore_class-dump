//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UILabel;
@protocol HTSLiveStickerPickerHashtagViewDelegate;

@interface HTSLiveFaceStickerHashtagView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    id<HTSLiveStickerPickerHashtagViewDelegate> _delegate;
    NSArray *_hashtagsList;
    id /* block */ _tapBlock;
    UILabel *_label;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<HTSLiveStickerPickerHashtagViewDelegate> delegate;
@property (retain, nonatomic) NSArray *hashtagsList;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })p_titleLabelSizeWithTitle:(id)arg0;
- (id)hashtagsList;
- (void)setHashtagsList:(id)arg0;
- (void)doEndEditingBlock;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setLabel:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)delegate;
- (id)label;
- (void)setDelegate:(id)arg0;
- (void)setupSubviews;

@end
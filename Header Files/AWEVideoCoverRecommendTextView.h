//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView;
@protocol AWEVideoCoverRecommendTextViewDelegate;

@interface AWEVideoCoverRecommendTextView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _singleLine;
    id<AWEVideoCoverRecommendTextViewDelegate> _delegate;
    NSArray *_models;
    UICollectionView *_collectionView;
}

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL singleLine;
@property (weak, nonatomic) id<AWEVideoCoverRecommendTextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSubViews;
- (void)setSingleLine:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 textModels:(id)arg1 singleLine:(BOOL)arg2;
- (void)refreshTitleModels:(id)arg0;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionViewLayout;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)models;
- (id)delegate;
- (void)setModels:(id)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)singleLine;

@end
//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, ListCategoryResponse_CategoryNode, UIView, NSString;
@protocol IESLiveCategorySectionViewDelegate;

@interface IESLiveCategorySectionView : UICollectionReusableView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCollectionViewLockHeaderProtocol> {
    ListCategoryResponse_CategoryNode *_currentModel;
    id<IESLiveCategorySectionViewDelegate> _delegate;
    NSArray *_dataSource;
    long long _selectedIndex;
    UICollectionView *_collectionView;
    UIView *_selectedLineView;
}

@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *currentModel;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *selectedLineView;
@property (weak, nonatomic) id<IESLiveCategorySectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double collectionViewHeight;

+ (id)reuseIdentifier;

- (id)selectedLineView;
- (void)setSelectedLineView:(id)arg0;
- (void)updateLineWithAnimation:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCellWith:(long long)arg0;
- (double)stringWidth:(id)arg0;
- (void)updateInfoWithModeList:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setSelectedIndex:(long long)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;
- (void)setupUI;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end

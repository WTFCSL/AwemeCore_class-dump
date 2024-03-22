//
//     Generated by private class-dump
//

@class NSIndexPath, NSString, UICollectionView, AWEImageTemplateEditViewModel, UIView, UICollectionViewFlowLayout, UIButton;
@protocol AWEVideoCoverImageTemplateListTabsViewDelegate;

@interface AWEVideoCoverImageTemplateListTabsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isAutoLandingTabHasBeenTracked;
    NSIndexPath *_currentSelectedTabIndexPath;
    id<AWEVideoCoverImageTemplateListTabsViewDelegate> _delegate;
    UIView *_lineView;
    UIButton *_clearButton;
    UICollectionView *_tabCollectionView;
    UICollectionViewFlowLayout *_flowLayout;
    AWEImageTemplateEditViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWEImageTemplateEditViewModel *viewModel;
@property (nonatomic) BOOL isAutoLandingTabHasBeenTracked;
@property (retain, nonatomic) NSIndexPath *currentSelectedTabIndexPath;
@property (weak, nonatomic) id<AWEVideoCoverImageTemplateListTabsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)arg0;
- (void)p_setupUI;
- (void)setTabCollectionView:(id)arg0;
- (void)scrollToIndexPath:(id)arg0 animated:(BOOL)arg1;
- (void)setCurrentSelectedTabIndexPath:(id)arg0;
- (id)currentSelectedTabIndexPath;
- (BOOL)isAutoLandingTabHasBeenTracked;
- (void)setIsAutoLandingTabHasBeenTracked:(BOOL)arg0;
- (void)p_setupConstraint;
- (void)selectTabAtIndexPath:(id)arg0 animated:(BOOL)arg1;
- (void)setClearButtonSelected:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)tabCollectionView;
- (void)reloadData;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (id)clearButton;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setClearButton:(id)arg0;

@end
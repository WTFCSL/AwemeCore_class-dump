//
//     Generated by private class-dump
//

@class NSString, UICollectionView, ACCPicTemplatePanelDataManager, UIView, UIButton;
@protocol ACCPicTemplatePanelCategoryViewDelegate;

@interface ACCPicTemplatePanelCategoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<ACCPicTemplatePanelCategoryViewDelegate> _delegate;
    UIButton *_clearButton;
    UIView *_separatedLineView;
    UICollectionView *_categoryListView;
    ACCPicTemplatePanelDataManager *_dataManager;
    long long _curIndex;
}

@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIView *separatedLineView;
@property (retain, nonatomic) UICollectionView *categoryListView;
@property (retain, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (nonatomic) long long curIndex;
@property (weak, nonatomic) id<ACCPicTemplatePanelCategoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)arg0;
- (long long)curIndex;
- (void)setCurIndex:(long long)arg0;
- (id)separatedLineView;
- (id)categoryListView;
- (void)scrollToCategoryAtIndexPath:(id)arg0;
- (BOOL)isSelected:(id)arg0;
- (void)setSeparatedLineView:(id)arg0;
- (void)setCategoryListView:(id)arg0;
- (id)dataManager;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (BOOL)isValidIndexPath:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)setDataManager:(id)arg0;
- (id)delegate;
- (id)initWithDataManager:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)clearButton;
- (void)setupUI;
- (void)setClearButton:(id)arg0;

@end
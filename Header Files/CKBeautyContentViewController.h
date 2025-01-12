//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, CKBeautyVCContext;

@interface CKBeautyContentViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    CKBeautyVCContext *_uiContext;
    NSString *_nodeId;
    NSString *_contentTitle;
    UICollectionView *_collectionView;
    NSArray *_cellModels;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *cellModels;
@property (weak, nonatomic) CKBeautyVCContext *uiContext;
@property (copy, nonatomic) NSString *nodeId;
@property (copy, nonatomic) NSString *contentTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModels;
- (id)uiContext;
- (void)setUiContext:(id)arg0;
- (void)setCellModels:(id)arg0;
- (void)updateSourceData:(id)arg0;
- (void)setupNav;
- (id)initWithContext:(id)arg0 nodeId:(id)arg1;
- (unsigned long long)contentVcType;
- (void)collectionView:(id)arg0 didSelectBeautyCellAtIndexPath:(id)arg1 cellModel:(id)arg2;
- (void)scrollToSelectedCell:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupCollectionView;
- (id)contentTitle;
- (void)updateFrames;
- (void)setContentTitle:(id)arg0;
- (id)nodeId;
- (void)setNodeId:(id)arg0;

@end

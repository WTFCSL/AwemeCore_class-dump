//
//     Generated by private class-dump
//

@class NSString, UICollectionView, UIImage, UICollectionViewFlowLayout, NSMutableArray, UIView;

@interface IESLiveSoloKTVMVListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _needFreshHeader;
    BOOL _needFreshFooter;
    id /* block */ _didSelectedItemBlock;
    id /* block */ _didDeselectedItemBlock;
    id /* block */ _didClickUploadImageBlock;
    id /* block */ _didRefreshBlock;
    id /* block */ _didAppendMoreBlock;
    long long _type;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSMutableArray *_cellData;
    UIView *_errorView;
    UIImage *_headerImage;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL needFreshHeader;
@property (nonatomic) BOOL needFreshFooter;
@property (retain, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) id /* block */ didSelectedItemBlock;
@property (copy, nonatomic) id /* block */ didDeselectedItemBlock;
@property (copy, nonatomic) id /* block */ didClickUploadImageBlock;
@property (copy, nonatomic) id /* block */ didRefreshBlock;
@property (copy, nonatomic) id /* block */ didAppendMoreBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLoading:(int)arg0;
- (void)initView;
- (BOOL)isMV;
- (void)cleanSelected;
- (void)updateHeaderImage:(id)arg0;
- (void)dismissLoading:(int)arg0;
- (void)setDidSelectedItemBlock:(id /* block */)arg0;
- (void)setDidClickUploadImageBlock:(id /* block */)arg0;
- (void)setDidRefreshBlock:(id /* block */)arg0;
- (void)setDidAppendMoreBlock:(id /* block */)arg0;
- (void)setNeedFreshHeader:(BOOL)arg0;
- (void)setNeedFreshFooter:(BOOL)arg0;
- (void)dismissErrorViewIfNeed;
- (id /* block */)didSelectedItemBlock;
- (id)getUploadHeader:(id)arg0 indexPath:(id)arg1;
- (void)createAndAddErrorView;
- (BOOL)needFreshHeader;
- (id /* block */)didRefreshBlock;
- (BOOL)needFreshFooter;
- (id /* block */)didAppendMoreBlock;
- (id)getEmptyFooter:(id)arg0 kind:(id)arg1 indexPath:(id)arg2;
- (id /* block */)didClickUploadImageBlock;
- (id /* block */)didDeselectedItemBlock;
- (void)errorViewClick:(id)arg0;
- (void)setDidDeselectedItemBlock:(id /* block */)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1;
- (void)setLayout:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)type;
- (void)setCollectionView:(id)arg0;
- (id)initWithType:(long long)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setType:(long long)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)layout;
- (void)setHeaderImage:(id)arg0;
- (id)headerImage;
- (void)showErrorView;
- (void)setCellData:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (id)cellData;
- (void)updateModel:(id)arg0;
- (void)updateDownloadStatus:(int)arg0;

@end

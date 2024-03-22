//
//     Generated by private class-dump
//

@class CJPayChannelBizModel, NSString, UICollectionView;
@protocol CJPayMethodTableViewDelegate;

@interface CJPayByteMethodNewCustomerSecondaryCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id<CJPayMethodTableViewDelegate> _subPayDelegate;
    UICollectionView *_collectionView;
    CJPayChannelBizModel *_data;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CJPayChannelBizModel *data;
@property (weak, nonatomic) id<CJPayMethodTableViewDelegate> subPayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subPayDelegate;
- (void)setSubPayDelegate:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (id)data;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setData:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)reloadData:(id)arg0;

@end
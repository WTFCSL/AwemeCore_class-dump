//
//     Generated by private class-dump
//

@interface AWENewScanImpl.QRCodeScanExtendAlbumView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ UIStyle;
    void /* unknown type, empty encoding */ newItemWidth;
    void /* unknown type, empty encoding */ newItemMaxCount;
    void /* unknown type, empty encoding */ itemSpace;
    void /* unknown type, empty encoding */ itemCountOfLine;
    void /* unknown type, empty encoding */ maxWidth;
    void /* unknown type, empty encoding */ hasShown;
    void /* unknown type, empty encoding */ openAlbumBlock;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ itemMaxCount;
    void /* unknown type, empty encoding */ enableAutoHide;
    void /* unknown type, empty encoding */ photoImageCache;
    void /* unknown type, empty encoding */ assetDataSource;
    void /* unknown type, empty encoding */ targetStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topShowIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_morePhotoIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_photoListView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageRequestOptions;
}

- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)upGestureCallback;
- (void)downGestureCallback;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end

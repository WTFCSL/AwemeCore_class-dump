//
//     Generated by private class-dump
//

@interface AWEClassroomImpl.ClassroomCatalogList : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ isLandscape;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ courseModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lessonInfoManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_header;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footer;
}

- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end

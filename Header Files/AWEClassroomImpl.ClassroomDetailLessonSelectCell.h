//
//     Generated by private class-dump
//

@interface AWEClassroomImpl.ClassroomDetailLessonSelectCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ selectedLessonId;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ cellModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_holderModels;
}

- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end
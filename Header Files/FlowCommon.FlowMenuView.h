//
//     Generated by private class-dump
//

@interface FlowCommon.FlowMenuView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ flowMenuViewMinWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundShadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)handelGesture;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end

//
//     Generated by private class-dump
//

@interface TempoiOS.TempoSwiperView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, NSObject> {
    void /* unknown type, empty encoding */ animationName;
    void /* unknown type, empty encoding */ animationGroup;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ firstRending;
    void /* unknown type, empty encoding */ autoScrollTimeInterval;
    void /* unknown type, empty encoding */ animationDuration;
    void /* unknown type, empty encoding */ infiniteLoop;
    void /* unknown type, empty encoding */ isVertical;
    void /* unknown type, empty encoding */ isAutoScrollEnabled;
    void /* unknown type, empty encoding */ onScroll;
    void /* unknown type, empty encoding */ onScrollStart;
    void /* unknown type, empty encoding */ onScrollEnd;
    void /* unknown type, empty encoding */ flowLayout;
    void /* unknown type, empty encoding */ autoScrollTimer;
    void /* unknown type, empty encoding */ hasInitializedFirstPage;
    void /* unknown type, empty encoding */ isScrolling;
    void /* unknown type, empty encoding */ views;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customScroll;
}

- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)dealloc;

@end
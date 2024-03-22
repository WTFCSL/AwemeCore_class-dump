//
//     Generated by private class-dump
//

@class AWETeenHotSpotDataController, NSString;

@interface AWETeenHotSpotCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _isPresented;
    id /* block */ _selectedBlock;
    id /* block */ _scrollBlock;
    AWETeenHotSpotDataController *_dataController;
    long long _selectedIndex;
}

@property (retain, nonatomic) AWETeenHotSpotDataController *dataController;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isPresented;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ scrollBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (void)p_updateBottomMask;
- (BOOL)p_didScrollAtFist;
- (void)updateCurrentHotID:(id)arg0 needFocus:(BOOL)arg1;
- (id)init;
- (void)didDismiss;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setSelectedIndex:(long long)arg0;
- (BOOL)isPresented;
- (void)scrollViewDidScroll:(id)arg0;
- (void)didPresent;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (long long)selectedIndex;
- (id /* block */)scrollBlock;
- (void)setScrollBlock:(id /* block */)arg0;
- (id)dataController;
- (void)setIsPresented:(BOOL)arg0;

@end
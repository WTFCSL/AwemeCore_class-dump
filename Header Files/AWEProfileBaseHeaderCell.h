//
//     Generated by private class-dump
//

@class DUXPopover, UICollectionView, AWEProfileBaseContainerContext, NSString, NSMutableArray, AWEProfileBaseHeaderRightFixedAreaView;

@interface AWEProfileBaseHeaderCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, DUXPopoverDelegate> {
    BOOL _isScrolling;
    BOOL _bubbleIsShowing;
    AWEProfileBaseContainerContext *_context;
    long long _selectIndex;
    UICollectionView *_collectionView;
    DUXPopover *_popover;
    AWEProfileBaseHeaderRightFixedAreaView *_rightFixedAreaView;
    NSMutableArray *_fullExposedItemList;
}

@property (retain, nonatomic) AWEProfileBaseContainerContext *context;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) DUXPopover *popover;
@property (nonatomic) BOOL bubbleIsShowing;
@property (retain, nonatomic) AWEProfileBaseHeaderRightFixedAreaView *rightFixedAreaView;
@property (retain, nonatomic) NSMutableArray *fullExposedItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)popoverDidDisappear:(id)arg0;
- (long long)selectIndex;
- (void)setSelectIndex:(long long)arg0;
- (void)configWithContext:(id)arg0;
- (void)scrollViewDidEndScroll;
- (void)hideBubble;
- (void)setBubbleIsShowing:(BOOL)arg0;
- (BOOL)bubbleIsShowing;
- (void)reloadRightFixedAreaWithViewsArray:(id)arg0;
- (id)rightFixedAreaView;
- (BOOL)onlyShowTitle:(unsigned long long)arg0;
- (void)checkIfCellExpose:(id)arg0;
- (void)setRightFixedAreaView:(id)arg0;
- (void)setFullExposedItemList:(id)arg0;
- (id)fullExposedItemList;
- (void)showBubbleWithText:(id)arg0 index:(long long)arg1;
- (void)setIsScrolling:(BOOL)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)popover;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setContext:(id)arg0;
- (BOOL)isScrolling;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setPopover:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;

@end

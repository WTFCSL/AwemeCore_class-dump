//
//     Generated by private class-dump
//

@class NSArray, GXTemplateItem, NSString, NSMutableArray, GXEvent;

@interface GXGridNode : GXBaseNode <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _hasInit;
    BOOL _isOnShow;
    struct CGSize { double width; double height; } _itemSize;
    GXEvent *_scrollEvent;
    BOOL _scrollEnable;
    long long _column;
    double _rowSpacing;
    double _itemSpacing;
    NSArray *_dataArray;
    NSMutableArray *_items;
    GXTemplateItem *_subTemplateItem;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
}

@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) GXTemplateItem *subTemplateItem;
@property (nonatomic) long long column;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double itemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScrollEnable:(BOOL)arg0;
- (BOOL)scrollEnable;
- (void)bindData:(id)arg0;
- (BOOL)updateLayoutStyle:(id)arg0;
- (void)handleExtend:(id)arg0 isCalculate:(BOOL)arg1;
- (void)configureViewInfo:(id)arg0;
- (id)creatView;
- (void)calculateWithData:(id)arg0;
- (void)registerItemCell;
- (void)processListData:(id)arg0;
- (void)calculateItemSize;
- (id)subTemplateItem;
- (void)setupItemIdentifier:(id)arg0;
- (void)setSubTemplateItem:(id)arg0;
- (void)handleVisibleCells;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setItems:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setRowSpacing:(double)arg0;
- (long long)column;
- (double)rowSpacing;
- (id)dataArray;
- (void)setDataArray:(id)arg0;
- (void)onDisappear;
- (void)renderView:(id)arg0;
- (void)onAppear;
- (void)setColumn:(long long)arg0;

@end
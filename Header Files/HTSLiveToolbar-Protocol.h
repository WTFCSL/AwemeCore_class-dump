//
//     Generated by private class-dump
//

@protocol HTSLiveToolbar

- (BOOL)containItem:(id)arg0;
- (void)removeItemWith:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfItemInRoom:(id)arg0;
- (id)viewOfItem:(id)arg0;
- (id)imageViewOfItemIdentifier:(id)arg0;
- (id)itemWith:(id)arg0;
- (long long)redDotCountForItem:(id)arg0;
- (void)setRedDotCount:(long long)arg0 forItem:(id)arg1;
- (void)insertItem:(id)arg0 asExtendedFor:(id)arg1;
- (id)findItem:(id)arg0;
- (void)monitorToolbarTrace;
- (void)showForLanscape;
- (void)hideForLanscape;
- (void)setShouldReloadAfterChange:(BOOL)arg0;
- (void)updateToolbarNewStyle:(BOOL)arg0 isAnchor:(BOOL)arg1;
- (id)currentItemIdentifiers;
- (unsigned long long)maxSlotCount;
- (void)setMaxSlotCount:(unsigned long long)arg0;
- (void)showItemWith:(id)arg0 highLightItems:(id)arg1;
- (BOOL)containItem:(id)arg0 asExtendedFor:(id)arg1;
- (void)doCollapseWithCompletion:(id /* block */)arg0;
- (BOOL)containComponentWithoutExpand:(int)arg0;
- (BOOL)containItemWithoutExpand:(id)arg0;
- (void)showCustomWebpImage:(id)arg0;
- (void)clearExtendItemCache:(id)arg0;
- (void)insertItem:(id)arg0 withPositionStr:(id)arg1;
- (void)hideExpandedToolbarIfExist;
- (id)currentItemComponentType;
- (void)startTransaction:(id /* block */)arg0;
- (void)removeItem:(int)arg0;
- (void)reload;
- (BOOL)isFull;
- (void)show;
- (void)hide;
- (struct CGSize { double x0; double x1; })size;
- (void)insertItem:(id)arg0;
- (void)orientationChanged:(long long)arg0;
- (void)doCollapse;

@end
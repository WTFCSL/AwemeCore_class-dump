//
//     Generated by private class-dump
//

@interface FlowKit.FlowMarkdownTableView : UIView <UIContextMenuInteractionDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ interactLink;
    void /* unknown type, empty encoding */ listItemPreLabel;
    void /* unknown type, empty encoding */ colletionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuInteraction;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ tableData;
    void /* unknown type, empty encoding */ layoutInfo;
    void /* unknown type, empty encoding */ direction;
}

- (id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1;
- (id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end

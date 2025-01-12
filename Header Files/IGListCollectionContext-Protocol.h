//
//     Generated by private class-dump
//

@protocol IGListCollectionContext <NSObject>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } adjustedContainerInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } insetContainerSize;

- (id)dequeueReusableCellOfClass:(Class)arg0 withReuseIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg0 forSectionController:(id)arg1 class:(Class)arg2 atIndex:(long long)arg3;
- (void)invalidateLayoutForSectionController:(id)arg0 completion:(id /* block */)arg1;
- (void)scrollToSectionController:(id)arg0 atIndex:(long long)arg1 scrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)cellForItemAtIndex:(long long)arg0 sectionController:(id)arg1;
- (void)performBatchAnimated:(BOOL)arg0 updates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)visibleCellsForSectionController:(id)arg0;
- (id)visibleIndexPathsForSectionController:(id)arg0;
- (id)dequeueReusableCellOfClass:(Class)arg0 forSectionController:(id)arg1 atIndex:(long long)arg2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerInset;
- (long long)indexForCell:(id)arg0 sectionController:(id)arg1;
- (struct CGSize { double x0; double x1; })containerSizeForSectionController:(id)arg0;
- (void)deselectItemAtIndex:(long long)arg0 sectionController:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemAtIndex:(long long)arg0 sectionController:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (id)dequeueReusableCellWithNibName:(id)arg0 bundle:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellFromStoryboardWithIdentifier:(id)arg0 forSectionController:(id)arg1 atIndex:(long long)arg2;
- (id)dequeueReusableSupplementaryViewFromStoryboardOfKind:(id)arg0 withIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg0 forSectionController:(id)arg1 nibName:(id)arg2 bundle:(id)arg3 atIndex:(long long)arg4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedContainerInset;
- (struct CGSize { double x0; double x1; })insetContainerSize;
- (struct CGSize { double x0; double x1; })containerSize;

@end

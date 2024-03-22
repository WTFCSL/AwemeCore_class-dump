//
//     Generated by private class-dump
//

@class NSString, AWELiveSoloKTVDetailListDiffableModel;

@interface AWELiveSoloKTVDetailListSectionController : IGListSectionController <IGListDisplayDelegate> {
    id /* block */ _didSelectItemAction;
    AWELiveSoloKTVDetailListDiffableModel *_object;
    long long _numberOfCellsPerRow;
    struct CGSize { double width; double height; } _awemeCellSize;
    struct CGSize { double width; double height; } _lastCellSize;
}

@property (retain, nonatomic) AWELiveSoloKTVDetailListDiffableModel *object;
@property (nonatomic) long long numberOfCellsPerRow;
@property (nonatomic) struct CGSize { double width; double height; } awemeCellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;
@property (copy, nonatomic) id /* block */ didSelectItemAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)didUpdateToObject:(id)arg0;
- (long long)numberOfCellsPerRow;
- (void)setNumberOfCellsPerRow:(long long)arg0;
- (struct CGSize { double x0; double x1; })awemeCellSize;
- (void)configureAwemeCell:(id)arg0 withModel:(id)arg1;
- (struct CGSize { double x0; double x1; })awemeCellSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })lastCellSize:(struct CGSize { double x0; double x1; })arg0;
- (long long)numberOfCellsPerRowWithSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })lastCellSize;
- (void)setAwemeCellSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setLastCellSize:(struct CGSize { double x0; double x1; })arg0;
- (id /* block */)didSelectItemAction;
- (void)setDidSelectItemAction:(id /* block */)arg0;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (void)setObject:(id)arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end

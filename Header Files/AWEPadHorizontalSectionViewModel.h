//
//     Generated by private class-dump
//

@class AWEPadHorizontalSectionInnerViewModel, AWEPadHorizontalCellController, NSNumber;

@interface AWEPadHorizontalSectionViewModel : AWEPadBaseSectionViewModel {
    AWEPadHorizontalSectionInnerViewModel *_innerSectionViewModel;
    NSNumber *_scrollOffsetX;
    id /* block */ _handleForScrollToCollectionTop;
    id /* block */ _scrollViewDidScrollToEndAction;
    id /* block */ _scrollViewDidDragged;
    Class _innerSectionViewModelClazz;
    AWEPadHorizontalCellController *_horizontalCellController;
}

@property (retain, nonatomic) AWEPadHorizontalSectionInnerViewModel *innerSectionViewModel;
@property (retain, nonatomic) AWEPadHorizontalCellController *horizontalCellController;
@property (retain, nonatomic) NSNumber *scrollOffsetX;
@property (copy, nonatomic) id /* block */ handleForScrollToCollectionTop;
@property (copy, nonatomic) id /* block */ scrollViewDidScrollToEndAction;
@property (copy, nonatomic) id /* block */ scrollViewDidDragged;
@property (retain, nonatomic) Class innerSectionViewModelClazz;

- (void)removeModels:(id)arg0 animated:(BOOL)arg1 sync:(BOOL)arg2;
- (id)modelsArray;
- (void)replaceByModels:(id)arg0;
- (void)updateByModels:(id)arg0 animated:(BOOL)arg1 sync:(BOOL)arg2;
- (void)replaceByModels:(id)arg0 animated:(BOOL)arg1 sync:(BOOL)arg2;
- (void)appendModels:(id)arg0 animated:(BOOL)arg1 sync:(BOOL)arg2;
- (void)removeAllModels:(BOOL)arg0 sync:(BOOL)arg1;
- (void)insertModel:(id)arg0 atIndex:(long long)arg1 animated:(BOOL)arg2 sync:(BOOL)arg3;
- (void)setScrollViewDidDragged:(id /* block */)arg0;
- (id)innerSectionViewModel;
- (void)setInnerSectionViewModel:(id)arg0;
- (void)setHandleForScrollToCollectionTop:(id /* block */)arg0;
- (id)scrollOffsetX;
- (void)setScrollOffsetX:(id)arg0;
- (void)triggerCollectionViewScrollToTop;
- (id /* block */)scrollViewDidScrollToEndAction;
- (id)horizontalCellController;
- (Class)innerSectionViewModelClazz;
- (id /* block */)handleForScrollToCollectionTop;
- (void)setScrollViewDidScrollToEndAction:(id /* block */)arg0;
- (id /* block */)scrollViewDidDragged;
- (void)setInnerSectionViewModelClazz:(Class)arg0;
- (void)setHorizontalCellController:(id)arg0;
- (void).cxx_destruct;

@end

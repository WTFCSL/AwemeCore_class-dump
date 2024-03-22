//
//     Generated by private class-dump
//

@class IESLiveInteractionOptionListBubbleViewModel, NSString, UIImageView, UICollectionView, UIView;

@interface IESLiveInteractionOptionListBubbleView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    IESLiveInteractionOptionListBubbleViewModel *_viewModel;
    UIView *_container;
    UIImageView *_anchorArrow;
    UIView *_shadow;
    UICollectionView *_collectionView;
    id /* block */ _willSelect;
    id /* block */ _didSelect;
    id /* block */ _didHide;
}

@property (retain, nonatomic) IESLiveInteractionOptionListBubbleViewModel *viewModel;
@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *anchorArrow;
@property (retain, nonatomic) UIView *shadow;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ willSelect;
@property (copy, nonatomic) id /* block */ didSelect;
@property (copy, nonatomic) id /* block */ didHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDidSelect:(id /* block */)arg0;
- (void)setDidHide:(id /* block */)arg0;
- (id)initWithViewModel:(id)arg0 container:(id)arg1;
- (void)popupAtBottomOf:(id)arg0 willSelect:(id /* block */)arg1 didSelect:(id /* block */)arg2 didHide:(id /* block */)arg3;
- (void)setWillSelect:(id /* block */)arg0;
- (id)anchorArrow;
- (void)didTapAtEmptyArea;
- (void)setAnchorArrow:(id)arg0;
- (id)container;
- (void)dismiss;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setContainer:(id)arg0;
- (id)shadow;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setShadow:(id)arg0;
- (id /* block */)didSelect;
- (id /* block */)willSelect;
- (id /* block */)didHide;

@end

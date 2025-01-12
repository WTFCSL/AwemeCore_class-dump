//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, IESECListKitBaseListSectionViewModel, IESECListKitListSectionSeparatorModel;
@protocol IESECListKitBaseListSectionControllerHook, IESECListKitListSectionControllerDelegate;

@interface IESECListKitBaseListSectionController : IGListSectionController <IESECListKitBaseListSectionContext, IGListSupplementaryViewSource, IGListDisplayDelegate, IGListWorkingRangeDelegate, IESECListKitBaseListSectionControllerOverride> {
    BOOL _preventUpdateLayout;
    BOOL _updateModelsWhenMoving;
    BOOL _triggerViewDidAppear;
    IESECListKitBaseListSectionViewModel *_viewModel;
    NSArray *_modelsArray;
    id<IESECListKitListSectionControllerDelegate> _sectionDelegate;
    UICollectionView *_collectionView;
    long long _state;
    id /* block */ _canUpdateLayout;
    id /* block */ _currentContentOffset;
    id /* block */ _syncUpdate;
    id _interactiveModel;
}

@property (class, retain, nonatomic) IESECListKitListSectionSeparatorModel *separatorModel;
@property (class, retain, nonatomic) id<IESECListKitBaseListSectionControllerHook> hook;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showSeparator;
@property (retain, nonatomic) IESECListKitBaseListSectionViewModel *viewModel;
@property (copy, nonatomic) NSArray *modelsArray;
@property (nonatomic) long long state;
@property (nonatomic) BOOL updateModelsWhenMoving;
@property (copy, nonatomic) id /* block */ canUpdateLayout;
@property (copy, nonatomic) id /* block */ currentContentOffset;
@property (copy, nonatomic) id /* block */ syncUpdate;
@property (nonatomic) BOOL triggerViewDidAppear;
@property (retain, nonatomic) id interactiveModel;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentContainerContentOffset;
@property (weak, nonatomic) id<IESECListKitListSectionControllerDelegate> sectionDelegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;
+ (id)separatorModel;
+ (void)setSeparatorModel:(id)arg0;
+ (void)setupDefaultSeparatorHeight:(double)arg0 separatorInsets:(struct IESECListKitSeparatorInsets { double x0; double x1; })arg1 separatorColor:(id)arg2;
+ (id)hook;
+ (void)setHook:(id)arg0;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didBindSectionViewModel;
- (void)setSectionDelegate:(id)arg0;
- (id)modelsArray;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (void)configSupplementaryHeaderView:(id)arg0;
- (void)updateLayout:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)reloadSectionAnimated:(BOOL)arg0 sync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)reloadAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)configSupplementaryFooterView:(id)arg0;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)updateSectionAnimated:(BOOL)arg0 sync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)sectionWillDisplaySupplementaryView:(id)arg0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)arg0;
- (void)updateFinalLayoutAttributes:(id)arg0 forDisappearingCellAtIndex:(long long)arg1 isDeleted:(BOOL)arg2;
- (void)setModelsArray:(id)arg0;
- (id)sectionDelegate;
- (void)p_updateCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)updateModelsArray;
- (void)didHighlightItemAtIndex:(long long)arg0 model:(id)arg1;
- (void)didUnhighlightItemAtIndex:(long long)arg0 model:(id)arg1;
- (BOOL)enableMovementAtIndex:(long long)arg0 model:(id)arg1;
- (BOOL)updateModelsWhenMoving;
- (void)updateModelsAfterInteractiveMovement;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)setUpdateModelsWhenMoving:(BOOL)arg0;
- (void)syncReloadAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)shouldHighlightItemAtIndex:(long long)arg0 model:(id)arg1;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndex:(long long)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 sectionControllerWillEnterWorkingRange:(id)arg1;
- (void)listAdapter:(id)arg0 sectionControllerDidExitWorkingRange:(id)arg1;
- (void)updateInitialLayoutAttributes:(id)arg0 forAppearingCellAtIndex:(long long)arg1 isInserted:(BOOL)arg2;
- (void)didUpdateToObject:(id)arg0;
- (void)didHighlightItemAtIndex:(long long)arg0;
- (void)didUnhighlightItemAtIndex:(long long)arg0;
- (BOOL)canMoveItemAtIndex:(long long)arg0;
- (BOOL)shouldHighlightItemAtIndex:(long long)arg0;
- (struct CGPoint { double x0; double x1; })currentContainerContentOffset;
- (void)setInteractiveModel:(id)arg0;
- (id /* block */)canUpdateLayout;
- (void)setCanUpdateLayout:(id /* block */)arg0;
- (void)setCurrentContentOffset:(id /* block */)arg0;
- (id /* block */)syncUpdate;
- (void)setSyncUpdate:(id /* block */)arg0;
- (BOOL)triggerViewDidAppear;
- (void)setTriggerViewDidAppear:(BOOL)arg0;
- (id)interactiveModel;
- (void)reloadAnimated:(BOOL)arg0 sync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateAnimated:(BOOL)arg0 sync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateWithBlock:(id /* block */)arg0 animated:(BOOL)arg1 sync:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)syncUpdateAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)scrollToItemAtIndex:(long long)arg0 scrollPosition:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setItemRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1 atIndex:(long long)arg2;
- (long long)spanSizeFor:(long long)arg0;
- (id)visibleCells;
- (long long)numberOfItems;
- (id)init;
- (id)separatorColor;
- (void).cxx_destruct;
- (id)collectionView;
- (BOOL)showSeparator;
- (long long)state;
- (void)setState:(long long)arg0;
- (void)setCollectionView:(id)arg0;
- (Class)cellClass;
- (double)separatorHeight;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setShowSeparator:(BOOL)arg0;
- (id)modelAtIndex:(long long)arg0;
- (void)didSelectItemAtIndex:(long long)arg0;
- (id)visibleIndexPaths;
- (void)moveObjectFromIndex:(long long)arg0 toIndex:(long long)arg1;
- (struct IESECListKitSeparatorInsets { double x0; double x1; })separatorInsets;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;
- (id /* block */)currentContentOffset;
- (id)cellAtIndex:(long long)arg0;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end

//
//     Generated by private class-dump
//

@class UIView, NSString, ACCSequencePreviewViewConfig, UIButton, ACCReorderableForCollectionViewFlowLayout, CAGradientLayer, UICollectionView, NSIndexPath;
@protocol ACCSequencePreviewViewDataSource, ACCSequencePreViewDeleteViewProtocol, ACCSequencePreviewViewDelegate;

@interface ACCSequencePreviewView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, ACCReorderableForCollectionViewDataSource, ACCReorderableForCollectionViewDelegateFlowLayout> {
    BOOL _isDeleteAction;
    BOOL _allowAutoScroll;
    BOOL _isAnimating;
    BOOL _shouldShowAddButtonCollectionViewCell;
    id<ACCSequencePreviewViewDelegate> _delegate;
    id<ACCSequencePreviewViewDataSource> _dataSource;
    UIView<ACCSequencePreViewDeleteViewProtocol> *_deleteView;
    UICollectionView *_collectionView;
    UIButton *_addButton;
    ACCSequencePreviewViewConfig *_config;
    ACCReorderableForCollectionViewFlowLayout *_previewLayout;
    UIView *_currentView;
    UIView *_gradientContainerView;
    CAGradientLayer *_gradientLayer;
    NSIndexPath *_selectedItemIndexPath;
    struct CGPoint { double x; double y; } _lastContentOffsetBeforeSmallAnimation;
}

@property (retain, nonatomic) ACCSequencePreviewViewConfig *config;
@property (retain, nonatomic) ACCReorderableForCollectionViewFlowLayout *previewLayout;
@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *gradientContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSIndexPath *selectedItemIndexPath;
@property (nonatomic) BOOL isDeleteAction;
@property (nonatomic) BOOL allowAutoScroll;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffsetBeforeSmallAnimation;
@property (nonatomic) BOOL shouldShowAddButtonCollectionViewCell;
@property (weak, nonatomic) id<ACCSequencePreviewViewDelegate> delegate;
@property (weak, nonatomic) id<ACCSequencePreviewViewDataSource> dataSource;
@property (retain, nonatomic) UIView<ACCSequencePreViewDeleteViewProtocol> *deleteView;
@property (retain, nonatomic) UIButton *addButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(unsigned long long)arg0;
- (void)setSelectedItemIndexPath:(id)arg0;
- (id)selectedItemIndexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (id)deleteView;
- (void)setDeleteView:(id)arg0;
- (id)gradientContainerView;
- (void)setGradientContainerView:(id)arg0;
- (void)enableAutoScroll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrameWithMaxWidth;
- (void)p_setGradientMaskLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrameWithWidth:(double)arg0;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 willBeginDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 didBeginDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 didDragItemAtIndexPath:(id)arg2 currentView:(id)arg3;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 willEndDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 didEndDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 itemAtIndexPath:(id)arg1 willMoveToIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 itemAtIndexPath:(id)arg1 didMoveToIndexPath:(id)arg2;
- (BOOL)accReorderableCollectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1;
- (BOOL)accReorderableCollectionView:(id)arg0 itemAtIndexPath:(id)arg1 canMoveToIndexPath:(id)arg2;
- (void)showSmallAnimation:(BOOL)arg0;
- (void)showExpansionAnimation:(BOOL)arg0;
- (void)clickOnAddButton;
- (void)layoutcollectionView;
- (BOOL)allowAutoScroll;
- (id)buildPreviewLayoutWithConfig:(id)arg0;
- (void)setPreviewLayout:(id)arg0;
- (id)buildGradientContainerView;
- (id)previewLayout;
- (id)buildCollectionViewWithLayout:(id)arg0 cellClass:(Class)arg1 identifier:(id)arg2;
- (id)buildAddButton;
- (BOOL)enableAddEmbededInCollectionView;
- (double)previewCollectionWidth;
- (id)addButtonImageName;
- (BOOL)shouldShowAddButtonCollectionViewCell;
- (void)setLastContentOffsetBeforeSmallAnimation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setShouldShowAddButtonCollectionViewCell:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })lastContentOffsetBeforeSmallAnimation;
- (void)setAllowAutoScroll:(BOOL)arg0;
- (void)unfoldGradientLayer;
- (void)foldGradientLayer;
- (void)updateDeleteStateWithCurrentView:(id)arg0;
- (void)collectionViewMasksToBounds:(BOOL)arg0;
- (void)setIsDeleteAction:(BOOL)arg0;
- (BOOL)isDeleteAction;
- (void)reloadItemAtIndexPath:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (BOOL)isAnimating;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)gradientLayer;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setConfig:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)config;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (void)scrollToIndex:(long long)arg0 animated:(BOOL)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg0;
- (id)currentView;
- (void)setCurrentView:(id)arg0;

@end

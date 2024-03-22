//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UIView, NSMutableArray, UIButton;
@protocol IESLiveCommentWidgetExpandEntryViewDelegate;

@interface IESLiveCommentWidgetExpandEntryView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _folded;
    BOOL _useFoldableStyle;
    BOOL _needFold;
    BOOL _unfoldEntriesSortReverse;
    id<IESLiveCommentWidgetExpandEntryViewDelegate> _delegate;
    NSArray *_entryItems;
    UICollectionView *_collectionView;
    UIView *_gradientView;
    NSMutableArray *_foldedEntryItems;
    NSMutableArray *_unfoldEntryItems;
    unsigned long long _defaultEntryType;
    double _itemSpacing;
    UIView *_foldView;
    UIButton *_foldButton;
    UIView *_foldRetDot;
}

@property (nonatomic) BOOL useFoldableStyle;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) NSMutableArray *foldedEntryItems;
@property (retain, nonatomic) NSMutableArray *unfoldEntryItems;
@property (copy, nonatomic) NSArray *entryItems;
@property (nonatomic) unsigned long long defaultEntryType;
@property (nonatomic) double itemSpacing;
@property (retain, nonatomic) UIView *foldView;
@property (retain, nonatomic) UIButton *foldButton;
@property (retain, nonatomic) UIView *foldRetDot;
@property (nonatomic) BOOL needFold;
@property (nonatomic) BOOL unfoldEntriesSortReverse;
@property (weak, nonatomic) id<IESLiveCommentWidgetExpandEntryViewDelegate> delegate;
@property (nonatomic) BOOL folded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedFold:(BOOL)arg0;
- (BOOL)needFold;
- (id)entryItems;
- (void)setEntryItems:(id)arg0;
- (id)foldButton;
- (void)setFolded:(BOOL)arg0;
- (void)setFoldButton:(id)arg0;
- (id)foldView;
- (void)setFoldView:(id)arg0;
- (unsigned long long)defaultEntryType;
- (id)initWithDefaultEntryType:(unsigned long long)arg0 withFoldableStyle:(BOOL)arg1;
- (void)selectDefaultEntryIfAvailable;
- (void)setDefaultEntryType:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeOnFoledMode;
- (void)loadEntryItems;
- (BOOL)useFoldableStyle;
- (void)foldBtnClick:(id)arg0;
- (void)setFoldRetDot:(id)arg0;
- (id)foldRetDot;
- (void)trackEntrysShow;
- (id)checkFoledItemsHasSelected;
- (id)unfoldEntryItems;
- (id)foldedEntryItems;
- (void)clickFoldBtn:(id)arg0 withAnimation:(BOOL)arg1;
- (void)reloadDataWithFold:(BOOL)arg0;
- (void)doFoldAction:(id /* block */)arg0 finishBlock:(id /* block */)arg1 withAnimation:(BOOL)arg2;
- (BOOL)checkFoldedItemsShouldShowRedDot;
- (void)trackFoldBtnClick:(BOOL)arg0;
- (void)trackEntryClickWithItem:(id)arg0;
- (void)expandEntryHasEntered:(id)arg0;
- (void)expandEntryDisplayed:(id)arg0;
- (void)sortEntryWithEntries:(id)arg0 reverse:(BOOL)arg1;
- (void)setRedDotForItems:(id)arg0;
- (void)setUnfoldEntryItems:(id)arg0;
- (void)setFoldedEntryItems:(id)arg0;
- (long long)priorityForExpandEntryItem:(id)arg0;
- (void)calculateItemSpacing;
- (long long)calculatePriorityForExpandEntryItem:(id)arg0;
- (double)calculateWidthForEntryCount:(long long)arg0 itemSpacing:(double)arg1;
- (id)entryTagFromEntryType:(unsigned long long)arg0 componentType:(int)arg1;
- (void)setUseFoldableStyle:(BOOL)arg0;
- (BOOL)unfoldEntriesSortReverse;
- (void)setUnfoldEntriesSortReverse:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)resetSelection;
- (void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1;
- (void)willMoveToSuperview:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setItemSpacing:(double)arg0;
- (void)setGradientView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (void)setupView;
- (BOOL)folded;

@end
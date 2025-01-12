//
//     Generated by private class-dump
//

@class UISelectionFeedbackGenerator, NSArray, UICollectionView, ACCStickerPannelUIConfig, NSString, NSIndexPath;
@protocol AWEVideoEditStickerBottomBarViewControllerDelegate;

@interface AWEVideoEditStickerBottomBarViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _showText;
    BOOL _disableLeftScrollOutOfBounds;
    BOOL _disableRightScrollOutOfBounds;
    NSArray *_categories;
    id<AWEVideoEditStickerBottomBarViewControllerDelegate> _delegate;
    ACCStickerPannelUIConfig *_uiConfig;
    UICollectionView *_collectionView;
    NSIndexPath *_selectedIndexPath;
    UISelectionFeedbackGenerator *_selectionFeedback;
    NSIndexPath *_lastTouchedIndexPath;
    NSIndexPath *_lastTappedIndexPath;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback;
@property (retain, nonatomic) NSIndexPath *lastTouchedIndexPath;
@property (retain, nonatomic) NSIndexPath *lastTappedIndexPath;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) BOOL showText;
@property (weak, nonatomic) id<AWEVideoEditStickerBottomBarViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableLeftScrollOutOfBounds;
@property (nonatomic) BOOL disableRightScrollOutOfBounds;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bottomBarHeight;
+ (double)collectionViewHeight;

- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (void)setShowText:(BOOL)arg0;
- (void)selectCategory:(id)arg0;
- (id)selectionFeedback;
- (void)setSelectionFeedback:(id)arg0;
- (void)setDisableLeftScrollOutOfBounds:(BOOL)arg0;
- (void)setDisableRightScrollOutOfBounds:(BOOL)arg0;
- (void)moveItemAtIndexPathToCenter:(id)arg0;
- (void)tapEngineNotify;
- (id)lastTappedIndexPath;
- (void)setLastTappedIndexPath:(id)arg0;
- (BOOL)disableLeftScrollOutOfBounds;
- (BOOL)disableRightScrollOutOfBounds;
- (id)lastTouchedIndexPath;
- (void)setLastTouchedIndexPath:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)handlePan:(id)arg0;
- (id)categories;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCategories:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (double)horizontalInset;
- (void)selectItemAtIndexPath:(id)arg0;
- (BOOL)showText;

@end

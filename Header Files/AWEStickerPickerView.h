//
//     Generated by private class-dump
//

@class UIView, ACCPanelHandlebarView, NSArray, NSString, AWEStickerPickerStickerBaseCell, AWEStickerPickerModel, UICollectionView, AWEStickerPickerCategoryTabView, AWEStickerPickerSearchCollectionViewCell;
@protocol AWEStickerPickerUIConfigurationProtocol, AWEStickerPickerViewDelegate;

@interface AWEStickerPickerView : UIView <ACCPanelHandlebarViewDelegate, AWEStickerPickerCategoryTabViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, AWEStickerPickerCollectionViewCellDelegate> {
    BOOL _isOnRecordingPage;
    id<AWEStickerPickerViewDelegate> _delegate;
    AWEStickerPickerModel *_model;
    long long _defaultSelectedIndex;
    AWEStickerPickerSearchCollectionViewCell *_searchTab;
    UIView *_backgroundView;
    ACCPanelHandlebarView *_handlebarView;
    AWEStickerPickerCategoryTabView *_tabView;
    UICollectionView *_stickerCollectionView;
    id<AWEStickerPickerUIConfigurationProtocol> _UIConfig;
    NSArray *_categoryModels;
    AWEStickerPickerStickerBaseCell *_currentSelectedCell;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) ACCPanelHandlebarView *handlebarView;
@property (retain, nonatomic) AWEStickerPickerCategoryTabView *tabView;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (retain, nonatomic) id<AWEStickerPickerUIConfigurationProtocol> UIConfig;
@property (copy, nonatomic) NSArray *categoryModels;
@property (retain, nonatomic) AWEStickerPickerStickerBaseCell *currentSelectedCell;
@property (weak, nonatomic) id<AWEStickerPickerViewDelegate> delegate;
@property (retain, nonatomic) AWEStickerPickerModel *model;
@property (nonatomic) long long defaultSelectedIndex;
@property (nonatomic) BOOL isOnRecordingPage;
@property (retain, nonatomic) AWEStickerPickerSearchCollectionViewCell *searchTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUIConfig:(id)arg0;
- (void)updateLoadingWithTabIndex:(long long)arg0;
- (void)updateFetchFinishWithTabIndex:(long long)arg0;
- (void)updateSelectedStickerForId:(id)arg0;
- (void)setDefaultSelectedIndex:(long long)arg0;
- (void)setUIConfig:(id)arg0;
- (void)setCategoryModels:(id)arg0;
- (id)UIConfig;
- (void)categoryTabView:(id)arg0 didSelectItemAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setupStickerCollectionView;
- (void)setupTabViewWithUIConfig:(id)arg0;
- (id)stickerCollectionView;
- (id)currentSelectedCell;
- (void)setCurrentSelectedCell:(id)arg0;
- (void)setTabView:(id)arg0;
- (void)clearStickerApplyButtonClicked:(id)arg0;
- (void)setStickerCollectionView:(id)arg0;
- (void)notifySelectedTabIndex:(long long)arg0;
- (void)executeFavoriteAnimationForIndex:(id)arg0;
- (void)selectTabForEffectId:(id)arg0 animated:(BOOL)arg1;
- (void)selectTabWithCategory:(id)arg0;
- (void)updateFetchErrorWithTabIndex:(long long)arg0;
- (void)updateSelectedIndex:(long long)arg0;
- (BOOL)stickerPickerCollectionViewCell:(id)arg0 isStickerSelected:(id)arg1;
- (void)stickerPickerCollectionViewCell:(id)arg0 didSelectSticker:(id)arg1 category:(id)arg2 indexPath:(id)arg3;
- (void)stickerPickerCollectionViewCell:(id)arg0 willDisplaySticker:(id)arg1 indexPath:(id)arg2;
- (void)handlebar:(id)arg0 handlePanGesture:(id)arg1;
- (void)setIsOnRecordingPage:(BOOL)arg0;
- (void)reloadSelectedCategoryListIfNeeded;
- (BOOL)isOnRecordingPage;
- (void)stickerPickerCollectionViewCell:(id)arg0 didShowFirstScreenStickerIconsDuration:(long long)arg1 averageDuration:(long long)arg2 isFirstScreen:(BOOL)arg3 forStickerCategory:(id)arg4;
- (BOOL)shouldSupportSearchFeature;
- (void)updateSelectedStatusWithSticker:(id)arg0;
- (id)handlebarView;
- (void)setHandlebarView:(id)arg0;
- (void)setupHandlebarView;
- (void)notifySearchViewToShowKeyboard;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)backgroundView;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)model;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (void)updateSubviewsAlpha:(double)arg0;
- (long long)defaultSelectedIndex;
- (void)handlePanGesture:(id)arg0;
- (void)setSearchTab:(id)arg0;
- (id)searchTab;
- (void)updateCategory:(id)arg0;
- (id)tabView;
- (void)setupBackgroundView;
- (id)categoryModels;

@end

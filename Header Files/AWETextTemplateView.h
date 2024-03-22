//
//     Generated by private class-dump
//

@class AWETextTemplateCategoryTabView, NSArray, UICollectionView, AWETextTemplateBaseCell, AWETextTemplateModel, AWEVideoPublishViewModel, NSString;
@protocol AWETextTemplateUIConfigurationProtocol, AWETextTemplateViewDelegate;

@interface AWETextTemplateView : UIView <AWETextTemplateCategoryTabViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AWETextTemplateCollectionViewCellDelegate> {
    BOOL _isOnRecordingPage;
    id<AWETextTemplateViewDelegate> _delegate;
    AWETextTemplateModel *_model;
    AWEVideoPublishViewModel *_publishViewModel;
    UICollectionView *_stickerCollectionView;
    long long _defaultSelectedIndex;
    AWETextTemplateCategoryTabView *_tabView;
    NSArray *_categoryModels;
    AWETextTemplateBaseCell *_currentSelectedCell;
    id<AWETextTemplateUIConfigurationProtocol> _UIConfig;
}

@property (retain, nonatomic) AWETextTemplateCategoryTabView *tabView;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (copy, nonatomic) NSArray *categoryModels;
@property (retain, nonatomic) AWETextTemplateBaseCell *currentSelectedCell;
@property (retain, nonatomic) id<AWETextTemplateUIConfigurationProtocol> UIConfig;
@property (weak, nonatomic) id<AWETextTemplateViewDelegate> delegate;
@property (retain, nonatomic) AWETextTemplateModel *model;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) long long defaultSelectedIndex;
@property (nonatomic) BOOL isOnRecordingPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
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
- (void)selectTabForEffectId:(id)arg0 animated:(BOOL)arg1;
- (void)selectTabWithCategory:(id)arg0;
- (void)updateFetchErrorWithTabIndex:(long long)arg0;
- (id)selectedTabName;
- (void)updateSelectedIndex:(long long)arg0;
- (void)setPublishViewModel:(id)arg0;
- (BOOL)stickerPickerCollectionViewCell:(id)arg0 isStickerSelected:(id)arg1;
- (void)stickerPickerCollectionViewCell:(id)arg0 didSelectSticker:(id)arg1 category:(id)arg2 indexPath:(id)arg3;
- (void)stickerPickerCollectionViewCell:(id)arg0 willDisplaySticker:(id)arg1 indexPath:(id)arg2;
- (id)initWithUIConfig:(id)arg0 publishModel:(id)arg1;
- (Class)stickerCellClass;
- (void)setIsOnRecordingPage:(BOOL)arg0;
- (BOOL)isOnRecordingPage;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)model;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)updateSubviewsAlpha:(double)arg0;
- (long long)defaultSelectedIndex;
- (BOOL)shouldShowTabBar;
- (void)updateCategory:(id)arg0;
- (id)tabView;
- (id)categoryModels;

@end
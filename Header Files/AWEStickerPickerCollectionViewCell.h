//
//     Generated by private class-dump
//

@class AWEStickerPickerFootView, NSString, UICollectionView, UIView, AWEStickerCategoryModel;
@protocol AWEStickerPickerCollectionViewCellDelegate, AWEStickerPickerEffectUIConfigurationProtocol, AWEStickerPickerEffectErrorViewProtocol, AWEStickerPickerEffectOverlayProtocol;

@interface AWEStickerPickerCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, AWEStickerPickerStickerCellAppearanceDelegate> {
    BOOL _isScrolledManually;
    BOOL _firstScreenIconsHaveShow;
    BOOL _enableTitleAnimationDegrade;
    UICollectionView *_stickerCollectionView;
    AWEStickerCategoryModel *_categoryModel;
    id<AWEStickerPickerCollectionViewCellDelegate> _delegate;
    UIView<AWEStickerPickerEffectOverlayProtocol> *_loadingView;
    UIView<AWEStickerPickerEffectErrorViewProtocol> *_errorView;
    UIView *_errorViewContainer;
    UIView<AWEStickerPickerEffectOverlayProtocol> *_emptyView;
    id<AWEStickerPickerEffectUIConfigurationProtocol> _UIConfig;
    AWEStickerPickerFootView *_footerView;
    double _prefetchRemainHeight;
    double _beginLoadStickerIconTime;
    double _firstScreenLoadFinishTime;
}

@property (class, retain, nonatomic) Class stickerCellClass;

@property (retain, nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> *emptyView;
@property (retain, nonatomic) id<AWEStickerPickerEffectUIConfigurationProtocol> UIConfig;
@property (nonatomic) BOOL isScrolledManually;
@property (retain, nonatomic) AWEStickerPickerFootView *footerView;
@property (nonatomic) double prefetchRemainHeight;
@property (nonatomic) BOOL firstScreenIconsHaveShow;
@property (nonatomic) double beginLoadStickerIconTime;
@property (nonatomic) double firstScreenLoadFinishTime;
@property (nonatomic) BOOL enableTitleAnimationDegrade;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (retain, nonatomic) AWEStickerCategoryModel *categoryModel;
@property (weak, nonatomic) id<AWEStickerPickerCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stickerCellClass;
+ (void)setStickerCellClass:(Class)arg0;
+ (id)identifier;

- (void)updateUIConfig:(id)arg0;
- (void)hideErrorView;
- (void)setCategoryModel:(id)arg0;
- (void)setUIConfig:(id)arg0;
- (id)UIConfig;
- (void)hideEmptyView;
- (id)categoryModel;
- (void)showEmptyView;
- (void)updateIconImageIfNeededWithSticker:(id)arg0 forCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setErrorViewContainer:(id)arg0;
- (id)errorViewContainer;
- (void)onErrorTap;
- (id)stickerCollectionView;
- (void)setStickerCollectionView:(id)arg0;
- (void)setBeginLoadStickerIconTime:(double)arg0;
- (BOOL)firstScreenIconsHaveShow;
- (double)beginLoadStickerIconTime;
- (void)setFirstScreenIconsHaveShow:(BOOL)arg0;
- (void)setFirstScreenLoadFinishTime:(double)arg0;
- (void)setEnableTitleAnimationDegrade:(BOOL)arg0;
- (void)setPrefetchRemainHeight:(double)arg0;
- (void)p_clearFootView;
- (id)p_createFootView;
- (BOOL)isSectionEnabled;
- (BOOL)enableTitleAnimationDegrade;
- (id)getCategoryIndexFromSectionPath:(id)arg0;
- (long long)allSectionStickers;
- (double)prefetchRemainHeight;
- (void)didFinishStickerIconShowing;
- (BOOL)isScrolledManually;
- (void)setIsScrolledManually:(BOOL)arg0;
- (double)firstScreenLoadFinishTime;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)footerView;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)prepareForReuse;
- (void)updateStatus:(unsigned long long)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)showLoadingView;
- (void)showErrorView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)hideLoadingView;

@end

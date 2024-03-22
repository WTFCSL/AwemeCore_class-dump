//
//     Generated by private class-dump
//

@class AWESingleStickerDownloader, UIView, AWEVideoEditStickerBottomBarViewController, AWEVideoEditStickerHeaderView, NSString, NSArray, ACCStickerPannelUIConfig, ACCStickerPannelDataConfig, CAGradientLayer, UICollectionView, NSIndexPath;
@protocol AWEVideoEditStickerCollectionVCDelegate, ACCStickerPannelLogger;

@interface AWEVideoEditStickerCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEVideoEditStickerBottomBarViewControllerDelegate> {
    BOOL _hasPreloadedStickers;
    id<AWEVideoEditStickerCollectionVCDelegate> _delegate;
    AWEVideoEditStickerBottomBarViewController *_bottomBarViewController;
    UICollectionView *_collectionView;
    long long _style;
    NSArray *_categories;
    NSArray *_effects;
    double _horizontalInset;
    ACCStickerPannelUIConfig *_uiConfig;
    id<ACCStickerPannelLogger> _logger;
    ACCStickerPannelDataConfig *_dataConfig;
    UIView *_errorView;
    UIView *_containerView;
    AWEVideoEditStickerHeaderView *_headerView;
    CAGradientLayer *_gradientLayer;
    NSIndexPath *_currentSectionIndexPath;
    double _lastContentOffset;
    AWESingleStickerDownloader *_stickerDownloader;
    NSString *_currentTabID;
    struct CGSize { double width; double height; } _itemSize;
}

@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEVideoEditStickerBottomBarViewController *bottomBarViewController;
@property (retain, nonatomic) AWEVideoEditStickerHeaderView *headerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL hasPreloadedStickers;
@property (retain, nonatomic) NSIndexPath *currentSectionIndexPath;
@property (nonatomic) double lastContentOffset;
@property (retain, nonatomic) AWESingleStickerDownloader *stickerDownloader;
@property (copy, nonatomic) NSString *currentTabID;
@property (weak, nonatomic) id<AWEVideoEditStickerCollectionVCDelegate> delegate;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *effects;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double horizontalInset;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataConfig;
- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (void)setDataConfig:(id)arg0;
- (id)stickerDownloader;
- (void)setStickerDownloader:(id)arg0;
- (void)p_fetchData;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (void)p_setupBottomBar;
- (id)logPB;
- (id)currentTabID;
- (void)p_setupHeaderView;
- (void)setBottomBarViewController:(id)arg0;
- (void)setCurrentTabID:(id)arg0;
- (void)p_updateHeaderFrame;
- (void)p_updateUIByStyle;
- (id)bottomBarViewController;
- (void)p_updateSelectedCategoryOnBottomBarWithScrollUp:(BOOL)arg0;
- (void)bottomBarViewControllerDidSelectCategory:(id)arg0 shouldTrack:(BOOL)arg1;
- (id)cellAtIndexPath:(id)arg0;
- (BOOL)shouldShowTextOnBottomBar;
- (void)configureBottomBar;
- (void)preloadFistPageSticker;
- (BOOL)hasPreloadedStickers;
- (void)preloadingInfoStickersWithWifi;
- (void)setHasPreloadedStickers:(BOOL)arg0;
- (void)updateCurrentStyle;
- (id)currentSectionIndexPath;
- (void)setCurrentSectionIndexPath:(id)arg0;
- (id)logger;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (long long)style;
- (id)init;
- (id)categories;
- (id)gradientLayer;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setCategories:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)effects;
- (id)delegate;
- (id)containerView;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setStyle:(long long)arg0;
- (void)setLogger:(id)arg0;
- (void)setEffects:(id)arg0;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setHorizontalInset:(double)arg0;
- (double)horizontalInset;
- (void)configureCollectionView;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (id)stickerType;

@end
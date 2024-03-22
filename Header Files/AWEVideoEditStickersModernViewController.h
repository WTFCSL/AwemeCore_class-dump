//
//     Generated by private class-dump
//

@class UIView, ACCSlidingViewController, NSArray, ACCSlidingTabbarView, ACCStickerPannelUIConfig, ACCStickerPannelDataConfig, NSString, ACCVideoEditStickerDataController;
@protocol ACCStickerPannelLogger, AWEVideoEditStickersVCDelegate, ACCStickerPannelFilter;

@interface AWEVideoEditStickersModernViewController : ACCStickerPannelAnimationVC <ACCSlidingViewControllerDelegate, ACCVideoEditStickerTabViewControllerDelegate, AWEVideoEditStickerVCProtocol> {
    BOOL _isTeenUpgradeEnable;
    BOOL _isLoading;
    BOOL _useTabIcon;
    id<AWEVideoEditStickersVCDelegate> _delegate;
    ACCStickerPannelUIConfig *_uiConfig;
    ACCStickerPannelDataConfig *_dataConfig;
    id<ACCStickerPannelLogger> _logger;
    id<ACCStickerPannelFilter> _pannelFilter;
    ACCSlidingViewController *_slidingViewController;
    ACCSlidingTabbarView *_slidingTabbarView;
    NSArray *_categories;
    NSArray *_titles;
    NSArray *_icons;
    NSArray *_tabVCs;
    NSArray *_tabDatas;
    UIView *_topView;
    UIView *_errorView;
    unsigned long long _currentIndex;
    ACCVideoEditStickerDataController *_dataController;
}

@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabbarView;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *tabVCs;
@property (copy, nonatomic) NSArray *tabDatas;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) ACCVideoEditStickerDataController *dataController;
@property (nonatomic) BOOL useTabIcon;
@property (weak, nonatomic) id<AWEVideoEditStickersVCDelegate> delegate;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (nonatomic) BOOL isTeenUpgradeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)dataConfig;
- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (void)setDataConfig:(id)arg0;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)setSlidingViewController:(id)arg0;
- (void)dismissPanel;
- (void)setSlidingTabbarView:(id)arg0;
- (id)slidingTabbarView;
- (BOOL)isTeenUpgradeEnable;
- (void)setIsTeenUpgradeEnable:(BOOL)arg0;
- (id)pannelFilter;
- (void)setPannelFilter:(id)arg0;
- (void)modernStickerCollectionVC:(id)arg0 didSelectStickerCategory:(id)arg1 atIndex:(long long)arg2 downloadProgressBlock:(id /* block */)arg3 downloadedBlock:(id /* block */)arg4;
- (void)setUseTabIcon:(BOOL)arg0;
- (void)buildTopPullLine;
- (void)buildSlideUI;
- (void)buildErrorView;
- (BOOL)useTabIcon;
- (void)fetchBasicData;
- (id)tabDatas;
- (id)tabVCs;
- (void)setTabVCs:(id)arg0;
- (void)setTabDatas:(id)arg0;
- (id)logger;
- (BOOL)isLoading;
- (id)categories;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (void)setCategories:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCurrentIndex:(unsigned long long)arg0;
- (void)setIcons:(id)arg0;
- (id)icons;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setIsLoading:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setLogger:(id)arg0;
- (BOOL)accessibilityPerformEscape;
- (id)titles;
- (void)setTitles:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;
- (id)dataController;
- (id)errorView;
- (void)setErrorView:(id)arg0;

@end

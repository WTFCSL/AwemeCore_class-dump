//
//     Generated by private class-dump
//

@class ACCVideoEditInfoStickerViewController, ACCSlidingViewController, NSArray, ACCSlidingTabbarView, AWESingleStickerDownloader, UIView, NSString, ACCStickerPannelUIConfig, ACCStickerPannelDataConfig, AWEVideoEditEmojiStickerCollectionViewController;
@protocol ACCStickerPannelLogger, AWEVideoEditStickersVCDelegate, ACCStickerPannelFilter;

@interface AWEVideoEditStickersViewController : ACCStickerPannelAnimationVC <ACCSlidingViewControllerDelegate, AWEVideoEditStickerCollectionVCDelegate, ACCVideoEditInfoStickerVCDelegate, AWEVideoEditStickerVCProtocol> {
    BOOL _isTeenUpgradeEnable;
    id<AWEVideoEditStickersVCDelegate> _delegate;
    NSString *_loadingStickerId;
    ACCStickerPannelUIConfig *_uiConfig;
    ACCStickerPannelDataConfig *_dataConfig;
    id<ACCStickerPannelLogger> _logger;
    id<ACCStickerPannelFilter> _pannelFilter;
    ACCSlidingViewController *_slidingViewController;
    ACCSlidingTabbarView *_slidingTabbarView;
    NSArray *_panels;
    NSArray *_titles;
    NSArray *_categories;
    AWEVideoEditEmojiStickerCollectionViewController *_emojiViewController;
    ACCVideoEditInfoStickerViewController *_modernInfoStickerViewController;
    AWESingleStickerDownloader *_stickerDownloader;
    UIView *_topView;
}

@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabbarView;
@property (copy, nonatomic) NSArray *panels;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) AWEVideoEditEmojiStickerCollectionViewController *emojiViewController;
@property (retain, nonatomic) ACCVideoEditInfoStickerViewController *modernInfoStickerViewController;
@property (retain, nonatomic) AWESingleStickerDownloader *stickerDownloader;
@property (retain, nonatomic) UIView *topView;
@property (weak, nonatomic) id<AWEVideoEditStickersVCDelegate> delegate;
@property (retain, nonatomic) NSString *loadingStickerId;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (nonatomic) BOOL isTeenUpgradeEnable;
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
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)setSlidingViewController:(id)arg0;
- (void)dismissPanel;
- (void)setSlidingTabbarView:(id)arg0;
- (id)slidingTabbarView;
- (BOOL)isTeenUpgradeEnable;
- (void)setIsTeenUpgradeEnable:(BOOL)arg0;
- (id)pannelFilter;
- (void)setPannelFilter:(id)arg0;
- (void)modernStickerCollectionVC:(id)arg0 didSelectSticker:(id)arg1 atIndex:(long long)arg2 categoryName:(id)arg3 tabName:(id)arg4 downloadProgressBlock:(id /* block */)arg5 downloadedBlock:(id /* block */)arg6;
- (void)stickerCollectionViewController:(id)arg0 didSelectSticker:(id)arg1 atIndex:(long long)arg2 categoryName:(id)arg3 tabName:(id)arg4 downloadProgressBlock:(id /* block */)arg5 downloadedBlock:(id /* block */)arg6;
- (void)changeAccessbilityStatus;
- (void)buildVoiceOnView:(BOOL)arg0;
- (id)emojiViewController;
- (id)modernInfoStickerViewController;
- (id)loadingStickerId;
- (void)setLoadingStickerId:(id)arg0;
- (void)setEmojiViewController:(id)arg0;
- (void)setModernInfoStickerViewController:(id)arg0;
- (id)logger;
- (id)categories;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)delegate;
- (void)setPanels:(id)arg0;
- (id)panels;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setLogger:(id)arg0;
- (BOOL)accessibilityPerformEscape;
- (id)titles;
- (void)setTitles:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;

@end
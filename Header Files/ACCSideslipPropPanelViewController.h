//
//     Generated by private class-dump
//

@class ACCSideslipPropPickErrorView, NSString, ACCSideslipPropPickView, UIView;
@protocol ACCSideslipPropPanelUIConfigService, ACCSideslipPropPanelService, ACCSideslipPropService, IESServiceProvider, ACCSideslipPropViewContainerBaseSetterProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelPluginLifeCycleService;

@interface ACCSideslipPropPanelViewController : UIViewController <AWEStickerViewLayoutManagerProtocol, ACCSideslipPropPickErrorViewDelegate, ACCSideslipPropPanelControllerProtocol> {
    id<IESServiceProvider> _sideslipServiceProvider;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
    id<ACCSideslipPropViewContainerBaseSetterProtocol> _viewContainerSetter;
    id<ACCSideslipPropPanelPluginLifeCycleService> _pluginLifeCycleService;
    id<ACCSideslipPropPanelUIConfigService> _uiConfigService;
    ACCSideslipPropPickView *_pickView;
    ACCSideslipPropPickErrorView *_pickErrorView;
}

@property (readonly, nonatomic) BOOL isExposedPanelLayoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerBaseSetterProtocol> viewContainerSetter;
@property (weak, nonatomic) id<ACCSideslipPropPanelPluginLifeCycleService> pluginLifeCycleService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (retain, nonatomic) ACCSideslipPropPickView *pickView;
@property (retain, nonatomic) ACCSideslipPropPickErrorView *pickErrorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy, nonatomic) NSString *controllerName;

- (void)p_setupUI;
- (id)currentTabName;
- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (id)sideslipPropPanelService;
- (void)setSideslipPropPanelService:(id)arg0;
- (void)removeCommerseEntranceView:(id)arg0;
- (void)addCommerseEntranceView:(id)arg0;
- (void)removeOriginStickerUserView:(id)arg0;
- (void)addOriginStickerUserView:(id)arg0;
- (void)removeGreenScreenView:(id)arg0 animated:(BOOL)arg1;
- (BOOL)isExposedPanelLayoutManager;
- (void)removeGreenScreenFinishSelectionView:(id)arg0;
- (void)addGreenScreenView:(id)arg0 animated:(BOOL)arg1;
- (void)addGreenScreenFinishSelectionView:(id)arg0;
- (void)showGreenbScreenView:(BOOL)arg0;
- (void)showGreenScreenFinishSelectionView:(BOOL)arg0;
- (void)showIconView:(BOOL)arg0;
- (void)showFavoriteView:(BOOL)arg0;
- (void)addGreenScreenVideoView:(id)arg0 animated:(BOOL)arg1;
- (void)removeGreenScreenVideoView:(id)arg0 animated:(BOOL)arg1;
- (void)addOriginStickerUserVerticalView:(id)arg0;
- (void)adjustPhotoPickerViewAlpha:(double)arg0;
- (id)currentStickerIndexPathForBuried;
- (id)sideslipServiceProvider;
- (id)pickErrorView;
- (id)pickView;
- (id)currentStickerIndexPath;
- (id)initWithServiceProvider:(id)arg0 plugins:(id)arg1;
- (void)setSideslipServiceProvider:(id)arg0;
- (void)p_bindService;
- (id)uiConfigService;
- (void)setUiConfigService:(id)arg0;
- (id)pluginLifeCycleService;
- (void)setPluginLifeCycleService:(id)arg0;
- (void)layoutSubElementViews;
- (id)layoutBlocks;
- (id)collectionStickerView;
- (id)greenScreenView;
- (id)greenScreenVideoView;
- (id)greenScreenFinishSelectionView;
- (id)p_recordButton;
- (void)setGreenScreenView:(id)arg0;
- (void)p_doLayoutBlockIfNeeded:(id /* block */)arg0 forKey:(id)arg1;
- (void)p_removeLayoutBlockForKey:(id)arg0;
- (void)setGreenScreenFinishSelectionView:(id)arg0;
- (void)setGreenScreenVideoView:(id)arg0;
- (void)setCollectionStickerView:(id)arg0;
- (void)setLayoutBlocks:(id)arg0;
- (void)addFavoriteView:(id)arg0;
- (void)layoutFavoriteView:(id)arg0;
- (void)removeFavoriteView:(id)arg0;
- (void)addCollectionStickerView:(id)arg0 animated:(BOOL)arg1;
- (void)removeCollectionStickerView:(id)arg0 animated:(BOOL)arg1;
- (void)addStickerSlider:(id)arg0;
- (void)removeStickerSlider:(id)arg0 animated:(BOOL)arg1;
- (void)addSecurityTipsView:(id)arg0;
- (void)removeSecurityTipsView:(id)arg0;
- (void)addShowcaseEntranceView:(id)arg0;
- (void)removeShowcaseEntranceView:(id)arg0;
- (void)addSwitchCameraIcon:(id)arg0;
- (void)removeSwitchCameraIcon:(id)arg0;
- (void)setPickErrorView:(id)arg0;
- (void)setPickView:(id)arg0;
- (id)viewContainerSetter;
- (BOOL)p_pickViewHidden;
- (void)sideslipPropPickErrorViewShouldRetryFetchProps;
- (void)setViewContainerSetter:(id)arg0;
- (id)sliderView;
- (void).cxx_destruct;
- (void)setSliderView:(id)arg0;
- (id)containerView;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateSubviewsAlpha:(double)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)controllerName;

@end
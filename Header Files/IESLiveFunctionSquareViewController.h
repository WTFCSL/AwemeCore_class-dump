//
//     Generated by private class-dump
//

@class IESLiveAnchorFuncGameViewModel, IESLiveWebpLoadingView, HTSEventContext, NSString, IESLiveAnchorGameFuncPanelAPI, IESLiveFunctionSquareView, IESLiveAnchorGameFuncPanelStore, IESLiveAnchorInteractiveGameListModel, IESLiveFunctionSquareViewModel, IESLiveFunctionSquareSearchViewController, HTSLiveExpandToolbarItem, NSMutableDictionary;
@protocol IESLiveHybridContainerFactory, IESLiveAnchorGameNativeAPPStorageHelper, IESLiveTimorService, IESLiveAnchorInteractiveGameActions, IESLiveInternalRouter;

@interface IESLiveFunctionSquareViewController : UIViewController <IESLiveFunctionSquareViewDelegate, UIGestureRecognizerDelegate, IESLiveFunctionSquareSearchViewControllerDelegate, IESHYControllerDelegate, IESLiveFunctionSquareSettingViewActions> {
    BOOL _clicked;
    BOOL _enterSearch;
    BOOL _isTrackShow;
    id /* block */ _dissmissHanlder;
    IESLiveFunctionSquareView *_squareView;
    IESLiveFunctionSquareViewModel *_functionSquareViewModel;
    IESLiveFunctionSquareSearchViewController *_searchHistoryViewController;
    id<IESLiveAnchorInteractiveGameActions> _actionsCreator;
    IESLiveAnchorFuncGameViewModel *_anchorInteractiveGameViewModel;
    HTSLiveExpandToolbarItem *_toolbarListItem;
    IESLiveAnchorGameFuncPanelStore *_gameStore;
    id<IESLiveTimorService> _timorService;
    IESLiveAnchorGameFuncPanelAPI *_gameFuncPanelAPI;
    IESLiveWebpLoadingView *_loadingIndicator;
    IESLiveAnchorInteractiveGameListModel *_beforeLiveGameListModel;
    HTSEventContext *_trackContext;
    id<IESLiveInternalRouter> _internalRouter;
    id<IESLiveHybridContainerFactory> _webviewFactory;
    NSMutableDictionary *_selectedFlagDict;
    id<IESLiveAnchorGameNativeAPPStorageHelper> _storageHelper;
}

@property (retain, nonatomic) IESLiveFunctionSquareView *squareView;
@property (retain, nonatomic) IESLiveFunctionSquareViewModel *functionSquareViewModel;
@property (retain, nonatomic) IESLiveFunctionSquareSearchViewController *searchHistoryViewController;
@property (retain, nonatomic) id<IESLiveAnchorInteractiveGameActions> actionsCreator;
@property (retain, nonatomic) IESLiveAnchorFuncGameViewModel *anchorInteractiveGameViewModel;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *toolbarListItem;
@property (retain, nonatomic) IESLiveAnchorGameFuncPanelStore *gameStore;
@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (retain, nonatomic) IESLiveAnchorGameFuncPanelAPI *gameFuncPanelAPI;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameListModel *beforeLiveGameListModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webviewFactory;
@property (nonatomic) BOOL clicked;
@property (nonatomic) BOOL enterSearch;
@property (nonatomic) BOOL isTrackShow;
@property (retain, nonatomic) NSMutableDictionary *selectedFlagDict;
@property (retain, nonatomic) id<IESLiveAnchorGameNativeAPPStorageHelper> storageHelper;
@property (copy, nonatomic) id /* block */ dissmissHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (id)squareView;
- (void)setSquareView:(id)arg0;
- (void)setClicked:(BOOL)arg0;
- (BOOL)clicked;
- (id)searchHistoryViewController;
- (void)setSearchHistoryViewController:(id)arg0;
- (BOOL)enterSearch;
- (id)webviewFactory;
- (void)setWebviewFactory:(id)arg0;
- (void)dismissCurrentVC;
- (BOOL)isTrackShow;
- (void)setIsTrackShow:(BOOL)arg0;
- (id)timorService;
- (void)setTimorService:(id)arg0;
- (void)pr_setupObserver;
- (id)initWithItem:(id)arg0 anchorInteractiveGameStore:(id)arg1 diContent:(id)arg2 trackContext:(id)arg3;
- (id)gameStore;
- (BOOL)isInteractGameItemFromPlaymodePanel:(id)arg0;
- (long long)playmodeTypeWithInteractGameItem:(id)arg0;
- (void)setGameStore:(id)arg0;
- (void)functionSquareViewControllerClickCell:(id)arg0;
- (void)functionSquareViewDidClickSearchCellWithEntrance:(id)arg0;
- (void)functionSquareViewDidClickRetryButton;
- (void)functionSquareViewDidClickSectionViewTabWithRowNode:(id)arg0 selectedIndex:(long long)arg1;
- (void)functionSquareViewWillShowSectionViewWithRowNode:(id)arg0;
- (void)functionSquareViewDidClickInterActiveGameCellWithRowNode:(id)arg0;
- (void)functionSquareViewDidClickRecentlyUsedCellWithRowNode:(id)arg0;
- (void)functionSquareViewWillShowContentCellWithRowNode:(id)arg0;
- (void)functionSquareViewDidClickContentCellWithRowNode:(id)arg0;
- (id)anchorInteractiveGameViewModel;
- (void)setFunctionSquareViewModel:(id)arg0;
- (id)toolbarListItem;
- (void)trackFunctionSquareViewShow;
- (void)trackNativeAppShow;
- (id)functionSquareViewModel;
- (id /* block */)dissmissHanlder;
- (id)gameItemWithCellModel:(id)arg0;
- (id)actionsCreator;
- (id)getHasMountNativeAppSchemaWithGameItem:(id)arg0;
- (void)trackClickOpenPlatformNativeAppDuringLiveWithGameItem:(id)arg0;
- (void)actionAnchorGameItemWithModel:(id)arg0;
- (void)monitorIconClickWithRowNode:(id)arg0;
- (void)trackClickTabContentViewNativeAppWithRowNode:(id)arg0;
- (id)findGameItemWithIdentifier:(id)arg0;
- (void)trackClickSearchViewWithEntrance:(id)arg0;
- (id)selectedFlagDict;
- (void)trackFucntionSquareTabViewClickWithClickTabName:(id)arg0;
- (void)trackContentViewNativeAPPShowWithTabSelectedIndex:(long long)arg0;
- (void)trackNativeAppShowWithRowNode:(id)arg0 showSource:(id)arg1;
- (void)trackInteractivePlaymodePanelShowIfNeeded:(id)arg0;
- (void)setEnterSearch:(BOOL)arg0;
- (id)storageHelper;
- (void)checkAndJumpIsOpeningNativeAppWithGameItem:(id)arg0;
- (id)pr_functionType;
- (void)setDissmissHanlder:(id /* block */)arg0;
- (void)setActionsCreator:(id)arg0;
- (void)setAnchorInteractiveGameViewModel:(id)arg0;
- (void)setToolbarListItem:(id)arg0;
- (id)gameFuncPanelAPI;
- (void)setGameFuncPanelAPI:(id)arg0;
- (id)beforeLiveGameListModel;
- (void)setBeforeLiveGameListModel:(id)arg0;
- (void)setSelectedFlagDict:(id)arg0;
- (void)setStorageHelper:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)reloadData;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg0;
- (void)setupData;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
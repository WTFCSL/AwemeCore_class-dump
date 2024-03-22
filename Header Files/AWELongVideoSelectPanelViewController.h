//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, DUXTabBarContainerController, AWEListDataController, DUXBasicSheet, AWEUILoadingView, NSMutableArray, UILabel;
@protocol AWELongVideoPlusSelectPanelDelegate, AWELongVideoPlusDataControllerProtocol, AWERelatedVideoVacantViewProtocol;

@interface AWELongVideoSelectPanelViewController : UIViewController <DUXTabBarContainerDelegate, AWELongVideoPlusItemViewControllerChangeVideoDelegate, AWEPadUIAdaptionViewTransitionObserver, DUXSheetDelegate> {
    BOOL _hasDismissed;
    BOOL _shouldSkip;
    BOOL _isRequesting;
    BOOL _isUseCache;
    id<AWELongVideoPlusSelectPanelDelegate> _delegate;
    DUXTabBarContainerController *_tabBarContainer;
    UILabel *_titleLabel;
    NSMutableArray *_itemViewControllerList;
    NSArray *_tabArray;
    NSString *_selectAlbumID;
    long long _currentIndex;
    UIView *_topBlackView;
    UIView *_titleContainerView;
    DUXBasicSheet *_sheet;
    AWEUILoadingView *_loadingView;
    UIView<AWERelatedVideoVacantViewProtocol> *_netErrorVacantView;
    AWEListDataController<AWELongVideoPlusDataControllerProtocol> *_longVideoPlusDataController;
    double _stayDuration;
    long long _loadDirection;
    UIView *_tagBackgroundView;
    UILabel *_tagLabel;
}

@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *itemViewControllerList;
@property (copy, nonatomic) NSArray *tabArray;
@property (copy, nonatomic) NSString *selectAlbumID;
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) BOOL shouldSkip;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isUseCache;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIView *topBlackView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView<AWERelatedVideoVacantViewProtocol> *netErrorVacantView;
@property (weak, nonatomic) AWEListDataController<AWELongVideoPlusDataControllerProtocol> *longVideoPlusDataController;
@property (nonatomic) double stayDuration;
@property (nonatomic) long long loadDirection;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (weak, nonatomic) id<AWELongVideoPlusSelectPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)sheetWillDismiss:(id)arg0;
- (void)sheetDidDragToDismiss:(id)arg0;
- (void)sheet:(id)arg0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 withUserInteraction:(BOOL)arg2;
- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (id)longVideoPlusDataController;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (double)stayDuration;
- (id)initWithDataController:(id)arg0;
- (void)closePanel;
- (BOOL)isUseCache;
- (id)tabBarContainer;
- (void)setTabBarContainer:(id)arg0;
- (void)setStayDuration:(double)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)setupTabBarContainer;
- (id)tabArray;
- (void)setTabArray:(id)arg0;
- (id)preViewController;
- (id)topBlackView;
- (void)setTopBlackView:(id)arg0;
- (void)didReceivePaidNotification:(id)arg0;
- (id)netErrorVacantView;
- (void)setupRefreshFooter;
- (void)setupRefreshHeader;
- (double)getCurrentPlayProgress;
- (void)changeVideoWithAlbumID:(id)arg0 indexPath:(id)arg1;
- (void)jumpToUserPersonalDetail;
- (void)setNetErrorVacantView:(id)arg0;
- (void)addTitleLabelWithContentView:(id)arg0 prefixTitle:(id)arg1 title:(id)arg2;
- (void)configureTopBlackView:(id)arg0;
- (void)sheetWillShow:(id)arg0;
- (void)setLongVideoPlusDataController:(id)arg0;
- (void)setSelectAlbumID:(id)arg0;
- (id)getMetaResponseModelWithAlbumID:(id)arg0;
- (id)getAwemeListArrayWithAlbumID:(id)arg0;
- (void)setIsUseCache:(BOOL)arg0;
- (id)getEpisodeListArrayWithAlbumID:(id)arg0;
- (id)makeItemViewControllerWithResponseModel:(id)arg0 awemeModelList:(id)arg1 episodeModelList:(id)arg2;
- (void)fetchListInfo;
- (void)addPanelTopPaymentTag;
- (void)hideNetErrorView;
- (void)setShouldSkip:(BOOL)arg0;
- (void)showNetErrorView;
- (BOOL)shouldSkip;
- (id)selectAlbumID;
- (id)tagBackgroundView;
- (void)refreshPanelTopPaymentTagIfNeeded;
- (id)itemViewControllerList;
- (void)fetchItemListDataWithAlbumID:(id)arg0 index:(long long)arg1 meta:(id)arg2 metaCursor:(long long)arg3 awemeCursor:(long long)arg4;
- (void)showMultiAlbumWithTabArray:(id)arg0 index:(long long)arg1;
- (void)setItemViewControllerList:(id)arg0;
- (void)trackSelectionVideoClick;
- (void)closePanelSheet;
- (void)trackSelectionPanelCancelWithEnterMethod:(id)arg0;
- (void)loadMoreWithAwemeCursor:(long long)arg0 episodeCursor:(long long)arg1 meta:(id)arg2 loadDirection:(long long)arg3 completion:(id /* block */)arg4;
- (id)commonTrackerParams:(id)arg0;
- (void)trackSelectionPanelShow;
- (void)trackSlideVideoLanguage:(id)arg0;
- (long long)loadDirection;
- (void)setLoadDirection:(long long)arg0;
- (void)setTagBackgroundView:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)titleLabel;
- (void)setCurrentIndex:(long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)addObserver;
- (id)titleContainerView;
- (void)setupUI;
- (void)setTitleContainerView:(id)arg0;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)hasDismissed;
- (void)setHasDismissed:(BOOL)arg0;
- (id)sheet;
- (void)hideLoadingView;
- (void)setSheet:(id)arg0;

@end

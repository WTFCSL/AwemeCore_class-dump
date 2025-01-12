//
//     Generated by private class-dump
//

@class AWEListDataController, NSString, AWEFavoriteFolderBottomBarController, DUXContentSheet, AWEFavoriteFolderBaseInfoModel, UIViewController;
@protocol AWEFavoriteFileVideoViewControllerProtocol, AWEFavoriteFileVideoDataControllerProtocol;

@interface AWEAwemeFavoriteFolderDetailController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEFavoriteFolderContainerControllerProtocol, DUXSheetDelegate> {
    BOOL _isFirstLoad;
    BOOL _hasSyncData;
    AWEListDataController<AWEFavoriteFileVideoDataControllerProtocol> *_dataController;
    AWEFavoriteFolderBottomBarController *_bottomBarController;
    DUXContentSheet *_favoriteDetailPanel;
    UIViewController<AWEFavoriteFileVideoViewControllerProtocol> *_favoriteVC;
    unsigned long long _oldDataSourceCount;
    AWEFavoriteFolderBaseInfoModel *_collectsModel;
    double _startTimeStamp;
    DUXContentSheet *_sheet;
}

@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL hasSyncData;
@property (retain, nonatomic) AWEListDataController<AWEFavoriteFileVideoDataControllerProtocol> *dataController;
@property (weak, nonatomic) DUXContentSheet *favoriteDetailPanel;
@property (retain, nonatomic) UIViewController<AWEFavoriteFileVideoViewControllerProtocol> *favoriteVC;
@property (nonatomic) unsigned long long oldDataSourceCount;
@property (weak, nonatomic) AWEFavoriteFolderBaseInfoModel *collectsModel;
@property (nonatomic) double startTimeStamp;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEFavoriteFolderBottomBarController *bottomBarController;

+ (BOOL)isFavoriteFolderPanelShowing;

- (id)referString;
- (void)sheetWillDismiss:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (id)enterFrom;
- (void)setIsFirstLoad:(BOOL)arg0;
- (void)setDataController:(id)arg0;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (id)favoriteFileDetailViewControllerWithDataController:(id)arg0 containerController:(id)arg1 isPanelStyle:(BOOL)arg2;
- (void)setStartTimeStamp:(double)arg0;
- (id)bottomBarCoordinator;
- (void)trackStayTime;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (void)configCellLogExtraDictWithModel:(id)arg0 indexPath:(id)arg1;
- (id)trackActionTypeForFolderPlayPage;
- (void)popUpFavoriteFolderDetailPanel;
- (void)trackEnterFolderPlayPage;
- (void)trackActionTypeForVidePlay:(id)arg0;
- (void)recordStartTimeStamp;
- (id)favoriteDetailPanel;
- (void)p_bridgingFavoriteFolderControllerWithBottomBar;
- (void)setBottomBarController:(id)arg0;
- (long long)p_currentPlayIndex;
- (void)setCollectsModel:(id)arg0;
- (id)favoriteVC;
- (void)setOldDataSourceCount:(unsigned long long)arg0;
- (void)setFavoriteDetailPanel:(id)arg0;
- (id)bottomBarController;
- (id)collectsModel;
- (void)didSelectItemAtPanelViewWithIndexPath:(id)arg0;
- (void)landToUserDetailPage;
- (void)handleFollowButtonClick:(id)arg0;
- (void)trackScrollViewScrolled:(id)arg0;
- (void)trackFollowFolder:(id)arg0 params:(id)arg1;
- (void)panelViewWillAppear;
- (void)panelViewWillDisappear;
- (void)setFavoriteVC:(id)arg0;
- (unsigned long long)oldDataSourceCount;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (BOOL)isFirstLoad;
- (id)dataController;
- (void)viewDidDisappear;
- (BOOL)hasSyncData;
- (void)setHasSyncData:(BOOL)arg0;
- (void)dismissSheet;
- (double)startTimeStamp;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end

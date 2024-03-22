//
//     Generated by private class-dump
//

@class AWEInTodayPlayerPublishHandler, AWEInTodaySchemaData, AWEPastMemoriesResponseModel, NSObject, UIViewController, NSMutableArray, NSDateFormatter, UIButton, AWEInTodayPlayerScreenObserver, NSString, AWECKAAAssetResponseModel, AWEInTodayPlayerGridHandler, AWEInTodayAggregateConfig, AWEInTodayPlayerShareHandler;
@protocol AWEMemoriesPlayerConfigProtocol, AWEMemoriesPlayerDataControllerProtocol, AWEMemoriesPlayerContainerService, AWEMemoriesPlayerControlProtocol;

@interface AWEInTodayPlayerViewController : UIViewController <AWEZoomTransitionInnerContextProvider> {
    BOOL _fromFlashMob;
    BOOL _isOwnPhoto;
    BOOL _needTransition;
    BOOL _isShowingSnackBar;
    BOOL _isAggregated;
    BOOL _hasAnchored;
    BOOL _initialLocalAssetAuthority;
    BOOL _isFirstEnter;
    NSString *_enterFrom;
    NSString *_enterPage;
    NSString *_shootWay;
    NSMutableArray *_memoriesPlayerModels;
    AWEPastMemoriesResponseModel *_awemeResponseModel;
    AWECKAAAssetResponseModel *_assetResponseModel;
    AWEInTodaySchemaData *_schemaData;
    AWEInTodayAggregateConfig *_aggregateConfig;
    UIViewController<AWEMemoriesPlayerContainerService> *_playerContainerViewController;
    NSObject<AWEMemoriesPlayerDataControllerProtocol> *_dataController;
    NSMutableArray *_awemeMemoriesPlayerModels;
    NSObject<AWEMemoriesPlayerConfigProtocol> *_playerConfigManager;
    NSObject<AWEMemoriesPlayerControlProtocol> *_playerControlManager;
    NSDateFormatter *_dateFormatter;
    AWEInTodayPlayerPublishHandler *_publishHandler;
    AWEInTodayPlayerShareHandler *_shareHandler;
    AWEInTodayPlayerGridHandler *_gridHandler;
    AWEInTodayPlayerScreenObserver *_screenObserver;
    UIButton *_listViewControllerButton;
    UIButton *_shareButton;
    UIButton *_mainButton;
    UIButton *_publishDiaryButton;
}

@property (retain, nonatomic) NSMutableArray *memoriesPlayerModels;
@property (retain, nonatomic) AWEPastMemoriesResponseModel *awemeResponseModel;
@property (retain, nonatomic) AWECKAAAssetResponseModel *assetResponseModel;
@property (retain, nonatomic) AWEInTodaySchemaData *schemaData;
@property (retain, nonatomic) AWEInTodayAggregateConfig *aggregateConfig;
@property (retain, nonatomic) UIViewController<AWEMemoriesPlayerContainerService> *playerContainerViewController;
@property (retain, nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> *dataController;
@property (retain, nonatomic) NSMutableArray *awemeMemoriesPlayerModels;
@property (retain, nonatomic) NSObject<AWEMemoriesPlayerConfigProtocol> *playerConfigManager;
@property (retain, nonatomic) NSObject<AWEMemoriesPlayerControlProtocol> *playerControlManager;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) AWEInTodayPlayerPublishHandler *publishHandler;
@property (retain, nonatomic) AWEInTodayPlayerShareHandler *shareHandler;
@property (retain, nonatomic) AWEInTodayPlayerGridHandler *gridHandler;
@property (retain, nonatomic) AWEInTodayPlayerScreenObserver *screenObserver;
@property (retain, nonatomic) UIButton *listViewControllerButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIButton *mainButton;
@property (retain, nonatomic) UIButton *publishDiaryButton;
@property (nonatomic) BOOL isShowingSnackBar;
@property (nonatomic) BOOL isAggregated;
@property (nonatomic) BOOL hasAnchored;
@property (nonatomic) BOOL initialLocalAssetAuthority;
@property (nonatomic) BOOL isFirstEnter;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterPage;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL fromFlashMob;
@property (nonatomic) BOOL isOwnPhoto;
@property (nonatomic) BOOL needTransition;

- (void)setEnterFrom:(id)arg0;
- (id)enterMethod;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)arg0;
- (id)enterFrom;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (id)zoomTransitionEndView;
- (long long)zoomTransitionItemOffset;
- (void)setDataController:(id)arg0;
- (void)setShootWay:(id)arg0;
- (id)shootWay;
- (BOOL)needTransition;
- (void)setNeedTransition:(BOOL)arg0;
- (BOOL)isFirstEnter;
- (void)setIsFirstEnter:(BOOL)arg0;
- (id)dateStringWithDate:(id)arg0;
- (id)shareHandler;
- (void)setShareHandler:(id)arg0;
- (void)startShoot;
- (id)initWithMemoriesPlayerModels:(id)arg0;
- (id)publishDiaryButton;
- (id)aggregateConfig;
- (void)setPublishDiaryButton:(id)arg0;
- (void)setAggregateConfig:(id)arg0;
- (id)playerControlManager;
- (void)setPlayerControlManager:(id)arg0;
- (BOOL)isOwnPhoto;
- (BOOL)fromFlashMob;
- (id)enterPage;
- (id)initWithMemoriesPlayerModels:(id)arg0 awemeResponseModel:(id)arg1 assetResponseModel:(id)arg2 schemaData:(id)arg3 aggregateConfig:(id)arg4;
- (void)setIsOwnPhoto:(BOOL)arg0;
- (void)setFromFlashMob:(BOOL)arg0;
- (void)setEnterPage:(id)arg0;
- (id)gridHandler;
- (void)setGridHandler:(id)arg0;
- (void)msgSendSucceed:(id)arg0;
- (BOOL)shouldShowInTodayAggregatePhtotAuthorization;
- (void)showInTodayAggregatePhtotAuthorizationIfNeededEnterFrom:(id)arg0;
- (void)updateLastPhotoAuthorizationShowTime;
- (void)allMemoriesDidPlayedFinished;
- (void)landingIfNeeded;
- (void)loadMoreDataWithHandler:(id /* block */)arg0;
- (void)setAssetResponseModel:(id)arg0;
- (id)awemeResponseModel;
- (id)awemeMemoriesPlayerModels;
- (id)memoriesPlayerModels;
- (void)setPlayerContainerViewController:(id)arg0;
- (id)playerContainerViewController;
- (void)trackFirstFramePerformance;
- (void)setupPlayerConfigManager;
- (void)setupPlayerControlManager;
- (void)setupScreenObserver;
- (id)publishHandler;
- (BOOL)hasExitedFromSkyLight;
- (id)assetResponseModel;
- (void)cacheInTodayPlayerFirstExitFromSkyLight;
- (void)showInTodayEntranceInPrivateTips;
- (void)trackPlayerEnter;
- (void)setPlayerConfigManager:(id)arg0;
- (id)playerConfigManager;
- (void)playerSelectButtonClick:(id)arg0;
- (void)publishButtonClick:(id)arg0;
- (id)listViewControllerButton;
- (void)updateSubTitleWithCurrentTileModel:(id)arg0 topBuilder:(id)arg1;
- (BOOL)isTopMemoriesPlayerListViewController;
- (id)screenObserver;
- (BOOL)isShowingSnackBar;
- (void)setIsShowingSnackBar:(BOOL)arg0;
- (id)getDateStringOfModel:(id)arg0;
- (id)dateStringWithTimestamp:(double)arg0;
- (id)publishFrom;
- (BOOL)initialLocalAssetAuthority;
- (void)setInitialLocalAssetAuthority:(BOOL)arg0;
- (void)setIsAggregated:(BOOL)arg0;
- (BOOL)isAggregated;
- (void)setAwemeResponseModel:(id)arg0;
- (void)loadMorePhotoLibraryWithAppendModels:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)hasAnchored;
- (void)setHasAnchored:(BOOL)arg0;
- (void)publishDiaryButtonClick:(id)arg0;
- (void)listViewControllerButtonClick:(id)arg0;
- (void)shareButtonClicked:(id)arg0;
- (id)initWithMemoriesPlayerModels:(id)arg0 awemeResponseModel:(id)arg1 assetResponseModel:(id)arg2;
- (void)setMemoriesPlayerModels:(id)arg0;
- (void)setAwemeMemoriesPlayerModels:(id)arg0;
- (void)setPublishHandler:(id)arg0;
- (void)setScreenObserver:(id)arg0;
- (void)setListViewControllerButton:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (id)dateFormatter;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (id)dataController;
- (id)shareButton;
- (void)setShareButton:(id)arg0;
- (void)setupPlayer;
- (id)schemaData;
- (id)mainButton;
- (void)setMainButton:(id)arg0;
- (void)setSchemaData:(id)arg0;

@end
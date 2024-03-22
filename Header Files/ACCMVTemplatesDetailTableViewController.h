//
//     Generated by private class-dump
//

@class UIButton, UITableView, NSString, AWEVideoPublishViewModel, UIView, ACCAnimatedButton;
@protocol UINavigationControllerDelegate, ACCMVTemplatesDataControllerProtocol;

@interface ACCMVTemplatesDetailTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ACCZoomContextInnerProviderProtocol, ACCSlidePushContextProviderProtocol, AWEVideoRecorderNavigationRouterOpenSecondaryVCProtocol> {
    BOOL associatedRecordViewController;
    BOOL _hideCollectBtn;
    BOOL _presentAlbumPickerImediately;
    BOOL _needTrackShoot;
    BOOL _isAppearing;
    BOOL _useTopbarFavorite;
    BOOL _newStyleEnabled;
    BOOL _isSwitchingFavoriteTypeInNewStyle;
    BOOL _hiddenPickResourceBtnIcon;
    AWEVideoPublishViewModel *_publishModel;
    id /* block */ _dataChangedBlock;
    id<UINavigationControllerDelegate> _initialNavigaitonDelegate;
    id /* block */ _didPickTemplateBlock;
    id /* block */ _cancelBlock;
    unsigned long long _enterFrom;
    NSString *_midPageFromEntrance;
    NSString *_preferedPickResourceButtonTitle;
    UIView *_rewardView;
    ACCAnimatedButton *_backButton;
    UITableView *_tableView;
    ACCAnimatedButton *_pickResourceButton;
    id<ACCMVTemplatesDataControllerProtocol> _dataController;
    unsigned long long _initialIndex;
    unsigned long long _displayingIndex;
    ACCAnimatedButton *_favoriteBtn;
    ACCAnimatedButton *_newStylePickResourceBtn;
    ACCAnimatedButton *_topbarFavoriteBtn;
    UIButton *_activityEntranceBtn;
}

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) ACCAnimatedButton *pickResourceButton;
@property (retain, nonatomic) id<ACCMVTemplatesDataControllerProtocol> dataController;
@property (nonatomic) unsigned long long initialIndex;
@property (nonatomic) unsigned long long displayingIndex;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) ACCAnimatedButton *favoriteBtn;
@property (retain, nonatomic) ACCAnimatedButton *newStylePickResourceBtn;
@property (nonatomic) BOOL useTopbarFavorite;
@property (retain, nonatomic) ACCAnimatedButton *topbarFavoriteBtn;
@property (nonatomic) BOOL newStyleEnabled;
@property (nonatomic) BOOL isSwitchingFavoriteTypeInNewStyle;
@property (retain, nonatomic) UIButton *activityEntranceBtn;
@property (nonatomic) BOOL hiddenPickResourceBtnIcon;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ dataChangedBlock;
@property (weak, nonatomic) id<UINavigationControllerDelegate> initialNavigaitonDelegate;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) unsigned long long enterFrom;
@property (retain, nonatomic) NSString *midPageFromEntrance;
@property (nonatomic) BOOL hideCollectBtn;
@property (nonatomic) BOOL presentAlbumPickerImediately;
@property (copy, nonatomic) NSString *preferedPickResourceButtonTitle;
@property (retain, nonatomic) UIView *rewardView;
@property (nonatomic) BOOL needTrackShoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL associatedRecordViewController;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)setDataController:(id)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)p_setupUI;
- (BOOL)p_isActive;
- (void)p_appWillResignActive:(id)arg0;
- (void)p_appDidBecomeActive:(id)arg0;
- (id)initWithDataController:(id)arg0 initialIndex:(unsigned long long)arg1;
- (void)playIfActive;
- (id)rewardView;
- (void)setRewardView:(id)arg0;
- (id)midPageFromEntrance;
- (void)setDidPickTemplateBlock:(id /* block */)arg0;
- (void)setMidPageFromEntrance:(id)arg0;
- (BOOL)newStyleEnabled;
- (void)p_addTemplateCreatorActivityEntranceIfNeed;
- (id)activityEntranceBtn;
- (id /* block */)dataChangedBlock;
- (void)p_activityEntrancePressed:(id)arg0;
- (void)setDataChangedBlock:(id /* block */)arg0;
- (void)setActivityEntranceBtn:(id)arg0;
- (void)p_loadmore;
- (double)p_cellHeight;
- (void)setHideCollectBtn:(BOOL)arg0;
- (void)setPresentAlbumPickerImediately:(BOOL)arg0;
- (void)setPreferedPickResourceButtonTitle:(id)arg0;
- (void)setInitialNavigaitonDelegate:(id)arg0;
- (void)setNeedTrackShoot:(BOOL)arg0;
- (BOOL)associatedRecordViewController;
- (void)setAssociatedRecordViewController:(BOOL)arg0;
- (id /* block */)didPickTemplateBlock;
- (BOOL)isBeingPresentedModally;
- (void)p_videoDownloadFinished:(id)arg0;
- (unsigned long long)p_currentIndex;
- (id)preferedPickResourceButtonTitle;
- (id)pickResourceButton;
- (id)newStylePickResourceBtn;
- (BOOL)useTopbarFavorite;
- (BOOL)hideCollectBtn;
- (BOOL)hiddenPickResourceBtnIcon;
- (void)p_handlePickResourceButtonClicked:(id)arg0;
- (void)setHiddenPickResourceBtnIcon:(BOOL)arg0;
- (void)setPickResourceButton:(id)arg0;
- (void)setNewStylePickResourceBtn:(id)arg0;
- (void)setNewStyleEnabled:(BOOL)arg0;
- (void)setUseTopbarFavorite:(BOOL)arg0;
- (void)updateNewStyleBottomButtonStateIfNeed;
- (id)initialNavigaitonDelegate;
- (BOOL)presentAlbumPickerImediately;
- (id)topbarFavoriteBtn;
- (id)favoriteBtn;
- (void)p_trackFavoriteIconShow;
- (void)updateNewStyleBottomButtonStateWithTemplate:(id)arg0;
- (void)p_updateNewStyleFavoriteBtnState:(BOOL)arg0;
- (BOOL)p_enableFavoriteAbility;
- (unsigned long long)displayingIndex;
- (void)setDisplayingIndex:(unsigned long long)arg0;
- (BOOL)needTrackShoot;
- (BOOL)isSwitchingFavoriteTypeInNewStyle;
- (void)setIsSwitchingFavoriteTypeInNewStyle:(BOOL)arg0;
- (void)p_doVideoPrefetch:(unsigned long long)arg0;
- (void)p_preloadWithTemplate:(id)arg0;
- (void)p_backButtonPressed:(id)arg0;
- (void)p_favoriteBtnClicked:(id)arg0;
- (long long)acc_zoomTransitionItemOffset;
- (id)slidePushTargetViewController;
- (void)setFavoriteBtn:(id)arg0;
- (void)setTopbarFavoriteBtn:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (id /* block */)cancelBlock;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setIsAppearing:(BOOL)arg0;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)isAppearing;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)dataController;
- (unsigned long long)initialIndex;
- (void)setInitialIndex:(unsigned long long)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, AWEMusicGuideService, AWEUILoadingView, UITableView, AWEMusicCollectionVCViewModel, AWEMusicPrivacyManager, AWELunaUgPopView, AWEMusicExceptionalView, AWEMusicDSPEventModel;
@protocol MusicService;

@interface AWEMusicCollectionViewController : AWEMiniLunaBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicCollectionVCViewModelDelegate, AWEMusicServiceDelegate, AWEMusicExceptionalViewDelegate, AWEUserMessage, AWEMusicBottomPlayerStatusProtocol, AWEMusicGuideServiceDelegate, AWEMusicPrivacyManagerDelegate> {
    BOOL _canAutoStartPlay;
    BOOL _canShowPrivacyPopGuide;
    BOOL _canAutoCreatePlaylist;
    BOOL _isVCAppearing;
    BOOL _isFirstRequest;
    BOOL _firstViewDidAppear;
    BOOL _needShowSubVc;
    BOOL _shouldReportCollectionPlayTime;
    BOOL _isMiniLuna;
    AWEMusicDSPEventModel *_eventModel;
    id /* block */ _changeTabTypeBlock;
    UITableView *_tableView;
    AWEMusicCollectionVCViewModel *_viewModel;
    AWEUILoadingView *_loadingView;
    id<MusicService> _musicService;
    AWEMusicPrivacyManager *_privacyManager;
    AWEMusicExceptionalView *_exceptionView;
    AWEMusicGuideService *_guideService;
    double _enterTime;
    AWEUserModel *_userModel;
    AWELunaUgPopView *_lunaUgPopView;
    long long _BgGuideDismissMethod;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicCollectionVCViewModel *viewModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicPrivacyManager *privacyManager;
@property (retain, nonatomic) AWEMusicExceptionalView *exceptionView;
@property (retain, nonatomic) AWEMusicGuideService *guideService;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL firstViewDidAppear;
@property (nonatomic) BOOL needShowSubVc;
@property (nonatomic) BOOL shouldReportCollectionPlayTime;
@property (retain, nonatomic) AWELunaUgPopView *lunaUgPopView;
@property (nonatomic) long long BgGuideDismissMethod;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) BOOL canAutoStartPlay;
@property (nonatomic) BOOL canShowPrivacyPopGuide;
@property (nonatomic) BOOL canAutoCreatePlaylist;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (copy, nonatomic) id /* block */ changeTabTypeBlock;
@property (nonatomic) BOOL isVCAppearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:(BOOL)arg0;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (id)privacyManager;
- (BOOL)isFirstRequest;
- (void)setIsFirstRequest:(BOOL)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (void)configSubviews;
- (void)setFirstViewDidAppear:(BOOL)arg0;
- (BOOL)firstViewDidAppear;
- (id)lunaUgPopView;
- (void)setLunaUgPopView:(id)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)exceptionView;
- (void)setExceptionView:(id)arg0;
- (void)noNetViewDidTapTryAgain:(id)arg0;
- (id)eventModel;
- (void)setChangeTabTypeBlock:(id /* block */)arg0;
- (void)setCanShowPrivacyPopGuide:(BOOL)arg0;
- (BOOL)canShowPrivacyPopGuide;
- (void)setCanAutoCreatePlaylist:(BOOL)arg0;
- (BOOL)canAutoCreatePlaylist;
- (void)setIsVCAppearing:(BOOL)arg0;
- (id)guideService;
- (BOOL)canAutoStartPlay;
- (void)setEventModel:(id)arg0;
- (void)setCanAutoStartPlay:(BOOL)arg0;
- (id)initWithUserModel:(id)arg0 musicService:(id)arg1 eventModel:(id)arg2 isMiniLuna:(BOOL)arg3;
- (void)p_checkShowCreatePlaylist;
- (id)etPageName;
- (void)setPrivacyManager:(id)arg0;
- (void)etReportPageShowTime:(double)arg0;
- (void)reloadDataWithError:(id)arg0;
- (void)viewModelClickCreatePlaylist:(id)arg0 isBannerClick:(BOOL)arg1;
- (id /* block */)changeTabTypeBlock;
- (BOOL)isVCAppearing;
- (id)p_cellViewModelAtIndexPath:(id)arg0;
- (void)p_deleteInvalidPlaylist:(id)arg0;
- (id)p_sectionViewModelAtIndex:(long long)arg0;
- (void)viewModelClickLunaBanner:(id)arg0;
- (void)viewModelClickCreatePlaylist:(id)arg0;
- (void)viewModelReloadTableView:(id)arg0;
- (void)viewModel:(id)arg0 ChangeToTabType:(unsigned long long)arg1;
- (void)bottomPlayerStatusChanged:(BOOL)arg0;
- (BOOL)canShowBgGuideNow;
- (void)onBgGuideShow;
- (void)onBgGuideDismissWithMethod:(long long)arg0;
- (id)p_convertCollectSongsModel;
- (void)et_reportCollectionPlayTime;
- (void)setGuideService:(id)arg0;
- (long long)BgGuideDismissMethod;
- (void)setBgGuideDismissMethod:(long long)arg0;
- (void)viewModelFirstPageLoadFinish:(id)arg0 allMusicModels:(id)arg1;
- (void)viewModelStartPlay:(id)arg0 musicModel:(id)arg1 allMusicModels:(id)arg2;
- (void)viewModel:(id)arg0 gotoPlaylistPageIsClick:(BOOL)arg1;
- (void)viewModel:(id)arg0 gotoPlaylistDetail:(id)arg1;
- (void)p_checkShowSubVC;
- (BOOL)p_should_hide_privacy_pop_up;
- (BOOL)showBGGuideView;
- (BOOL)p_isNeedShowEmpty;
- (void)p_startPlayWithCurrentMusic:(id)arg0 allMusic:(id)arg1 showSubPlayer:(BOOL)arg2;
- (void)setShouldReportCollectionPlayTime:(BOOL)arg0;
- (void)setNeedShowSubVc:(BOOL)arg0;
- (void)p_lunaBannerDiversion;
- (BOOL)shouldReportCollectionPlayTime;
- (BOOL)needShowSubVc;
- (void)onPrivacyGuideDismissWithMethod:(long long)arg0;
- (id)initWithUserModel:(id)arg0 musicService:(id)arg1 eventModel:(id)arg2;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewDidLoad;
- (void)requestData;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (BOOL)isCurrentUser;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end

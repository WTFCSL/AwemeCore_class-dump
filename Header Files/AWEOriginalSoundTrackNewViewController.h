//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEUILoadingView, UITableView, UIButton, UIView, DUXPopover, AWEMusicBottomPlayerView, NSString, AWEMusicPlayerQueue, AWEMusicModel, AWEUserModel, AWEUserProfileEventCommonParamsHandler, AWEOriginalSoundTrackNewDataSource;
@protocol AWEMusicStreamingPlayEventService, MusicService, AWEUserProfileTabVCDelegate;

@interface AWEOriginalSoundTrackNewViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEPreviewable, AWEMusicServiceDelegate, AWEUserMessage, AWEMusicBottomPlayerViewDelegate, AWEMusicStreamingQueueDelegate, AWEMusicFeedPlayerDelegate, AWEMusicPerformanceListCellDelegate, AWEOriginalSoundTrackViewControllerProtocol> {
    BOOL _isProfileDidAppear;
    BOOL _hideData;
    BOOL _recoverPlayerWhenReAppear;
    BOOL _fromHomepage;
    BOOL _playerForceHidden;
    BOOL _musicFeedShowing;
    BOOL _queueShowing;
    BOOL _shootShowing;
    BOOL _isAppearing;
    id<MusicService> _musicService;
    UITableView *_ostTableView;
    id<AWEUserProfileTabVCDelegate> _userDelegate;
    AWEUserProfileEventCommonParamsHandler *_eventCommonParamsHandler;
    NSString *_currentUserID;
    NSString *_secUserID;
    NSString *_referString;
    AWEOriginalSoundTrackNewDataSource *_dataSource;
    AWEMusicModel *_playingMusicModel;
    AWEUILoadingView *_loadingView;
    UIButton *_tipsButton;
    AWEMusicBottomPlayerView *_playerView;
    AWEMusicPlayerQueue *_queue;
    NSMutableDictionary *_rankShowDic;
    AWEUserModel *_targetUser;
    id<AWEMusicStreamingPlayEventService> _eventService;
    UIView *_musicianCenterHeader;
    DUXPopover *_musicianGuidePopover;
}

@property (retain, nonatomic) AWEOriginalSoundTrackNewDataSource *dataSource;
@property (nonatomic) BOOL fromHomepage;
@property (nonatomic) BOOL playerForceHidden;
@property (nonatomic) BOOL musicFeedShowing;
@property (nonatomic) BOOL queueShowing;
@property (nonatomic) BOOL shootShowing;
@property (retain, nonatomic) AWEMusicModel *playingMusicModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIButton *tipsButton;
@property (retain, nonatomic) AWEMusicBottomPlayerView *playerView;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) NSMutableDictionary *rankShowDic;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) id<AWEMusicStreamingPlayEventService> eventService;
@property (weak, nonatomic) UIView *musicianCenterHeader;
@property (retain, nonatomic) DUXPopover *musicianGuidePopover;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) UITableView *ostTableView;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> userDelegate;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (copy, nonatomic) NSString *currentUserID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) BOOL isProfileDidAppear;
@property (nonatomic) BOOL hideData;
@property (nonatomic) BOOL recoverPlayerWhenReAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)musicianCenterNotDisplayInProfileCard;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishLogin;
- (void)setReferString:(id)arg0;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)musicServiceMusicChanged:(id)arg0;
- (id)aweui_emptyPageBelowView;
- (double)contentOffsetY;
- (void)playerViewDidTapCover:(id)arg0;
- (void)playerViewDidTapInfo:(id)arg0;
- (void)playerViewDidTapConfirmBtn:(id)arg0;
- (id)tipsButton;
- (void)setTipsButton:(id)arg0;
- (void)setCurrentUserID:(id)arg0;
- (BOOL)shouldHideNoMoreText;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)previewingViewControllerForView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (id)userDelegate;
- (BOOL)hideData;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)setUserDelegate:(id)arg0;
- (void)setHideData:(BOOL)arg0;
- (void)setTargetUser:(id)arg0;
- (void)_startTimingForTrack;
- (void)_trackEventForStayTime;
- (BOOL)isProfileDidAppear;
- (void)setIsProfileDidAppear:(BOOL)arg0;
- (id)eventCommonParamsHandler;
- (void)setEventCommonParamsHandler:(id)arg0;
- (void)feed:(id)arg0 willAppearAnimation:(BOOL)arg1;
- (void)feed:(id)arg0 didDismissAnimation:(BOOL)arg1;
- (BOOL)hasMoreOfScene:(id)arg0;
- (void)loadMoreScene:(id)arg0 responseBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)isCustomAddToQueueModel;
- (void)setPlayingMusicModel:(id)arg0;
- (id)playingMusicModel;
- (BOOL)newMusicPlayer;
- (void)setFromHomepage:(BOOL)arg0;
- (BOOL)fromHomepage;
- (void)didClickPerformance:(id)arg0;
- (void)willShowPerformance:(id)arg0;
- (void)willShowFindMore;
- (void)didTriggerFindMore;
- (id)initWithUserID:(id)arg0 secUserID:(id)arg1 targetUser:(id)arg2 fromHomepage:(BOOL)arg3;
- (void)refreshMusicList:(id)arg0;
- (void)setOstTableView:(id)arg0;
- (id)ostTableView;
- (void)loadMoreDataWithResponseBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setRecoverPlayerWhenReAppear:(BOOL)arg0;
- (void)setPlayerForceHidden:(BOOL)arg0;
- (BOOL)playerForceHidden;
- (BOOL)recoverPlayerWhenReAppear;
- (void)showPlayerViewIfNeeded:(BOOL)arg0;
- (void)_trackMusicianTabShow;
- (void)p_showMusicianCenterGuideBubble;
- (BOOL)musicFeedShowing;
- (void)updateMusic:(id)arg0 collectStat:(id)arg1;
- (void)loadingShow:(BOOL)arg0;
- (void)refreshViewControllerState;
- (void)showNetRequestError;
- (BOOL)__isVsOfficialAccount;
- (id)playerModelWithMediaModel:(id)arg0;
- (void)musicPlayTracker:(id)arg0;
- (id)p_musicModelsWithCurrentMedia:(id)arg0 shouldIgnoreNoPlayRight:(BOOL)arg1;
- (id)musicianCenterHeader;
- (void)setMusicianGuidePopover:(id)arg0;
- (id)musicianGuidePopover;
- (BOOL)startShootWithMusicModel:(id)arg0 enterMethod:(id)arg1;
- (void)setShootShowing:(BOOL)arg0;
- (id)paramsFromSchema:(id)arg0;
- (void)setMusicFeedShowing:(BOOL)arg0;
- (void)confirmBtnClickedWithMusicModel:(id)arg0;
- (void)playMusicWithMediaModel:(id)arg0 needPause:(BOOL)arg1;
- (BOOL)__isFirstSubMediaAtIndexPath:(id)arg0;
- (BOOL)__isLastSubMediaAtIndexPath:(id)arg0;
- (id)mediaCellWithTableView:(id)arg0 mediaModel:(id)arg1 atIndexPath:(id)arg2 isMainMedia:(BOOL)arg3;
- (id)rankShowDic;
- (void)collectionBtnClickedWithAudio:(id)arg0;
- (void)rankChartClickedWithMusicModel:(id)arg0;
- (id)getMusicCenterCardSchmea;
- (void)setMusicianCenterHeader:(id)arg0;
- (float)parseMusicCenterCardHeighByMusicCenterCardSchmea;
- (void)tipsButtonClickAction;
- (void)openDspPlayer;
- (id)p_currentPlayingMedia;
- (BOOL)feed:(id)arg0 needShowShoot:(id)arg1;
- (void)feed:(id)arg0 startShoot:(id)arg1;
- (BOOL)queueShowing;
- (void)setQueueShowing:(BOOL)arg0;
- (BOOL)shootShowing;
- (void)setRankShowDic:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (id)storage;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationWillResignActive;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (BOOL)isAppearing;
- (void)setEventService:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)playerView;
- (id)eventService;
- (id)queue;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setPlayerView:(id)arg0;
- (void)pause;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setQueue:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (BOOL)isCurrentUser;
- (double)footerBottomInset;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)refreshData;
- (id)currentUserID;
- (id)targetUser;

@end
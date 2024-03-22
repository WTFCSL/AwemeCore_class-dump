//
//     Generated by private class-dump
//

@class UITableViewCell, NSString, UIView, AWEVideoPublishViewModel, NSArray, NSMutableDictionary, NSDictionary, UITableView, NSObject, UIViewController, NSIndexPath;
@protocol ACCLoadingViewProtocol, ACCAudioURLPlayerProtocol, AWEASSMusicListHeaderDataSource, ACCAudioPlayerProtocol, ACCSingleMusicRecommenVideosTableViewCellProtocol, ACCMusicModelProtocol, ACCListDataControllerProtocol, ACCTransitionViewControllerProtocol;

@interface AWEASSMusicListViewController : UIViewController <AWESearchDynamicTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, ACCPropRecommendMusicProtocol, ACCSingleMusicRecommenVideosTableViewCellDelegate, HTSVideoAudioSupplier, ACCRefreshableViewControllerProtocol> {
    BOOL _isDarkMode;
    BOOL _toShowNoLyricStyle;
    BOOL _isCommerce;
    BOOL _disableCutMusic;
    BOOL _showRank;
    BOOL _showLyricLabel;
    BOOL _shouldHideCellMoreButton;
    BOOL _isSearchMusic;
    BOOL _isGotoDetailPage;
    BOOL _isDownloadingMusic;
    BOOL _shouldClearHorizontalContentOffset;
    id /* block */ _completion;
    id /* block */ _enableClipBlock;
    id /* block */ _willClipBlock;
    AWEVideoPublishViewModel *_repository;
    NSArray *_dataList;
    UITableView *_tableView;
    id<AWEASSMusicListHeaderDataSource> _headerDataSource;
    id /* block */ _solveCloseGesture;
    id /* block */ _didSelectItem;
    id /* block */ _didEndDragList;
    id /* block */ _didScrollBlock;
    id /* block */ _cellClickedInfoBlock;
    unsigned long long _listType;
    NSString *_enterMethod;
    NSString *_enterFrom;
    NSString *_categoryName;
    NSString *_categoryId;
    NSString *_previousPage;
    NSString *_keyword;
    NSDictionary *_logPb;
    NSString *_creationId;
    NSString *_shootWay;
    id /* block */ _updatePublishModelCategoryIdBlock;
    id<ACCAudioPlayerProtocol> _audioPlayer;
    id<ACCAudioURLPlayerProtocol> _URLAudioPlayer;
    UIViewController *_playerContainer;
    long long _playingVideoRow;
    long long _playingVideoColumn;
    NSMutableDictionary *_videoCellOffsetDict;
    UIViewController *_lastPlayedContainer;
    long long _lastPlayedVideoRow;
    long long _lastPlayedVideoColumn;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UITableViewCell<ACCSingleMusicRecommenVideosTableViewCellProtocol> *_playingVideoCell;
    id<ACCMusicModelProtocol> _playingMusic;
    id<ACCMusicModelProtocol> _editingMusic;
    long long _editingRank;
    NSDictionary *_logExtra;
    NSDictionary *_musicExtra;
    NSIndexPath *_playingMusicIndexPath;
    id<ACCTransitionViewControllerProtocol> _transitionDelegate;
    unsigned long long _cellPlayStatus;
    double _startTime;
    UIView *_commerceLicenseHint;
    NSMutableDictionary *_footerDataList;
    NSMutableDictionary *_footerViewMap;
    NSMutableDictionary *_dynamicMusicCardIndexMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCAudioPlayerProtocol> audioPlayer;
@property (retain, nonatomic) id<ACCAudioURLPlayerProtocol> URLAudioPlayer;
@property (retain, nonatomic) UIViewController *playerContainer;
@property (nonatomic) long long playingVideoRow;
@property (nonatomic) long long playingVideoColumn;
@property (retain, nonatomic) NSMutableDictionary *videoCellOffsetDict;
@property (nonatomic) BOOL isGotoDetailPage;
@property (retain, nonatomic) UIViewController *lastPlayedContainer;
@property (nonatomic) long long lastPlayedVideoRow;
@property (nonatomic) long long lastPlayedVideoColumn;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UITableViewCell<ACCSingleMusicRecommenVideosTableViewCellProtocol> *playingVideoCell;
@property (retain, nonatomic) id<ACCMusicModelProtocol> playingMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> editingMusic;
@property (nonatomic) long long editingRank;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSDictionary *musicExtra;
@property (retain, nonatomic) NSIndexPath *playingMusicIndexPath;
@property (nonatomic) BOOL isDownloadingMusic;
@property (retain, nonatomic) id<ACCTransitionViewControllerProtocol> transitionDelegate;
@property (nonatomic) unsigned long long cellPlayStatus;
@property (nonatomic) double startTime;
@property (retain, nonatomic) UIView *commerceLicenseHint;
@property (nonatomic) BOOL shouldClearHorizontalContentOffset;
@property (retain, nonatomic) NSMutableDictionary *footerDataList;
@property (retain, nonatomic) NSMutableDictionary *footerViewMap;
@property (retain, nonatomic) NSMutableDictionary *dynamicMusicCardIndexMap;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSArray *dataList;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWEASSMusicListHeaderDataSource> headerDataSource;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL toShowNoLyricStyle;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) BOOL disableCutMusic;
@property (copy, nonatomic) id /* block */ solveCloseGesture;
@property (copy, nonatomic) id /* block */ didSelectItem;
@property (copy, nonatomic) id /* block */ didEndDragList;
@property (copy, nonatomic) id /* block */ didScrollBlock;
@property (copy, nonatomic) id /* block */ cellClickedInfoBlock;
@property (nonatomic) unsigned long long listType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryId;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL showRank;
@property (nonatomic) BOOL showLyricLabel;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) BOOL isSearchMusic;
@property (copy, nonatomic) id /* block */ updatePublishModelCategoryIdBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) NSObject<ACCListDataControllerProtocol> *dataController;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)enterFrom;
- (void)setShootWay:(id)arg0;
- (void)setDataList:(id)arg0;
- (BOOL)isCommerce;
- (void)setIsCommerce:(BOOL)arg0;
- (id)creationId;
- (void)setCreationId:(id)arg0;
- (id)shootWay;
- (void)setLogPb:(id)arg0;
- (id)logPb;
- (void)p_setupUI;
- (void)setPlayingMusic:(id)arg0;
- (id)playingMusic;
- (id /* block */)didScrollBlock;
- (void)setDidScrollBlock:(id /* block */)arg0;
- (void)pauseAudio;
- (void)lynxAnimationStartWithNotification:(id)arg0;
- (void)lynxAnimationStartWithNotification:(id)arg0;
- (void)setDidSelectItem:(id /* block */)arg0;
- (void)appendWithModelArray:(id)arg0;
- (void)handleAppWillResignActiveNotification;
- (id)playerContainer;
- (void)setPlayerContainer:(id)arg0;
- (void)configDelegateViewWithStatus:(unsigned long long)arg0;
- (id)musicModelForDynamicModel:(id)arg0;
- (void)AWESearchDynamicTableViewCell:(id)arg0 didUpdateContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setDisableCutMusic:(BOOL)arg0;
- (void)setEnableClipBlock:(id /* block */)arg0;
- (BOOL)shouldHideCellMoreButton;
- (void)setShouldHideCellMoreButton:(BOOL)arg0;
- (id /* block */)enableClipBlock;
- (id /* block */)solveCloseGesture;
- (void)videoHasBeingPlayed:(id)arg0 withRow:(long long)arg1 column:(long long)arg2;
- (void)videoHasBeingPaused:(id)arg0 withRow:(long long)arg1 column:(long long)arg2;
- (void)videoWillShow:(id)arg0 withRow:(long long)arg1 column:(long long)arg2;
- (void)useMusic:(id)arg0 row:(long long)arg1 column:(long long)arg2;
- (void)gotoDetailPageWithAwemeModel:(id)arg0 row:(long long)arg1 column:(long long)arg2;
- (void)setSolveCloseGesture:(id /* block */)arg0;
- (BOOL)disableCutMusic;
- (BOOL)musicEnableStreamDownload;
- (void)clearContentOffset;
- (void)setDataListWithTag:(id)arg0 isLoadMoreRefresh:(BOOL)arg1;
- (id /* block */)willClipBlock;
- (void)setWillClipBlock:(id /* block */)arg0;
- (void)setShowLyricLabel:(BOOL)arg0;
- (void)setDidEndDragList:(id /* block */)arg0;
- (id /* block */)updatePublishModelCategoryIdBlock;
- (void)setUpdatePublishModelCategoryIdBlock:(id /* block */)arg0;
- (void)setIsSearchMusic:(BOOL)arg0;
- (void)setToShowNoLyricStyle:(BOOL)arg0;
- (void)lynxMusicSearchClipCanceled;
- (void)LynxMusicSearchClipConfirmed;
- (void)setCellPlayStatus:(unsigned long long)arg0;
- (void)setIsDownloadingMusic:(BOOL)arg0;
- (unsigned long long)cellPlayStatus;
- (void)p_collectionBtnClickedWithAudio:(id)arg0 cell:(id)arg1 order:(long long)arg2;
- (BOOL)isDownloadingMusic;
- (id /* block */)cellClickedInfoBlock;
- (id)p_getCategoryName:(id)arg0;
- (void)setShowRank:(BOOL)arg0;
- (void)observeURLPlayerState;
- (void)collectMusicWithParams:(id)arg0;
- (void)useMusicWithParams:(id)arg0;
- (void)onReceiveLynxAudioPlayNotificationWithParams:(id)arg0;
- (void)editMusicWithParams:(id)arg0;
- (void)receiveRecomendVideoCardStartToPlayNotification;
- (void)resetPlayingVideoInfon;
- (id)URLAudioPlayer;
- (id)playingMusicIndexPath;
- (BOOL)isGotoDetailPage;
- (void)setIsGotoDetailPage:(BOOL)arg0;
- (void)updateDynamicCardProgressBarFooterDataListWithTag:(BOOL)arg0;
- (BOOL)checkDataSourceMismatch:(long long)arg0 insertCount:(long long)arg1;
- (BOOL)dynamicMusicCardNeedHasProgressbar;
- (id)footerDataList;
- (id)dynamicMusicCardIndexMap;
- (id)videoCellOffsetDict;
- (void)setShouldClearHorizontalContentOffset:(BOOL)arg0;
- (id)editingMusic;
- (long long)editingRank;
- (void)trackCancelClipWithMusic:(id)arg0 rank:(long long)arg1;
- (void)trackConfirmClipWithMusic:(id)arg0 rank:(long long)arg1;
- (void)setPlayingMusicIndexPath:(id)arg0;
- (void)didPickAudio:(id)arg0 error:(id)arg1;
- (id)trackSearchEventParamWithMusicModel:(id)arg0 buttonType:(id)arg1 rank:(long long)arg2 logExtra:(id)arg3;
- (void)toUseMusic:(id)arg0 error:(id)arg1 collectionData:(id)arg2 rank:(long long)arg3 trackClick:(BOOL)arg4;
- (void)setLastPlayedContainer:(id)arg0;
- (void)setPlayingVideoRow:(long long)arg0;
- (void)setPlayingVideoColumn:(long long)arg0;
- (long long)playingVideoRow;
- (void)onReceiveLynxAudioPlayNotification;
- (void)setMusicExtra:(id)arg0;
- (void)changeMusicCardProgressBarStateWithReason:(long long)arg0 CardModel:(id)arg1;
- (id)trackSearchEventParamWithMusicModelAndEnterFrom:(id)arg0 buttonType:(id)arg1 rank:(long long)arg2 logExtra:(id)arg3 enterFrom:(id)arg4;
- (void)setLastPlayedVideoRow:(long long)arg0;
- (void)setLastPlayedVideoColumn:(long long)arg0;
- (id)getRecommendCardMusicTrackParamsByRow:(long long)arg0 column:(long long)arg1;
- (long long)playingVideoColumn;
- (void)confirmUseMusic:(id)arg0 rank:(long long)arg1 trackClick:(BOOL)arg2;
- (id)getRecommendCardSearchTrackParamsWithIndex:(long long)arg0;
- (id)headerDataSource;
- (BOOL)toShowNoLyricStyle;
- (void)setCellClickedInfoBlock:(id /* block */)arg0;
- (void)enterMusicDetailViewController:(id)arg0;
- (BOOL)shouldShowCellMoreButton;
- (BOOL)showLyricLabel;
- (BOOL)isSearchMusic;
- (BOOL)showRank;
- (void)updateRecommenCellLogEtra:(id)arg0 withModel:(id)arg1;
- (struct CGPoint { double x0; double x1; })getContentOffsetByIndex:(long long)arg0;
- (long long)lastPlayedVideoColumn;
- (id)tableView:(id)arg0 musicCellForRowAtIndexPath:(id)arg1 collectionData:(id)arg2;
- (id)tableView:(id)arg0 dynamicCellForRowAtIndexPath:(id)arg1 collectionData:(id)arg2;
- (id)tableView:(id)arg0 recommendVideosCellForRowAtIndexPath:(id)arg1 collectionData:(id)arg2;
- (id)footerViewMap;
- (id)commerceLicenseHint;
- (void)configunFoldStateForDynamicMusicCell;
- (id)searchLogParamsForFooterWithMusic:(id)arg0;
- (void)playDurationTrackForMusicId:(id)arg0 needClear:(BOOL)arg1;
- (void)recommendExposureTrackWithIndex:(long long)arg0;
- (BOOL)shouldClearHorizontalContentOffset;
- (void)recordContentOffset:(struct CGPoint { double x0; double x1; })arg0 byIndex:(long long)arg1;
- (id /* block */)didEndDragList;
- (void)setEditingRank:(long long)arg0;
- (void)setEditingMusic:(id)arg0;
- (void)editMusicWithAudio:(id)arg0;
- (void)p_trackCollectMusicWithMusic:(id)arg0 row:(long long)arg1 actionType:(unsigned long long)arg2;
- (void)p_collectMusicWithMusic:(id)arg0 actionType:(unsigned long long)arg1;
- (id)getRecommendCardSearchBaseParams;
- (id)getAweModelByRow:(long long)arg0 column:(long long)arg1;
- (id)musicExtra;
- (void)configScrollViewHeader:(id)arg0 footer:(id)arg1 infiniteScrollingAction:(id /* block */)arg2;
- (void)endLoadingAndRefreshingWithMoreData:(BOOL)arg0;
- (void)reloadWithModelArray:(id)arg0;
- (void)setDataListandPartialUpdateRows:(id)arg0;
- (id)createSearchParamsDict:(id)arg0 listItemId:(id)arg1 searchResId:(id)arg2;
- (void)setHeaderDataSource:(id)arg0;
- (void)setURLAudioPlayer:(id)arg0;
- (void)setVideoCellOffsetDict:(id)arg0;
- (id)lastPlayedContainer;
- (long long)lastPlayedVideoRow;
- (id)playingVideoCell;
- (void)setPlayingVideoCell:(id)arg0;
- (void)setCommerceLicenseHint:(id)arg0;
- (void)setFooterDataList:(id)arg0;
- (void)setFooterViewMap:(id)arg0;
- (void)setDynamicMusicCardIndexMap:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (id /* block */)completion;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)setCompletion:(id /* block */)arg0;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)audioPlayer;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)beginRefreshing;
- (void)scrollViewDidScroll:(id)arg0;
- (double)startTime;
- (void)setRepository:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)repository;
- (void)setAudioPlayer:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)pause;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (unsigned long long)listType;
- (void)setListType:(unsigned long long)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (id)categoryId;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg0;
- (void)playAudio;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setCategoryId:(id)arg0;
- (void)pauseVideo;
- (id /* block */)didSelectItem;
- (id)dataList;

@end

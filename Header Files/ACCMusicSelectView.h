//
//     Generated by private class-dump
//

@class ACCVideoEditMusicViewModel, NSIndexPath, UICollectionView, ACCMusicSelectUIConfig, NSObject, NSMutableArray, UIButton, UIView, UISelectionFeedbackGenerator, NSString, ACCMusicReplaceNoVoiceTipView, AWEVideoPublishMusicSelectTopTabView, NSTimer, NSMutableSet, AWEVideoPublishViewModel, ACCMusicAdvanceEditTipView, AWEMusicSelectItem, ACCSlidingScrollView;
@protocol ACCMusicCollectionViewProtocol, AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate, AWEVideoPublishMusicSelectViewRecentMusicDelegate, ACCMusicSelectViewDelegate;

@interface ACCMusicSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, ACCMusicSelectCollectionViewCellDelegate, ACCMusicAdvanceEditActionDelegate, ACCMusicSelectViewProtocol> {
    BOOL loadingAnimation;
    BOOL _canDeselectMusic;
    BOOL mvChangeMusicInProgress;
    BOOL _isFetchingMoreUserCollectedMusics;
    BOOL _hasReportSelectMusic;
    BOOL _musicSelectionInProgress;
    BOOL _firstOpenPanel;
    BOOL _isFetchingMoreRecentMusic;
    BOOL _userCollectionMusicDisable;
    BOOL _recommendMusicDisabel;
    BOOL _recentMusicDisable;
    BOOL _defaultSelectMusic;
    id /* block */ clipButtonClickHandler;
    id /* block */ favoriteButtonClickHandler;
    id /* block */ didSelectMusicHandler;
    id /* block */ enterMusicLibraryHandler;
    id /* block */ didSelectTabHandler;
    UICollectionView *_collectionView;
    NSObject<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> *userCollectedMusicDelegate;
    NSObject<AWEVideoPublishMusicSelectViewRecentMusicDelegate> *recentMusicDelegate;
    id /* block */ deselectMusicBlock;
    id /* block */ disableCutMusic;
    id /* block */ advanceEditTipDeleteActionHandler;
    id /* block */ advanceEditTipUnselectMusicEventTracker;
    id /* block */ deleteItemModelHandler;
    id<ACCMusicSelectViewDelegate> delegate;
    ACCSlidingScrollView *_musicContainerScrollView;
    UIButton *_clipButton;
    UIButton *_favoriteButton;
    NSString *_currentTabName;
    UIButton *_musicDiscoverButton;
    UIView *_searchBar;
    double _topTabViewTop;
    UIView *_tabHeaderView;
    AWEMusicSelectItem *_selectedMusic;
    AWEVideoPublishMusicSelectTopTabView *_topTabView;
    NSIndexPath *_selectedIndexPath;
    NSIndexPath *_previousSelectedIndexPath;
    NSMutableArray *_musicList;
    AWEVideoPublishViewModel *_publishModel;
    NSString *_currentTopTabStr;
    NSMutableArray *_userCollectedMusicList;
    NSIndexPath *_selectedUserCollectedMusicIndexPath;
    NSIndexPath *_previousSelectedUserCollectedMusicIndexPath;
    UICollectionView *_previousActivedCollectionView;
    NSMutableSet *_trackingMusicIDs;
    NSString *_musicID;
    UICollectionView<ACCMusicCollectionViewProtocol> *_userCollectedMusicCollectionView;
    NSTimer *_stopLoadingTimer;
    NSMutableArray *_recentMusicList;
    UICollectionView<ACCMusicCollectionViewProtocol> *_recentMusicCollectionView;
    NSIndexPath *_selectedRecentMusicIndexPath;
    NSIndexPath *_previousSelectedRecentMusicIndexPath;
    double _aniamtionRefTime;
    ACCVideoEditMusicViewModel *_musicViewModel;
    UISelectionFeedbackGenerator *_selectionFeedback;
    ACCMusicAdvanceEditTipView *_advanceEditTipView;
    ACCMusicReplaceNoVoiceTipView *_replaceMusicTipView;
    NSString *_contentType;
    ACCMusicSelectUIConfig *_uiConfig;
}

@property (retain, nonatomic) ACCSlidingScrollView *musicContainerScrollView;
@property (retain, nonatomic) UIButton *clipButton;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) NSString *currentTabName;
@property (retain, nonatomic) UIButton *musicDiscoverButton;
@property (retain, nonatomic) UIView *searchBar;
@property (nonatomic) double topTabViewTop;
@property (retain, nonatomic) UIView *tabHeaderView;
@property (retain, nonatomic) AWEMusicSelectItem *selectedMusic;
@property (retain, nonatomic) AWEVideoPublishMusicSelectTopTabView *topTabView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *previousSelectedIndexPath;
@property (retain, nonatomic) NSMutableArray *musicList;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSString *currentTopTabStr;
@property (retain, nonatomic) NSMutableArray *userCollectedMusicList;
@property (retain, nonatomic) NSIndexPath *selectedUserCollectedMusicIndexPath;
@property (retain, nonatomic) NSIndexPath *previousSelectedUserCollectedMusicIndexPath;
@property (retain, nonatomic) UICollectionView *previousActivedCollectionView;
@property (nonatomic) BOOL isFetchingMoreUserCollectedMusics;
@property (nonatomic) BOOL hasReportSelectMusic;
@property (nonatomic) BOOL musicSelectionInProgress;
@property (retain, nonatomic) NSMutableSet *trackingMusicIDs;
@property (copy, nonatomic) NSString *musicID;
@property (retain, nonatomic) UICollectionView<ACCMusicCollectionViewProtocol> *userCollectedMusicCollectionView;
@property (retain, nonatomic) NSTimer *stopLoadingTimer;
@property (nonatomic) BOOL loadingAnimation;
@property (nonatomic) BOOL firstOpenPanel;
@property (retain, nonatomic) NSMutableArray *recentMusicList;
@property (retain, nonatomic) UICollectionView<ACCMusicCollectionViewProtocol> *recentMusicCollectionView;
@property (retain, nonatomic) NSIndexPath *selectedRecentMusicIndexPath;
@property (retain, nonatomic) NSIndexPath *previousSelectedRecentMusicIndexPath;
@property (nonatomic) BOOL isFetchingMoreRecentMusic;
@property (nonatomic) double aniamtionRefTime;
@property (weak, nonatomic) ACCVideoEditMusicViewModel *musicViewModel;
@property (nonatomic) BOOL userCollectionMusicDisable;
@property (nonatomic) BOOL recommendMusicDisabel;
@property (nonatomic) BOOL recentMusicDisable;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback;
@property (retain, nonatomic) ACCMusicAdvanceEditTipView *advanceEditTipView;
@property (retain, nonatomic) ACCMusicReplaceNoVoiceTipView *replaceMusicTipView;
@property (nonatomic) BOOL defaultSelectMusic;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) ACCMusicSelectUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ disableCutMusic;
@property (copy, nonatomic) id /* block */ clipButtonClickHandler;
@property (copy, nonatomic) id /* block */ favoriteButtonClickHandler;
@property (copy, nonatomic) id /* block */ didSelectMusicHandler;
@property (copy, nonatomic) id /* block */ enterMusicLibraryHandler;
@property (copy, nonatomic) id /* block */ didSelectTabHandler;
@property (copy, nonatomic) id /* block */ advanceEditTipDeleteActionHandler;
@property (copy, nonatomic) id /* block */ deleteItemModelHandler;
@property (copy, nonatomic) id /* block */ advanceEditTipUnselectMusicEventTracker;
@property (weak, nonatomic) NSObject<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> *userCollectedMusicDelegate;
@property (weak, nonatomic) NSObject<AWEVideoPublishMusicSelectViewRecentMusicDelegate> *recentMusicDelegate;
@property (nonatomic) BOOL canDeselectMusic;
@property (copy, nonatomic) id /* block */ deselectMusicBlock;
@property (nonatomic) BOOL mvChangeMusicInProgress;
@property (weak, nonatomic) id<ACCMusicSelectViewDelegate> delegate;

- (id)musicID;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)uiConfig;
- (void)setMusicID:(id)arg0;
- (void)setUiConfig:(id)arg0;
- (id)musicList;
- (void)setMusicList:(id)arg0;
- (void)updateSelectedIndex;
- (BOOL)loadingAnimation;
- (id)currentTabName;
- (id)selectionFeedback;
- (void)setSelectedMusic:(id)arg0;
- (void)updateActionButtonState;
- (void)updateWithMusicList:(id)arg0 playingMusic:(id)arg1;
- (void)updateWithUserCollectedMusicList:(id)arg0;
- (void)updateWithRecentMusicList:(id)arg0;
- (void)resetFirstAnimation;
- (void)deselectMusic;
- (id)userCollectedMusicList;
- (void)setCanDeselectMusic:(BOOL)arg0;
- (void)setDisableCutMusic:(id /* block */)arg0;
- (void)setDidSelectMusicHandler:(id /* block */)arg0;
- (void)setEnterMusicLibraryHandler:(id /* block */)arg0;
- (void)setClipButtonClickHandler:(id /* block */)arg0;
- (void)setFavoriteButtonClickHandler:(id /* block */)arg0;
- (void)setDidSelectTabHandler:(id /* block */)arg0;
- (void)selectMusic:(id)arg0 error:(id)arg1 autoPlay:(BOOL)arg2;
- (id)selectedMusic;
- (void)selectMusic:(id)arg0 error:(id)arg1;
- (void)configPublishModel;
- (id)musicViewModel;
- (void)setMusicViewModel:(id)arg0;
- (id /* block */)disableCutMusic;
- (id)topTabView;
- (id /* block */)didSelectMusicHandler;
- (id /* block */)enterMusicLibraryHandler;
- (void)setTopTabView:(id)arg0;
- (BOOL)musicSelectionInProgress;
- (void)setMusicSelectionInProgress:(BOOL)arg0;
- (BOOL)canDeselectMusic;
- (void)setSelectionFeedback:(id)arg0;
- (void)refreshTabView;
- (id)clipButton;
- (void)setClipButton:(id)arg0;
- (void)setPreviousSelectedIndexPath:(id)arg0;
- (id)previousSelectedIndexPath;
- (void)trackAdvanceEditTipUnselectMusicEventForPreAction:(BOOL)arg0;
- (void)handleAdvanceEditTipDeleteAction;
- (void)refreshUIWithTipViewDisplay:(BOOL)arg0;
- (void)clipMusic:(id)arg0;
- (void)updateCurrentCollectionView;
- (id /* block */)clipButtonClickHandler;
- (id /* block */)favoriteButtonClickHandler;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 musicViewModel:(id)arg1 uiConfig:(id)arg2 userCollectedMusicList:(id)arg3;
- (void)setDeselectMusicBlock:(id /* block */)arg0;
- (void)setDeleteItemModelHandler:(id /* block */)arg0;
- (void)setUserCollectedMusicDelegate:(id)arg0;
- (void)setRecentMusicDelegate:(id)arg0;
- (void)trackFirstDismissPanelMusicType;
- (void)willDismissView;
- (void)updateCollectionViewWidth;
- (id)userCollectedMusicCollectionView;
- (id)recentMusicCollectionView;
- (BOOL)selectVisibleMusicItem;
- (void)refreshUILayout;
- (void)setUserCollectedMusicList:(id)arg0;
- (void)setMvChangeMusicInProgress:(BOOL)arg0;
- (void)setAdvanceEditTipDeleteActionHandler:(id /* block */)arg0;
- (void)setAdvanceEditTipUnselectMusicEventTracker:(id /* block */)arg0;
- (id)currentAdvanceEditor;
- (id /* block */)advanceEditTipDeleteActionHandler;
- (id /* block */)advanceEditTipUnselectMusicEventTracker;
- (id)advanceEditTipView;
- (BOOL)shouldShowReplaceMusicNoVoiceTipView;
- (id)replaceMusicTipView;
- (void)setAdvanceEditTipView:(id)arg0;
- (void)setReplaceMusicTipView:(id)arg0;
- (void)updateCellActionStatus:(id)arg0;
- (void)cellFavoriteButtonTapped:(id)arg0;
- (void)cellFavoriteButtonTapped:(id)arg0 itemModel:(id)arg1;
- (void)cellClipMusicButtonTapped:(id)arg0;
- (void)cellDidLongPressed:(id)arg0 cell:(id)arg1 cellModel:(id)arg2;
- (void)updateActionButtonsWithMusic:(id)arg0;
- (id)tabHeaderView;
- (id)musicDiscoverButton;
- (double)addTipViewsIfNeededAndReturnTipViewHeight;
- (id)musicContainerScrollView;
- (void)setupMusicCollectionView:(struct CGSize { double x0; double x1; })arg0;
- (void)setupUserCollectedMusicCollectionView:(struct CGSize { double x0; double x1; })arg0;
- (void)setupRecentMusicCollectionView:(struct CGSize { double x0; double x1; })arg0;
- (void)trackWhenMusicPanelSearchShow:(id)arg0;
- (BOOL)firstOpenPanel;
- (void)updateRecentMusicSelectTabWithClick:(BOOL)arg0;
- (id)recentMusicList;
- (id)selectedRecentMusicIndexPath;
- (void)updateRecommendMusicSelectTabWithClick:(BOOL)arg0;
- (void)clearSelectMusicIfNeeded;
- (void)setCurrentTabName:(id)arg0;
- (BOOL)shouldAddUserCollection;
- (void)setFirstOpenPanel:(BOOL)arg0;
- (void)p_endRefreshingWithHotMusic:(BOOL)arg0;
- (double)aniamtionRefTime;
- (void)setAniamtionRefTime:(double)arg0;
- (id)stopLoadingTimer;
- (void)setLoadingAnimation:(BOOL)arg0;
- (void)trackWhenMusicPanelDidUpdateMusicList;
- (void)setRecommendMusicDisabel:(BOOL)arg0;
- (BOOL)recommendMusicDisabel;
- (BOOL)autoSelectedRecommendMusic;
- (void)setStopLoadingTimer:(id)arg0;
- (BOOL)currentRecommendTabIsSelected;
- (void)deselectPreviousCellsWithCurrClickedCollectionView:(id)arg0;
- (void)setPreviousActivedCollectionView:(id)arg0;
- (void)selectMusic:(id)arg0 error:(id)arg1 autoPlay:(BOOL)arg2 shouldCallback:(BOOL)arg3;
- (id)getCurrentCollectionView;
- (long long)findMusicItem:(id)arg0 inList:(id)arg1;
- (void)setSelectedUserCollectedMusicIndexPath:(id)arg0;
- (void)setSelectedRecentMusicIndexPath:(id)arg0;
- (void)musicDiscoverButtonTapped:(id)arg0;
- (id)userCollectedMusicDelegate;
- (id)recentMusicDelegate;
- (void)updateUserCollectionMusicSelectTabWithClick:(BOOL)arg0;
- (BOOL)shouldFirstSelected;
- (void)_updateMusicDownloadStatus:(long long)arg0 forCellAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)configCollectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 musicList:(id)arg2 currentTabName:(id)arg3 selectdIndexPath:(id)arg4 shouldAddLongPressGesture:(BOOL)arg5;
- (id)selectedUserCollectedMusicIndexPath;
- (id)_cellAtIndexPath:(id)arg0 collectionView:(id)arg1;
- (id)getCurrentTabNameRecType:(id)arg0 musicID:(id)arg1;
- (void)p_startDownloadingMusic:(id)arg0 atIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)trackWhenUnselectMusic:(id)arg0 enterMethod:(id)arg1 extraInfos:(id)arg2;
- (id /* block */)deselectMusicBlock;
- (void)p_selectMusicItem:(id)arg0 atIndexPath:(id)arg1 collectionView:(id)arg2;
- (BOOL)defaultSelectMusic;
- (void)configCollectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 musicList:(id)arg2 selectedIndexPath:(id)arg3 previousSelectedIndexPath:(id)arg4 params:(id)arg5;
- (id)previousSelectedUserCollectedMusicIndexPath;
- (id)previousSelectedRecentMusicIndexPath;
- (void)p_track_music_show_withParams:(id)arg0;
- (id)trackingMusicIDs;
- (void)configCollectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 musicList:(id)arg3 selectedIndexPath:(id)arg4 previousSelectedIndexPath:(id)arg5 trackingMusicIDs:(id)arg6 needParams:(id)arg7;
- (void)setIsFetchingMoreUserCollectedMusics:(BOOL)arg0;
- (void)updateUserCollectedMusicCollectionInset;
- (void)setIsFetchingMoreRecentMusic:(BOOL)arg0;
- (void)updateRecentMusicCollectionInset;
- (BOOL)isFetchingMoreUserCollectedMusics;
- (BOOL)isFetchingMoreRecentMusic;
- (void)trackWhenEnterMusicTab:(id)arg0;
- (id)getMusicRecType;
- (id /* block */)didSelectTabHandler;
- (void)setCurrentTopTabStr:(id)arg0;
- (void)scrollContentOffsetUpdate:(long long)arg0 animation:(BOOL)arg1;
- (void)updateUserCollectedMusicListIfNeeded;
- (BOOL)userCollectionMusicDisable;
- (BOOL)autoSelectedCollectionMusic;
- (BOOL)selectVisibleMusicItemWithCollectionView:(id)arg0;
- (BOOL)recentMusicDisable;
- (id)itemForIndexPath:(id)arg0 collectionView:(id)arg1;
- (void)setupPreviousSelectedIndexPath:(id)arg0 collectionView:(id)arg1;
- (void)trackWhenMusicPanelDownloadMusic:(id)arg0 success:(BOOL)arg1 musicStartDownloadTime:(double)arg2 isStreamDownload:(BOOL)arg3;
- (id)previousSelectedIndexPath:(id)arg0;
- (void)updateMusicDownloadStatus:(BOOL)arg0 forCellAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)setPreviousSelectedUserCollectedMusicIndexPath:(id)arg0;
- (void)setPreviousSelectedRecentMusicIndexPath:(id)arg0;
- (id)previousActivedCollectionView;
- (BOOL)mvChangeMusicInProgress;
- (void)generateLightImpact;
- (id)previousActivedCollectionViewSelectedIndexPath;
- (void)p_reportSelectMusicTabName:(id)arg0 trackingIDs:(id)arg1;
- (void)_updateSelectedIndicatorFromIndexPath:(id)arg0 toIndexPath:(id)arg1 fromCollectionView:(id)arg2 toCollectionView:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)hasReportSelectMusic;
- (void)setHasReportSelectMusic:(BOOL)arg0;
- (void)deselectPreviousCellWithCollectionView:(id)arg0 selectedIndexPath:(id)arg1 musicCount:(unsigned long long)arg2;
- (void)synClipButtonStatusWithCell:(id)arg0;
- (void)synFavoriteButtonStatusWithCell:(id)arg0;
- (void)setDefaultSelectMusic:(BOOL)arg0;
- (id)musicRecommendTypeString;
- (void)setUserCollectionMusicDisable:(BOOL)arg0;
- (void)updateUserCollectionViewState;
- (void)setRecentMusicList:(id)arg0;
- (void)setRecentMusicDisable:(BOOL)arg0;
- (void)updateRecentCollectinViewState;
- (void)synOperationWithSelectedMusicCell:(id)arg0;
- (void)toggleFavorite:(id)arg0 itemModel:(id)arg1;
- (void)createPopoverActionSheet:(id)arg0 onCell:(id)arg1 cellModel:(id)arg2;
- (void)handleDeleteItem:(id)arg0;
- (id /* block */)deleteItemModelHandler;
- (void)trackWhenMusicPanelSearchClick:(id)arg0 tabName:(id)arg1;
- (void)updateActionButtonsWithMusic:(id)arg0 needUpdateCurrentCell:(BOOL)arg1;
- (void)updateClipButton:(id)arg0;
- (void)updateFavoriteButton:(id)arg0;
- (void)synClipButtonStatus;
- (void)synFavoriteButtonStatus;
- (id)commonTrackparams;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 musicViewModel:(id)arg1 userCollectedMusicList:(id)arg2;
- (void)resetToFirstTabItem;
- (BOOL)hasSelectingMusic;
- (id)selectedIndexPath:(id)arg0;
- (void)trackWhenClickKeepOriginalMusic:(BOOL)arg0;
- (void)setMusicContainerScrollView:(id)arg0;
- (void)setMusicDiscoverButton:(id)arg0;
- (double)topTabViewTop;
- (void)setTopTabViewTop:(double)arg0;
- (void)setTabHeaderView:(id)arg0;
- (id)currentTopTabStr;
- (void)setTrackingMusicIDs:(id)arg0;
- (void)setUserCollectedMusicCollectionView:(id)arg0;
- (void)setRecentMusicCollectionView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)searchBar;
- (void)setContentType:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)contentType;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setSearchBar:(id)arg0;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (void)setupUI;
- (void)updateCollectionView:(id)arg0;
- (void)toggleFavorite:(id)arg0;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;

@end
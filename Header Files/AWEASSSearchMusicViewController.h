//
//     Generated by private class-dump
//

@class AWEASMusicHistorySuggestionViewController, NSString, UIView, AWEVideoPublishViewModel, AWEASDiscoverSuggestionManager, AWEMusicCorrectView, NSMutableDictionary, AWEASSMusicListViewController, AWESearchMusicManager;
@protocol ACCMusicCommonSearchBarProtocol, ACCLoadingViewProtocol, ACCMusicViewBuilderProtocol, ACCMusicSearchSugViewControllerProtocol, ACCStudioSearchMusicFeelGoodProtocol;

@interface AWEASSSearchMusicViewController : UIViewController <ACCASSSearchMusicVCProtocol> {
    BOOL _disableCutMusic;
    BOOL _shouldHideCellMoreButton;
    BOOL _hasShownFeedbackFooter;
    BOOL _isLoadingMore;
    id /* block */ _completion;
    id /* block */ _enableClipBlock;
    id /* block */ _willClipBlock;
    id /* block */ _didTapSuggest;
    id /* block */ _solveCloseGesture;
    id /* block */ _didSelectHistoryQuery;
    id /* block */ _didSelectDiscoveryQuery;
    id /* block */ _dismissKeyboard;
    id /* block */ _didSelectSugQuery;
    id /* block */ _didSelectComplementQuery;
    id /* block */ _updatePublishModelCategoryIdBlock;
    id /* block */ _dismissHistoryViewBlock;
    id /* block */ _historVcBackClickedBlock;
    id /* block */ _searchRequestDidFinishBlock;
    NSString *_previousPage;
    NSMutableDictionary *_searchEnterTrackParams;
    NSString *_creationId;
    NSString *_enterFromSecond;
    NSString *_shootWay;
    NSMutableDictionary *_trackParams;
    double _shootDuration;
    long long _recordMode;
    AWEVideoPublishViewModel *_repository;
    id<ACCMusicCommonSearchBarProtocol> _searchBar;
    UIView *_listHeaderView;
    NSString *_searchType;
    unsigned long long _sourceType;
    AWEASSMusicListViewController *_listVC;
    id<ACCMusicSearchSugViewControllerProtocol> _sugVC;
    AWEASMusicHistorySuggestionViewController *_historyVC;
    AWESearchMusicManager *_searchManger;
    AWEASDiscoverSuggestionManager *_discoverDataManager;
    AWEMusicCorrectView *_correctView;
    UIView *_feedbackEntranceFooterView;
    id<ACCLoadingViewProtocol> _loadingView;
    NSString *_searchSugWords;
    id<ACCMusicViewBuilderProtocol> _viewBuilderImpl;
    id<ACCStudioSearchMusicFeelGoodProtocol> _surveyManager;
    long long _childShowType;
}

@property (retain, nonatomic) AWEASSMusicListViewController *listVC;
@property (retain, nonatomic) id<ACCMusicSearchSugViewControllerProtocol> sugVC;
@property (retain, nonatomic) AWEASMusicHistorySuggestionViewController *historyVC;
@property (retain, nonatomic) AWESearchMusicManager *searchManger;
@property (retain, nonatomic) AWEASDiscoverSuggestionManager *discoverDataManager;
@property (retain, nonatomic) AWEMusicCorrectView *correctView;
@property (retain, nonatomic) UIView *feedbackEntranceFooterView;
@property (nonatomic) BOOL hasShownFeedbackFooter;
@property (retain, nonatomic) id<ACCLoadingViewProtocol> loadingView;
@property (retain, nonatomic) NSString *searchSugWords;
@property (retain, nonatomic) id<ACCMusicViewBuilderProtocol> viewBuilderImpl;
@property (retain, nonatomic) id<ACCStudioSearchMusicFeelGoodProtocol> surveyManager;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long childShowType;
@property (copy, nonatomic) id /* block */ didTapSuggest;
@property (copy, nonatomic) id /* block */ solveCloseGesture;
@property (copy, nonatomic) id /* block */ didSelectHistoryQuery;
@property (copy, nonatomic) id /* block */ didSelectDiscoveryQuery;
@property (copy, nonatomic) id /* block */ dismissKeyboard;
@property (copy, nonatomic) id /* block */ didSelectSugQuery;
@property (copy, nonatomic) id /* block */ didSelectComplementQuery;
@property (copy, nonatomic) id /* block */ updatePublishModelCategoryIdBlock;
@property (copy, nonatomic) id /* block */ dismissHistoryViewBlock;
@property (copy, nonatomic) id /* block */ historVcBackClickedBlock;
@property (copy, nonatomic) id /* block */ searchRequestDidFinishBlock;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSMutableDictionary *searchEnterTrackParams;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) double shootDuration;
@property (nonatomic) long long recordMode;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCMusicCommonSearchBarProtocol> searchBar;
@property (retain, nonatomic) UIView *listHeaderView;
@property (copy, nonatomic) NSString *searchType;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) BOOL disableCutMusic;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFooterViewOpt;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)dismissLoadingView;
- (void)setShootWay:(id)arg0;
- (id)trackParams;
- (void)backButtonClicked;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (void)setTrackParams:(id)arg0;
- (id)creationId;
- (void)setCreationId:(id)arg0;
- (long long)recordMode;
- (void)setRecordMode:(long long)arg0;
- (id)shootWay;
- (void)p_setupUI;
- (double)shootDuration;
- (id)enterFromSecond;
- (void)setEnterFromSecond:(id)arg0;
- (id)surveyManager;
- (void)setSurveyManager:(id)arg0;
- (void)enterSearch;
- (void)p_loadMoreData;
- (id)listVC;
- (void)setShootDuration:(double)arg0;
- (void)setListVC:(id)arg0;
- (void)configEmptyPageState:(unsigned long long)arg0;
- (id)emptyPageConfigForSearchMusicWithState:(unsigned long long)arg0 sourceType:(unsigned long long)arg1;
- (void)emptyPagePrimaryButtonTapForErrorState;
- (void)setDisableCutMusic:(BOOL)arg0;
- (void)setEnableClipBlock:(id /* block */)arg0;
- (BOOL)shouldHideCellMoreButton;
- (void)setShouldHideCellMoreButton:(BOOL)arg0;
- (id /* block */)enableClipBlock;
- (id /* block */)solveCloseGesture;
- (void)setSolveCloseGesture:(id /* block */)arg0;
- (BOOL)disableCutMusic;
- (id)discoverDataManager;
- (id /* block */)dismissHistoryViewBlock;
- (id /* block */)didSelectHistoryQuery;
- (id /* block */)didSelectDiscoveryQuery;
- (void)setDidSelectHistoryQuery:(id /* block */)arg0;
- (void)setDidSelectDiscoveryQuery:(id /* block */)arg0;
- (void)setDismissKeyboard:(id /* block */)arg0;
- (void)setDismissHistoryViewBlock:(id /* block */)arg0;
- (void)setDiscoverDataManager:(id)arg0;
- (void)setHasShownFeedbackFooter:(BOOL)arg0;
- (id)sugVC;
- (id)historyVC;
- (id)searchSugWords;
- (void)p_makeHistorySuggestionShow:(BOOL)arg0;
- (void)p_makeSuggestionShow:(BOOL)arg0;
- (void)setSearchSugWords:(id)arg0;
- (id)searchManger;
- (void)p_performSearch:(id)arg0 clickSearch:(BOOL)arg1 enterFrom:(id)arg2;
- (void)transformAndSetListData:(BOOL)arg0;
- (void)removeCorrectViewFromTableView;
- (id /* block */)historVcBackClickedBlock;
- (long long)childShowType;
- (void)p_loadSearchBarRecommendQuery;
- (void)searchBeginEditing;
- (void)p_performSearch:(id)arg0 clickSearch:(BOOL)arg1;
- (BOOL)keywordHitBlackList;
- (void)p_endRefreshing:(BOOL)arg0 loadMoreRefresh:(BOOL)arg1;
- (id)feedbackEntranceFooterView;
- (void)p_showEmptyView;
- (void)p_dismissEmptyView;
- (void)p_makeMusicListShow:(BOOL)arg0;
- (id)p_shootTypeStringForRecordMode:(long long)arg0;
- (id)searchEnterTrackParams;
- (void)p_endRefreshing:(BOOL)arg0;
- (id)p_timeTabTypeStringForRecordMode:(long long)arg0;
- (id)p_snapshotTypeStringForRecordMode:(long long)arg0;
- (void)setCorrectView:(id)arg0;
- (void)trackCorrect:(id)arg0 event:(id)arg1;
- (id)correctView;
- (void)addCorrectViewToTableView;
- (id /* block */)searchRequestDidFinishBlock;
- (void)setChildShowType:(long long)arg0;
- (void)p_setupSearchBarPlaceHolder:(id)arg0;
- (unsigned long long)p_transformListType;
- (id /* block */)willClipBlock;
- (void)setWillClipBlock:(id /* block */)arg0;
- (id /* block */)updatePublishModelCategoryIdBlock;
- (void)setUpdatePublishModelCategoryIdBlock:(id /* block */)arg0;
- (unsigned long long)p_transformSourceType:(unsigned long long)arg0;
- (void)setViewBuilderImpl:(id)arg0;
- (id)viewBuilderImpl;
- (id /* block */)didSelectSugQuery;
- (id /* block */)didSelectComplementQuery;
- (void)lynxMusicSearchClipCanceled;
- (void)searchWithKeyword:(id)arg0 enterFrom:(id)arg1;
- (void)searchEndEditing;
- (void)textFieldClickReturn:(id)arg0;
- (void)loadRecomendQuery;
- (void)clearRecomendQuery;
- (void)changeSearchWord:(id)arg0;
- (void)pausePlayer;
- (void)lynxMusicSearchClipConfirmed;
- (void)setDidSelectSugQuery:(id /* block */)arg0;
- (void)setDidSelectComplementQuery:(id /* block */)arg0;
- (void)setHistorVcBackClickedBlock:(id /* block */)arg0;
- (void)setSearchEnterTrackParams:(id)arg0;
- (BOOL)searchResultEmpty;
- (id)logPbInfo;
- (id /* block */)didTapSuggest;
- (void)setDidTapSuggest:(id /* block */)arg0;
- (void)setSearchRequestDidFinishBlock:(id /* block */)arg0;
- (void)setSugVC:(id)arg0;
- (void)setHistoryVC:(id)arg0;
- (void)setSearchManger:(id)arg0;
- (void)setFeedbackEntranceFooterView:(id)arg0;
- (BOOL)hasShownFeedbackFooter;
- (void)setSourceType:(unsigned long long)arg0;
- (id)searchBar;
- (unsigned long long)sourceType;
- (id)listHeaderView;
- (void)setSearchType:(id)arg0;
- (id)searchType;
- (void)setSearchBar:(id)arg0;
- (void)viewDidLayoutSubviews;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id /* block */)dismissKeyboard;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setListHeaderView:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)clear;
- (void)viewDidLoad;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)initWithSearchType:(unsigned long long)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (double)footerInset;

@end
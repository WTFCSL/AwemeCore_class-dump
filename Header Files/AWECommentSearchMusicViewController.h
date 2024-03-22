//
//     Generated by private class-dump
//

@class AWEUILoadingView, UILabel, AWEAVPlayerWrapper, UITableView, UIViewController, NSMutableArray, UIButton, NSString, AWESearchBar, AWEMusicModel, AWECommentSearchMusicManager, AWECommentMusicSearchHint, NSIndexPath;
@protocol AWETextInputControllerProtocol, AWESearchSugViewControllerProtocol, AWECommentSearchMusicViewControllerDelegate;

@interface AWECommentSearchMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, AWEAVPlayerWrapperDelegate, AWECommentSearchMusicViewControllerProtocol> {
    BOOL _isRemotePlay;
    BOOL _isLoadingMore;
    id<AWECommentSearchMusicViewControllerDelegate> _delegate;
    id<AWETextInputControllerProtocol> _textInputController;
    NSString *_referString;
    UITableView *_tableView;
    AWECommentMusicSearchHint *_searchHint;
    AWESearchBar *_searchBar;
    UIButton *_searchBtn;
    UILabel *_titleLabel;
    UIButton *_closeBtn;
    AWEUILoadingView *_loadingView;
    UIViewController<AWESearchSugViewControllerProtocol> *_searchSugViewController;
    AWECommentSearchMusicManager *_searchManager;
    AWEAVPlayerWrapper *_audioPlayer;
    AWEMusicModel *_playingMusic;
    NSIndexPath *_selectedIndexPath;
    NSMutableArray *_trackedRow;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWECommentMusicSearchHint *searchHint;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UIButton *searchBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIViewController<AWESearchSugViewControllerProtocol> *searchSugViewController;
@property (retain, nonatomic) AWECommentSearchMusicManager *searchManager;
@property (nonatomic) BOOL isLoadingMore;
@property (retain, nonatomic) AWEAVPlayerWrapper *audioPlayer;
@property (retain, nonatomic) AWEMusicModel *playingMusic;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableArray *trackedRow;
@property (weak, nonatomic) id<AWECommentSearchMusicViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWETextInputControllerProtocol> textInputController;
@property (nonatomic) BOOL isRemotePlay;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (BOOL)isRemotePlay;
- (void)setIsRemotePlay:(BOOL)arg0;
- (double)panelHeight;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)setPlayingMusic:(id)arg0;
- (id)playingMusic;
- (void)playerWrapper:(id)arg0 didChangePlayStatus:(unsigned long long)arg1;
- (void)configureUI;
- (void)__clearViews;
- (id)trackedRow;
- (id)searchSugViewController;
- (void)__cancelPlayState;
- (void)__cancelAudioPlayInBackground:(id)arg0;
- (void)stateOfHeadphones:(id)arg0;
- (id)searchBtn;
- (void)__loadMoreMusic;
- (BOOL)__isIndexPathValid:(id)arg0;
- (void)didSelectMusicAtIndexPath:(id)arg0;
- (void)__clickCloseButton;
- (void)__trackCellWithIndexPath:(id)arg0;
- (void)audioPlayMusicWithModel:(id)arg0 index:(long long)arg1;
- (void)__attachSuggestView;
- (void)__searchButtonClicked;
- (void)__retrySearch;
- (void)__attachResultView;
- (void)__searchWithKeyword:(id)arg0 isSuggest:(BOOL)arg1 isRetry:(BOOL)arg2;
- (id)searchHint;
- (void)__attachHintViewWithEmpty:(BOOL)arg0 error:(BOOL)arg1;
- (void)__insertMusicsToTableViewWith:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setSearchHint:(id)arg0;
- (void)setSearchBtn:(id)arg0;
- (void)setSearchSugViewController:(id)arg0;
- (void)setTrackedRow:(id)arg0;
- (id)searchBar;
- (void)setSearchBar:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)setTextInputController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)audioPlayer;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (id)titleLabel;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)textInputController;
- (void)setAudioPlayer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)searchBarSearchButtonClicked:(id)arg0;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (id)searchManager;
- (void)setSearchManager:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end

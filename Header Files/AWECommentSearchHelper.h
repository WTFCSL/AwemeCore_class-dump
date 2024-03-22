//
//     Generated by private class-dump
//

@class AWECommentSearchViewController, NSString, NSTimer, UIView;
@protocol AWECommentListInputViewProtocol, AWETextInput, AWECommentSearchHelperDelegate, AWETextInputControllerProtocol, AWECommentSearchParentViewController;

@interface AWECommentSearchHelper : NSObject <AWECommentSearchViewControllerDelegate, AWECommentSearchHelperProtocol> {
    BOOL _displayingSearch;
    BOOL _displayingFullscreenSearch;
    BOOL _displayingMusicSearch;
    BOOL _searchAnimating;
    BOOL _isAddingUser;
    BOOL _isDeletingUser;
    BOOL _textHasValidAt;
    long long _indexForUserPositionInMentionShowList;
    id<AWECommentSearchHelperDelegate> _delegate;
    id<AWETextInput> _textInput;
    id<AWETextInputControllerProtocol> _textInputController;
    id<AWECommentSearchParentViewController> _searchParentViewController;
    UIView<AWECommentListInputViewProtocol> *_commentInputView;
    AWECommentSearchViewController *_searchViewController;
    AWECommentSearchViewController *_fullscreenSearchViewController;
    NSTimer *_searchThresholdTimer;
}

@property (retain, nonatomic) NSTimer *searchThresholdTimer;
@property (nonatomic) BOOL textHasValidAt;
@property (readonly, nonatomic) AWECommentSearchViewController *dynamicSearchViewController;
@property (weak, nonatomic) id<AWECommentSearchHelperDelegate> delegate;
@property (weak, nonatomic) id<AWETextInput> textInput;
@property (weak, nonatomic) id<AWETextInputControllerProtocol> textInputController;
@property (weak, nonatomic) id<AWECommentSearchParentViewController> searchParentViewController;
@property (weak, nonatomic) UIView<AWECommentListInputViewProtocol> *commentInputView;
@property (retain, nonatomic) AWECommentSearchViewController *searchViewController;
@property (retain, nonatomic) AWECommentSearchViewController *fullscreenSearchViewController;
@property (nonatomic) BOOL displayingSearch;
@property (nonatomic) BOOL displayingFullscreenSearch;
@property (nonatomic) BOOL displayingMusicSearch;
@property (nonatomic) BOOL searchAnimating;
@property (nonatomic) BOOL isAddingUser;
@property (nonatomic) BOOL isDeletingUser;
@property (nonatomic) long long indexForUserPositionInMentionShowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (id)generalModel;
- (unsigned long long)inputViewExternSceneForTrack;
- (void)setIsDeletingUser:(BOOL)arg0;
- (long long)indexForUserPositionInMentionShowList;
- (void)setIndexForUserPositionInMentionShowList:(long long)arg0;
- (void)startSearchingUser;
- (void)endSearchingUser;
- (void)setSearchParentViewController:(id)arg0;
- (void)clearSearchCache;
- (void)reloadList;
- (void)setIsAddingUser:(BOOL)arg0;
- (BOOL)displayingSearch;
- (void)trackSendCommentWithAt;
- (id)commentInputView;
- (BOOL)displayingMusicSearch;
- (void)setCommentInputView:(id)arg0;
- (BOOL)needShowSendToIMEntrance;
- (void)setTextHasValidAt:(BOOL)arg0;
- (void)showSearchViewController;
- (id)dynamicSearchViewController;
- (void)dismissSearchViewController:(BOOL)arg0;
- (BOOL)displayingFullscreenSearch;
- (void)setSearchAnimating:(BOOL)arg0;
- (id)fullscreenSearchViewController;
- (void)setDisplayingFullscreenSearch:(BOOL)arg0;
- (id)searchParentViewController;
- (void)setDisplayingSearch:(BOOL)arg0;
- (id)currentSearchKeywordRange;
- (BOOL)isAddingUser;
- (BOOL)isDeletingUser;
- (BOOL)isInputDoubleSpace:(long long)arg0;
- (id)searchThresholdTimer;
- (void)onSearchTimer;
- (void)setSearchThresholdTimer:(id)arg0;
- (id)getGeneralItemParams;
- (long long)numberOfAtUser;
- (id)getCommentAtTrackInfo;
- (BOOL)textHasValidAt;
- (id)currentSearchKeyword;
- (void)showSearchView;
- (void)didSelectSearchResult:(id)arg0 trackInfo:(id)arg1;
- (void)didDeselectSearchResult:(id)arg0;
- (void)didSendMessageToUser:(id)arg0;
- (id)extraInfoList;
- (void)searchCompleteWithNoResult;
- (void)searchCompleteWithResult;
- (id)getTrackInfo;
- (void)endSearchAfterClickFullscreenBtn:(BOOL)arg0;
- (void)setFullscreenSearchViewController:(id)arg0;
- (void)setDisplayingMusicSearch:(BOOL)arg0;
- (BOOL)searchAnimating;
- (id)searchViewController;
- (void)resetStatus;
- (void)setTextInputController:(id)arg0;
- (void).cxx_destruct;
- (void)dismissSearchView;
- (id)delegate;
- (void)textDidChange;
- (id)textInputController;
- (void)setSearchViewController:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)textInput;
- (void)setTextInput:(id)arg0;

@end
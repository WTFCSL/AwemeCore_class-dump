//
//     Generated by private class-dump
//

@class _TtC19AWECommentSwiftImpl18CommentPageContext;

@interface AWECommentSwiftImpl.CommentViewController : AWEBaseListViewController <AWECommentImagePreviewFadeInTransitionContextProvider, AWECommentListInputViewDelegate, UIScrollViewDelegate, AWECommentQuickCommentParentViewController, AWEPublishTaskMessage, AWEUserMessage, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ enableCommentListPreLoad;
    void /* unknown type, empty encoding */ maxCountOfSectionVMToFillScreen;
    void /* unknown type, empty encoding */ willSendCommentBlock;
    void /* unknown type, empty encoding */ willShowKeyboardBlock;
    void /* unknown type, empty encoding */ willHideKeyboardBlock;
    void /* unknown type, empty encoding */ didHideKeyboardBlock;
    void /* unknown type, empty encoding */ _scrollTriggledByContentOffset;
    void /* unknown type, empty encoding */ _commentEggPlaceholder;
    void /* unknown type, empty encoding */ _replyID;
    void /* unknown type, empty encoding */ _replyComment;
    void /* unknown type, empty encoding */ _forbidShowCommentSwipeRightGuide;
    void /* unknown type, empty encoding */ isFromVideoAbstractFullTextBtn;
    void /* unknown type, empty encoding */ _enterTextStartTimestamp;
    void /* unknown type, empty encoding */ _replySubComment;
    void /* unknown type, empty encoding */ fakeComment;
    void /* unknown type, empty encoding */ _selectedIndexPath;
    void /* unknown type, empty encoding */ _videoReplyComment;
    void /* unknown type, empty encoding */ _videoReplySubComment;
    void /* unknown type, empty encoding */ _fakeVideoComment;
    void /* unknown type, empty encoding */ _noticeReplyCommentModel;
    void /* unknown type, empty encoding */ _isPublishingVideoComment;
    void /* unknown type, empty encoding */ _originOffsetY;
    void /* unknown type, empty encoding */ _commentSending;
    void /* unknown type, empty encoding */ _isHumanDraggingScrollTableView;
    void /* unknown type, empty encoding */ _didCloseBottomTipsView;
    void /* unknown type, empty encoding */ _needSkipScrollActionWhenInputViewHidden;
    void /* unknown type, empty encoding */ _browseAnchor;
    void /* unknown type, empty encoding */ retryView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sectionControllerContainerDelegate;
    void /* unknown type, empty encoding */ innerDelegate;
    void /* unknown type, empty encoding */ collectionViewHeight;
    void /* unknown type, empty encoding */ _lastCollectionViewSize;
    void /* unknown type, empty encoding */ _postCommentEnterTextMethod;
    void /* unknown type, empty encoding */ _bottomTipsViewInfo;
    void /* unknown type, empty encoding */ _isFirstLoaded;
    void /* unknown type, empty encoding */ _lastExpandingCommentSectionController;
    void /* unknown type, empty encoding */ _privacyCtrl;
    void /* unknown type, empty encoding */ _selectedImageIndexPath;
    void /* unknown type, empty encoding */ _commentSearchHideConstraint;
    void /* unknown type, empty encoding */ _commentSearchShowConstraint;
    void /* unknown type, empty encoding */ _commentMusicSearchHideConstraint;
    void /* unknown type, empty encoding */ _commentMusicSearchShowConstraint;
    void /* unknown type, empty encoding */ _commentQuickCommentHideConstraint;
    void /* unknown type, empty encoding */ _commentQuickCommentShowConstraint;
    void /* unknown type, empty encoding */ _miniEmoticonPanelHideConstraint;
    void /* unknown type, empty encoding */ _miniEmoticonPanelShowConstraint;
    void /* unknown type, empty encoding */ _needReloadTableViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customLayout;
    void /* unknown type, empty encoding */ _commentGuideManager;
    void /* unknown type, empty encoding */ __inputCacheManager;
    void /* unknown type, empty encoding */ __headerVC;
    void /* unknown type, empty encoding */ __commentBottomTipsContainerVC;
    void /* unknown type, empty encoding */ commentViewHeight;
    void /* unknown type, empty encoding */ _isHighlightCommentCellAnimating;
}

@property (nonatomic, retain) _TtC19AWECommentSwiftImpl18CommentPageContext *pageContext;

+ (Class)viewModelClass;

- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (void)didFinishLogin;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (id)fadeInTransitionStartViewForOffset:(long long)arg0;
- (BOOL)commentInputViewShouldBeginEditing:(id)arg0;
- (void)growingTextViewDidChange:(id)arg0;
- (void)growingTextViewDidEndEditing:(id)arg0;
- (void)growingTextViewDidBeginEditing:(id)arg0;
- (id)emptySectionsPlaceholderView;
- (void)screenshotNotificationWithNotice:(id)arg0;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)arg0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)arg0;
- (BOOL)disableContentOffsetRestorationAnchor;
- (void)willResignActiveNotificationWithNotice:(id)arg0;
- (BOOL)commentInputViewShouldReturn:(id)arg0;
- (void)commentInputViewWillAnimate:(id)arg0 duration:(double)arg1;
- (void)commentInputViewDidExistFullscreenWithoutKeyboard:(id)arg0;
- (BOOL)commentInputViewEnableTimeMention;
- (BOOL)commentInputViewVideoReplyButtonClicked:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)commentInputViewNeedBlockTapByFullScreen;
- (void)commentInputViewWillChangeFullscreen:(BOOL)arg0;
- (void)commentInputViewDidEnterFullscreen:(id)arg0;
- (void)commentInputViewDidExistFullscreen:(id)arg0;
- (void)commentInputViewWillChangeFrameAdditionalAnimation:(id)arg0;
- (void)commentInputViewWillChangeFrame:(id)arg0 keyboardSize:(struct CGSize { double x0; double x1; })arg1;
- (void)commentInputViewDidHide:(id)arg0;
- (void)commentInputViewWillHideAdditionalAnimation:(id)arg0 keyboardSize:(struct CGSize { double x0; double x1; })arg1;
- (void)commentInputViewWillHide:(id)arg0 keyboardSize:(struct CGSize { double x0; double x1; })arg1;
- (void)commentInputViewDidShow:(id)arg0;
- (void)commentInputViewWillShowAdditionalAnimation:(id)arg0 keyboardSize:(struct CGSize { double x0; double x1; })arg1;
- (void)commentInputViewWillShow:(id)arg0 keyboardSize:(struct CGSize { double x0; double x1; })arg1;
- (void)commentInputViewWillShowByEmoticon:(id)arg0 keyboardSize:(struct CGSize { double x0; double x1; })arg1;
- (void)commentInputView:(id)arg0 didChangeHeightWithDiff:(double)arg1;
- (void)didBecomeActiveNotificationWithNotice:(id)arg0;
- (void)commentLikeActionNotificationWithNotice:(id)arg0;
- (BOOL)showQuickCommentView:(id)arg0;
- (void)dismissQuickCommentView:(id)arg0;
- (void)deleteCommentNoticeWithNotice:(id)arg0;
- (void)addCommentNoticeWithNotice:(id)arg0;
- (void)hideCommentNoticeWithNotice:(id)arg0;
- (void)commentDidPublishSuccessWithNotice:(id)arg0;
- (void)commentReportDidSubmitWithNotice:(id)arg0;
- (void)xiguaBottomGuideTapped;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setupCollectionView:(id)arg0;

@end
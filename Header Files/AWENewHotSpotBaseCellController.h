//
//     Generated by private class-dump
//

@class AWEFeedVideoTagView, AWELiveVSEpisode, AWENewHotSpotAuthorInfoView, UITableView, UITapGestureRecognizer, UIViewController, AWEAwemePlayInteractionRouter, AWENewHotSpotActionPanelView, UIView, UILabel, UILongPressGestureRecognizer, NSString, AWENewHotSpotGeneralCellFrame, AWEAwemePlayInteractionInteractor, AWENewHotSpotContentLabel, AWENewHotSpotMediaContainerView, AWEAwemeModel, NSArray, AWENewHotSpotAnchorView;
@protocol AWEModernFeedCellContext, AWECommentListViewControllerProtocol;

@interface AWENewHotSpotBaseCellController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWECommentControlVideoStateProtocol, AWEAwemeMessage, AWEModernFeedCellControllerProtocol, UIGestureRecognizerDelegate> {
    BOOL _isViewAppearing;
    BOOL _isFullScreen;
    BOOL _commentVCHasShown;
    BOOL _commentVCNeedRefresh;
    BOOL _ironManClicked;
    BOOL _hasHashTagShow;
    BOOL _hashTagShowedBefore;
    BOOL _hasHotSpotTagShow;
    id<AWEModernFeedCellContext> _context;
    AWEAwemePlayInteractionRouter *_router;
    AWEAwemePlayInteractionInteractor *_interactor;
    NSString *_referString;
    NSString *_pageType;
    AWENewHotSpotGeneralCellFrame *_cellFrameModel;
    AWEAwemeModel *_model;
    AWENewHotSpotMediaContainerView *_mediaContainerView;
    NSArray *_commentList;
    AWENewHotSpotAuthorInfoView *_authorInfoView;
    AWENewHotSpotContentLabel *_contentLabel;
    AWENewHotSpotAnchorView *_anchorView;
    AWENewHotSpotActionPanelView *_actionPanelView;
    UITableView *_commentListTableView;
    UIViewController<AWECommentListViewControllerProtocol> *_commentVC;
    UILabel *_hotSpotTagView;
    UIViewController *_hostVC;
    AWELiveVSEpisode *_episode;
    UIView *_blankVideoClickView;
    AWEFeedVideoTagView *_videoTagView;
    UITapGestureRecognizer *_fullscreenGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    double _videoDidActivityStartTime;
    double _lastClickTimestamp;
    double _enterTime;
}

@property (weak, nonatomic) UIViewController *hostVC;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEAwemePlayInteractionRouter *router;
@property (retain, nonatomic) AWEAwemePlayInteractionInteractor *interactor;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) UIView *blankVideoClickView;
@property (retain, nonatomic) AWEFeedVideoTagView *videoTagView;
@property (nonatomic) BOOL isViewAppearing;
@property (retain, nonatomic) UITapGestureRecognizer *fullscreenGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) BOOL commentVCHasShown;
@property (nonatomic) BOOL commentVCNeedRefresh;
@property (nonatomic) double videoDidActivityStartTime;
@property (nonatomic) double lastClickTimestamp;
@property (nonatomic) BOOL ironManClicked;
@property (nonatomic) BOOL hasHashTagShow;
@property (nonatomic) BOOL hashTagShowedBefore;
@property (nonatomic) BOOL hasHotSpotTagShow;
@property (nonatomic) double enterTime;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *pageType;
@property (retain, nonatomic) AWENewHotSpotGeneralCellFrame *cellFrameModel;
@property (retain, nonatomic) AWENewHotSpotMediaContainerView *mediaContainerView;
@property (retain, nonatomic) NSArray *commentList;
@property (retain, nonatomic) AWENewHotSpotAuthorInfoView *authorInfoView;
@property (retain, nonatomic) AWENewHotSpotContentLabel *contentLabel;
@property (retain, nonatomic) AWENewHotSpotAnchorView *anchorView;
@property (retain, nonatomic) AWENewHotSpotActionPanelView *actionPanelView;
@property (retain, nonatomic) UITableView *commentListTableView;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (retain, nonatomic) UILabel *hotSpotTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)arg0 width:(double)arg1;

- (id)referString;
- (void)setReferString:(id)arg0;
- (BOOL)pauseVideoIfPlaying;
- (BOOL)recoverPlayIfPauseByComment;
- (void)didTurnAweme:(id)arg0 toPrivateType:(unsigned long long)arg1;
- (BOOL)alertIfNotValid;
- (void)setIsViewAppearing:(BOOL)arg0;
- (id)commentVC;
- (void)setCommentVC:(id)arg0;
- (id)hostVC;
- (void)showSharePanel;
- (void)trackShow;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:(double)arg0;
- (void)commentLikeActionNotification:(id)arg0;
- (void)trackForbidCommentToastShow:(id)arg0;
- (void)videoPlayerViewTapped:(id)arg0;
- (void)videoPlayerViewSingleTapped:(id)arg0;
- (void)videoPlayerViewDoubleTapped:(id)arg0;
- (void)videoPlayerViewDoubleTappedAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onAwemeDiggNotification:(id)arg0;
- (id)mediaContainerView;
- (void)setMediaContainerView:(id)arg0;
- (void)trackAnchorShowWithType:(id)arg0;
- (void)doActionIfNotValid;
- (void)doActionIfNotValidWithText:(id)arg0;
- (void)setHostVC:(id)arg0;
- (void)didSelectLinkWithURL:(id)arg0;
- (void)updateSubviewsContentWithModel:(id)arg0;
- (void)updateSubviewsContentWithModel:(id)arg0 animated:(BOOL)arg1;
- (void)updateWithReferString:(id)arg0;
- (void)updateWithHostVC:(id)arg0;
- (void)didStartShowing;
- (BOOL)isMediaSourceCard;
- (void)didBecomeActiveForReason:(unsigned long long)arg0;
- (void)didResignActiveForReason:(unsigned long long)arg0;
- (void)didEndShowing;
- (void)resetDisplayStatus;
- (void)didBecomeVisibleToUsers;
- (id)videoTagView;
- (void)setVideoTagView:(id)arg0;
- (id)authorInfoView;
- (id)actionPanelView;
- (void)commentAddedNotification:(id)arg0;
- (void)commentDeleteNotification:(id)arg0;
- (void)commentTotalCountNotification:(id)arg0;
- (void)setAuthorInfoView:(id)arg0;
- (void)setActionPanelView:(id)arg0;
- (void)videoPlayerViewSingleTappedAction:(id)arg0;
- (id)mediaContentView;
- (void)authorNameTapped:(id)arg0;
- (void)awe_trackNonVideoEvent:(id)arg0 extra:(id)arg1;
- (id)cellFrameModel;
- (id)hotSpotTagView;
- (void)awe_trackHotSpotTagShowWithTagName:(id)arg0 extra:(id)arg1;
- (void)trackLiveAvatartShowIfNeeded;
- (id)logExtraDictWithDict:(id)arg0;
- (BOOL)ironManClicked;
- (void)trackIronMan_in_video_tag;
- (void)setIronManClicked:(BOOL)arg0;
- (BOOL)hasHashTagShow;
- (void)setHasHashTagShow:(BOOL)arg0;
- (void)trackEventForPersonDetail:(id)arg0 toUserID:(id)arg1;
- (void)trackEventForHashTag:(id)arg0;
- (void)awe_trackEventForHotSpotTagWithTopic:(id)arg0 actionType:(id)arg1;
- (id)getTagIdForHashtag:(id)arg0 awemeModel:(id)arg1;
- (BOOL)hasHotSpotTagShow;
- (void)setHasHotSpotTagShow:(BOOL)arg0;
- (id)coCreateTrackParams;
- (void)trackEvent:(id)arg0 message:(id)arg1;
- (id)awe_commonTrackParamsWithExtra:(id)arg0;
- (id)tokenTypeForModel:(id)arg0;
- (void)trackEnterFullScreen;
- (void)trackIronManAgain;
- (void)trackPureTextWithActionType:(id)arg0;
- (void)trackChallengTitleShow:(id)arg0;
- (void)trackChallengTitleClick:(id)arg0;
- (void)trackContentClickEventWithURLString:(id)arg0;
- (void)trackHotSpotTagTitleShow;
- (void)enterXiguaPersonalPage:(id)arg0;
- (id)postCommentExtraLogDicWithEnterMethod:(id)arg0;
- (void)didStartShowingTracking:(BOOL)arg0;
- (void)trackEndShow;
- (void)trackComment:(id)arg0 likeAction:(BOOL)arg1;
- (void)trackClickTransLayer;
- (void)trackIronMan_comment_top;
- (void)trackAnchorShowWithType:(id)arg0 extraParameter:(id)arg1;
- (void)awe_trackNewHotSpotEnterFullScreenWithExtraDict:(id)arg0;
- (void)didTurnAweme:(id)arg0 toExchangeType:(unsigned long long)arg1;
- (BOOL)needLongPressGesture;
- (void)addLongPressGesture;
- (id)interactView;
- (void)addEventHandlerToAuthorInfoView;
- (id)blankVideoClickView;
- (id)commentListTableView;
- (void)onAwemeFamiliarRecommendStatusChangedNotification:(id)arg0;
- (void)onAwemeFavoriteNotification:(id)arg0;
- (void)privacyStatusChangedNotification:(id)arg0;
- (void)updatePrivacyTagView;
- (void)userAvatarImageTapped:(id)arg0;
- (BOOL)tryEnterVSDetail;
- (id /* block */)shareConfigurationHandler;
- (BOOL)shouldRespondToTapOfMediaView;
- (void)videoPlayerViewSingleTappedAction:(id)arg0 extraParams:(id)arg1;
- (void)didEnterFullScreen;
- (BOOL)canDoDiggAction;
- (void)doSafeDigg:(BOOL)arg0 enterMethod:(id)arg1;
- (BOOL)stickersAreaTapped;
- (void)setCellFrameModel:(id)arg0;
- (void)updateSubviewsContent:(BOOL)arg0;
- (void)updateSubviewFrames;
- (double)videoDidActivityStartTime;
- (void)setVideoDidActivityStartTime:(double)arg0;
- (void)setHashTagShowedBefore:(BOOL)arg0;
- (BOOL)awe_isFoldText:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)awe_foldText;
- (BOOL)isClickJumpTime:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)awe_contentExpandClick;
- (void)awe_contentFullTextClick;
- (BOOL)awe_canExpandFoldPureText;
- (void)awe_expandPureText;
- (void)blankVideoClickViewTapped:(id)arg0;
- (void)setFullscreenGesture:(id)arg0;
- (id)fullscreenGesture;
- (void)onIronManButtonClicked:(id)arg0;
- (void)shoppingCartClickAction;
- (void)onPoiButtonClicked:(id)arg0;
- (void)onPlatformButtonClicked:(id)arg0;
- (void)onMvButtonClicked:(id)arg0;
- (void)onStickerButtonClicked:(id)arg0;
- (void)updateLogExtraDic;
- (void)likeVideoClickAction;
- (void)commentVideoClickActionWithCommentIDs:(id)arg0 showInputView:(BOOL)arg1 enterMethod:(id)arg2;
- (void)favoriteButtonClickActionWithButton:(id)arg0;
- (void)shareVideoClickAction;
- (unsigned long long)commentPanelEnterSource:(id)arg0;
- (void)seekPlayerTimeTo:(double)arg0 jumpTimeStr:(id)arg1;
- (void)setCommentVCNeedRefresh:(BOOL)arg0;
- (void)doSafeFavoriteWithButton:(id)arg0;
- (void)focusCurrentCellIfNeeded;
- (BOOL)canPostCommentWithToast:(BOOL)arg0;
- (void)showCommentPanelWithCommentIDs:(id)arg0 showInputView:(BOOL)arg1 exterMethod:(id)arg2;
- (void)setCommentVCHasShown:(BOOL)arg0;
- (BOOL)commentVCNeedRefresh;
- (BOOL)commentVCHasShown;
- (void)doSafeDigg:(BOOL)arg0 enterMethod:(id)arg1 ignoreUnlogin:(BOOL)arg2 animationBlock:(id /* block */)arg3;
- (void)jumpToMerchandiseWithRequest:(id)arg0;
- (void)awe_enterPOIFullScreenPage;
- (void)setCommentListTableView:(id)arg0;
- (void)setHotSpotTagView:(id)arg0;
- (void)setBlankVideoClickView:(id)arg0;
- (BOOL)hashTagShowedBefore;
- (id)pageType;
- (void)setModel:(id)arg0;
- (id)longPressGesture;
- (id)initWithContext:(id)arg0;
- (id)interactor;
- (id)init;
- (BOOL)isFullScreen;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setInteractor:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)context;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setPageType:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)anchorView;
- (void)setAnchorView:(id)arg0;
- (void)handleLongPressGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setEpisode:(id)arg0;
- (id)episode;
- (id)router;
- (void)setRouter:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (void)updateWithModel:(id)arg0;
- (void)updateContext:(id)arg0;
- (BOOL)isViewAppearing;
- (void)addObservers;

@end
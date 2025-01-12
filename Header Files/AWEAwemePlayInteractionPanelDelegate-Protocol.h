//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, UIViewController, UIPinchGestureRecognizer, NSMutableArray, UILongPressGestureRecognizer;
@protocol AWEAwemeLongPressModalViewControllerProtocol, AWEStoryShootGuideViewControllerProtocol, AWELikeUserListPanelViewControllerProtocol;

@protocol AWEAwemePlayInteractionPanelDelegate <NSObject, AWEShareGuideDelegate>

@property (nonatomic, retain) NSMutableArray *commentModelListToInsert;
@property (nonatomic, readonly) UILongPressGestureRecognizer *dislikeGesture;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL sharePanelShowed;
@property (nonatomic, retain) UIViewController<AWELikeUserListPanelViewControllerProtocol> *likeUserListViewController;
@property (nonatomic, retain) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (nonatomic, retain) UIViewController<AWEStoryShootGuideViewControllerProtocol> *storyShootGuideVC;
@property (nonatomic) double horizontalTopRadio;

@optional

- (BOOL)isShowingDislike;
- (BOOL)isRelatedVideoPanelShowing;
- (BOOL)isAITextPanelShowing;
- (BOOL)isVideoDescriptionPanelShowing;
- (BOOL)isVideoRelatedPanelShowing;
- (BOOL)isCommentVCShowing;
- (BOOL)sharePanelShowed;
- (void)dismissLongPressViewControllerAnimated:(BOOL)arg0;
- (void)dismissLongPressViewControllerAnimated:(BOOL)arg0;
- (id)commentVC;
- (void)showDislikeOnVideo:(id)arg0;
- (void)showDislikeOnVideo:(id)arg0;
- (id)commentModelListToInsert;
- (void)setCommentModelListToInsert:(id)arg0;
- (BOOL)isCommentListShowing;
- (BOOL)isLikeUserListShowing;
- (void)performLikeAction;
- (void)performCommentAction;
- (void)showSharePanel;
- (void)showVoteDetailPanel:(id)arg0;
- (void)showMusicGuidance;
- (BOOL)shouldShowShoppingEntrance;
- (void)showShareHintWithPlayTimes:(long long)arg0;
- (void)showShareHintWithPlayTimes:(long long)arg0;
- (void)showNewUserShareGuideWithLoopCount:(long long)arg0 fromLike:(BOOL)arg1;
- (void)showNewUserShareGuideWithLoopCount:(long long)arg0 fromLike:(BOOL)arg1;
- (void)showFestivalShareHint;
- (void)updateFestivalButtons;
- (void)showIMShareGuideAnimation;
- (void)checkIfShouldShowCampaignMaskViewWithCampaignID:(id)arg0;
- (void)checkIfShouldShowCampaignMaskViewWithCampaignID:(id)arg0;
- (void)checkIfShouldShowCampaignLynxViewWithCampaignID:(id)arg0;
- (void)checkIfShouldShowCampaignLynxViewWithCampaignID:(id)arg0;
- (void)handleFestivalImagesCompletion:(id /* block */)arg0;
- (void)showAnimateBtnDetailWithPlayTimes:(long long)arg0;
- (void)showAnimateBtnDetailWithPlayTimes:(long long)arg0;
- (void)showLikeUserListVCWithUserList;
- (void)showViewerListViewController;
- (void)showFavoriteListViewController;
- (void)showRewarderListViewController;
- (void)showSendGoldCoinListViewControllerWithInsertIDs:(id)arg0;
- (void)showSendGoldCoinListViewControllerWithInsertIDs:(id)arg0;
- (void)showGoldLikeListViewControllerWithInsertIDs:(id)arg0;
- (void)showGoldLikeListViewControllerWithInsertIDs:(id)arg0;
- (void)ec_interactWithLoopTimes:(long long)arg0;
- (void)ec_interactWithLoopTimes:(long long)arg0;
- (void)showGoodsPanel;
- (void)showGoodsPanelWithProuctId:(id)arg0;
- (void)showGoodsPanelWithProuctId:(id)arg0;
- (void)showGoodsPanelWithProuctId:(id)arg0 shoudEnterGoodsDetail:(BOOL)arg1;
- (void)showGoodsPanelWithProuctId:(id)arg0 shoudEnterGoodsDetail:(BOOL)arg1;
- (void)showGoodsPanelWithProuctId:(id)arg0 shoudEnterGoodsDetail:(BOOL)arg1 autoPop:(BOOL)arg2;
- (void)showGoodsPanelWithProuctId:(id)arg0 shoudEnterGoodsDetail:(BOOL)arg1 autoPop:(BOOL)arg2;
- (void)showPOIGoodsPanelWithGoodsID:(id)arg0;
- (void)showPOIGoodsPanelWithGoodsID:(id)arg0;
- (void)clearScreen:(BOOL)arg0;
- (void)clearScreen:(BOOL)arg0 longPress:(BOOL)arg1;
- (void)weakInteractionView:(BOOL)arg0;
- (void)weakInteractionView:(BOOL)arg0 longPress:(BOOL)arg1;
- (void)clearInteractionView:(BOOL)arg0;
- (void)traceEnterScreen:(id)arg0 state:(id)arg1 event:(id)arg2;
- (void)expandDescTextWithParams:(id)arg0;
- (void)expandDescTextWithParams:(id)arg0;
- (void)openCommentPanelWithEnterSource:(unsigned long long)arg0;
- (void)openCommentPanelWithEnterSource:(unsigned long long)arg0;
- (void)openAiToTextPanelWithTabType:(long long)arg0 defaultTab:(long long)arg1;
- (void)openAiToTextPanelWithTabType:(long long)arg0 defaultTab:(long long)arg1;
- (id)dislikeGesture;
- (void)setSharePanelShowed:(BOOL)arg0;
- (id)likeUserListViewController;
- (void)setLikeUserListViewController:(id)arg0;
- (id)longPressVC;
- (void)setLongPressVC:(id)arg0;
- (id)storyShootGuideVC;
- (void)setStoryShootGuideVC:(id)arg0;
- (double)horizontalTopRadio;
- (void)setHorizontalTopRadio:(double)arg0;
- (void)showCommentPanelWithInsertIDs:(id)arg0;
- (void)showCommentPanelWithInsertIDs:(id)arg0;
- (void)showCommentPanelWithInsertIDs:(id)arg0 isForcedToShowInputView:(BOOL)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg0 isForcedToShowInputView:(BOOL)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg0 isForcedToShowInputView:(BOOL)arg1 shouldShowDefaultText:(BOOL)arg2;
- (void)showCommentPanelWithInsertIDs:(id)arg0 isForcedToShowInputView:(BOOL)arg1 shouldShowDefaultText:(BOOL)arg2;
- (void)showCommentPanelWithInsertIDs:(id)arg0 highlightID:(id)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg0 highlightID:(id)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputViewSync:(BOOL)arg2;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputViewSync:(BOOL)arg2;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5 shouldShowDefaultText:(BOOL)arg6 params:(id)arg7;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5 shouldShowDefaultText:(BOOL)arg6 params:(id)arg7;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5 shouldShowDefaultText:(BOOL)arg6 shouldShowReply:(BOOL)arg7;
- (void)showCommentPanelWithInsertIDs:(id)arg0 scrollToTop:(BOOL)arg1 isForcedToShowInputView:(BOOL)arg2 isForcedToShowInputViewSync:(BOOL)arg3 highlightID:(id)arg4 intentTab:(unsigned long long)arg5 shouldShowDefaultText:(BOOL)arg6 shouldShowReply:(BOOL)arg7;
- (void)showShareHintIfPossible;
- (id)pinchGesture;
- (BOOL)isInteracting;
- (id)panGesture;
- (BOOL)panel_isInteracting;

@end

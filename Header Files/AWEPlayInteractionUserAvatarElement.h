//
//     Generated by private class-dump
//

@class AWEFeedAdAvatarPendantViewModel, AWEFeedRepostBubbleView, AWEPlayInteractionUserAvatarView, NSString, UIView, AWEPlayInteractionUserAvatarElementViewModel;
@protocol AWEIMPopoverActionSheetMakable;

@interface AWEPlayInteractionUserAvatarElement : AWEPlayInteractionRightElement <AWELiveVideoFeedUpdateMessage, AWEUserMessage> {
    BOOL _isAvatarLiveMarkViewPlaying;
    BOOL _shouldTrackSendViewShowingEvent;
    BOOL _isShowingFollowUserUnreadTag;
    BOOL _isFollowAnimationFinished;
    BOOL _needPlayUnFollowAnimation;
    BOOL _isShowVoipSendMessageView;
    BOOL _isShowAudio;
    BOOL _isShowVideo;
    BOOL _currentVideodidPlaySendMessageGuideAnimate;
    BOOL _isChangeFollowStatusToTrack;
    BOOL _hitLightInteractionReverse;
    BOOL _isCalledViewDidAppear;
    AWEPlayInteractionUserAvatarView *_userAvatarView;
    AWEPlayInteractionUserAvatarElementViewModel *_viewModel;
    double _avatarViewHeight;
    AWEFeedRepostBubbleView *_repostBubbleView;
    UIView *_previewableView;
    double _avatarBottomOffset;
    id<AWEIMPopoverActionSheetMakable> _maker;
    AWEFeedAdAvatarPendantViewModel *_adAvatarPendantViewModel;
}

@property (retain, nonatomic) AWEFeedRepostBubbleView *repostBubbleView;
@property (weak, nonatomic) UIView *previewableView;
@property (nonatomic) double avatarBottomOffset;
@property (nonatomic) double avatarViewHeight;
@property (nonatomic) BOOL shouldTrackSendViewShowingEvent;
@property (nonatomic) BOOL isShowingFollowUserUnreadTag;
@property (nonatomic) BOOL isFollowAnimationFinished;
@property (nonatomic) BOOL needPlayUnFollowAnimation;
@property (nonatomic) BOOL isShowVoipSendMessageView;
@property (nonatomic) BOOL isShowAudio;
@property (nonatomic) BOOL isShowVideo;
@property (nonatomic) BOOL currentVideodidPlaySendMessageGuideAnimate;
@property (retain, nonatomic) id<AWEIMPopoverActionSheetMakable> maker;
@property (nonatomic) BOOL isChangeFollowStatusToTrack;
@property (nonatomic) BOOL hitLightInteractionReverse;
@property (retain, nonatomic) AWEFeedAdAvatarPendantViewModel *adAvatarPendantViewModel;
@property (nonatomic) BOOL isAvatarLiveMarkViewPlaying;
@property (nonatomic) BOOL isCalledViewDidAppear;
@property (retain, nonatomic) AWEPlayInteractionUserAvatarView *userAvatarView;
@property (retain, nonatomic) AWEPlayInteractionUserAvatarElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedInteractionDOUYINHTSAdapterClass;
+ (BOOL)shouldActiveWithData:(id)arg0;

- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)setHide:(BOOL)arg0;
- (void)initializeElement;
- (void)setAppear:(BOOL)arg0;
- (void)updateLiveStatusForCurrentVideoWith:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (void)viewDidDisposed;
- (void)updateFollowStatus;
- (id)currentInfoForSubUnits;
- (void)followStatusChanged:(id)arg0;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg0;
- (void)viewController_willDisplay;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)arg0;
- (id)livingMarkViewGradientColors:(BOOL)arg0;
- (id)aAWEFeedInteractionDOUYINHTSAdapter;
- (BOOL)canFollow;
- (void)playFollowAnimation;
- (void)onFollowViewClicked:(id)arg0;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (void)dismissPopoverView;
- (void)viewController_viewWillDisappear;
- (BOOL)shouldUseExposeCollectionPhase1Style;
- (void)handleApplicationEnterBackground;
- (void)bizDowngradeActiveLiveTask;
- (void)onUserAvatarViewClicked:(id)arg0;
- (void)setupPadKeybindings;
- (void)adaptePadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; })arg0;
- (double)avatarViewHeight;
- (void)onNewLiveMarkViewClicked;
- (void)setNeedPlayUnFollowAnimation:(BOOL)arg0;
- (void)playUnFollowAnimation;
- (void)setPreviewableView:(id)arg0;
- (void)previewingViewControllerForView;
- (BOOL)isFollowAnimationFinished;
- (BOOL)needPlayUnFollowAnimation;
- (double)avatarBottomOffset;
- (BOOL)shouldReplaceUserAvatarForCoCreator:(id)arg0;
- (void)updateAvatarImageByData:(id)arg0;
- (void)updateFollowStatusByUserAction:(BOOL)arg0;
- (void)switchFollowButtonVisibility:(BOOL)arg0;
- (void)setIsFollowAnimationFinished:(BOOL)arg0;
- (id)previewableView;
- (void)setAvatarBottomOffset:(double)arg0;
- (void)setAvatarViewHeight:(double)arg0;
- (void)updateVideoSourceImageView;
- (BOOL)shouldShrinkRightInteractionElement;
- (BOOL)shouldUseScreenAdaptationAction;
- (void)setIsChangeFollowStatusToTrack:(BOOL)arg0;
- (void)updateAvatarMarkView;
- (void)updateFriendLabel;
- (void)startAvatarLiveAnimation;
- (void)showSendMessageGuideViewIfNeeded;
- (void)onUnFollowViewClicked:(id)arg0;
- (BOOL)updateLiveAdvatarHitArea;
- (void)updateAvatarMarkViewWithModel:(id)arg0;
- (void)updateRepostBubbleView;
- (void)updateSendMessageView:(BOOL)arg0;
- (void)preloadMpProgramIfNeeded;
- (id)repostBubbleView;
- (BOOL)isShowVideo;
- (void)setIsShowVideo:(BOOL)arg0;
- (BOOL)isShowAudio;
- (void)setIsShowAudio:(BOOL)arg0;
- (BOOL)shouldShowSendMessageView;
- (BOOL)shouldShowVoipIcon;
- (BOOL)p_isShowVoipByAgeMinorOrHighlyDangerous;
- (void)setIsShowVoipSendMessageView:(BOOL)arg0;
- (void)p_showSendMessageView:(id)arg0 shouldShowSendMessageView:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateEnterStoreView;
- (BOOL)shouldShowEnterStoreView;
- (void)p_updateSendMessageView:(BOOL)arg0;
- (BOOL)shouldTrackSendViewShowingEvent;
- (BOOL)currentVideodidPlaySendMessageGuideAnimate;
- (void)setCurrentVideodidPlaySendMessageGuideAnimate:(BOOL)arg0;
- (BOOL)shouldShowSendMessageGuideView;
- (BOOL)isShowVoipSendMessageView;
- (BOOL)shouldShowSendMessageGuideAnimation;
- (BOOL)shouldShowEnterStoreGuideAnimation;
- (BOOL)shouldShowAvatarDecoration:(id)arg0;
- (void)updateAvatarDecorationIfNeeded:(BOOL)arg0;
- (void)updateCommerceHotSplashLinkIconImageIfNeeded:(id)arg0;
- (BOOL)isLiveStyleOld;
- (BOOL)isLiveNewStyleHead;
- (void)hideFormatMark;
- (void)showFormatMark;
- (void)configAndShowPopoverActionSheet;
- (BOOL)enableVoipCall;
- (BOOL)isLiveNewStyleHeadRed;
- (BOOL)isLiveNewStyleHeadGrey;
- (void)updateAvatarLiveState;
- (void)trackerAvatarLiveStateChange:(BOOL)arg0;
- (void)setHitLightInteractionReverse:(BOOL)arg0;
- (BOOL)hitLightInteractionReverse;
- (id)adAvatarPendantViewModel;
- (BOOL)isCalledViewDidAppear;
- (void)reportFormatShowTrackEventIfNeed;
- (void)setIsCalledViewDidAppear:(BOOL)arg0;
- (void)setShouldTrackSendViewShowingEvent:(BOOL)arg0;
- (void)setAdAvatarPendantViewModel:(id)arg0;
- (void)playSendMessageGuideAnimationIfNeeded;
- (void)playEnterStoreGuideAnimationIfNeeded;
- (void)onSendMessageViewClicked:(id)arg0;
- (void)onEnterStoreViewClicked:(id)arg0;
- (void)onlinkIconContainerViewClicked:(id)arg0;
- (void)startAudioVoipEnterFrom:(long long)arg0;
- (void)startVideoVoipEnterFrom:(long long)arg0;
- (BOOL)isAvatarLiveMarkViewPlaying;
- (void)trackLiveAppLeave:(BOOL)arg0;
- (void)p_playSendMessageGuideAnimationIfNeeded;
- (BOOL)awemeIsHardAds;
- (void)startWatchTogether;
- (void)setIsAvatarLiveMarkViewPlaying:(BOOL)arg0;
- (void)setRepostBubbleView:(id)arg0;
- (BOOL)isShowingFollowUserUnreadTag;
- (void)setIsShowingFollowUserUnreadTag:(BOOL)arg0;
- (id)maker;
- (void)setMaker:(id)arg0;
- (BOOL)isChangeFollowStatusToTrack;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)play;
- (void)reset;
- (void)viewDidLoad;
- (id)currentInfo;

@end

//
//     Generated by private class-dump
//

@class IESLiveGCDTimer, HTSLiveLinkmicPositionItem, IESLiveInteractionLayoutSlot, IESLiveMicDress, HTSLiveAudioSpeakingImageList, IESLiveRoomThemeData, IESLiveBigPartyGuestInfoViewConfig, UIColor, NSString, NSAttributedString, IESLiveMicPosTagInfo, IESLiveSelfDisciplineTimerViewModel, NSArray, IESLiveInteractCompetitionGameGuestInfoViewModel, UIImage;
@protocol IESLiveGuestBattleRouter, IESLiveSettings, IESLivePaidLinkmicRouter, IESLiveCompetitionGameRouter, IESLiveBigPartyGuestInfoIncomeAnimator, IESLiveBigPartyAnchorRouter, IESLiveCompoundSubscription, IESLiveBigPartyProvider, IESLiveGuestBattleProvider, IESLiveRoomService, IESLiveBigPartyEqualGuestListViewDataSource, IESLiveUserService, IESLiveSelfDisciplineService, IESLiveInteractUserModel, IESLiveInteractionBattleService, IESLiveSelfDisciplineRouter, IESLiveSelfDisciplineAnimator, IESLiveInteractionModuleGuestBattleInterface, IESLiveInteractionSettingsRouter, IESLiveInteractionAsyncResourceLoader, IESLiveInteractionLayoutCanvasElement, IESLiveBigPartyAudienceRouter, IESLiveMultiKTVRouter;

@interface IESLiveBigPartyGuestInfoViewModel : NSObject <IESLiveSelfDisciplineLifeCycle, IESLiveCompetitionGameLifeCycle, IESLiveInteractDynamicContainerActions, IESLiveLinkmicCanvasElementDelegate, IESLiveInteractEnlargeAction> {
    BOOL _emptySlotContainerViewHidden;
    BOOL _videoViewContainerViewHidden;
    BOOL _audioViewContainerViewHidden;
    BOOL _topInformationContainerViewHidden;
    BOOL _middleInformationContainerViewHidden;
    BOOL _bottomInformationContainerViewHidden;
    BOOL _afkViewHidden;
    BOOL _roleTagViewHidden;
    BOOL _seatNameTagHidden;
    BOOL _hostTagHidden;
    BOOL _lockedImageViewHidden;
    BOOL _muteIconHidden;
    BOOL _emptySlotBgImageViewHidden;
    BOOL _goldenMicViewHidden;
    BOOL _iconImageViewHidden;
    BOOL _limitProgressHidden;
    BOOL _hintContentContainerHidden;
    BOOL _indexHintHidden;
    BOOL _mSequenceHostTagHidden;
    BOOL _mSequenceSendGiftToHostEntranceHidden;
    BOOL _seatLocked;
    BOOL _topLeftStackBackgroundHidden;
    BOOL _isMainSlot;
    BOOL _showIncomePrompt;
    BOOL _isSelfDisciplineStyle;
    BOOL _sessionViewHidden;
    BOOL _mSequenceEnableSendGiftToHost;
    BOOL _isSinger;
    BOOL _isOtherRoomMuted;
    BOOL _isShowingAnimation;
    id<IESLiveBigPartyEqualGuestListViewDataSource> _dataSource;
    IESLiveBigPartyGuestInfoViewConfig *_config;
    long long _style;
    long long _viewState;
    id<IESLiveInteractUserModel> _user;
    id /* block */ _seatLockedStatusOrUserChangedCallback;
    id /* block */ _incomePromptShowFinishedCallback;
    UIColor *_emptySlotContainerViewBgColor;
    NSString *_roleTagString;
    long long _roleTagPosition;
    long long _singingTagPosition;
    NSAttributedString *_seatNameAttributedString;
    long long _seatNameTagPosition;
    UIColor *_seatNameTagBgColor;
    NSString *_hostTagString;
    IESLiveMicPosTagInfo *_tagInfo;
    long long _hostTagPosition;
    NSString *_nicknameString;
    long long _nicknameLabelPosition;
    long long _progressViewPosition;
    UIImage *_avatarImage;
    NSArray *_avatarImageUrls;
    NSString *_avatarDecorationImageURL;
    long long _muteIconPosition;
    UIImage *_muteIconImage;
    IESLiveInteractCompetitionGameGuestInfoViewModel *_competitionGameViewModel;
    long long _fanTicketPosition;
    UIImage *_iconImage;
    NSArray *_iconImageUrls;
    NSArray *_lockImageUrls;
    double _limitProgressValue;
    UIColor *_indexHintColor;
    NSString *_indexHintString;
    NSString *_indexHintDescString;
    IESLiveRoomThemeData *_roomThemeData;
    IESLiveMicDress *_micDress;
    HTSLiveAudioSpeakingImageList *_speakingImageList;
    double _topStackLeftOffset;
    HTSLiveLinkmicPositionItem *_positionItem;
    id<IESLiveBigPartyGuestInfoIncomeAnimator> _incomeAnimator;
    id<IESLiveInteractionAsyncResourceLoader> _preStreamResourceLoader;
    IESLiveSelfDisciplineTimerViewModel *_selfDisciplineTimerViewModel;
    id<IESLiveSelfDisciplineAnimator> _selfDisciplineAnimator;
    id<IESLiveCompoundSubscription> _disposable;
    id<IESLiveInteractionLayoutCanvasElement> _element;
    id<IESLiveCompoundSubscription> _competitionGameDisposable;
    id /* block */ _onSEIModelWillUpdateblock;
    id /* block */ _onSEIModelDidUpdateblock;
    id /* block */ _onServerModelWillUpdateblock;
    id /* block */ _onServerModelDidUpdateblock;
    id /* block */ _onCountDownStartBlock;
    id /* block */ _onCountDownEndBlock;
    id /* block */ _onUpdateSnapshotBlock;
    id<IESLiveSelfDisciplineRouter> _disciplineRouter;
    id<IESLiveSelfDisciplineService> _disciplineService;
    id<IESLivePaidLinkmicRouter> _paidLinkmicRouter;
    id<IESLiveGuestBattleRouter> _battleRouter;
    id<IESLiveBigPartyAnchorRouter> _bpAnchorRouter;
    id<IESLiveBigPartyAudienceRouter> _bpAudienceRouter;
    id<IESLiveUserService> _userService;
    id<IESLiveRoomService> _roomService;
    id<IESLiveGuestBattleProvider> _battleProvider;
    id<IESLiveInteractionBattleService> _battleService;
    id<IESLiveInteractionModuleGuestBattleInterface> _guestBattleInterface;
    id<IESLiveSettings> _settings;
    id<IESLiveMultiKTVRouter> _multiKTVRouter;
    id<IESLiveBigPartyProvider> _bpProvider;
    id<IESLiveCompetitionGameRouter> _competitionGameRouter;
    id<IESLiveInteractionSettingsRouter> _interactionSettings;
    IESLiveGCDTimer *_limitTimer;
    IESLiveGCDTimer *_countDownTimer;
    id<IESLiveInteractUserModel> _userDuringAnimating;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveInteractionLayoutCanvasElement> element;
@property (retain, nonatomic) IESLiveBigPartyGuestInfoViewConfig *config;
@property (nonatomic) long long style;
@property (nonatomic) long long viewState;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (nonatomic) BOOL emptySlotContainerViewHidden;
@property (retain, nonatomic) UIColor *emptySlotContainerViewBgColor;
@property (nonatomic) BOOL videoViewContainerViewHidden;
@property (nonatomic) BOOL audioViewContainerViewHidden;
@property (nonatomic) BOOL topInformationContainerViewHidden;
@property (nonatomic) BOOL middleInformationContainerViewHidden;
@property (nonatomic) BOOL bottomInformationContainerViewHidden;
@property (nonatomic) BOOL afkViewHidden;
@property (nonatomic) BOOL roleTagViewHidden;
@property (copy, nonatomic) NSString *roleTagString;
@property (copy, nonatomic) NSString *nicknameString;
@property (nonatomic) BOOL lockedImageViewHidden;
@property (retain, nonatomic) IESLiveInteractCompetitionGameGuestInfoViewModel *competitionGameViewModel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> competitionGameDisposable;
@property (nonatomic) BOOL muteIconHidden;
@property (retain, nonatomic) UIImage *muteIconImage;
@property (nonatomic) BOOL sessionViewHidden;
@property (nonatomic) BOOL emptySlotBgImageViewHidden;
@property (nonatomic) long long nicknameLabelPosition;
@property (nonatomic) long long muteIconPosition;
@property (nonatomic) long long fanTicketPosition;
@property (nonatomic) long long singingTagPosition;
@property (nonatomic) long long roleTagPosition;
@property (nonatomic) long long progressViewPosition;
@property (nonatomic) BOOL goldenMicViewHidden;
@property (nonatomic) BOOL seatNameTagHidden;
@property (retain, nonatomic) NSAttributedString *seatNameAttributedString;
@property (nonatomic) long long seatNameTagPosition;
@property (retain, nonatomic) UIColor *seatNameTagBgColor;
@property (nonatomic) BOOL hostTagHidden;
@property (retain, nonatomic) NSString *hostTagString;
@property (retain, nonatomic) IESLiveMicPosTagInfo *tagInfo;
@property (nonatomic) long long hostTagPosition;
@property (nonatomic) BOOL iconImageViewHidden;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSArray *iconImageUrls;
@property (copy, nonatomic) NSArray *lockImageUrls;
@property (nonatomic) BOOL seatLocked;
@property (nonatomic) BOOL limitProgressHidden;
@property (nonatomic) double limitProgressValue;
@property (retain, nonatomic) UIImage *avatarImage;
@property (copy, nonatomic) NSArray *avatarImageUrls;
@property (copy, nonatomic) NSString *avatarDecorationImageURL;
@property (nonatomic) BOOL hintContentContainerHidden;
@property (nonatomic) BOOL indexHintHidden;
@property (retain, nonatomic) UIColor *indexHintColor;
@property (retain, nonatomic) NSString *indexHintString;
@property (retain, nonatomic) NSString *indexHintDescString;
@property (nonatomic) BOOL mSequenceHostTagHidden;
@property (nonatomic) BOOL mSequenceSendGiftToHostEntranceHidden;
@property (nonatomic) BOOL mSequenceEnableSendGiftToHost;
@property (copy, nonatomic) id /* block */ onSEIModelWillUpdateblock;
@property (copy, nonatomic) id /* block */ onSEIModelDidUpdateblock;
@property (copy, nonatomic) id /* block */ onServerModelWillUpdateblock;
@property (copy, nonatomic) id /* block */ onServerModelDidUpdateblock;
@property (copy, nonatomic) id /* block */ onCountDownStartBlock;
@property (copy, nonatomic) id /* block */ onCountDownEndBlock;
@property (copy, nonatomic) id /* block */ onUpdateSnapshotBlock;
@property (weak, nonatomic) id<IESLiveSelfDisciplineRouter> disciplineRouter;
@property (weak, nonatomic) id<IESLiveSelfDisciplineService> disciplineService;
@property (weak, nonatomic) id<IESLivePaidLinkmicRouter> paidLinkmicRouter;
@property (weak, nonatomic) id<IESLiveGuestBattleRouter> battleRouter;
@property (weak, nonatomic) id<IESLiveBigPartyAnchorRouter> bpAnchorRouter;
@property (weak, nonatomic) id<IESLiveBigPartyAudienceRouter> bpAudienceRouter;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (weak, nonatomic) id<IESLiveGuestBattleProvider> battleProvider;
@property (weak, nonatomic) id<IESLiveInteractionBattleService> battleService;
@property (weak, nonatomic) id<IESLiveInteractionModuleGuestBattleInterface> guestBattleInterface;
@property (weak, nonatomic) id<IESLiveSettings> settings;
@property (weak, nonatomic) id<IESLiveMultiKTVRouter> multiKTVRouter;
@property (weak, nonatomic) id<IESLiveBigPartyProvider> bpProvider;
@property (weak, nonatomic) id<IESLiveCompetitionGameRouter> competitionGameRouter;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (retain, nonatomic) IESLiveGCDTimer *limitTimer;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) IESLiveRoomThemeData *roomThemeData;
@property (retain, nonatomic) IESLiveMicDress *micDress;
@property (nonatomic) BOOL isSinger;
@property (nonatomic) BOOL isOtherRoomMuted;
@property (nonatomic) double topStackLeftOffset;
@property (nonatomic) BOOL topLeftStackBackgroundHidden;
@property (retain, nonatomic) HTSLiveLinkmicPositionItem *positionItem;
@property (nonatomic) BOOL isMainSlot;
@property (nonatomic) BOOL isShowingAnimation;
@property (retain, nonatomic) id<IESLiveInteractUserModel> userDuringAnimating;
@property (weak, nonatomic) id<IESLiveBigPartyEqualGuestListViewDataSource> dataSource;
@property (readonly, nonatomic) IESLiveInteractionLayoutSlot *slot;
@property (copy, nonatomic) id /* block */ seatLockedStatusOrUserChangedCallback;
@property (copy, nonatomic) id /* block */ incomePromptShowFinishedCallback;
@property (readonly, nonatomic) long long seatIndex;
@property (readonly, nonatomic) long long viewIndex;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList *speakingImageList;
@property (weak, nonatomic) id<IESLiveBigPartyGuestInfoIncomeAnimator> incomeAnimator;
@property (nonatomic) BOOL showIncomePrompt;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> preStreamResourceLoader;
@property (retain, nonatomic) IESLiveSelfDisciplineTimerViewModel *selfDisciplineTimerViewModel;
@property (nonatomic) BOOL isSelfDisciplineStyle;
@property (weak, nonatomic) id<IESLiveSelfDisciplineAnimator> selfDisciplineAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)tagInfo;
- (void)setTagInfo:(id)arg0;
- (void)setRoomService:(id)arg0;
- (id)roomService;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)guestBattleInterface;
- (void)asyncLoadResourceUsingBlock:(id /* block */)arg0;
- (id)speakingImageList;
- (void)setSpeakingImageList:(id)arg0;
- (BOOL)isInGuestBattle;
- (id)iconImageUrls;
- (id)avatarImageUrls;
- (void)setAvatarImageUrls:(id)arg0;
- (id)micDress;
- (void)setMicDress:(id)arg0;
- (BOOL)isInPaidLinkmic;
- (BOOL)isInCompetitionGame;
- (BOOL)isInTeamFight;
- (void)p_disposable;
- (BOOL)isMainSlot;
- (void)setIsMainSlot:(BOOL)arg0;
- (void)linkmicCanvasElement:(id)arg0 onUserUpdated:(id)arg1;
- (void)linkmicCanvasElementOnSessionUpdated:(id)arg0 isLocalPreview:(BOOL)arg1;
- (long long)seatIndex;
- (BOOL)isInCompetitionGameScoreType;
- (BOOL)isInNativeGuestBattle;
- (BOOL)isSinger;
- (void)setIsSinger:(BOOL)arg0;
- (void)setCompetitionGameDisposable:(id)arg0;
- (id)competitionGameDisposable;
- (id)competitionGameViewModel;
- (BOOL)isShowingAnimation;
- (id)battleService;
- (void)setBattleService:(id)arg0;
- (BOOL)isInFixTeamFight;
- (id)nameStrInTeamFight;
- (id)strForCompetitionGame;
- (void)setPositionItem:(id)arg0;
- (void)showSeatName:(id)arg0;
- (void)resetSeatNameTagBgColor;
- (BOOL)isCompetitionGamePerformer;
- (id)positionItem;
- (id)battleProvider;
- (id)battleRouter;
- (void)setCompetitionGameViewModel:(id)arg0;
- (BOOL)seatLocked;
- (void)setSeatLocked:(BOOL)arg0;
- (void)updateSeatInfo:(id)arg0;
- (void)setBattleProvider:(id)arg0;
- (void)setBattleRouter:(id)arg0;
- (void)updateRoomThemeData:(id)arg0;
- (BOOL)isAnchorWithUser:(id)arg0;
- (BOOL)isInFlexibleTeamFight;
- (id)roomThemeData;
- (void)setRoomThemeData:(id)arg0;
- (void)selfDisciplineTargetDidChangedTo:(id)arg0;
- (void)selfDisciplineDidStart:(BOOL)arg0;
- (void)selfDisciplineDidFinish;
- (void)setPreStreamResourceLoader:(id)arg0;
- (id)nicknameString;
- (void)lockSeat:(BOOL)arg0;
- (void)resetSeatLabel;
- (void)showIncomePromptWithUser:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enableShowIncomePrompt;
- (BOOL)showIncomePrompt;
- (void)setIncomePromptShowFinishedCallback:(id /* block */)arg0;
- (id)preStreamResourceLoader;
- (BOOL)isCurrentSeatAnchor;
- (void)setIncomeAnimator:(id)arg0;
- (void)setSelfDisciplineAnimator:(id)arg0;
- (void)onSEIModelWillUpdate:(id /* block */)arg0;
- (void)onServerModelWillUpdate:(id /* block */)arg0;
- (void)onUpdateSnapshot:(id /* block */)arg0;
- (BOOL)enableLandscapeMode;
- (BOOL)iconImageViewHidden;
- (id)indexHintString;
- (id)indexHintDescString;
- (long long)progressViewPosition;
- (void)updateElementsForMainGuest;
- (BOOL)goldenMicViewHidden;
- (BOOL)selfIsAnchorTag;
- (BOOL)hostTagHidden;
- (BOOL)seatNameTagHidden;
- (void)updateTopStackLeftOffset:(double)arg0;
- (BOOL)roleTagViewHidden;
- (id)disciplineRouter;
- (id)selfDisciplineTimerViewModel;
- (BOOL)isCurrentLoginUserAnchor;
- (BOOL)isInRoomBattle;
- (long long)teamFightSign;
- (void)updateIconImageViewHidden;
- (void)updateGoldenMicLabelHidden:(BOOL)arg0;
- (long long)fanTicketPosition;
- (id)bpAudienceRouter;
- (void)updateRoomThemeWithIconMic:(id)arg0 iconMicLock:(id)arg1 micBgcolorValue:(id)arg2 colorMicLine:(id)arg3 colorMicText:(id)arg4;
- (void)showIncomePromptWithCompletion:(id /* block */)arg0;
- (void)setDisciplineRouter:(id)arg0;
- (void)setBpAudienceRouter:(id)arg0;
- (void)competitonGameDidStart:(id)arg0;
- (void)competitonGameDidEnd;
- (void)dynamicContainer:(id)arg0 didStartPlaymode:(long long)arg1;
- (void)dynamicContainer:(id)arg0 didEndedPlaymode:(long long)arg1;
- (void)interactEnlargeStatusDidChange:(BOOL)arg0;
- (void)setIsShowingAnimation:(BOOL)arg0;
- (void)setIndexHintHidden:(BOOL)arg0;
- (void)setAfkViewHidden:(BOOL)arg0;
- (void)setMuteIconHidden:(BOOL)arg0;
- (void)setRoleTagViewHidden:(BOOL)arg0;
- (void)setSeatNameTagHidden:(BOOL)arg0;
- (void)setHostTagHidden:(BOOL)arg0;
- (void)setGoldenMicViewHidden:(BOOL)arg0;
- (void)setIsSelfDisciplineStyle:(BOOL)arg0;
- (void)setupElementsPosition;
- (void)setMSequenceHostTagHidden:(BOOL)arg0;
- (void)setMSequenceSendGiftToHostEntranceHidden:(BOOL)arg0;
- (void)setMSequenceEnableSendGiftToHost:(BOOL)arg0;
- (void)setTopLeftStackBackgroundHidden:(BOOL)arg0;
- (void)setEmptySlotContainerViewHidden:(BOOL)arg0;
- (void)setupObserverWithElement:(id)arg0;
- (void)setSingingTagPosition:(long long)arg0;
- (void)setRoleTagPosition:(long long)arg0;
- (void)setSeatNameTagPosition:(long long)arg0;
- (void)setHostTagPosition:(long long)arg0;
- (void)setProgressViewPosition:(long long)arg0;
- (void)setFanTicketPosition:(long long)arg0;
- (void)setNicknameLabelPosition:(long long)arg0;
- (void)setMuteIconPosition:(long long)arg0;
- (BOOL)isAnchorEqualEnlargeFull;
- (id)limitTimer;
- (void)setLimitTimer:(id)arg0;
- (void)setRoleTagString:(id)arg0;
- (void)setHostTagString:(id)arg0;
- (void)setOnSEIModelWillUpdateblock:(id /* block */)arg0;
- (void)setOnSEIModelDidUpdateblock:(id /* block */)arg0;
- (void)setOnServerModelWillUpdateblock:(id /* block */)arg0;
- (void)setOnServerModelDidUpdateblock:(id /* block */)arg0;
- (void)setOnCountDownStartBlock:(id /* block */)arg0;
- (void)setOnCountDownEndBlock:(id /* block */)arg0;
- (void)setOnUpdateSnapshotBlock:(id /* block */)arg0;
- (void)setUserDuringAnimating:(id)arg0;
- (id)userDuringAnimating;
- (void)updateWithModel:(id)arg0 needToShowAnimation:(BOOL)arg1;
- (void)p_dealWithAnimatorWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)updateCurrentSeatInfoIfNeeded;
- (void)setShowIncomePrompt:(BOOL)arg0;
- (void)updateWithSEIModel:(id)arg0;
- (void)updateWithServerModel:(id)arg0;
- (id /* block */)onSEIModelWillUpdateblock;
- (void)refreshContainerHiddenStatusWithViewState:(long long)arg0 style:(long long)arg1;
- (id /* block */)onSEIModelDidUpdateblock;
- (void)updateWithServerModel:(id)arg0 shouldDisplayIncomeAnimation:(BOOL)arg1;
- (id)seatNameAttributedString;
- (id)paidLinkmicRouter;
- (id /* block */)incomePromptShowFinishedCallback;
- (void)updateSeatInfoHidden:(BOOL)arg0;
- (void)updateRoleTagString:(id)arg0;
- (id /* block */)onServerModelWillUpdateblock;
- (void)updateGuestInfoViewStyleWithUser:(id)arg0;
- (void)updateEmptySlotStyleWithhUser:(id)arg0;
- (id /* block */)onServerModelDidUpdateblock;
- (void)setNicknameString:(id)arg0;
- (id)hostTagString;
- (void)updateHostTag:(id)arg0;
- (id)competitionGameRouter;
- (id)observeUserTagWithModel:(id)arg0;
- (id)observeMainSlot;
- (void)updateLimitProgressWithUser:(id)arg0;
- (BOOL)isAnchorMainSlotNotEnlarge;
- (void)setVideoViewContainerViewHidden:(BOOL)arg0;
- (void)setAudioViewContainerViewHidden:(BOOL)arg0;
- (void)setBottomInformationContainerViewHidden:(BOOL)arg0;
- (void)setTopInformationContainerViewHidden:(BOOL)arg0;
- (void)setLimitProgressHidden:(BOOL)arg0;
- (long long)p_expectedLeaveTime;
- (double)linkmicProgress;
- (void)setLimitProgressValue:(double)arg0;
- (void)setEmptySlotBgImageViewHidden:(BOOL)arg0;
- (void)setEmptySlotContainerViewBgColor:(id)arg0;
- (void)setIconImageViewHidden:(BOOL)arg0;
- (void)hideTag;
- (BOOL)shouldTagHide;
- (void)setSeatNameAttributedString:(id)arg0;
- (BOOL)isHostTagShowing;
- (void)setIconImageUrls:(id)arg0;
- (void)setLockImageUrls:(id)arg0;
- (void)setIndexHintColor:(id)arg0;
- (void)p_setText:(id)arg0;
- (id)nameStrInRoomBattle;
- (id)strForSelfDisciplineTarget;
- (id)nameStrInGuestBattle;
- (void)setSeatNameTagBgColor:(id)arg0;
- (id)disciplineService;
- (void)setIndexHintDescString:(id)arg0;
- (void)setupAudioSlotDataWith:(id)arg0;
- (void)setLockedImageViewHidden:(BOOL)arg0;
- (void)setHintContentContainerHidden:(BOOL)arg0;
- (BOOL)isOtherRoomMuted;
- (void)setMuteIconImage:(id)arg0;
- (id /* block */)onUpdateSnapshotBlock;
- (BOOL)isContainPlayMode:(int)arg0;
- (void)dealWithLinkType:(int)arg0;
- (void)updateSilenceStatus:(int)arg0;
- (void)setIsOtherRoomMuted:(BOOL)arg0;
- (void)setSessionViewHidden:(BOOL)arg0;
- (void)updateAfkStatus:(BOOL)arg0;
- (void)updateElementsPositionForAnchorEqualEnlargeFull;
- (id /* block */)seatLockedStatusOrUserChangedCallback;
- (void)p_updateMainGuestUIForDynamic1v6;
- (id)selfDisciplineAnimator;
- (void)setTopStackLeftOffset:(double)arg0;
- (void)setAvatarDecorationImageURL:(id)arg0;
- (void)updateTopLeftStackBackgroundHidden:(BOOL)arg0;
- (id)incomeAnimator;
- (void)onSEIModelDidUpdate:(id /* block */)arg0;
- (void)onServerModelDidUpdate:(id /* block */)arg0;
- (void)onCountDownStart:(id /* block */)arg0;
- (void)onCountDownEnd:(id /* block */)arg0;
- (void)updateSeatLabel:(id)arg0;
- (BOOL)shouldUseAnchorTapGuestureMask;
- (id)bpAnchorRouter;
- (id)multiKTVRouter;
- (id)bpProvider;
- (void)setSeatLockedStatusOrUserChangedCallback:(id /* block */)arg0;
- (BOOL)emptySlotContainerViewHidden;
- (id)emptySlotContainerViewBgColor;
- (BOOL)videoViewContainerViewHidden;
- (BOOL)audioViewContainerViewHidden;
- (BOOL)topInformationContainerViewHidden;
- (BOOL)middleInformationContainerViewHidden;
- (void)setMiddleInformationContainerViewHidden:(BOOL)arg0;
- (BOOL)bottomInformationContainerViewHidden;
- (BOOL)afkViewHidden;
- (id)roleTagString;
- (long long)roleTagPosition;
- (long long)singingTagPosition;
- (long long)seatNameTagPosition;
- (id)seatNameTagBgColor;
- (long long)hostTagPosition;
- (long long)nicknameLabelPosition;
- (id)avatarDecorationImageURL;
- (BOOL)lockedImageViewHidden;
- (BOOL)muteIconHidden;
- (long long)muteIconPosition;
- (id)muteIconImage;
- (BOOL)emptySlotBgImageViewHidden;
- (id)lockImageUrls;
- (BOOL)limitProgressHidden;
- (double)limitProgressValue;
- (BOOL)hintContentContainerHidden;
- (BOOL)indexHintHidden;
- (id)indexHintColor;
- (void)setIndexHintString:(id)arg0;
- (BOOL)mSequenceHostTagHidden;
- (BOOL)mSequenceSendGiftToHostEntranceHidden;
- (double)topStackLeftOffset;
- (BOOL)topLeftStackBackgroundHidden;
- (void)setSelfDisciplineTimerViewModel:(id)arg0;
- (BOOL)isSelfDisciplineStyle;
- (BOOL)sessionViewHidden;
- (BOOL)mSequenceEnableSendGiftToHost;
- (id /* block */)onCountDownStartBlock;
- (id /* block */)onCountDownEndBlock;
- (void)setDisciplineService:(id)arg0;
- (void)setPaidLinkmicRouter:(id)arg0;
- (void)setBpAnchorRouter:(id)arg0;
- (void)setGuestBattleInterface:(id)arg0;
- (void)setMultiKTVRouter:(id)arg0;
- (void)setBpProvider:(id)arg0;
- (void)setCompetitionGameRouter:(id)arg0;
- (id)slot;
- (void)setUser:(id)arg0;
- (long long)style;
- (id)iconImage;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)user;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)setElement:(id)arg0;
- (id)config;
- (void)setup;
- (id)element;
- (id)settings;
- (id)initWithConfig:(id)arg0;
- (BOOL)isPreview;
- (id)layout;
- (void)dealloc;
- (void)setStyle:(long long)arg0;
- (void)setIconImage:(id)arg0;
- (long long)viewState;
- (void)setViewState:(long long)arg0;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (void)updateWithModel:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (id)interactionSettings;
- (void)setInteractionSettings:(id)arg0;
- (long long)viewIndex;
- (void)clean;

@end
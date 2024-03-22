//
//     Generated by private class-dump
//

@class IESLiveInteractSeatElementLoader, UIFont, IESliveAudioSeatPriorityChecker, HTSLiveLinkmicPositionItem, RACDisposable, UIColor, IESLiveMultiAudioAvatarViewConfig, NSString, NSAttributedString, IESLiveMicPosTagInfo, NSArray, IESLiveMicInfoItem, RACCompoundDisposable, IESLiveInteractEmptySeatElement, IESLiveInteractCompetitionGameGuestInfoViewModel;
@protocol IESLiveUserService, IESLiveCompetitionGameRouter, IESLiveTeamFightRouter, IESLiveMultiAudioAudienceRouter, IESLiveGuestBattleProvider, IESLiveRoomService, IESLiveInteractUserModel, IESLiveGuestBattleRouter, IESLiveInteractionBattleService, IESLiveSocialInteractiveRouter, IESLiveTeamFightProvider, IESLiveAudioSeatUpdateAction, IESLiveCompoundSubscription;

@interface IESLiveAudioSeatViewModel : NSObject <IESLiveAudioSeatViewModelInputForAll, IESLiveAudioSeatViewModelOutputForAll> {
    BOOL _audioThemeEnabled;
    BOOL _isSquareLayout;
    BOOL _isUserOnline;
    BOOL _isEnlarge;
    BOOL _seatLocked;
    BOOL _teamFightAvatarSignShow;
    BOOL _hasBindUser;
    BOOL _afkViewShow;
    BOOL _pauseViewShow;
    int _uilayout;
    id /* block */ _onUserViewClicked;
    IESLiveMultiAudioAvatarViewConfig *_avatarConfig;
    id /* block */ onGuestInfoViewTapAcceptLink;
    IESLiveInteractSeatElementLoader *_elementLoader;
    id /* block */ _onFanticketInfoViewClicked;
    id /* block */ _firstLoadAnchorAvatarBlock;
    id<IESLiveAudioSeatUpdateAction> _updateAction;
    id<IESLiveCompoundSubscription> _disposable;
    RACCompoundDisposable *_rac_disposable;
    id<IESLiveRoomService> _room;
    long long _teamFightStatus;
    UIColor *_teamSignColor;
    id<IESLiveInteractUserModel> _guest;
    long long _index;
    IESliveAudioSeatPriorityChecker *_checkerForEmptyAvatar;
    long long _emptyAvatarType;
    NSAttributedString *_emptyAvartarText;
    NSArray *_joinIconUrsl;
    NSArray *_localJoinIconUrsl;
    NSArray *_dynamicJoinIconUrls;
    long long _bgColorType;
    long long _userNameIconType;
    long long _userNameType;
    NSString *_userNameText;
    double _userLabelWidth;
    UIFont *_userLabelFont;
    NSString *_emptyUserNameText;
    NSString *_lastEmptyUserNameText;
    NSString *_acceptLinkText;
    UIColor *_acceptLinkTitleColr;
    UIColor *_acceptLinkBgColr;
    long long _seatNameType;
    NSString *_normalSeatName;
    NSString *_paidLinkSeatName;
    IESLiveMicPosTagInfo *_tagInfo;
    IESLiveMicInfoItem *_micItemInfo;
    IESliveAudioSeatPriorityChecker *_checkerForSeatName;
    HTSLiveLinkmicPositionItem *_positionItem;
    UIColor *_seatBgColor;
    RACDisposable *_linkmicTimer;
    RACDisposable *_linkmicSeatNameReplaceTimer;
    IESLiveInteractEmptySeatElement *_emptyElement;
    id<IESLiveInteractionBattleService> _battleService;
    id<IESLiveTeamFightRouter> _teamFightService;
    id<IESLiveTeamFightProvider> _teamFightProvider;
    id<IESLiveUserService> _userService;
    id<IESLiveGuestBattleRouter> _guestBattleRouter;
    id<IESLiveCompetitionGameRouter> _gameRouter;
    id<IESLiveTeamFightRouter> _teamFightRouter;
    id<IESLiveMultiAudioAudienceRouter> _audioAudienceRouter;
    id<IESLiveGuestBattleProvider> _battleProvider;
    id<IESLiveGuestBattleRouter> _battleRouter;
    id<IESLiveSocialInteractiveRouter> _interactiveRouter;
    IESLiveInteractCompetitionGameGuestInfoViewModel *_competitionGameViewModel;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) RACCompoundDisposable *rac_disposable;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long teamFightStatus;
@property (nonatomic) BOOL teamFightAvatarSignShow;
@property (retain, nonatomic) UIColor *teamSignColor;
@property (nonatomic) BOOL hasBindUser;
@property (retain, nonatomic) id<IESLiveInteractUserModel> guest;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESliveAudioSeatPriorityChecker *checkerForEmptyAvatar;
@property (nonatomic) BOOL afkViewShow;
@property (nonatomic) BOOL pauseViewShow;
@property (nonatomic) long long emptyAvatarType;
@property (copy, nonatomic) NSAttributedString *emptyAvartarText;
@property (copy, nonatomic) NSArray *joinIconUrsl;
@property (copy, nonatomic) NSArray *localJoinIconUrsl;
@property (copy, nonatomic) NSArray *dynamicJoinIconUrls;
@property (nonatomic) long long bgColorType;
@property (nonatomic) long long userNameIconType;
@property (nonatomic) long long userNameType;
@property (copy, nonatomic) NSString *userNameText;
@property (nonatomic) double userLabelWidth;
@property (retain, nonatomic) UIFont *userLabelFont;
@property (copy, nonatomic) NSString *emptyUserNameText;
@property (copy, nonatomic) NSString *lastEmptyUserNameText;
@property (copy, nonatomic) NSString *acceptLinkText;
@property (retain, nonatomic) UIColor *acceptLinkTitleColr;
@property (retain, nonatomic) UIColor *acceptLinkBgColr;
@property (nonatomic) long long seatNameType;
@property (copy, nonatomic) NSString *normalSeatName;
@property (copy, nonatomic) NSString *paidLinkSeatName;
@property (retain, nonatomic) IESLiveMicPosTagInfo *tagInfo;
@property (retain, nonatomic) IESLiveMicInfoItem *micItemInfo;
@property (retain, nonatomic) IESliveAudioSeatPriorityChecker *checkerForSeatName;
@property (retain, nonatomic) HTSLiveLinkmicPositionItem *positionItem;
@property (retain, nonatomic) UIColor *seatBgColor;
@property (retain, nonatomic) RACDisposable *linkmicTimer;
@property (retain, nonatomic) RACDisposable *linkmicSeatNameReplaceTimer;
@property (retain, nonatomic) IESLiveInteractEmptySeatElement *emptyElement;
@property (weak, nonatomic) id<IESLiveInteractionBattleService> battleService;
@property (weak, nonatomic) id<IESLiveTeamFightRouter> teamFightService;
@property (weak, nonatomic) id<IESLiveTeamFightProvider> teamFightProvider;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (weak, nonatomic) id<IESLiveGuestBattleRouter> guestBattleRouter;
@property (weak, nonatomic) id<IESLiveCompetitionGameRouter> gameRouter;
@property (weak, nonatomic) id<IESLiveTeamFightRouter> teamFightRouter;
@property (weak, nonatomic) id<IESLiveMultiAudioAudienceRouter> audioAudienceRouter;
@property (weak, nonatomic) id<IESLiveGuestBattleProvider> battleProvider;
@property (weak, nonatomic) id<IESLiveGuestBattleRouter> battleRouter;
@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> interactiveRouter;
@property (retain, nonatomic) IESLiveInteractCompetitionGameGuestInfoViewModel *competitionGameViewModel;
@property (weak, nonatomic) id<IESLiveAudioSeatUpdateAction> updateAction;
@property (nonatomic) BOOL isEnlarge;
@property (nonatomic) BOOL isSquareLayout;
@property (nonatomic) int uilayout;
@property (nonatomic) BOOL seatLocked;
@property (copy, nonatomic) id /* block */ onFanticketInfoViewClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ firstLoadAnchorAvatarBlock;
@property (nonatomic) BOOL audioThemeEnabled;
@property (copy, nonatomic) id /* block */ onGuestInfoViewTapAcceptLink;
@property (nonatomic) BOOL isUserOnline;
@property (copy, nonatomic) id /* block */ onUserViewClicked;
@property (nonatomic) BOOL needShowIncomePrompt;
@property (nonatomic) BOOL disableSilence;
@property (nonatomic) BOOL disableEmoji;
@property (retain, nonatomic) IESLiveInteractSeatElementLoader *elementLoader;
@property (retain, nonatomic) IESLiveMultiAudioAvatarViewConfig *avatarConfig;

- (void)setupObserver;
- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)tagInfo;
- (void)setTagInfo:(id)arg0;
- (id)userNameText;
- (void)setUserNameText:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)updateWithIndex:(long long)arg0;
- (void)setUpdateAction:(id)arg0;
- (BOOL)isEnlarge;
- (void)setIsEnlarge:(BOOL)arg0;
- (int)uilayout;
- (BOOL)isInCompetitionGame;
- (BOOL)isInTeamFight;
- (BOOL)isTeamFightFlexible;
- (void)setUilayout:(int)arg0;
- (void)setOnUserViewClicked:(id /* block */)arg0;
- (void)updateSoundAnimationDidChangeWithSpeakingImageList:(id)arg0;
- (void)updateWithGuest:(id)arg0;
- (void)updateSoundAnimationWithStartURLs:(id)arg0 loopURLs:(id)arg1;
- (void)p_disposable;
- (id)avatarConfig;
- (id /* block */)onUserViewClicked;
- (void)updateFanticketAreaHidden:(BOOL)arg0;
- (void)setAvatarConfig:(id)arg0;
- (BOOL)isLimitVoiceWaveValid:(id)arg0;
- (void)onGuestBattleFinish;
- (void)prepareTeamFight;
- (void)startTeamFight;
- (void)punishTeamFight;
- (void)finishTeamFight;
- (void)didUpdateTeamFightInfo;
- (long long)teamFightStatus;
- (void)paidLinkmicOpenStatusChanged:(BOOL)arg0;
- (id)emptyAvartarText;
- (long long)bgColorType;
- (long long)emptyAvatarType;
- (id)joinIconUrsl;
- (id)dynamicJoinIconUrls;
- (BOOL)isSquareLayout;
- (id)competitionGameViewModel;
- (id)teamSignColor;
- (id)normalSeatName;
- (BOOL)teamFightAvatarSignShow;
- (BOOL)afkViewShow;
- (BOOL)pauseViewShow;
- (long long)userNameIconType;
- (id)userLabelFont;
- (double)userLabelWidth;
- (id)acceptLinkText;
- (id)acceptLinkTitleColr;
- (id)acceptLinkBgColr;
- (long long)seatNameType;
- (id)seatBgColor;
- (id)paidLinkSeatName;
- (id)elementLoader;
- (id)emptyUserNameText;
- (id)battleService;
- (BOOL)enableUpdateBattlerRole;
- (id /* block */)onGuestInfoViewTapAcceptLink;
- (id)micItemInfo;
- (void)updateLinkButtonStateInPrelinkMode;
- (void)setBattleService:(id)arg0;
- (void)setAudioThemeEnabled:(BOOL)arg0;
- (void)initEmptyAvatarModel;
- (void)initGuestAvatarModel;
- (void)initSeatNameModel;
- (void)initCompetitionGameModel;
- (id)rac_disposable;
- (void)setRac_disposable:(id)arg0;
- (void)setElementLoader:(id)arg0;
- (void)p_updateAdminAndSilenceStatus;
- (void)updatePaidLinkmicProgress;
- (void)updateAvatarWidth;
- (void)updateUserNamelabel;
- (void)setupElementLoaderIfNeeded;
- (void)updateWithEmptyGuest;
- (void)updateWitCurrentGuest;
- (id /* block */)firstLoadAnchorAvatarBlock;
- (void)setFirstLoadAnchorAvatarBlock:(id /* block */)arg0;
- (void)setUserNameType:(long long)arg0;
- (void)updateGuestBattleViewIfNeeded;
- (void)updateTeamFightSignViewShow;
- (void)addObserverWithGuest:(id)arg0;
- (void)resetCheckerForEmptyGuest;
- (id)checkerForEmptyAvatar;
- (void)updateEmptyUserTextIfNeeded;
- (id)checkerForSeatName;
- (id)observeUserTagInfoWithModel:(id)arg0;
- (void)updateEmptyAvatarWithIndex;
- (BOOL)isInFixTeamFight;
- (double)scaleFont:(double)arg0;
- (void)setCheckerForEmptyAvatar:(id)arg0;
- (void)updateIndexLabelText:(id)arg0 fontSize:(long long)arg1;
- (void)setEmptyAvatarType:(long long)arg0;
- (id)guestBattleRouter;
- (id)teamFightProvider;
- (void)setBgColorType:(long long)arg0;
- (void)setEmptyAvartarText:(id)arg0;
- (void)updateJoinIconWithURLs:(id)arg0 isLocal:(BOOL)arg1;
- (void)setLocalJoinIconUrsl:(id)arg0;
- (void)setJoinIconUrsl:(id)arg0;
- (BOOL)audioThemeEnabled;
- (struct CGSize { double x0; double x1; })anchorAvatarSize;
- (struct CGSize { double x0; double x1; })audienceAvatarSize;
- (void)setAfkViewShow:(BOOL)arg0;
- (void)updateLinkButtonUI;
- (void)setAcceptLinkTitleColr:(id)arg0;
- (void)setAcceptLinkBgColr:(id)arg0;
- (id)audioAudienceRouter;
- (void)setAcceptLinkText:(id)arg0;
- (long long)userNameType;
- (id)strForNormal;
- (void)updateEmptyUserTextWithText:(id)arg0;
- (id)emptyElement;
- (BOOL)isUserOffLine;
- (void)setLastEmptyUserNameText:(id)arg0;
- (id)nameStrInTeamFight;
- (id)strForCompetitionGame;
- (void)setEmptyUserNameText:(id)arg0;
- (BOOL)isUserOnline;
- (id)gameRouter;
- (void)setPauseViewShow:(BOOL)arg0;
- (void)setUserNameIconType:(long long)arg0;
- (id)anchorNameFont;
- (id)audienceNameFont;
- (void)setUserLabelFont:(id)arg0;
- (double)anchorUserLabelWidth;
- (double)audienceUserLabelWidth;
- (void)setUserLabelWidth:(double)arg0;
- (void)startPaidLinkmicCountDownWithGuest:(id)arg0;
- (double)paidLinkmicDuration;
- (void)setPaidLinkSeatName:(id)arg0;
- (id)linkmicTimer;
- (void)setLinkmicTimer:(id)arg0;
- (id)linkmicSeatNameReplaceTimer;
- (void)setLinkmicSeatNameReplaceTimer:(id)arg0;
- (void)showPaidLinkmicCountDownIfNeededWithGuest:(id)arg0;
- (void)stopPaidLinkmicCountDown;
- (void)replacePaidLinkmicCoundownAfter:(double)arg0 animated:(BOOL)arg1;
- (void)setCheckerForSeatName:(id)arg0;
- (void)setSeatNameType:(long long)arg0;
- (void)setMicItemInfo:(id)arg0;
- (void)setPositionItem:(id)arg0;
- (void)showSeatName:(id)arg0;
- (void)resetSeatNameTagBgColor;
- (void)setNormalSeatName:(id)arg0;
- (BOOL)isCompetitionGamePerformer;
- (void)setSeatBgColor:(id)arg0;
- (id)positionItem;
- (void)updateTeamSignColor;
- (long long)teamSignWithPosition:(long long)arg0;
- (void)updateTeamSignColorWithSign:(long long)arg0;
- (void)setTeamSignColor:(id)arg0;
- (void)setTeamFightStatus:(long long)arg0;
- (id)interactiveRouter;
- (void)updateEmptyAvatarWithTeamFightStatus:(BOOL)arg0;
- (void)setTeamFightAvatarSignShow:(BOOL)arg0;
- (void)updateEmptyAvatarWithGuestBattleStatus:(BOOL)arg0;
- (void)onGuestBattleStart;
- (void)onGuestBattleSettle;
- (id)lastEmptyUserNameText;
- (id)battleProvider;
- (id)battleRouter;
- (id)teamFightRouter;
- (void)updateAcceptTitle;
- (void)setCompetitionGameViewModel:(id)arg0;
- (void)setDynamicJoinIconUrls:(id)arg0;
- (id)localJoinIconUrsl;
- (void)setIsSquareLayout:(BOOL)arg0;
- (BOOL)seatLocked;
- (void)setSeatLocked:(BOOL)arg0;
- (id /* block */)onFanticketInfoViewClicked;
- (void)setOnFanticketInfoViewClicked:(id /* block */)arg0;
- (void)updateJoinIconWithURLs:(id)arg0;
- (void)updateAnchorPause:(BOOL)arg0;
- (void)setOnGuestInfoViewTapAcceptLink:(id /* block */)arg0;
- (void)setIsUserOnline:(BOOL)arg0;
- (void)updateSeatInfo:(id)arg0;
- (void)updateTeamFightViewIfNeeded;
- (id)teamFightService;
- (BOOL)hasBindUser;
- (void)setHasBindUser:(BOOL)arg0;
- (void)setEmptyElement:(id)arg0;
- (void)setTeamFightService:(id)arg0;
- (void)setTeamFightProvider:(id)arg0;
- (void)setGuestBattleRouter:(id)arg0;
- (void)setGameRouter:(id)arg0;
- (void)setTeamFightRouter:(id)arg0;
- (void)setAudioAudienceRouter:(id)arg0;
- (void)setBattleProvider:(id)arg0;
- (void)setBattleRouter:(id)arg0;
- (void)setInteractiveRouter:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)isAnchor;
- (void)setGuest:(id)arg0;
- (long long)index;
- (id)updateAction;
- (void)dealloc;
- (id)guest;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)updateAccessibilityLabel;

@end

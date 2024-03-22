//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveMultiChannelInfo, BattleConfigSetting, IESLiveMultiLinkerLayoutModel, IESLiveMultiPKModeInfo, NSDictionary, SpecifyGiftConfig, CustomConfig, NSMutableArray, IESLiveMultiLinkerReLinkAnchorModel, NSString, IESLiveMultiLinkerMediaParamsModel, HTSLiveIntercomChangeSyncData, IESLiveIntercomCommentConfig, BattleSelfData, IESLiveMultiLinkerRandomTeamLayoutModel, NSNumber;
@protocol IESLiveInteractUserModel;

@interface IESLiveMultiLinkerModel : IESLiveDynamicModel {
    BOOL _isCustomPKFromEdit;
    BOOL _silenceOppositeAudioVolume;
    BOOL _isLinkedByRandomTeamScene;
    BOOL _hasEcommerceRoom;
    BOOL _isInRelinkAnchor;
    BOOL _isPCStream;
    BOOL _isTransforming;
    BOOL _isFromTransformFirstBuild;
    BOOL _isReceivedTransformReply;
    BOOL _isReceivedTransformSwitchScene;
    BOOL _useMultiChannel;
    BOOL _needShowLastResult;
    BOOL _needShowInteractScore;
    BOOL _isInteractScoreShow;
    BOOL _isPicoVRStream;
    BOOL _forbidOthersInvite;
    BOOL _forbidOthersApply;
    BOOL _defaultLargeLayoutTurnon;
    BOOL _isMultiInvite;
    int _inviteSource;
    int _modeTabType;
    int _inviteRole;
    unsigned long long _vendor;
    IESLiveMultiChannelInfo *_multiChannelInfo;
    long long _regionCount;
    long long _audienceLastRegionCount;
    IESLiveMultiLinkerMediaParamsModel *_mediaParams;
    IESLiveMultiLinkerLayoutModel *_layoutModel;
    unsigned long long _battleModeToJoin;
    BattleConfigSetting *_battleConfigToJoin;
    NSNumber *_channelID;
    NSString *_applyLinkMicID;
    NSString *_theme;
    NSMutableArray *_needlessLoadingLinkmicIds;
    NSMutableDictionary *_oppositeUIDToSignExtra;
    HTSLiveIntercomChangeSyncData *_intercomMessageModel;
    NSMutableDictionary *_interactScoreDict;
    long long _interactStartTime;
    unsigned long long _interactDuration;
    BattleSelfData *_pkCustomSettingData;
    NSString *_appliedUserID;
    id<IESLiveInteractUserModel> _silenceVolumeUser;
    double _disableKickOutTime;
    IESLiveMultiPKModeInfo *_multiPkModeInfo;
    IESLiveMultiLinkerRandomTeamLayoutModel *_randomTeamLayoutModel;
    SpecifyGiftConfig *_specifyGiftConfig;
    CustomConfig *_customConfigNew;
    double _preferredEcommerceContainerHeight;
    id /* block */ _ecommerceContainerCompleteBlock;
    IESLiveMultiLinkerReLinkAnchorModel *_relinkAnchorModel;
    unsigned long long _relinkMode;
    long long _fromStatus;
    long long _multiBattleCount;
    unsigned long long _joinChannelReason;
    long long _oppositeStatus;
    NSMutableArray *_startConnectArray;
    unsigned long long _inviterFromScene;
    NSString *_revenueInteractSource;
    NSString *_connectionType;
    double _clickReplyTime;
    long long _actionFromSource;
    NSString *_inviterActionSourceStr;
    NSString *_inviterInviteMode;
    NSMutableDictionary *_connectionOverExtraDic;
    long long _connectionOverReason;
    unsigned long long _rtcStatus;
    long long _inviteListNum;
    NSString *_inviterRoomID;
    NSString *_inviterListNum;
    NSString *_inviterRoomStatus;
    NSString *_inviterConnectCount;
    double _preStreamTopOffset;
    double _renderViewBottom;
}

@property (retain, nonatomic) IESLiveMultiLinkerMediaParamsModel *mediaParams;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (retain, nonatomic) IESLiveMultiLinkerLayoutModel *layoutModel;
@property (nonatomic) int modeTabType;
@property (nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSDictionary *rtcExtraInfo;
@property (nonatomic) long long regionCount;
@property (nonatomic) long long audienceLastRegionCount;
@property (nonatomic) long long matchType;
@property (nonatomic) int inviteSource;
@property (nonatomic) unsigned long long battleModeToJoin;
@property (retain, nonatomic) BattleConfigSetting *battleConfigToJoin;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) NSString *inviteUID;
@property (copy, nonatomic) NSString *inviteLinkmicId;
@property (copy, nonatomic) NSString *inviteSecUID;
@property (retain, nonatomic) NSString *applyUID;
@property (copy, nonatomic) NSString *applySecUID;
@property (copy, nonatomic) NSString *applyLinkMicID;
@property (retain, nonatomic) NSNumber *inviteRoomID;
@property (retain, nonatomic) NSString *receiveUID;
@property (copy, nonatomic) NSString *theme;
@property (copy, nonatomic) NSString *linkmicID;
@property (retain, nonatomic) NSMutableArray *needlessLoadingLinkmicIds;
@property (retain, nonatomic) id<IESLiveInteractUserModel> silenceChangedUser;
@property (retain, nonatomic) NSMutableDictionary *oppositeUIDToSignExtra;
@property (retain, nonatomic) IESLiveIntercomCommentConfig *intercomConfig;
@property (retain, nonatomic) HTSLiveIntercomChangeSyncData *intercomMessageModel;
@property (retain, nonatomic) NSMutableDictionary *interactScoreDict;
@property (nonatomic) long long interactStartTime;
@property (nonatomic) unsigned long long interactDuration;
@property (retain, nonatomic) BattleSelfData *pkCustomSettingData;
@property (nonatomic) BOOL isCustomPKFromEdit;
@property (retain, nonatomic) NSString *appliedUserID;
@property (nonatomic) BOOL silenceOppositeAudioVolume;
@property (retain, nonatomic) id<IESLiveInteractUserModel> silenceVolumeUser;
@property (nonatomic) double disableKickOutTime;
@property (retain, nonatomic) IESLiveMultiPKModeInfo *multiPkModeInfo;
@property (nonatomic) BOOL isLinkedByRandomTeamScene;
@property (retain, nonatomic) IESLiveMultiLinkerRandomTeamLayoutModel *randomTeamLayoutModel;
@property (retain, nonatomic) SpecifyGiftConfig *specifyGiftConfig;
@property (retain, nonatomic) CustomConfig *customConfigNew;
@property (nonatomic) BOOL hasEcommerceRoom;
@property (nonatomic) double preferredEcommerceContainerHeight;
@property (copy, nonatomic) id /* block */ ecommerceContainerCompleteBlock;
@property (retain, nonatomic) IESLiveMultiLinkerReLinkAnchorModel *relinkAnchorModel;
@property (nonatomic) BOOL isInRelinkAnchor;
@property (nonatomic) unsigned long long relinkMode;
@property (nonatomic) BOOL didLeaveChannel;
@property (nonatomic) BOOL isPCStream;
@property (nonatomic) BOOL isFromNormalLive;
@property (nonatomic) BOOL enableSendGiftToOthers;
@property (nonatomic) BOOL initiativeEnd;
@property (nonatomic) BOOL isTransforming;
@property (nonatomic) long long fromStatus;
@property (nonatomic) BOOL isFromTransformFirstBuild;
@property (nonatomic) BOOL isReceivedTransformReply;
@property (nonatomic) BOOL isReceivedTransformSwitchScene;
@property (nonatomic) BOOL useMultiChannel;
@property (nonatomic) BOOL needShowLastResult;
@property (nonatomic) BOOL needShowInteractScore;
@property (nonatomic) BOOL isInteractScoreShow;
@property (nonatomic) BOOL isPicoVRStream;
@property (nonatomic) BOOL forbidOthersInvite;
@property (nonatomic) BOOL forbidOthersApply;
@property (nonatomic) BOOL defaultLargeLayoutTurnon;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long inviteeListType;
@property (copy, nonatomic) NSString *eventPage;
@property (nonatomic) long long multiBattleCount;
@property (nonatomic) unsigned long long joinChannelReason;
@property (nonatomic) long long oppositeStatus;
@property (retain, nonatomic) NSMutableArray *startConnectArray;
@property (nonatomic) int inviteRole;
@property (nonatomic) unsigned long long inviterFromScene;
@property (copy, nonatomic) NSString *revenueInteractSource;
@property (copy, nonatomic) NSString *connectionType;
@property (nonatomic) double clickReplyTime;
@property (nonatomic) long long actionFromSource;
@property (readonly, copy, nonatomic) NSString *actionFromSourceStr;
@property (copy, nonatomic) NSString *inviterActionSourceStr;
@property (copy, nonatomic) NSString *inviterInviteMode;
@property (retain, nonatomic) NSMutableDictionary *connectionOverExtraDic;
@property (nonatomic) long long connectionOverReason;
@property (nonatomic) unsigned long long rtcStatus;
@property (nonatomic) long long inviteListNum;
@property (copy, nonatomic) NSString *inviterRoomID;
@property (copy, nonatomic) NSString *inviterListNum;
@property (copy, nonatomic) NSString *inviterRoomStatus;
@property (copy, nonatomic) NSString *inviterConnectCount;
@property (nonatomic) double preStreamTopOffset;
@property (nonatomic) BOOL isMultiInvite;
@property (nonatomic) double renderViewBottom;

- (id)layoutModel;
- (void)setLayoutModel:(id)arg0;
- (BOOL)isPCStream;
- (void)setIsPCStream:(BOOL)arg0;
- (double)preStreamTopOffset;
- (void)setPreStreamTopOffset:(double)arg0;
- (unsigned long long)rtcStatus;
- (void)setRtcStatus:(unsigned long long)arg0;
- (BOOL)isInteractScoreShow;
- (BOOL)isTransforming;
- (BOOL)isSelfLinkerAdmin;
- (void)setRegionCount:(long long)arg0;
- (id)intercomMessageModel;
- (BOOL)updateLayoutWithType:(long long)arg0 uid:(id)arg1 range:(long long)arg2;
- (void)setIntercomMessageModel:(id)arg0;
- (void)resolveWithInviteRespnse:(id)arg0;
- (void)resolveFromReplyResponse:(id)arg0;
- (void)resolveWithInviteMessage:(id)arg0 extra:(id)arg1;
- (void)resolveFromReplyMessage:(id)arg0;
- (id)specifyGiftConfig;
- (int)inviteSource;
- (id)multiChannelInfo;
- (unsigned long long)inviterFromScene;
- (int)inviteRole;
- (id)multiPkModeInfo;
- (BOOL)useMultiChannel;
- (id)inviterRoomStatus;
- (void)setInviteListNum:(long long)arg0;
- (id)oppositeUIDToSignExtra;
- (id)inviterRoomID;
- (id)inviterInviteMode;
- (id)inviterListNum;
- (id)inviterActionSourceStr;
- (unsigned long long)relinkMode;
- (id)inviterConnectCount;
- (void)setInviteSource:(int)arg0;
- (id)actionFromSourceStr;
- (void)setInviteRole:(int)arg0;
- (BOOL)isSpecialLayoutInRange:(long long)arg0 uid:(id)arg1;
- (void)resolveClientAttachedInfo:(id)arg0;
- (void)setInviterRoomID:(id)arg0;
- (void)setActionFromSource:(long long)arg0;
- (unsigned long long)battleModeToJoin;
- (BOOL)isInRelinkAnchor;
- (void)setRelinkMode:(unsigned long long)arg0;
- (id)relinkAnchorModel;
- (void)updateMultiChannelInfoWith:(id)arg0 shouldMerge:(BOOL)arg1;
- (void)addConnectModelWithRole:(unsigned long long)arg0 waitFrameArray:(id)arg1 startTime:(double)arg2 fromStatus:(long long)arg3 oppositeStatus:(long long)arg4;
- (void)resolveFromApplyMessage:(id)arg0;
- (void)setJoinChannelReason:(unsigned long long)arg0;
- (void)setOppositeStatus:(long long)arg0;
- (void)resolveFromPermitMessage:(id)arg0;
- (void)resetActionFromSource;
- (long long)inviteListNum;
- (void)setInviterRoomStatus:(id)arg0;
- (void)setAppliedUserID:(id)arg0;
- (void)setIsInRelinkAnchor:(BOOL)arg0;
- (void)setRelinkAnchorModel:(id)arg0;
- (id)connectionOverExtraDic;
- (long long)connectionOverReason;
- (BOOL)isReceivedTransformReply;
- (void)resolveFromSwitchSceneMessage:(id)arg0;
- (void)setRevenueInteractSource:(id)arg0;
- (void)setDisableKickOutTime:(double)arg0;
- (void)updateMediaParamsRTCInfoMap:(id)arg0 liveCoreInfoMap:(id)arg1;
- (void)setIsTransforming:(BOOL)arg0;
- (BOOL)silenceOppositeAudioVolume;
- (long long)actionFromSource;
- (void)setMultiChannelInfo:(id)arg0;
- (BOOL)isMultiInvite;
- (void)setIsMultiInvite:(BOOL)arg0;
- (id)startConnectArray;
- (void)setClickReplyTime:(double)arg0;
- (BOOL)isReceivedTransformSwitchScene;
- (id)applyLinkMicID;
- (void)resolveFromPermitResponse:(id)arg0;
- (long long)multiBattleCount;
- (id)battleConfigToJoin;
- (void)setCustomConfigNew:(id)arg0;
- (void)setSpecifyGiftConfig:(id)arg0;
- (void)setConnectionOverReason:(long long)arg0;
- (void)setNeedlessLoadingLinkmicIds:(id)arg0;
- (void)setSilenceOppositeAudioVolume:(BOOL)arg0;
- (BOOL)needShowLastResult;
- (void)setNeedShowLastResult:(BOOL)arg0;
- (void)setIsFromTransformFirstBuild:(BOOL)arg0;
- (void)setInviterFromScene:(unsigned long long)arg0;
- (id)needlessLoadingLinkmicIds;
- (id)silenceVolumeUser;
- (void)setSilenceVolumeUser:(id)arg0;
- (double)renderViewBottom;
- (void)setPreferredEcommerceContainerHeight:(double)arg0;
- (void)setEcommerceContainerCompleteBlock:(id /* block */)arg0;
- (void)setHasEcommerceRoom:(BOOL)arg0;
- (BOOL)isPicoVRStream;
- (void)setIsPicoVRStream:(BOOL)arg0;
- (BOOL)needShowInteractScore;
- (void)setIsInteractScoreShow:(BOOL)arg0;
- (id)interactScoreDict;
- (void)setAudienceLastRegionCount:(long long)arg0;
- (long long)audienceLastRegionCount;
- (void)updateLayoutWithType:(long long)arg0 linkmicId:(id)arg1;
- (void)setRenderViewBottom:(double)arg0;
- (unsigned long long)interactDuration;
- (void)setInteractDuration:(unsigned long long)arg0;
- (long long)interactStartTime;
- (void)setInteractStartTime:(long long)arg0;
- (void)setNeedShowInteractScore:(BOOL)arg0;
- (void)setInteractScoreDict:(id)arg0;
- (void)setRandomTeamLayoutModel:(id)arg0;
- (void)setIsLinkedByRandomTeamScene:(BOOL)arg0;
- (id)revenueInteractSource;
- (int)modeTabType;
- (void)setMultiPkModeInfo:(id)arg0;
- (BOOL)isCustomPK;
- (id)customConfigNew;
- (id /* block */)ecommerceContainerCompleteBlock;
- (BOOL)hasEcommerceRoom;
- (double)preferredEcommerceContainerHeight;
- (void)setPkCustomSettingData:(id)arg0;
- (unsigned long long)joinChannelReason;
- (double)clickReplyTime;
- (long long)oppositeStatus;
- (id)mediaParams;
- (id)randomTeamLayoutModel;
- (void)setUseMultiChannel:(BOOL)arg0;
- (void)setForbidOthersInvite:(BOOL)arg0;
- (void)setForbidOthersApply:(BOOL)arg0;
- (BOOL)isLinkedByRandomTeamScene;
- (double)disableKickOutTime;
- (BOOL)defaultLayoutTypeHasDiff:(long long)arg0 defaultFoucsUid:(id)arg1 defaultLayoutRange:(long long)arg2;
- (BOOL)forbidOthersInvite;
- (id)pkCustomSettingData;
- (void)setIsCustomPKFromEdit:(BOOL)arg0;
- (void)setBattleModeToJoin:(unsigned long long)arg0;
- (void)setBattleConfigToJoin:(id)arg0;
- (void)setIsReceivedTransformReply:(BOOL)arg0;
- (void)setApplyLinkMicID:(id)arg0;
- (void)setIsReceivedTransformSwitchScene:(BOOL)arg0;
- (void)setMediaParams:(id)arg0;
- (BOOL)isFromTransformFirstBuild;
- (void)setInviterActionSourceStr:(id)arg0;
- (void)setInviterInviteMode:(id)arg0;
- (void)setInviterListNum:(id)arg0;
- (void)setInviterConnectCount:(id)arg0;
- (void)setModeTabType:(int)arg0;
- (void)setOppositeUIDToSignExtra:(id)arg0;
- (BOOL)isCustomPKFromEdit;
- (id)appliedUserID;
- (BOOL)forbidOthersApply;
- (BOOL)defaultLargeLayoutTurnon;
- (void)setDefaultLargeLayoutTurnon:(BOOL)arg0;
- (void)setMultiBattleCount:(long long)arg0;
- (void)setStartConnectArray:(id)arg0;
- (void)setConnectionOverExtraDic:(id)arg0;
- (id)connectionType;
- (id)init;
- (void)setTheme:(id)arg0;
- (id)channelID;
- (void).cxx_destruct;
- (id)theme;
- (unsigned long long)vendor;
- (long long)regionCount;
- (void)setConnectionType:(id)arg0;
- (void)setVendor:(unsigned long long)arg0;
- (void)setChannelID:(id)arg0;
- (long long)fromStatus;
- (void)setFromStatus:(long long)arg0;

@end

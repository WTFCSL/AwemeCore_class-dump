//
//     Generated by private class-dump
//

@class NSArray, NSString, IESLiveCountTimer, HTSLiveTeamfightRoomBattleContent, HTSLiveLinkmicTeamfightTeamInfo, NSNumber, HTSLiveLinkmicTeamfightInfo;
@protocol IESLiveTeamFightModelDelegate;

@interface IESLiveTeamFightGameModel : NSObject {
    BOOL _isPreload;
    int _scoreType;
    int _teamBattleTeamType;
    long long _teamFightID;
    long long _status;
    NSString *_dressId;
    long long _winTeamSign;
    HTSLiveLinkmicTeamfightTeamInfo *_redTeamInfo;
    HTSLiveLinkmicTeamfightTeamInfo *_blueTeamInfo;
    long long _duration;
    long long _startTime;
    long long _punishDuration;
    long long _punishStartTime;
    long long _showDuration;
    long long _showStartTime;
    long long _backupApiTimeInterval;
    double _remainTime;
    double _punishRemainTime;
    double _showRemainTime;
    long long _scoreBarStyle;
    HTSLiveLinkmicTeamfightInfo *_stashInfo;
    NSArray *_gameDurationSetting;
    long long _sourceScene;
    NSString *_requestPage;
    long long _finishReason;
    long long _teamFightType;
    id<IESLiveTeamFightModelDelegate> _delegate;
    IESLiveCountTimer *_teamFightTimer;
    IESLiveCountTimer *_punishTimer;
    IESLiveCountTimer *_showTimer;
}

@property (nonatomic) BOOL isInRoomBattleMatching;
@property (retain, nonatomic) NSNumber *rivalRoomID;
@property (retain, nonatomic) NSNumber *rivalUserID;
@property (nonatomic) long long anchorRole;
@property (nonatomic) long long startType;
@property (nonatomic) long long inviteListType;
@property (nonatomic) BOOL prepareToRoomBattle;
@property (nonatomic) long long replyUserId;
@property (retain, nonatomic) HTSLiveTeamfightRoomBattleContent *roomBattleContent;
@property (nonatomic) long long oneMoreType;
@property (nonatomic) long long teamFightType;
@property (weak, nonatomic) id<IESLiveTeamFightModelDelegate> delegate;
@property (retain, nonatomic) IESLiveCountTimer *teamFightTimer;
@property (retain, nonatomic) IESLiveCountTimer *punishTimer;
@property (retain, nonatomic) IESLiveCountTimer *showTimer;
@property (nonatomic) long long teamFightID;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *dressId;
@property (nonatomic) long long winTeamSign;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightTeamInfo *redTeamInfo;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightTeamInfo *blueTeamInfo;
@property (nonatomic) long long duration;
@property (nonatomic) long long startTime;
@property (nonatomic) long long punishDuration;
@property (nonatomic) long long punishStartTime;
@property (nonatomic) long long showDuration;
@property (nonatomic) long long showStartTime;
@property (nonatomic) long long backupApiTimeInterval;
@property (nonatomic) double remainTime;
@property (nonatomic) double punishRemainTime;
@property (nonatomic) double showRemainTime;
@property (nonatomic) long long scoreBarStyle;
@property (nonatomic) int scoreType;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightInfo *stashInfo;
@property (copy, nonatomic) NSArray *gameDurationSetting;
@property (nonatomic) long long sourceScene;
@property (copy, nonatomic) NSString *requestPage;
@property (nonatomic) long long finishReason;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) int teamBattleTeamType;

- (void)setFinishReason:(long long)arg0;
- (long long)finishReason;
- (void)setReplyUserId:(long long)arg0;
- (long long)replyUserId;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (int)defaultScoreValue;
- (void)setShowTimer:(id)arg0;
- (long long)showStartTime;
- (void)setShowStartTime:(long long)arg0;
- (long long)showDuration;
- (void)setShowDuration:(long long)arg0;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (id)themeTitle;
- (double)remainTime;
- (void)setRemainTime:(double)arg0;
- (long long)sourceScene;
- (long long)startType;
- (void)setStartType:(long long)arg0;
- (void)setScoreType:(int)arg0;
- (id)dressId;
- (void)setSourceScene:(long long)arg0;
- (void)setDressId:(id)arg0;
- (long long)teamFightType;
- (long long)punishDuration;
- (int)teamBattleTeamType;
- (long long)punishStartTime;
- (id)roomBattleContent;
- (double)punishRemainTime;
- (void)setPunishRemainTime:(double)arg0;
- (void)setPunishTimer:(id)arg0;
- (id)punishTimer;
- (void)setPunishStartTime:(long long)arg0;
- (BOOL)prepareToRoomBattle;
- (long long)teamFightID;
- (id)stashInfo;
- (id)blueTeamInfo;
- (void)updateTeamFightInfo:(id)arg0;
- (void)setPrepareToRoomBattle:(BOOL)arg0;
- (void)setRivalRoomID:(id)arg0;
- (void)setRivalUserID:(id)arg0;
- (void)setAnchorRole:(long long)arg0;
- (void)setIsInRoomBattleMatching:(BOOL)arg0;
- (void)setInviteListType:(long long)arg0;
- (id)redTeamInfo;
- (long long)inviteListType;
- (id)rivalRoomID;
- (long long)anchorRole;
- (id)initWithDelegate:(id)arg0 teamFightType:(long long)arg1 DIContext:(id)arg2;
- (void)setRoomBattleContent:(id)arg0;
- (BOOL)isInRoomBattleMatching;
- (id)rivalUserID;
- (void)setGameDurationSetting:(id)arg0;
- (void)setBackupApiTimeInterval:(long long)arg0;
- (long long)oneMoreType;
- (void)setOneMoreType:(long long)arg0;
- (void)setTeamFightType:(long long)arg0;
- (void)setStashInfo:(id)arg0;
- (void)updateScoreWithMessage:(id)arg0;
- (void)updateTeamFightInfo:(id)arg0 type:(long long)arg1;
- (long long)defaultGameDuration;
- (void)cancelTeamFightTimer;
- (void)cancelPunishTimer;
- (void)cancelShowResultTimer;
- (void)setScoreBarStyle:(long long)arg0;
- (void)updateTeamInfo:(id)arg0 isScoreMessage:(BOOL)arg1;
- (void)updateTeamInfo:(id)arg0;
- (void)setTeamFightID:(long long)arg0;
- (void)setPunishDuration:(long long)arg0;
- (void)setTeamBattleTeamType:(int)arg0;
- (void)remakeScore;
- (void)updateRemainTime;
- (void)setWinTeamSign:(long long)arg0;
- (void)updatePunishRemainTime;
- (void)setShowRemainTime:(double)arg0;
- (void)updateShowResultRemainTime;
- (void)realUpdateRemainTimeWithDuration:(long long)arg0;
- (void)realUpdatePunishRemainTimeWithDuration:(long long)arg0;
- (double)showRemainTime;
- (void)realUpdateShowResultRemainTimeWithDuration:(long long)arg0;
- (void)setTeamFightTimer:(id)arg0;
- (id)teamFightTimer;
- (void)punishTimeOut;
- (void)showResultTimeOut;
- (long long)backupApiTimeInterval;
- (id)gameDurationKey;
- (long long)winTeamSign;
- (void)setRedTeamInfo:(id)arg0;
- (void)setBlueTeamInfo:(id)arg0;
- (long long)scoreBarStyle;
- (id)gameDurationSetting;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)status;
- (long long)duration;
- (id)delegate;
- (void)setStatus:(long long)arg0;
- (long long)startTime;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setDuration:(long long)arg0;
- (id)showTimer;
- (int)scoreType;

@end
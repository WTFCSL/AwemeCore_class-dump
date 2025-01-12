//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, HTSLiveLinkmicTeamfightTeamInfo, HTSLiveLinkmicTeamfightPlayer;

@interface IESLiveTeamFightUIComponentMvp : IESLiveTeamFightUIComponent <IESLiveTeamFightResourceManagerActions> {
    BOOL _needTrack;
    BOOL _isMvp;
    NSMutableDictionary *_lastAllPlayers;
    HTSLiveLinkmicTeamfightPlayer *_lastGoldPlayer;
    HTSLiveLinkmicTeamfightPlayer *_lastSliverPlayer;
    HTSLiveLinkmicTeamfightTeamInfo *_redTeamInfo;
    HTSLiveLinkmicTeamfightTeamInfo *_blueTeamInfo;
}

@property (retain, nonatomic) NSMutableDictionary *lastAllPlayers;
@property (nonatomic) BOOL needTrack;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightPlayer *lastGoldPlayer;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightPlayer *lastSliverPlayer;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightTeamInfo *redTeamInfo;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightTeamInfo *blueTeamInfo;
@property (nonatomic) BOOL isMvp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)componentDidLoad;
- (BOOL)needTrack;
- (void)setNeedTrack:(BOOL)arg0;
- (BOOL)isMvp;
- (void)setIsMvp:(BOOL)arg0;
- (void)componentFinished;
- (id)blueTeamInfo;
- (id)redTeamInfo;
- (void)didUpdateTeamFightScore;
- (void)componentPrepare;
- (void)setRedTeamInfo:(id)arg0;
- (void)setBlueTeamInfo:(id)arg0;
- (void)teamFightDressConfigChangeAction;
- (void)didUpdatedGuestList;
- (void)updateLastPlayersArray;
- (void)updateRedAndBlueMvpWithCompletion:(id /* block */)arg0;
- (void)cleanLastMvp;
- (void)updateMvpPlayerWith:(id)arg0 teamSign:(long long)arg1;
- (void)trackCrownIfNeedShow;
- (id)lastGoldPlayer;
- (void)updateMvpEffectOrIconWithPlayer:(id)arg0 role:(int)arg1 force:(BOOL)arg2;
- (id)lastSliverPlayer;
- (void)updateBattlerRoleAvatarWithPlayer:(id)arg0 team:(long long)arg1 force:(BOOL)arg2;
- (id)lastAllPlayers;
- (id)getCurPlayerWithTeamSign:(long long)arg0 userId:(long long)arg1;
- (void)performStickerWithModel:(id)arg0;
- (void)setLastGoldPlayer:(id)arg0;
- (void)setLastSliverPlayer:(id)arg0;
- (void)setLastAllPlayers:(id)arg0;
- (void).cxx_destruct;
- (id)resource;

@end

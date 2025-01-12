//
//     Generated by private class-dump
//

@class HTSLiveUserPreviewConfig, NSString, NSArray, HTSEventContext, HTSLiveShowChatMessage, HTSLiveRoomAuthStatus, HTSLiveUser, IESLivePlaybackComponentContext, NSNumber, HTSLiveEpisode;

@interface IESLivePlaybackUserProfileStore : NSObject {
    BOOL _isVerticalStream;
    BOOL _wasFollow;
    BOOL _dataDidUpdate;
    HTSLiveEpisode *_episode;
    HTSEventContext *_trackContext;
    IESLivePlaybackComponentContext *_componentContext;
    HTSLiveUserPreviewConfig *_config;
    HTSLiveRoomAuthStatus *_roomAuth;
    NSArray *_avatarThumbURLs;
    NSString *_nickname;
    NSString *_playCount;
    NSString *_userID;
    NSString *_secUserID;
    HTSLiveShowChatMessage *_chatMsg;
    HTSLiveUser *_user;
    id /* block */ _playBackStatusChangeFollow;
    NSNumber *_roomID;
}

@property (copy, nonatomic) NSArray *avatarThumbURLs;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *playCount;
@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL isVerticalStream;
@property (readonly, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSLiveUserPreviewConfig *config;
@property (retain, nonatomic) HTSLiveRoomAuthStatus *roomAuth;
@property (readonly, copy, nonatomic) NSString *playCountFormattedString;
@property (nonatomic) BOOL wasFollow;
@property (retain, nonatomic) HTSLiveShowChatMessage *chatMsg;
@property (readonly, nonatomic) BOOL dataDidUpdate;
@property (retain, nonatomic) HTSLiveUser *user;
@property (copy, nonatomic) id /* block */ playBackStatusChangeFollow;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (id)roomAuth;
- (id)avatarThumbURLs;
- (void)setAvatarThumbURLs:(id)arg0;
- (void)followUser:(id)arg0 completion:(id /* block */)arg1;
- (void)followUserWithCompletion:(id /* block */)arg0;
- (BOOL)isVerticalStream;
- (void)setIsVerticalStream:(BOOL)arg0;
- (void)setRoomAuth:(id)arg0;
- (void)followStatusDidChange:(BOOL)arg0;
- (void)trackWithEventName:(id)arg0;
- (id)reportConfigModel;
- (BOOL)dataDidUpdate;
- (void)updatePlayCount:(id)arg0;
- (id)track_position;
- (void)trackRelationWithEvent:(id)arg0 WithParams:(id)arg1;
- (void)unFollowUser:(id)arg0 completion:(id /* block */)arg1;
- (id)chatMsg;
- (void)trackReportButtonClickWithReportUid:(id)arg0;
- (void)trackEnterProfile:(BOOL)arg0;
- (void)setPlayBackStatusChangeFollow:(id /* block */)arg0;
- (void)configWithEpisodeItem:(id)arg0;
- (BOOL)wasFollow;
- (id)userFollowModel:(id)arg0 secUserId:(id)arg1;
- (void)trackMonitorFollowBgeinTime:(double)arg0 withError:(id)arg1 extra:(id)arg2;
- (void)trackMonitorUnfollowBgeinTime:(double)arg0 withError:(id)arg1 extra:(id)arg2;
- (void)setWasFollow:(BOOL)arg0;
- (id /* block */)playBackStatusChangeFollow;
- (id)playCountFormattedString;
- (id)requestPageString;
- (void)trackHornorWallClickedWithEventName:(id)arg0;
- (void)setChatMsg:(id)arg0;
- (void)setUser:(id)arg0;
- (id)playCount;
- (id)userID;
- (void)setPlayCount:(id)arg0;
- (id)init;
- (id)nickname;
- (id)user;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setUserID:(id)arg0;
- (void)setNickname:(id)arg0;
- (id)episode;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end

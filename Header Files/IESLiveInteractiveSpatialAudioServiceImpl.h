//
//     Generated by private class-dump
//

@class NSNumber, NSMutableDictionary, NSString;
@protocol IESLiveInteractiveSpatialAudioServiceDelegate;

@interface IESLiveInteractiveSpatialAudioServiceImpl : NSObject <IESLiveInteractionPlaymodeActions, IESLiveKTVActions, IESLiveInteractSmallWindowActions, IESLiveInteractiveSpatialAudioService> {
    BOOL _isTeamFight;
    BOOL _isVideoChallenge;
    BOOL _enLargeGuest;
    BOOL _isSmallWindow;
    int _uiLayout;
    id<IESLiveInteractiveSpatialAudioServiceDelegate> _delegate;
    NSNumber *_currentSingerUserID;
    NSMutableDictionary *_localLinkersPositionInfo;
}

@property (weak, nonatomic) id<IESLiveInteractiveSpatialAudioServiceDelegate> delegate;
@property (nonatomic) int uiLayout;
@property (nonatomic) BOOL isTeamFight;
@property (nonatomic) BOOL isVideoChallenge;
@property (nonatomic) BOOL enLargeGuest;
@property (nonatomic) BOOL isSmallWindow;
@property (retain, nonatomic) NSNumber *currentSingerUserID;
@property (retain, nonatomic) NSMutableDictionary *localLinkersPositionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)currentSingerUserID;
- (void)setUiLayout:(int)arg0;
- (BOOL)enableSpatialAudio;
- (void)interactionPlaymodeDidStart:(int)arg0;
- (void)interactionPlaymodeDidEnd:(int)arg0;
- (void)updateUiLayout:(int)arg0;
- (void)updateSpatialPosition;
- (id)getSpatialListenerOrientation;
- (id)getSpatialListenerPosition;
- (id)getSpatialPositionInfoWithLinkMicId:(id)arg0;
- (void)onInteractSmallWindowShowWithShowTrackDic:(id)arg0 durationTrackDic:(id)arg1;
- (void)onInteractReturnRoomWithShowTrackDic:(id)arg0 durationTrackDic:(id)arg1;
- (void)didUpdateKTVStageState:(unsigned long long)arg0;
- (void)refreshWithPlayModes;
- (void)checkLayoutStauts;
- (BOOL)enableSpatialAudioWithScene:(long long)arg0;
- (id)getSpatialListenerPositionFromScene:(long long)arg0;
- (id)localLinkersPositionInfo;
- (long long)getSpatialSceneFromLayout:(int)arg0;
- (id)getSpatialListenerOrientationFromScene:(long long)arg0;
- (BOOL)isTeamFight;
- (BOOL)isVideoChallenge;
- (BOOL)isSmallWindow;
- (void)setLocalLinkersPositionInfo:(id)arg0;
- (long long)getPositionWithLayout:(int)arg0 userId:(id)arg1;
- (id)getPositionInfoWithLayout:(int)arg0 hasJoinCount:(long long)arg1 position:(long long)arg2;
- (id)getOrientationWithDict:(id)arg0 x:(long long)arg1 y:(long long)arg2 z:(long long)arg3;
- (void)setIsTeamFight:(BOOL)arg0;
- (void)setIsVideoChallenge:(BOOL)arg0;
- (void)setEnLargeGuest:(BOOL)arg0;
- (BOOL)enLargeGuest;
- (void)setCurrentSingerUserID:(id)arg0;
- (void)setIsSmallWindow:(BOOL)arg0;
- (int)currentLayout;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (int)uiLayout;

@end

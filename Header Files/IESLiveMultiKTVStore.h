//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveMultiKTVApi, NSDictionary, IESLiveKtvAtmosphereVideoInfo, HTSLiveUser, UIButton, NSString, IESLiveComponentContext, IESLiveUGCVideoSelectPanelHandler, NSTimer, HTSEventContext, NSNumber, IESLiveMultiKTVUGCVideoStore, IESLiveKTVCommonStore;
@protocol IESLiveRoomService, IESLiveKTVFullLinkMonitor, IESLiveMultiKTVStagePluginProtocol;

@interface IESLiveMultiKTVStore : NSObject <HTSLiveMessageSubscriber, IESLiveKTVActions, IESLiveKTVSEIActions, IESLiveKTVControlActions, IESLiveKTVServiceActions, IESLiveKTVSongListActions, IESLiveMultiKTVUGCVideoDelegate, IESLiveDataSyncDelegate> {
    BOOL _isStarted;
    BOOL _isPreview;
    BOOL _manualMuteVideoStream;
    BOOL _isFetchingAtmosphere;
    IESLiveKTVCommonStore *_commonStore;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    IESLiveKtvAtmosphereVideoInfo *_defaultVideoInfo;
    NSMutableDictionary *_videoInfoDict;
    id<IESLiveMultiKTVStagePluginProtocol> _reusedDynamicPlugin;
    IESLiveMultiKTVUGCVideoStore *_ugcVideoStore;
    IESLiveUGCVideoSelectPanelHandler *_ugcVideoPanelHandler;
    UIButton *_orderButton;
    double _listenerDraggedScale;
    NSTimer *_delayPlayTimer;
    HTSLiveUser *_currentUser;
    IESLiveMultiKTVApi *_api;
    id<IESLiveKTVFullLinkMonitor> _ktvMonitor;
    NSDictionary *_ktvTempDatas;
    double _startMultiKTVTime;
    NSString *_defaultVid;
    NSNumber *_roomOwnerUserId;
}

@property (retain, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) NSTimer *delayPlayTimer;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (retain, nonatomic) IESLiveMultiKTVApi *api;
@property (nonatomic) BOOL manualMuteVideoStream;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> ktvMonitor;
@property (retain, nonatomic) NSDictionary *ktvTempDatas;
@property (nonatomic) double startMultiKTVTime;
@property (copy, nonatomic) NSString *defaultVid;
@property (retain, nonatomic) NSNumber *roomOwnerUserId;
@property (nonatomic) BOOL isFetchingAtmosphere;
@property (retain, nonatomic) IESLiveMultiKTVUGCVideoStore *ugcVideoStore;
@property (retain, nonatomic) IESLiveUGCVideoSelectPanelHandler *ugcVideoPanelHandler;
@property (retain, nonatomic) UIButton *orderButton;
@property (nonatomic) double listenerDraggedScale;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoInfo *defaultVideoInfo;
@property (retain, nonatomic) NSMutableDictionary *videoInfoDict;
@property (weak, nonatomic) id<IESLiveMultiKTVStagePluginProtocol> reusedDynamicPlugin;
@property (nonatomic) BOOL isPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)videoInfoDict;
- (void)setVideoInfoDict:(id)arg0;
- (id)orderButton;
- (void)setOrderButton:(id)arg0;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)smoothEnterRoomFromPreview;
- (BOOL)isSinging;
- (void)exitMultiKTVMode;
- (void)showSingModePicker;
- (void)updateUser:(long long)arg0 isHost:(BOOL)arg1 comletion:(id /* block */)arg2;
- (void)draggedContainerDidMoved:(double)arg0;
- (id)defaultVideoInfo;
- (void)togglePlayAction;
- (void)nextSongAction;
- (void)toggleOrigialSingToType:(unsigned long long)arg0;
- (void)toggleShowLyricsAction;
- (void)toggleShowLyricsAction:(BOOL)arg0 showToast:(BOOL)arg1;
- (void)toggleScoreMode;
- (BOOL)enableUGCMV;
- (id)remotePlayingMusicID;
- (BOOL)isRemotePlaying:(id)arg0 userID:(id)arg1;
- (void)p_openOrderSongPanel;
- (void)addMuiscModel:(id)arg0 source:(id)arg1 completion:(id /* block */)arg2;
- (void)goTopActionWithMusicModel:(id)arg0;
- (void)removeMusicModel:(id)arg0 successToast:(id)arg1 completion:(id /* block */)arg2;
- (void)favoriteMusicModel:(id)arg0 cell:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMusicModel:(id)arg0 isPause:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)addAllMusicModel:(id)arg0 source:(id)arg1 addCompletion:(id /* block */)arg2;
- (id)currentPlayKTVMusic;
- (long long)liveKtvMidiMigrationSetting;
- (id)ktvMonitor;
- (void)setKtvMonitor:(id)arg0;
- (void)willStartPlayMusicWithMusicID:(id)arg0 afterTime:(long long)arg1;
- (void)didKTVOrderListChanged;
- (void)didKTVIMOrderListChanged;
- (void)setCommonStore:(id)arg0;
- (id)commonStore;
- (id)delayPlayTimer;
- (void)setDelayPlayTimer:(id)arg0;
- (void)addSongSuccessWithModel:(id)arg0 afterFollow:(BOOL)arg1 inSongWaitingList:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)unbindProtocols;
- (void)setManualMuteVideoStream:(BOOL)arg0;
- (BOOL)manualMuteVideoStream;
- (void)handleKTVSEIModel:(id)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2 isPreview:(BOOL)arg3;
- (void)smoothExitRoom;
- (id)reusedDynamicPlugin;
- (void)setReusedDynamicPlugin:(id)arg0;
- (void)setKtvTempDatas:(id)arg0;
- (id)ktvTempDatas;
- (void)handleMessageAndWrdsUpdate:(id)arg0;
- (void)enterMultiKTVMode;
- (id)ugcVideoPanelHandler;
- (void)enterMultiKTVModeWithCompletion:(id /* block */)arg0;
- (id)getCurrentKtvVoteInfo;
- (id)ugcVideoStore;
- (void)setRoomOwnerUserId:(id)arg0;
- (void)setUgcVideoStore:(id)arg0;
- (void)setUgcVideoPanelHandler:(id)arg0;
- (void)setStartMultiKTVTime:(double)arg0;
- (void)startMultiKTVAnchorPing;
- (void)setListenerDraggedScale:(double)arg0;
- (id)defaultVid;
- (void)setDefaultVideoInfo:(id)arg0;
- (void)p_getAtomsphereVideoInfoForListener:(id)arg0 musicId:(id)arg1 userId:(id)arg2 withCompletion:(id /* block */)arg3;
- (double)startMultiKTVTime;
- (void)setIsFetchingAtmosphere:(BOOL)arg0;
- (BOOL)shouldShowMVSelectGuidePanel;
- (void)playMVWhileStartSinging;
- (void)p_checkIfNeedPreloadVideoInfo;
- (void)p_fetchAtomsphereVideoInfoForSinger:(id)arg0 withCompletion:(id /* block */)arg1;
- (BOOL)isFetchingAtmosphere;
- (double)listenerDraggedScale;
- (void)setDefaultVid:(id)arg0;
- (id)roomOwnerUserId;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (unsigned long long)state;
- (BOOL)isPreview;
- (id)currentUser;
- (void)setCurrentUser:(id)arg0;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (void)setIsPreview:(BOOL)arg0;
- (id)api;
- (void)setIsStarted:(BOOL)arg0;
- (void)setApi:(id)arg0;

@end

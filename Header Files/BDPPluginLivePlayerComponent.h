//
//     Generated by private class-dump
//

@class NSTimer, BDPLivePlayerContainer, NSString, UIView, BDPUniqueID, NSMutableDictionary, BDPAudioInterruptionConfig, BDPFollowUserCard, NSMutableArray;

@interface BDPPluginLivePlayerComponent : BDPBridgeInstancePlugin <BDPLivePlayerContainerProtocol, BDPAppRouteChangeMessage, BDPElementFullscreenMessage, BDPLivePlayerAuditDelegate, BDPUserScreenRecordDelegate, BDPAudioInterruptionDelegate, BDPContainerLifeCycleMessage, BDPAppRouteChangeMessage> {
    BOOL _usingLivePreview;
    BOOL _isLivePreviewFollowCard;
    long long _pageID;
    long long _pageIDForLivePreview;
    BDPUniqueID *_uniqueID;
    NSMutableDictionary *_playerList;
    NSMutableArray *_forcePauseList;
    BDPAudioInterruptionConfig *_audioInterruptionConfig;
    BDPFollowUserCard *_followCard;
    BDPLivePlayerContainer *_livePlayerContainer;
    NSTimer *_dismissTimer;
    id /* block */ _closeLivePreviewCompletion;
    UIView *_livePreviewGeneral;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _playerDictRWLock;
}

@property (nonatomic) long long pageID;
@property (nonatomic) long long pageIDForLivePreview;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } playerDictRWLock;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (retain, nonatomic) BDPFollowUserCard *followCard;
@property (retain, nonatomic) BDPLivePlayerContainer *livePlayerContainer;
@property (nonatomic) BOOL usingLivePreview;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (copy, nonatomic) id /* block */ closeLivePreviewCompletion;
@property (retain, nonatomic) UIView *livePreviewGeneral;
@property (nonatomic) BOOL isLivePreviewFollowCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationExitWithUniqueID:(id)arg0;
- (void)applicationEnterBackGroundWithUniqueID:(id)arg0;
- (void)applicationEnterForeGroundWithUniqueID:(id)arg0;
- (void)enterFullscreenWithPageID:(long long)arg0 orientation:(long long)arg1 element:(id)arg2 uniqueID:(id)arg3;
- (void)exitFullscreenWithPageID:(long long)arg0 element:(id)arg1 uniqueID:(id)arg2;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (void)setUsingLivePreview:(BOOL)arg0;
- (BOOL)usingLivePreview;
- (void)startDismissTimer;
- (void)enableScreenRecord;
- (id)followCard;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (id)getInterruptUniqueID;
- (long long)getPageID;
- (void)setAudioInterruptionConfig:(id)arg0;
- (id)audioInterruptionConfig;
- (void)disableScreenRecord;
- (void)onAuditResultFailWithSrcs:(id)arg0;
- (void)bdp_livePlayerStateChange:(long long)arg0 livePlayer:(id)arg1 extra:(id)arg2;
- (id)setErrorInfoWithErrorCode:(long long)arg0 errorMsg:(id)arg1 errorType:(id)arg2;
- (void)appWillEnterForground;
- (void)setPageIDForLivePreview:(long long)arg0;
- (long long)pageIDForLivePreview;
- (BOOL)pageContainsLivePreviewWithController:(id)arg0 setContainer:(BOOL)arg1;
- (void)setFollowCard:(id)arg0;
- (void)destroyLivePreview;
- (void)removeLivePreviewCardWithFollowCard:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)livePreviewTrackerWithEvent:(id)arg0 withData:(id)arg1;
- (void)insertLivePreviewCardWithContainer:(id)arg0 playerView:(id)arg1 isFollowCard:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setLivePlayerContainer:(id)arg0;
- (id)livePlayerContainer;
- (void)postRemoveLivePreviewLayerProcessWithAnimationFinish:(BOOL)arg0;
- (void)setCloseLivePreviewCompletion:(id /* block */)arg0;
- (void)getLivePreviewInfoWithOpenId:(id)arg0 aweID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isLivePreviewFollowCard;
- (id)livePreviewGeneral;
- (void)setLivePreviewGeneral:(id)arg0;
- (void)letPreviewPlayIfNeededWithPageID:(long long)arg0 uniqueID:(id)arg1 needPageID:(BOOL)arg2;
- (void)trackLivePlayerEventWithEventName:(id)arg0 params:(id)arg1;
- (id /* block */)closeLivePreviewCompletion;
- (void)setIsLivePreviewFollowCard:(BOOL)arg0;
- (void)insertLivePlayerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateLivePlayerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeLivePlayerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setLivePlayerWaterMarkWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)operateLivePlayerContextWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)showLivePreviewWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)destroyLivePreviewWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })playerDictRWLock;
- (void)setPlayerDictRWLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (void)invalidateTimer;
- (id)init;
- (void)setDismissTimer:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setPageID:(long long)arg0;
- (void)setUniqueID:(id)arg0;
- (long long)pageID;
- (id)dismissTimer;
- (void)dealloc;

@end

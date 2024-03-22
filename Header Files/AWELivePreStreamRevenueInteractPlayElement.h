//
//     Generated by private class-dump
//

@class IESLiveRevenueInteractPlayBuilder, HTSLiveLinkMicBattle, IESLiveRevenueInteractPlayStateManager, IESLiveRevenueInteractPlayInstance, IESLiveLinkMicListResponse, NSString;
@protocol IESLiveRevenueInteractModulePKInterface, IESLiveRevenueInteractModuleMultiLinkInterface;

@interface AWELivePreStreamRevenueInteractPlayElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber, IESLiveRevenueInteractInnerAction, IESLiveRevenueInteractPlayStateAction, AWELiveRevenueSharePreStreamProtocol, IESLiveRevenueInteractModule> {
    BOOL _hasInstance;
    IESLiveRevenueInteractPlayBuilder *_builder;
    IESLiveRevenueInteractPlayInstance *_instance;
    IESLiveRevenueInteractPlayStateManager *_stateManager;
    unsigned long long _currentScene;
    HTSLiveLinkMicBattle *_cachedBattleMessage;
    IESLiveLinkMicListResponse *_cachedListResult;
    unsigned long long _scene;
    id<IESLiveRevenueInteractModulePKInterface> _subPKInterface;
    id<IESLiveRevenueInteractModuleMultiLinkInterface> _subMultiLinkerInterface;
}

@property (retain, nonatomic) IESLiveRevenueInteractPlayBuilder *builder;
@property (retain, nonatomic) IESLiveRevenueInteractPlayInstance *instance;
@property (nonatomic) BOOL hasInstance;
@property (retain, nonatomic) IESLiveRevenueInteractPlayStateManager *stateManager;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) HTSLiveLinkMicBattle *cachedBattleMessage;
@property (retain, nonatomic) IESLiveLinkMicListResponse *cachedListResult;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLiveRevenueInteractModulePKInterface> subPKInterface;
@property (weak, nonatomic) id<IESLiveRevenueInteractModuleMultiLinkInterface> subMultiLinkerInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentScene:(unsigned long long)arg0;
- (void)componentBindService;
- (void)receiveChannelMessage:(id)arg0;
- (unsigned long long)currentInteractiveScene;
- (id)linkedUsers;
- (id)linkerUserWithUserID:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamRect;
- (BOOL)enableSendGiftToOthers;
- (void)onUserEnterLiveRoom:(id)arg0;
- (void)onMessageReceivce:(id)arg0 withDict:(id)arg1;
- (void)onUserQuitLiveRoom;
- (BOOL)isInRevenueInteractScene;
- (id)connectionTypeForTrack;
- (id)roomStatusForTrack;
- (BOOL)isTransformingScene;
- (void)showFeedbackViewFromSource:(long long)arg0;
- (void)trackWithEvent:(id)arg0 extra:(id)arg1;
- (void)sendEffectRenderInfo;
- (BOOL)isInPlaying;
- (unsigned long long)anchorListCount;
- (id)coreTrackParams;
- (id)currentBusinessInfo;
- (id)smallGiftViews;
- (id)anchorViewFrames;
- (id)uidToRenderKeys;
- (unsigned long long)currentRoleType;
- (id)pkInterface;
- (id)multiLinkInterface;
- (void)showExplainCard:(BOOL)arg0 preferredHeight:(double)arg1 completeBlock:(id /* block */)arg2;
- (void)notifyExplainCardHeightChanged:(double)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (void)setupLiveRoomModel:(id)arg0 preStreamContainer:(id)arg1;
- (void)videoAudioStreamPlayer_startToPlay;
- (void)videoAudioStreamPlayer_pause;
- (void)didFetchEnterRoomListResult:(id)arg0;
- (void)didReadyToPlay:(unsigned long long)arg0;
- (void)didReceivedLinkedUserLeaved:(id)arg0;
- (void)onInteractionEnd:(unsigned long long)arg0;
- (void)didChangeStateFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (void)destroyInstance;
- (BOOL)hasInstance;
- (void)setHasInstance:(BOOL)arg0;
- (BOOL)needCacheData;
- (void)setCachedBattleMessage:(id)arg0;
- (void)loadInstanceWithData:(id)arg0;
- (id)cachedBattleMessage;
- (id)cachedListResult;
- (void)setCachedListResult:(id)arg0;
- (id)subMultiLinkerInterface;
- (id)subPKInterface;
- (id)baseTrackParam;
- (void)setSubPKInterface:(id)arg0;
- (void)setSubMultiLinkerInterface:(id)arg0;
- (id)connectionType;
- (void)configure;
- (void)setScene:(unsigned long long)arg0;
- (id)provider;
- (void).cxx_destruct;
- (id)builder;
- (void)setData:(id)arg0;
- (id)instance;
- (unsigned long long)currentScene;
- (void)handleMessage:(id)arg0;
- (void)prepareForReuse;
- (id)stateManager;
- (void)reset;
- (void)setInstance:(id)arg0;
- (unsigned long long)scene;
- (id)anchorCount;
- (void)setBuilder:(id)arg0;
- (void)setStateManager:(id)arg0;
- (void)clean;

@end
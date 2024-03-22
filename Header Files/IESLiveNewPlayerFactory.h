//
//     Generated by private class-dump
//

@protocol IESLiveEnvironment, IESLiveTracker, IESLiveRoomService, IESLiveMonitor;

@interface IESLiveNewPlayerFactory : NSObject {
    BOOL _isInLiveRoom;
    id<IESLiveMonitor> _monitor;
    id<IESLiveRoomService> _roomService;
    id<IESLiveTracker> _tracker;
    id<IESLiveEnvironment> _environment;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic) BOOL isInLiveRoom;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (weak, nonatomic) id<IESLiveEnvironment> environment;

- (void)setRoomService:(id)arg0;
- (id)roomService;
- (id)dequeuePlayerWithStreamModel:(id)arg0;
- (void)enqueueIESLivePlayerWithPlayer:(id)arg0;
- (void)enqueuePlayerIntoPool:(id)arg0 callTrace:(id)arg1 resetBlock:(id /* block */)arg2;
- (id)trackerConfigWithStreamModel:(id)arg0 fromSmallWindow:(BOOL)arg1;
- (id)dequeuePlayerFromPoolWithStreamModel:(id)arg0 callTrace:(id)arg1 diContext:(id)arg2 preferenceOptions:(id)arg3;
- (id)playerWithTrackerConfig:(id)arg0;
- (BOOL)isInLiveRoom;
- (void)addSEIListener:(id)arg0;
- (void)setupPlayer:(id)arg0;
- (void)setIsInLiveRoom:(BOOL)arg0;
- (id)playerWithStreamModel:(id)arg0;
- (void)replenishPlayerIntoPoolWithCount:(long long)arg0 callTrace:(id)arg1;
- (id)trackerConfigWithStreamModel:(id)arg0;
- (id)liveAppBizInfo;
- (id)configIESLivePlayerForReuse:(id)arg0;
- (void)bindAttachmentDIContext:(id)arg0 targetPlayer:(id)arg1;
- (void)provideBasicPropertyForTrackerConfig:(id)arg0;
- (void)setupPlayerWithoutDI:(id)arg0;
- (void)traceEvent:(id)arg0 param:(id)arg1;
- (id)updateTVLCommonParams;
- (void)configBlockOnPlayer:(id)arg0;
- (id)baseTrackerConfig;
- (id)trackerProjectKeyWithRoomScene:(long long)arg0;
- (BOOL)isVideoStallEvent:(id)arg0;
- (id)trackContextFromRoomService:(id)arg0;
- (id)dequeuePlayerWithStreamModel:(id)arg0 fromSmallWindow:(BOOL)arg1;
- (id)dequeuePlayerWithStreamModel:(id)arg0 fromSmallWindow:(BOOL)arg1 preferenceOptions:(id)arg2 callTrace:(id)arg3;
- (void)showDebugPlayerGenerateInfo:(id)arg0 apiName:(id)arg1 info:(id)arg2;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setEnvironment:(id)arg0;
- (void)setMonitor:(id)arg0;
- (id)environment;
- (id)player;

@end

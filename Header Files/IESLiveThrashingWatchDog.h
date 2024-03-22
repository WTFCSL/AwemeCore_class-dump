//
//     Generated by private class-dump
//

@class IESLiveNetworkSampling, NSString, IESLiveMemoryReplacement, NSDictionary, IESLivePowerDissipation;
@protocol IESLiveStabilityThrashing;

@interface IESLiveThrashingWatchDog : NSObject <IESLiveMetricsService, HMDAPPExitReasonDetectorProtocol, IESLiveDispatchService> {
    BOOL _isAnchor;
    BOOL _isInjected;
    BOOL _isMonitoring;
    NSString *_roomid;
    NSString *_roomtype;
    NSString *_roomscence;
    NSString *_ownerUserID;
    IESLiveMemoryReplacement *_replacement;
    IESLiveNetworkSampling *_netThrashing;
    id<IESLiveStabilityThrashing> _liveMemoryThrashing;
    id<IESLiveStabilityThrashing> _liveThreadThrashing;
    id<IESLiveStabilityThrashing> _liveMemoryIncrease;
    IESLivePowerDissipation *_powerDissipation;
    NSDictionary *_liveMetrics;
    NSDictionary *_liveHotTag;
    double _startTimeInterval;
    double _startNSTimeInterval;
    long long _restartMemory;
    long long _firstStartMemory;
    long long _audience;
    long long _maxaudience;
}

@property (retain, nonatomic) IESLiveMemoryReplacement *replacement;
@property (retain, nonatomic) IESLiveNetworkSampling *netThrashing;
@property (retain, nonatomic) id<IESLiveStabilityThrashing> liveMemoryThrashing;
@property (retain, nonatomic) id<IESLiveStabilityThrashing> liveThreadThrashing;
@property (retain, nonatomic) id<IESLiveStabilityThrashing> liveMemoryIncrease;
@property (retain, nonatomic) IESLivePowerDissipation *powerDissipation;
@property (retain, nonatomic) NSDictionary *liveMetrics;
@property (retain) NSDictionary *liveHotTag;
@property (nonatomic) BOOL isInjected;
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) double startNSTimeInterval;
@property (nonatomic) long long restartMemory;
@property (nonatomic) long long firstStartMemory;
@property long long audience;
@property long long maxaudience;
@property BOOL isAnchor;
@property (copy) NSString *roomid;
@property (copy) NSString *roomtype;
@property (copy) NSString *roomscence;
@property (copy) NSString *ownerUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setIsAnchor:(BOOL)arg0;
- (id)roomid;
- (void)setRoomid:(id)arg0;
- (void)didDetectExitReason:(int)arg0 desc:(id)arg1 info:(id)arg2;
- (void)startLive;
- (void)setRoomscence:(id)arg0;
- (void)turnoff;
- (void)slideOutRoom;
- (void)triggerMemoryWarning;
- (void)setRoomtype:(id)arg0;
- (void)turnon;
- (void)refreshRoomAudienceCount:(long long)arg0;
- (long long)roomAudienceCount;
- (id)stabilitytBaseMetrics;
- (void)refreshRoomInfoWithTag:(id)arg0;
- (void)networkMonitoring;
- (void)stopNetworkMonitoring;
- (id)roomtype;
- (void)setIsInjected:(BOOL)arg0;
- (void)setMaxaudience:(long long)arg0;
- (void)setFirstStartMemory:(long long)arg0;
- (void)setRestartMemory:(long long)arg0;
- (void)setLiveMetrics:(id)arg0;
- (id)liveMetrics;
- (id)roomBaseMetrics;
- (void)installUserException;
- (long long)enablePerMonitoring:(long long)arg0;
- (id)mapExceptionExit:(int)arg0;
- (void)memoryMonitoring;
- (void)threadMonitoring;
- (void)startPowerDissipation;
- (void)bindAnalyser;
- (void)audienceMetrics;
- (void)stopPowerDissipation;
- (void)stopMemoryMonitoring;
- (void)stopThreadMonitoring;
- (void)unBindAnalyser;
- (id)powerDissipation;
- (void)resetBaseMetrics;
- (id)mapMemoryStrategy;
- (long long)maxaudience;
- (id)roomscence;
- (id)liveHotTag;
- (id)constructAnchorMetrics;
- (long long)firstStartMemory;
- (long long)restartMemory;
- (void)setLiveHotTag:(id)arg0;
- (void)storeAnchorInformation;
- (double)startNSTimeInterval;
- (void)setStartNSTimeInterval:(double)arg0;
- (void)recordLiveMetrics;
- (void)setLiveMemoryIncrease:(id)arg0;
- (id)liveMemoryIncrease;
- (void)cleanLocalInformation;
- (void)beginTracking;
- (id)liveMemoryThrashing;
- (void)memoryMonitorIMP;
- (void)setLiveMemoryThrashing:(id)arg0;
- (void)closeLive;
- (void)threadMonitorIMP;
- (id)liveThreadThrashing;
- (void)setLiveThreadThrashing:(id)arg0;
- (void)networkMonitorIMP;
- (id)netThrashing;
- (void)setNetThrashing:(id)arg0;
- (BOOL)isInjected;
- (void)injectReplacement;
- (void)removeiInjectReplacement;
- (void)setPowerDissipation:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isMonitoring;
- (BOOL)isAnchor;
- (void)dealloc;
- (id)replacement;
- (int)delaySeconds;
- (void)setReplacement:(id)arg0;
- (void)setIsMonitoring:(BOOL)arg0;
- (void)setOwnerUserID:(id)arg0;
- (id)ownerUserID;
- (void)endTracking;
- (double)startTimeInterval;
- (void)setStartTimeInterval:(double)arg0;
- (long long)audience;
- (void)setAudience:(long long)arg0;

@end

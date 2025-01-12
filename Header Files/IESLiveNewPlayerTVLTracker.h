//
//     Generated by private class-dump
//

@class IESLivePlayerTrackerConfig, NSString, NSDictionary, IESLivePlayerController, IESLivePlayerTrafficStatisticMonitor;

@interface IESLiveNewPlayerTVLTracker : NSObject <IESLivePlayerTrafficStatisticMonitorDelegate> {
    IESLivePlayerController *_player;
    IESLivePlayerTrackerConfig *_config;
    NSDictionary *_liveAppBizInfo;
    id /* block */ _trackBlock;
    id /* block */ _reportStateBlock;
    NSDictionary *_latencyEvent;
    unsigned long long _startRoomMemory;
    NSString *_vendorType;
    IESLivePlayerTrafficStatisticMonitor *_trafficMonitor;
}

@property (copy, nonatomic) id /* block */ reportStateBlock;
@property (copy, nonatomic) NSDictionary *latencyEvent;
@property (nonatomic) unsigned long long startRoomMemory;
@property (copy, nonatomic) NSString *vendorType;
@property (retain, nonatomic) IESLivePlayerTrafficStatisticMonitor *trafficMonitor;
@property (weak, nonatomic) IESLivePlayerController *player;
@property (retain, nonatomic) IESLivePlayerTrackerConfig *config;
@property (retain, nonatomic) NSDictionary *liveAppBizInfo;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPlay:(id)arg0;
- (void)trackLatency:(double)arg0 vendor:(id)arg1 sourcePlatform:(id)arg2;
- (id /* block */)reportStateBlock;
- (void)setReportStateBlock:(id /* block */)arg0;
- (id /* block */)trackBlock;
- (void)setTrackBlock:(id /* block */)arg0;
- (id)commonValuesHavePerformances:(BOOL)arg0;
- (void)playing:(id)arg0;
- (void)playStop:(id)arg0;
- (void)beforeReport:(id)arg0;
- (id)preProcessedMonitorInfo:(id)arg0;
- (id)liveAppBizInfo;
- (void)setLatencyEvent:(id)arg0;
- (id)vendorType;
- (id)trafficMonitor;
- (id)latencyEvent;
- (unsigned long long)startRoomMemory;
- (void)handleTVLManagerReportEvent:(id)arg0;
- (id)onTVLManagerReportWithEventParam:(id)arg0;
- (void)trafficStatisticTrackEvent:(id)arg0;
- (id)trafficStatisticPlayerInfo;
- (id)initWithTrackerConfig:(id)arg0 reportStateBlock:(id /* block */)arg1;
- (void)resetConfig:(id)arg0 reportStateBlock:(id /* block */)arg1;
- (id)stableTrafficNetInfo;
- (void)setLiveAppBizInfo:(id)arg0;
- (void)setStartRoomMemory:(unsigned long long)arg0;
- (void)setVendorType:(id)arg0;
- (void)setTrafficMonitor:(id)arg0;
- (id)carrierName;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setPlayer:(id)arg0;
- (id)player;
- (void)resetConfig:(id)arg0;

@end

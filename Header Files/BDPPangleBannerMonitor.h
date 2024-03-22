//
//     Generated by private class-dump
//

@interface BDPPangleBannerMonitor : NSObject {
    BOOL _hitRitIdCache;
    double _startTime;
    double _initTime;
    double _ritIdRequestTime;
    double _requestAdTime;
    double _renderAdTime;
    double _totalTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) double initTime;
@property (nonatomic) double ritIdRequestTime;
@property (nonatomic) double requestAdTime;
@property (nonatomic) double renderAdTime;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hitRitIdCache;

- (void)setHitRitIdCache:(BOOL)arg0;
- (void)setRitIdRequestTime:(double)arg0;
- (void)setRequestAdTime:(double)arg0;
- (void)setRenderAdTime:(double)arg0;
- (id)getPangleBannerTimelineMonitorParams;
- (double)ritIdRequestTime;
- (double)requestAdTime;
- (double)renderAdTime;
- (BOOL)hitRitIdCache;
- (void)setInitTime:(double)arg0;
- (double)totalTime;
- (void)setStartTime:(double)arg0;
- (double)startTime;
- (void)setTotalTime:(double)arg0;
- (double)initTime;

@end
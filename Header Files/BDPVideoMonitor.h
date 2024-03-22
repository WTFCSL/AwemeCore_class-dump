//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface BDPVideoMonitor : NSObject {
    BOOL _hasPoster;
    BOOL _isAutoPlay;
    BOOL _hasReportTimelineEvent;
    BOOL _posetResult;
    double _initialTime;
    double _srcUpdateTime;
    double _posterShowTime;
    double _displayTime;
    NSDictionary *_errParams;
    NSString *_routeID;
    double _firstPlayTime;
}

@property (nonatomic) double initialTime;
@property (nonatomic) double srcUpdateTime;
@property (nonatomic) BOOL hasPoster;
@property (nonatomic) double posterShowTime;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) double displayTime;
@property (retain, nonatomic) NSDictionary *errParams;
@property (nonatomic) BOOL hasReportTimelineEvent;
@property (copy, nonatomic) NSString *routeID;
@property (nonatomic) BOOL posetResult;
@property (nonatomic) double firstPlayTime;

- (BOOL)hasPoster;
- (void)setFirstPlayTime:(double)arg0;
- (double)firstPlayTime;
- (BOOL)posetResult;
- (double)posterShowTime;
- (void)setErrParams:(id)arg0;
- (void)setHasPoster:(BOOL)arg0;
- (void)setPosterShowTime:(double)arg0;
- (void)setPosetResult:(BOOL)arg0;
- (void)setSrcUpdateTime:(double)arg0;
- (BOOL)hasReportTimelineEvent;
- (double)srcUpdateTime;
- (void)setHasReportTimelineEvent:(BOOL)arg0;
- (id)getVideoTimelineMonitorparams;
- (id)errParams;
- (id)routeID;
- (void).cxx_destruct;
- (void)setInitialTime:(double)arg0;
- (double)initialTime;
- (void)setRouteID:(id)arg0;
- (void)setIsAutoPlay:(BOOL)arg0;
- (BOOL)isAutoPlay;
- (double)displayTime;
- (void)setDisplayTime:(double)arg0;

@end
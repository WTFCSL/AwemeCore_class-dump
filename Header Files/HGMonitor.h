//
//     Generated by private class-dump
//

@class NSString, NSTimer, NSMutableArray, HGUniqueID;
@protocol HGBusinessMonitorProtocol;

@interface HGMonitor : NSObject <HGMonitorProtocol> {
    BOOL _isActive;
    BOOL _hasInitialReport;
    HGUniqueID *_uniqueID;
    id<HGBusinessMonitorProtocol> _businessMonitor;
    long long _type;
    NSTimer *_timer;
    double _timerInterval;
    double _firstFireDelay;
    NSMutableArray *_recievedDatas;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double timerInterval;
@property (nonatomic) double firstFireDelay;
@property (retain, nonatomic) NSMutableArray *recievedDatas;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) id<HGBusinessMonitorProtocol> businessMonitor;
@property (nonatomic) BOOL hasInitialReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timerInterval;
- (void)_resetTimer:(double)arg0 firstFireDelay:(double)arg1;
- (id)recievedDatas;
- (double)intervalOfReport;
- (double)firstFireDelayOfReport;
- (double)firstFireDelay;
- (void)setFirstFireDelay:(double)arg0;
- (void)setRecievedDatas:(id)arg0;
- (double)getDefaultIntervalOfReport;
- (double)getDefaultFirstFireDelayOfReport;
- (void)resetIntervalOfReport:(double)arg0 firstFireDelay:(double)arg1;
- (void)recieveMonitorData:(id)arg0;
- (BOOL)hasInitialReport;
- (void)setHasInitialReport:(BOOL)arg0;
- (void)reportData;
- (void)setBusinessMonitor:(id)arg0;
- (id)businessMonitor;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)stop;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setTimer:(id)arg0;
- (BOOL)isActive;
- (void)start;
- (void)dealloc;
- (void)setTimerInterval:(double)arg0;

@end
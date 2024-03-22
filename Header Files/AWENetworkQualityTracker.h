//
//     Generated by private class-dump
//

@class NSString, AWENetworkQuailityManager;

@interface AWENetworkQualityTracker : NSObject <AWENetworkQuailityDelegate> {
    AWENetworkQuailityManager *_manager;
    double _latestCallBackAt;
    double _latestWeekNetworkAt;
    double _latestCriticalWeekNetworkAt;
    unsigned long long _neqStatus;
}

@property (retain, nonatomic) AWENetworkQuailityManager *manager;
@property (nonatomic) double latestCallBackAt;
@property (nonatomic) double latestWeekNetworkAt;
@property (nonatomic) double latestCriticalWeekNetworkAt;
@property (nonatomic) unsigned long long neqStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkQualityManger:(id)arg0 didChangeQuailty:(id)arg1;
- (void)setLatestCallBackAt:(double)arg0;
- (unsigned long long)statusForModel:(id)arg0;
- (unsigned long long)neqStatus;
- (void)setLatestWeekNetworkAt:(double)arg0;
- (void)setLatestCriticalWeekNetworkAt:(double)arg0;
- (void)setNeqStatus:(unsigned long long)arg0;
- (double)latestWeekNetworkAt;
- (void)p_trackNetworkChangeWithParams:(id)arg0;
- (double)latestCriticalWeekNetworkAt;
- (double)latestCallBackAt;
- (id)init;
- (void).cxx_destruct;
- (void)started;
- (void)setManager:(id)arg0;
- (void)dealloc;
- (id)manager;
- (void)ended;

@end

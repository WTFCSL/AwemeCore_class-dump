//
//     Generated by private class-dump
//

@class AWEPerfSession, NSString, NSDictionary, AWEPerfFPSScene, AWEPerfFPSRecord, AWEPerfFPSSubsceneKey, NSMutableDictionary;
@protocol AWEPerfVCMonitorInfo;

@interface AWEPerfFPSMetric : NSObject <AWEPerfMetric> {
    BOOL _enabled;
    AWEPerfSession *_session;
    double _autosplitInterval;
    double _minimumDuration;
    AWEPerfFPSScene *_scene;
    AWEPerfFPSRecord *_subsceneRecord;
    AWEPerfFPSSubsceneKey *_currentSubsceneKey;
    NSMutableDictionary *_subsceneAggregationRecords;
    id<AWEPerfVCMonitorInfo> _vcMonitorInfo;
}

@property (class, readonly, nonatomic) NSString *kind;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *subsceneName;
@property (copy, nonatomic) NSDictionary *subsceneExtra;
@property (nonatomic) double autosplitInterval;
@property (nonatomic) double minimumDuration;
@property (nonatomic) AWEPerfSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metric;
+ (id)kind;
+ (BOOL)isEnabled;

- (void)setSubsceneExtra:(id)arg0 forKey:(id)arg1;
- (void)setSubsceneName:(id)arg0 extra:(id)arg1;
- (void)updateSubsceneExtra:(id)arg0;
- (void)endRecording;
- (void)onVCEvent:(unsigned long long)arg0;
- (void)aggregateCurrentSubscene;
- (void)pauseSubsceneRecording;
- (void)beginSubsceneRecordingWithKey:(id)arg0;
- (double)autosplitInterval;
- (void)endSubsceneReporting;
- (void)cancelSubsceneReporting;
- (void)logSubsceneRecords;
- (id)subsceneName;
- (void)setSubsceneName:(id)arg0;
- (void)setSubsceneExtra:(id)arg0;
- (id)subsceneExtra;
- (void)setAutosplitInterval:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (BOOL)isEnabled;
- (BOOL)isActive;
- (double)minimumDuration;
- (void)setEnabled:(BOOL)arg0;
- (void)setMinimumDuration:(double)arg0;
- (void)pauseRecording;
- (void)cancelRecording;
- (void)beginRecording;

@end

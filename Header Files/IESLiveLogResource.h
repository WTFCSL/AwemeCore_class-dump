//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, IESLiveEventSummary, NSString;

@interface IESLiveLogResource : NSObject <IESLiveLoggerAnalyseService, IESLiveMetricsPeriodService> {
    NSMutableDictionary *_eventTraker;
    IESLiveEventSummary *_eventSummary;
    NSDictionary *_baseMetrics;
    NSDictionary *_logMetrics;
    NSString *_maxFrequencyEvent;
    unsigned long long _maxFrequency;
}

@property (retain, nonatomic) NSMutableDictionary *eventTraker;
@property (retain, nonatomic) IESLiveEventSummary *eventSummary;
@property (retain, nonatomic) NSDictionary *baseMetrics;
@property (retain, nonatomic) NSDictionary *logMetrics;
@property (retain, nonatomic) NSString *maxFrequencyEvent;
@property (nonatomic) unsigned long long maxFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setMaxFrequency:(unsigned long long)arg0;
- (void)refreshPeriodMetrics;
- (void)unBind;
- (void)setEventTraker:(id)arg0;
- (void)setEventSummary:(id)arg0;
- (void)setMaxFrequencyEvent:(id)arg0;
- (void)setLogMetrics:(id)arg0;
- (id)eventTraker;
- (id)eventSummary;
- (BOOL)analysable;
- (void)analyseLogWithEvent:(id)arg0 fileName:(id)arg1 content:(id)arg2 length:(unsigned long long)arg3;
- (void)setBaseMetrics:(id)arg0;
- (BOOL)executeAnalyser;
- (void)cleanAnalyserCache;
- (id)baseMetrics;
- (id)maxFrequencyEvent;
- (id)init;
- (unsigned long long)maxFrequency;
- (void)bind;
- (id)logMetrics;

@end

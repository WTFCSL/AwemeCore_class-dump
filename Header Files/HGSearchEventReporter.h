//
//     Generated by private class-dump
//

@class NSString, NSDictionary, HGTrackerTimingEvent;

@interface HGSearchEventReporter : NSObject {
    BOOL _isApp;
    NSString *_launchFrom;
    NSDictionary *_commonParams;
    unsigned long long _startType;
    unsigned long long _loadTime;
    HGTrackerTimingEvent *_timingEvent;
}

+ (id)reporterWithCommonParams:(id)arg0 launchFrom:(id)arg1 isApp:(BOOL)arg2;

- (id)initWithCommonParams:(id)arg0 launchFrom:(id)arg1 isApp:(BOOL)arg2;
- (void)eventLoadDetail:(unsigned long long)arg0;
- (void)evnetWarmBootLoadDetail;
- (void)eventStayPage;
- (void).cxx_destruct;

@end

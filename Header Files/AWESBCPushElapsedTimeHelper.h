//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWESBCPushElapsedTimeHelper : NSObject {
    BOOL _isEnableTraceElapsedTime;
    NSMutableDictionary *_monitorDict;
}

@property (retain, nonatomic) NSMutableDictionary *monitorDict;
@property (nonatomic) BOOL isEnableTraceElapsedTime;

+ (id)sharedInstance;

- (id)monitorDict;
- (void)setMonitorDict:(id)arg0;
- (void)recordSBCPushElapsedTimeWithBusinessType:(id)arg0 scene:(id)arg1;
- (void)trackSBCPushElapsedTimeWithBusinessType:(id)arg0;
- (void)createMonitorIntoDictWithBusinessType:(id)arg0;
- (BOOL)isEnableTraceElapsedTime;
- (BOOL)enableTraceShowingInnerPushElapsedTime;
- (id)getMonitorWithBusinessType:(id)arg0;
- (void)removeMonitorWithBusinessType:(id)arg0;
- (void)setIsEnableTraceElapsedTime:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
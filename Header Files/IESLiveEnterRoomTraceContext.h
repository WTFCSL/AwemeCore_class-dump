//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary;
@protocol HTSKVStore;

@interface IESLiveEnterRoomTraceContext : NSObject {
    NSMutableDictionary *_monitor;
    NSDictionary *_basicEvent;
    NSMutableDictionary *_detailInfos;
    id<HTSKVStore> _trackKVStore;
}

@property (retain, nonatomic) NSMutableDictionary *monitor;
@property (retain, nonatomic) NSDictionary *basicEvent;
@property (retain, nonatomic) NSMutableDictionary *detailInfos;
@property (retain, nonatomic) id<HTSKVStore> trackKVStore;

- (void)startSpan:(unsigned long long)arg0;
- (void)addExtraParams:(id)arg0;
- (void)resetSpan:(unsigned long long)arg0;
- (void)startEnterTrace;
- (void)endSpan:(unsigned long long)arg0 failErrorModel:(id)arg1;
- (void)endSpan:(unsigned long long)arg0;
- (void)setRoomAttribute:(unsigned long long)arg0 withValue:(id)arg1;
- (void)addEventParams:(id)arg0;
- (void)uploadFailEnterRoomEvent:(id)arg0;
- (id)detailInfos;
- (void)setDetailInfos:(id)arg0;
- (long long)getStayDuration;
- (void)traceExitRoomWithType:(unsigned long long)arg0 params:(id)arg1;
- (void)cleanTraceRoomInfoCheck:(id)arg0;
- (void)addEventContextParams:(id)arg0;
- (void)endEnterTrace;
- (void)calculationEnterRoomWithEndType:(unsigned long long)arg0;
- (void)endSpan:(unsigned long long)arg0 atTime:(double)arg1;
- (void)uploadEnterRoomEvent;
- (void)uploadLastTraceRoomInfoIfNeeded;
- (void)recordTraceRoomInfo;
- (void)endSpan:(unsigned long long)arg0 errorCode:(unsigned long long)arg1;
- (id)getFailDescWithErrorCode:(unsigned long long)arg0;
- (void)resetRoomTrace;
- (id)getEnterStage:(long long)arg0;
- (void)startSpan:(unsigned long long)arg0 atTime:(double)arg1;
- (void)calculationApiDurationIfNeed:(unsigned long long)arg0;
- (void)traceEnterProcessIfNeed:(unsigned long long)arg0;
- (id)getEnterAttribute:(unsigned long long)arg0;
- (void)updateSuccessJoinRoom;
- (void)addTrackComponentLoadWithDuration:(id)arg0 scrollDuration:(double)arg1;
- (void)addFullLinkParams;
- (void)uploadMonitorEvent:(id)arg0;
- (id)getFilterEnterRoomTags;
- (id)getFilterEnterRoomFailTags;
- (void)uploadFailEnterRoom:(id)arg0 lastRecord:(BOOL)arg1;
- (id)getFilterTags;
- (void)setBasicEvent:(id)arg0;
- (void)setDefaultCategory;
- (void)_traceExitRoomWithType:(unsigned long long)arg0 params:(id)arg1 lastRecord:(BOOL)arg2;
- (id)exitActionStrWithType:(unsigned long long)arg0;
- (id)trackKVStore;
- (id)failApiString:(unsigned long long)arg0;
- (void)addMappedPlayerContext:(id)arg0;
- (id)basicEvent;
- (void)setTrackKVStore:(id)arg0;
- (void)merge:(id)arg0;
- (id)init;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (id)monitor;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setMonitor:(id)arg0;

@end
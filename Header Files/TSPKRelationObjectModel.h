//
//     Generated by private class-dump
//

@class NSMutableArray, TSPKEventData;

@interface TSPKRelationObjectModel : NSObject {
    unsigned long long _objectStatus;
    double _updateTimeStamp;
    double _reportTimeStamp;
    NSMutableArray *_apiEvents;
    TSPKEventData *_latestActiveEvent;
    TSPKEventData *_latestActiveStartEvent;
}

@property (retain, nonatomic) NSMutableArray *apiEvents;
@property (retain, nonatomic) TSPKEventData *latestActiveEvent;
@property (retain, nonatomic) TSPKEventData *latestActiveStartEvent;
@property (nonatomic) unsigned long long objectStatus;
@property (nonatomic) double updateTimeStamp;
@property (nonatomic) double reportTimeStamp;

- (double)updateTimeStamp;
- (void)setUpdateTimeStamp:(double)arg0;
- (BOOL)sameSinceLastReport;
- (id)checkUnreleaseStartAtTime:(double)arg0 condition:(id)arg1;
- (id)getLatestOpenEventData;
- (unsigned long long)objectStatus;
- (id)snapshotAtTime:(double)arg0 condition:(id)arg1;
- (void)removeLastStartBacktrace;
- (void)saveEventData:(id)arg0;
- (void)setReportTimeStamp:(double)arg0;
- (id)apiEvents;
- (void)setApiEvents:(id)arg0;
- (id)latestActiveEvent;
- (void)setLatestActiveEvent:(id)arg0;
- (id)latestActiveStartEvent;
- (void)setLatestActiveStartEvent:(id)arg0;
- (void)setObjectStatus:(unsigned long long)arg0;
- (double)reportTimeStamp;
- (void)saveStartData:(id)arg0;
- (void)saveStopData:(id)arg0;
- (void)saveInfoData:(id)arg0;
- (void)saveDeallocData:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
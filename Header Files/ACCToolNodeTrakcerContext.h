//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface ACCToolNodeTrakcerContext : NSObject {
    BOOL _enableTracker;
    NSMutableDictionary *_trackerLists;
    unsigned long long _recordCount;
}

@property (retain, nonatomic) NSMutableDictionary *trackerLists;
@property (nonatomic) BOOL enableTracker;
@property (nonatomic) unsigned long long recordCount;

+ (id)shareManager;

- (void)appendNodeTimeWithTrackerKey:(id)arg0 trackerName:(id)arg1;
- (void)sendTrackWithTrackName:(id)arg0 sendTrackNecessaryKeys:(id)arg1;
- (void)startRecordTimeWithTrackerName:(id)arg0;
- (void)appendExtraParamsWithInputData:(id)arg0 trackerName:(id)arg1;
- (void)appendExtraParams:(id)arg0 trackerName:(id)arg1;
- (void)appendNodeTimeWithTrackerKey:(id)arg0 trackerNameList:(id)arg1;
- (void)removeTrakcerWithTrackName:(id)arg0;
- (void)appendExtraParams:(id)arg0 trackerNameList:(id)arg1;
- (void)appendExtraParamsWithInputData:(id)arg0 trackerNameList:(id)arg1;
- (void)setEnableTracker:(BOOL)arg0;
- (BOOL)enableTracker;
- (id)createNewTrackerWithName:(id)arg0;
- (id)trackerLists;
- (id)assembyParamsWithInputData:(id)arg0;
- (void)setTrackerLists:(id)arg0;
- (void).cxx_destruct;
- (void)setRecordCount:(unsigned long long)arg0;
- (unsigned long long)recordCount;

@end
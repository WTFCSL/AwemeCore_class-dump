//
//     Generated by private class-dump
//

@class IESLiveANRRecord, HMDANRSDKMonitor, NSString, NSMutableArray;

@interface IESLiveANRMonitor : NSObject <HMDANRSDKMonitorDelegate> {
    HMDANRSDKMonitor *_anrMonitor;
    double _recordInterval;
    NSMutableArray *_anrRecords;
    IESLiveANRRecord *_summaryRecord;
}

@property (retain, nonatomic) HMDANRSDKMonitor *anrMonitor;
@property (nonatomic) double recordInterval;
@property (retain, nonatomic) NSMutableArray *anrRecords;
@property (retain, nonatomic) IESLiveANRRecord *summaryRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBlockWithDuration:(double)arg0;
- (id)anrMonitor;
- (void)setAnrMonitor:(id)arg0;
- (void)setAnrRecords:(id)arg0;
- (void)setRecordInterval:(double)arg0;
- (void)setSummaryRecord:(id)arg0;
- (id)summaryRecord;
- (id)anrRecords;
- (double)recordInterval;
- (void)updateRecordWithAnrDuration:(double)arg0;
- (id)popRecentRecord;
- (id)getSummaryRecord;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)dealloc;

@end
//
//     Generated by private class-dump
//

@class NSDictionary, HGUniqueID;

@interface HGDebugEventTracker : NSObject {
    double _startTime;
    double _connectedTime;
    double _entrustTime;
    double _readyTime;
    double _closeTime;
    NSDictionary *_ideInfo;
    HGUniqueID *_uniqueID;
}

@property (nonatomic) double startTime;
@property (nonatomic) double connectedTime;
@property (nonatomic) double entrustTime;
@property (nonatomic) double readyTime;
@property (nonatomic) double closeTime;
@property (retain, nonatomic) NSDictionary *ideInfo;
@property (retain, nonatomic) HGUniqueID *uniqueID;

+ (id)debugRuntimeStatusOperationQueue;
+ (id)shareInstance;

- (double)closeTime;
- (void)setCloseTime:(double)arg0;
- (void)setIdeInfo:(id)arg0;
- (id)debugDetailDurationWithResult:(id)arg0;
- (id)ideInfo;
- (void)setEntrustTime:(double)arg0;
- (void)setReadyTime:(double)arg0;
- (double)entrustTime;
- (void)debugEventTrackerStart:(id)arg0 debugInfo:(id)arg1;
- (void)debugEventTrackerResult:(id)arg0 debugInfo:(id)arg1 error:(id)arg2;
- (void)debugEventTrackerRetry:(id)arg0 retryCount:(long long)arg1 debugInfo:(id)arg2;
- (void)initTimeline;
- (double)readyTime;
- (double)connectedTime;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setConnectedTime:(double)arg0;
- (void)setUniqueID:(id)arg0;
- (double)startTime;

@end

//
//     Generated by private class-dump
//

@class NSString, NSArray, SAMIVCPerfomanceData, NSError, NSNumber;

@interface SAMIVCMultiTaskResult : NSObject {
    BOOL _canceled;
    NSNumber *_taskID;
    NSString *_speakerID;
    NSArray *_multiResults;
    long long _errCode;
    NSString *_errMsg;
    NSString *_requestTaskID;
    unsigned long long _errPhase;
    SAMIVCPerfomanceData *_performanceData;
}

@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *speakerID;
@property (copy, nonatomic) NSArray *multiResults;
@property (nonatomic) BOOL canceled;
@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *requestTaskID;
@property (nonatomic) unsigned long long errPhase;
@property (retain, nonatomic) SAMIVCPerfomanceData *performanceData;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (long long)errCode;
- (id)errMsg;
- (void)setErrCode:(long long)arg0;
- (void)setErrMsg:(id)arg0;
- (id)requestTaskID;
- (void)setRequestTaskID:(id)arg0;
- (id)speakerID;
- (void)setSpeakerID:(id)arg0;
- (unsigned long long)errPhase;
- (void)setErrPhase:(unsigned long long)arg0;
- (void).cxx_destruct;
- (BOOL)canceled;
- (BOOL)success;
- (id)taskID;
- (id)multiResults;
- (void)setTaskID:(id)arg0;
- (void)setCanceled:(BOOL)arg0;
- (void)setMultiResults:(id)arg0;
- (id)error;
- (id)performanceData;
- (void)setPerformanceData:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString, SAMIVCPerfomanceData, AVURLAsset, NSURL, NSNumber, NSError;

@interface SAMIVCSingleTaskResult : NSObject {
    NSNumber *_taskID;
    NSString *_speakerID;
    AVURLAsset *_originAsset;
    NSURL *_vcAsset;
    long long _errCode;
    NSString *_errMsg;
    NSString *_requestTaskID;
    unsigned long long _errPhase;
    SAMIVCPerfomanceData *_performanceData;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *speakerID;
@property (retain, nonatomic) AVURLAsset *originAsset;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSURL *vcAsset;
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
- (id)originAsset;
- (id)vcAsset;
- (id)speakerID;
- (void)setSpeakerID:(id)arg0;
- (void)setOriginAsset:(id)arg0;
- (void)setVcAsset:(id)arg0;
- (unsigned long long)errPhase;
- (void)setErrPhase:(unsigned long long)arg0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)success;
- (id)taskID;
- (void)setTaskID:(id)arg0;
- (id)error;
- (id)performanceData;
- (void)setPerformanceData:(id)arg0;

@end

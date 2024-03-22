//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;

@interface ACCBatchMergeTask : ACCImportBaseTask <AWEPublishTaskContextProtocol> {
    BOOL republish;
    BOOL supportsRetry;
    BOOL networkReachable;
    double progress;
    long long currentStage;
    long long type;
    unsigned long long entryType;
    long long status;
    double publishStartTime;
    long long resumeCount;
    unsigned long long flowType;
    AWEVideoPublishViewModel *publishViewModel;
}

@property (readonly, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long entryType;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long currentStage;
@property (readonly, nonatomic, getter=isRepublish) BOOL republish;
@property (readonly, nonatomic) double publishStartTime;
@property (readonly) long long resumeCount;
@property (readonly) BOOL networkReachable;
@property (readonly, nonatomic) BOOL supportsRetry;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) unsigned long long flowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (double)publishStartTime;
- (BOOL)supportsRetry;
- (void)runStage:(id)arg0;
- (BOOL)isRepublish;
- (unsigned long long)entryType;
- (void).cxx_destruct;
- (long long)status;
- (long long)type;
- (long long)resumeCount;
- (unsigned long long)flowType;
- (double)progress;
- (BOOL)networkReachable;
- (long long)currentStage;

@end
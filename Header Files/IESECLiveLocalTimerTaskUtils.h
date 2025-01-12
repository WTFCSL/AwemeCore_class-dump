//
//     Generated by private class-dump
//

@class IESECGCDTimer, IESECLiveApi, IESECLiveContext;
@protocol IESECLiveLocalTimerRefreshDelegate;

@interface IESECLiveLocalTimerTaskUtils : NSObject {
    id<IESECLiveLocalTimerRefreshDelegate> _delegate;
    long long _totalTime;
    long long _intervalStopTime;
    long long _taskRecordTime;
    long long _taskStatus;
    IESECGCDTimer *_timer;
    IESECLiveApi *_api;
    IESECLiveContext *_liveContext;
}

@property (nonatomic) long long totalTime;
@property (nonatomic) long long intervalStopTime;
@property (nonatomic) long long taskRecordTime;
@property (nonatomic) long long taskStatus;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveLocalTimerRefreshDelegate> delegate;

- (void)setTaskStatus:(long long)arg0;
- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)initWithLiveContext:(id)arg0;
- (void)updateTaskInfoWithDictionary:(id)arg0;
- (long long)getTaskStatus;
- (BOOL)checkLocalTaskInfo;
- (BOOL)checkTimerExist;
- (long long)getRemainTime;
- (void)setupTimerWithInterval;
- (id)getLocalTaskInfo;
- (void)setIntervalStopTime:(long long)arg0;
- (void)setTaskRecordTime:(long long)arg0;
- (long long)taskRecordTime;
- (void)taskCompletedReportWithTaskInfo:(id)arg0;
- (long long)intervalStopTime;
- (void)saveToLocalWithTaskInfo:(id)arg0;
- (id)taskInfoKey;
- (long long)getTotalTime;
- (id)timer;
- (void)updateTimer;
- (long long)totalTime;
- (void).cxx_destruct;
- (void)stopTimer;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setTotalTime:(long long)arg0;
- (id)api;
- (long long)taskStatus;
- (void)setApi:(id)arg0;

@end

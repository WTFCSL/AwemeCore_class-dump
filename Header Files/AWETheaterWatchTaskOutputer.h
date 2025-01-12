//
//     Generated by private class-dump
//

@class NSString;

@interface AWETheaterWatchTaskOutputer : NSObject <AWETheaterWatchTaskOutputerProtocol> {
    BOOL _inVideoHallScene;
    BOOL _finished;
    NSString *_enterFrom;
    NSString *_previousPage;
    NSString *_module;
    NSString *_videoHallPreviousPage;
    long long _videoHallPageType;
    NSString *_status;
    NSString *_taskId;
}

@property (class, retain, nonatomic) NSString *activityId;

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL inVideoHallScene;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *videoHallPreviousPage;
@property (nonatomic) long long videoHallPageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentWatchTask;
+ (void)setLvModuleStr:(id)arg0;
+ (id)lvModuleString;
+ (id)activityId;
+ (void)setActivityId:(id)arg0;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)currentEnterFrom;
- (void)taskDidEnterScene:(id)arg0;
- (void)taskDidLeveaScene:(id)arg0;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)arg0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)arg0 withTotalTime:(id)arg1;
- (void)setVideoHallPreviousPage:(id)arg0;
- (void)setVideoHallPageType:(long long)arg0;
- (void)setInVideoHallScene:(BOOL)arg0;
- (void)trackTaskEntraceShow;
- (BOOL)inVideoHallScene;
- (void)trackTaskEntraceFinish;
- (id)previousPageFromWatchVideoHall;
- (id)trackCommonParamters;
- (long long)videoHallPageType;
- (id)videoHallPreviousPage;
- (id)initWithTask:(id)arg0;
- (void)setFinished:(BOOL)arg0;
- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)arg0;
- (id)module;
- (id)taskId;
- (BOOL)finished;
- (void)setModule:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setTaskId:(id)arg0;
- (void)taskDidStart;

@end

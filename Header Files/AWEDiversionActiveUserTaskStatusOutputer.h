//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEUGTimeMeterTaskProtocol;

@interface AWEDiversionActiveUserTaskStatusOutputer : NSObject <AWEUGStateOutputerProtocol> {
    id<AWEUGTimeMeterTaskProtocol> _task;
}

@property (retain, nonatomic) id<AWEUGTimeMeterTaskProtocol> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)arg0;
- (void)taskWillStartTiming;
- (void)taskUpdateProgress:(id)arg0 withTotalTime:(id)arg1;
- (void)trackLogWithMessage:(id)arg0;
- (id)initWithTask:(id)arg0;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (id)task;
- (void)taskDidStart;

@end
//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedDetailPublicWelfareTaskStatusOutputer : NSObject <AWEUGStateOutputerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLogWithEvent:(id)arg0;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)arg0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)arg0 withTotalTime:(id)arg1;
- (void)taskDidFinishReportWithModel:(id)arg0;
- (id)initWithTask:(id)arg0;
- (void)dealloc;
- (void)taskDidStart;

@end

//
//     Generated by private class-dump
//

@interface AWEAIPropTaskTracker : NSObject

+ (id)trackEnterFrom;
+ (void)monitorDraftWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 totalDuration:(double)arg3 draftType:(long long)arg4 type:(long long)arg5 statusCode:(long long)arg6 errorCode:(long long)arg7 errorMessage:(id)arg8;
+ (void)trackInnerPushWithPropId:(id)arg0 actionType:(long long)arg1 chatType:(long long)arg2;
+ (void)monitorInnerPushWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 actionType:(long long)arg3 totalDuration:(double)arg4 statusCode:(long long)arg5;
+ (void)monitorDownloadWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 actionType:(long long)arg3 totalDuration:(double)arg4 duration:(double)arg5 errorCode:(long long)arg6 errorMessage:(id)arg7;
+ (void)monitorAIPropGenerateSuccessWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 actionType:(long long)arg3 totalDuration:(double)arg4 statusCode:(long long)arg5 errorCode:(long long)arg6 errorMessage:(id)arg7;
+ (void)monitorAIPropDeleteTasksWithPendingCount:(unsigned long long)arg0 failedCount:(unsigned long long)arg1;
+ (void)monitorSubmitSuccessRateWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 totalDuration:(double)arg3 statusCode:(long long)arg4;
+ (void)monitorAIPropNoticeClickWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 statusCode:(long long)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5 completed:(BOOL)arg6 totalDuration:(double)arg7;
+ (void)monitorAIGCQueryTaskListWithCount:(long long)arg0 actionType:(long long)arg1 duration:(double)arg2 statusCode:(long long)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5;
+ (void)monitorAIPropCancelTasksWithStatusCode:(long long)arg0 AIType:(long long)arg1 taskIds:(id)arg2 duration:(double)arg3 errorCode:(long long)arg4 errorMsg:(id)arg5;
+ (void)monitorAIPropPersistantTaskInfoWithTaskCount:(long long)arg0 statusCode:(long long)arg1 AIType:(long long)arg2 taskIds:(id)arg3 tasksStatus:(id)arg4;
+ (void)trackClickAIGCGenerateFeedCardWithTaskId:(id)arg0 propId:(id)arg1 clickType:(long long)arg2;
+ (void)trackShowAIGCGenerateFeedCardWithTaskId:(id)arg0 propId:(id)arg1;
+ (void)monitorQueryResponseWithTaskId:(id)arg0 propId:(id)arg1 totalDuration:(double)arg2 complete:(long long)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5;
+ (void)trackAIGCCameraCompositeResponseWithTaskId:(id)arg0 propId:(id)arg1 AIType:(long long)arg2 duration:(double)arg3 statusCode:(long long)arg4;
+ (void)monitorServerPushMessageWithTaskId:(id)arg0 propId:(id)arg1 totalDuration:(double)arg2 statusCode:(long long)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5;

@end

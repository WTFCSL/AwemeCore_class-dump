//
//     Generated by private class-dump
//

@class TTUploadQueue, NSMutableDictionary;

@interface TTUploadDispatcher : NSObject {
    char _uploadingTaskMax;
    TTUploadQueue *_queueHigh;
    TTUploadQueue *_queueMid;
    TTUploadQueue *_queueLow;
    NSMutableDictionary *_uploadingDic;
    NSMutableDictionary *_allTaskDic;
}

@property (retain) TTUploadQueue *queueHigh;
@property (retain) TTUploadQueue *queueMid;
@property (retain) TTUploadQueue *queueLow;
@property (retain) NSMutableDictionary *uploadingDic;
@property (retain) NSMutableDictionary *allTaskDic;
@property char uploadingTaskMax;

- (BOOL)setDownlodingTaskCountMax:(char)arg0;
- (void)setQueueLow:(id)arg0;
- (void)setQueueMid:(id)arg0;
- (void)setQueueHigh:(id)arg0;
- (void)setAllTaskDic:(id)arg0;
- (void)runSameResultBlockAndRemove:(id)arg0;
- (id)allTaskDic;
- (BOOL)isTaskExist:(id)arg0;
- (BOOL)mergeSameRequestResultBlock:(id)arg0;
- (id)queueHigh;
- (id)queueMid;
- (id)queueLow;
- (BOOL)deleteTaskToAllTaskDic:(id)arg0;
- (BOOL)isTaskWaitInQueue:(id)arg0;
- (unsigned long long)getAllTaskCount;
- (void)deleteTask:(id)arg0;
- (char)getDownlodingTaskCountMax;
- (unsigned long long)getQueueWaitTaskCount;
- (void)setUploadingDic:(id)arg0;
- (void)setUploadingTaskMax:(char)arg0;
- (BOOL)deleteTaskUploadingDic:(id)arg0;
- (id)uploadingDic;
- (char)uploadingTaskMax;
- (BOOL)findDTaskUploadingDic:(id)arg0;
- (BOOL)isUploadingDicFull;
- (BOOL)addDTaskToUploadingDic:(id)arg0;
- (BOOL)isResourceUploading:(id)arg0;
- (void)cancelTask:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)queryTask:(id)arg0;
- (void)dequeue;
- (BOOL)enqueue:(id)arg0;

@end

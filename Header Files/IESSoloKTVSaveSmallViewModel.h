//
//     Generated by private class-dump
//

@class IESSoloKTVTemplateMainModel, IESSoloKTVVideoEditManager, NSString, NSError, IESLiveSoloKTVExportOperation, IESSoloKTVDraftMainModel, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESSoloKTVSaveSmallViewModel : NSObject {
    float _exportWeight;
    float _taskCompletedProgress;
    long long _karaokeId;
    long long _taskType;
    IESSoloKTVDraftMainModel *_draftModel;
    IESSoloKTVTemplateMainModel *_templateModel;
    IESSoloKTVVideoEditManager *_editManager;
    NSString *_taskFilePath;
    id /* block */ _taskCompletion;
    id /* block */ _taskProgressBlock;
    NSMutableArray *_ops;
    IESLiveSoloKTVExportOperation *_baseOpetaion;
    NSObject<OS_dispatch_semaphore> *_saveVideoSemaphore;
    NSError *_saveError;
    NSDictionary *_trackParams;
    double _startSaveInterval;
}

@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESSoloKTVTemplateMainModel *templateModel;
@property (retain, nonatomic) IESSoloKTVVideoEditManager *editManager;
@property (nonatomic) long long taskType;
@property (nonatomic) float exportWeight;
@property (nonatomic) float taskCompletedProgress;
@property (copy, nonatomic) NSString *taskFilePath;
@property (copy, nonatomic) id /* block */ taskCompletion;
@property (copy, nonatomic) id /* block */ taskProgressBlock;
@property (retain, nonatomic) NSMutableArray *ops;
@property (retain, nonatomic) IESLiveSoloKTVExportOperation *baseOpetaion;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *saveVideoSemaphore;
@property (retain, nonatomic) NSError *saveError;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double startSaveInterval;
@property (nonatomic) long long karaokeId;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id /* block */)taskCompletion;
- (void)setTaskCompletion:(id /* block */)arg0;
- (void)setDraftModel:(id)arg0;
- (id)draftModel;
- (id)editManager;
- (void)setEditManager:(id)arg0;
- (id)initWithDraftModel:(id)arg0 templateModel:(id)arg1 trackParams:(id)arg2;
- (void)setKaraokeId:(long long)arg0;
- (void)exportVideoWithTaskType:(long long)arg0 progressBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)karaokeId;
- (void)cancelAllTaskWithIsClose:(BOOL)arg0;
- (void)cancelExportOperationWithTaskType:(long long)arg0;
- (BOOL)appendTaskWithTaskType:(long long)arg0;
- (void)setOps:(id)arg0;
- (void)cancelAllTaskWithError:(id)arg0;
- (void)invokeTaskCompletionWithError:(id)arg0 failType:(long long)arg1;
- (void)trackVideoSaveCloseWithPage:(id)arg0;
- (id)ops;
- (void)setBaseOpetaion:(id)arg0;
- (void)setTaskCompletedProgress:(float)arg0;
- (void)setTaskFilePath:(id)arg0;
- (void)setTaskProgressBlock:(id /* block */)arg0;
- (void)setStartSaveInterval:(double)arg0;
- (void)updateExportTaskWeight;
- (id)createOpeationWithTaskType:(long long)arg0;
- (void)setExportWeight:(float)arg0;
- (void)runExportVideoTaskV2;
- (void)runSaveVideoTask;
- (void)runPublishVideoTask;
- (void)runSaveDraftTask;
- (id)findOperationInOpsWithTaskType:(long long)arg0;
- (SEL)selectorWithTaskType:(long long)arg0;
- (id)baseOpetaion;
- (id /* block */)taskProgressBlock;
- (float)taskCompletedProgress;
- (float)exportWeight;
- (void)monitroTaskWithTaskType:(long long)arg0 startInterval:(double)arg1 success:(BOOL)arg2 error:(id)arg3 extra:(id)arg4;
- (unsigned long long)dispatchTimeWithTime:(double)arg0;
- (void)handleWaitingTimeOutWithTaskType:(long long)arg0 startTimeInterval:(double)arg1;
- (void)setSaveVideoSemaphore:(id)arg0;
- (id)taskFilePath;
- (id)saveVideoSemaphore;
- (id)createPublishConfig;
- (id)publishTrackExtra;
- (void)handleWithPublishTextConfig:(id)arg0 tagsArray:(id)arg1 content:(id)arg2;
- (id)trackFailTypeStringWithType:(long long)arg0;
- (void)trackVideoSaveResult:(BOOL)arg0 failType:(id)arg1 reason:(id)arg2;
- (double)startSaveInterval;
- (void)trackVideoSaveDuration:(long long)arg0;
- (BOOL)checkPublishTextRuleWithStartTimeStamp:(long long)arg0 endTimeStamp:(long long)arg1 condition:(id)arg2 type:(long long)arg3;
- (void)handleWithRules:(id)arg0 action:(id /* block */)arg1;
- (long long)taskType;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setTaskType:(long long)arg0;
- (void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;
- (id)saveError;
- (void)setSaveError:(id)arg0;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;

@end
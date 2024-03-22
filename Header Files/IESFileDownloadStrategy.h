//
//     Generated by private class-dump
//

@class NSMapTable, NSOperationQueue, IESEffectDownloadFlowConflictMonitor, NSMutableArray;

@interface IESFileDownloadStrategy : NSObject {
    NSOperationQueue *_downloadQueue;
    NSMapTable *_taskOperationMap;
    NSMutableArray *_executeTaskQueue;
    NSMutableArray *_waitTaskQueue;
    IESEffectDownloadFlowConflictMonitor *_monitor;
}

@property (weak, nonatomic) NSOperationQueue *downloadQueue;
@property (weak, nonatomic) NSMapTable *taskOperationMap;
@property (retain, nonatomic) NSMutableArray *executeTaskQueue;
@property (retain, nonatomic) NSMutableArray *waitTaskQueue;
@property (weak, nonatomic) IESEffectDownloadFlowConflictMonitor *monitor;

- (id)executeTaskQueue;
- (void)pauseOneExecuteTaskIfNeed;
- (id)waitTaskQueue;
- (void)moveWaitTaskToExecute;
- (void)setExecuteTaskQueue:(id)arg0;
- (void)setWaitTaskQueue:(id)arg0;
- (id)initWithDownloadQueue:(id)arg0 taskOperationMap:(id)arg1;
- (void)updateFlowConflictMonitor:(id)arg0;
- (void)updateDownloadTask:(id)arg0;
- (void)addDownloadTask:(id)arg0 cancelExistDownloading:(BOOL)arg1 insertFront:(BOOL)arg2;
- (id)taskOperationMap;
- (void)resumeTaskWithKeyIfNeed:(id)arg0 insertFront:(BOOL)arg1 cancelDownloading:(BOOL)arg2 downloadProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setTaskOperationMap:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (void)setDownloadQueue:(id)arg0;
- (id)downloadQueue;

@end
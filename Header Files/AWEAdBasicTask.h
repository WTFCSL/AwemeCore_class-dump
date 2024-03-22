//
//     Generated by private class-dump
//

@class AWEAdTaskContext, AWEAdAsyncTaskCoordinator, NSString;

@interface AWEAdBasicTask : NSObject <AWEAdBasicTaskProtocol> {
    BOOL _taskResult;
    AWEAdTaskContext *_context;
    id /* block */ _shouldBeExcutedBlock;
    id /* block */ _taskWillExcuteBlock;
    id /* block */ _excuteBlock;
    id /* block */ _taskDidExcutedBlock;
    id /* block */ _asyncExcuteBlock;
    AWEAdAsyncTaskCoordinator *_coordinator;
}

@property (readonly, nonatomic) AWEAdTaskContext *context;
@property (copy, nonatomic) id /* block */ shouldBeExcutedBlock;
@property (copy, nonatomic) id /* block */ taskWillExcuteBlock;
@property (copy, nonatomic) id /* block */ excuteBlock;
@property (copy, nonatomic) id /* block */ taskDidExcutedBlock;
@property (readonly, nonatomic) BOOL taskResult;
@property (copy, nonatomic) id /* block */ asyncExcuteBlock;
@property (retain, nonatomic) AWEAdAsyncTaskCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)shouldBeExcutedBlock;
- (BOOL)shouldBeExcuted;
- (id /* block */)taskWillExcuteBlock;
- (void)taskWillExcute;
- (id /* block */)excuteBlock;
- (BOOL)taskExcute;
- (id /* block */)taskDidExcutedBlock;
- (BOOL)taskResult;
- (void)taskDidExcutedWithResult:(BOOL)arg0;
- (id /* block */)asyncExcuteBlock;
- (void)asyncTaskExcute;
- (void)taskSucceed;
- (void)taskFailed;
- (id)initWithContextBuilder:(id /* block */)arg0;
- (BOOL)isAsyncTask;
- (void)asyncRun;
- (void)setShouldBeExcutedBlock:(id /* block */)arg0;
- (void)setTaskWillExcuteBlock:(id /* block */)arg0;
- (void)setExcuteBlock:(id /* block */)arg0;
- (void)setTaskDidExcutedBlock:(id /* block */)arg0;
- (void)setAsyncExcuteBlock:(id /* block */)arg0;
- (void)run;
- (id)initWithContext:(id)arg0;
- (id)coordinator;
- (id)init;
- (void).cxx_destruct;
- (id)context;
- (void)setCoordinator:(id)arg0;

@end
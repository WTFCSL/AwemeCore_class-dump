//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSArray, AWEVideoDraftModel, AWEVideoPublishViewModel;

@interface ACCDraftResourceAsyncRecoverHandler : NSObject {
    long long _status;
    AWEVideoDraftModel *_draft;
    AWEVideoPublishViewModel *_repository;
    NSMutableDictionary *_observers;
    NSArray *_tasks;
    id /* block */ _completion;
    double _delay;
}

@property (readonly, nonatomic) AWEVideoDraftModel *draft;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double delay;
@property (readonly, nonatomic) long long status;

+ (BOOL)enabled;

- (id)initWithDraft:(id)arg0 repository:(id)arg1;
- (void)startWithTasks:(id)arg0 completion:(id /* block */)arg1;
- (void)p_callback:(id)arg0 task:(id)arg1 key:(id)arg2;
- (void)p_executeTasksIfNeeded;
- (void)p_allFinish;
- (void)addObserver:(id)arg0 forProtocol:(id)arg1 repository:(id)arg2 canHandle:(id /* block */)arg3 handle:(id /* block */)arg4;
- (void)setDelay:(double)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (long long)status;
- (double)delay;
- (id)observers;
- (void)setObservers:(id)arg0;
- (id)repository;
- (void)dealloc;
- (void)removeObserver:(id)arg0;
- (id)tasks;
- (void)setTasks:(id)arg0;
- (id)draft;

@end
//
//     Generated by private class-dump
//

@class NSLock, RxOperationQueue, NSMutableArray;

@interface RxOperation : NSOperation {
    NSMutableArray *_internalErrors;
    NSLock *_stateLock;
    struct State { int _v; } _state;
    BOOL _hasFinishedAlready;
    NSMutableArray *_observers;
    RxOperationQueue *_operationQueue;
    struct SharedPtr<Rx::Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> >, Rx::ESPMode::Fast> { struct Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> > *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } _conditions;
}

@property (weak) RxOperationQueue *operationQueue;
@property (nonatomic) struct State { int x0; } state;
@property (nonatomic) struct SharedPtr<Rx::Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> >, Rx::ESPMode::Fast> { struct Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> > *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } conditions;
@property (retain, nonatomic) NSMutableArray *observers;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void)_evaluatingConditions;
- (void)produceOperation:(id)arg0;
- (void)willEnqueue;
- (BOOL)isFinished;
- (void)addCondition:(struct SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> { struct OperationConditionInterface *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })arg0;
- (void)setUserInitiated:(BOOL)arg0;
- (id)init;
- (void)execute;
- (void)setOperationQueue:(id)arg0;
- (void)main;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (struct State { int x0; })state;
- (void)setState:(struct State { int x0; })arg0;
- (BOOL)isReady;
- (void)cancelWithError:(id)arg0;
- (id)observers;
- (void)setObservers:(id)arg0;
- (id)operationQueue;
- (void)addObserver:(id)arg0;
- (void)finish:(id)arg0;
- (BOOL)userInitiated;
- (id)description;
- (struct SharedPtr<Rx::Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> >, Rx::ESPMode::Fast> { struct Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> > *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })conditions;
- (void)start;
- (void)dealloc;
- (id).cxx_construct;
- (void)finishWithError:(id)arg0;
- (void)setConditions:(struct SharedPtr<Rx::Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> >, Rx::ESPMode::Fast> { struct Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> > *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })arg0;
- (void)addDependency:(id)arg0;
- (void)finished:(id)arg0;

@end
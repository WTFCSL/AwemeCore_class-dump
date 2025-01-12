//
//     Generated by private class-dump
//

@class NSError, NSString, NSArray, NSHashTable, AWEPublishFlowModel, NSLock, NSMutableArray;

@interface AWEPublishRunnableStage : NSObject <AWEPublishRunnableStageProtocol> {
    BOOL _ignoreFailure;
    NSError *_error;
    long long _status;
    double _progress;
    AWEPublishFlowModel *_flowModel;
    NSString *_stageType;
    NSHashTable *_observers;
    NSLock *_lock;
    NSMutableArray *_depenencyArray;
    NSHashTable *_childArray;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *depenencyArray;
@property (retain, nonatomic) NSHashTable *childArray;
@property (nonatomic) BOOL ignoreFailure;
@property (nonatomic) double progress;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *stageType;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, weak, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDependencies:(id)arg0;
- (void)setStageType:(id)arg0;
- (id)stageType;
- (void)setFlowModel:(id)arg0;
- (id)flowModel;
- (void)bindToTask:(id)arg0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id /* block */)addDependencies;
- (BOOL)isDependenciesFinished;
- (BOOL)isStageFinishedWithStatus:(long long)arg0;
- (id)depenencyArray;
- (id)childArray;
- (BOOL)ignoreFailure;
- (void)setDepenencyArray:(id)arg0;
- (void)setChildArray:(id)arg0;
- (void)setIgnoreFailure:(BOOL)arg0;
- (void)run;
- (id)init;
- (void).cxx_destruct;
- (long long)status;
- (id)dependencies;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)setStatus:(long long)arg0;
- (id)lock;
- (double)progress;
- (void)addObserver:(id)arg0;
- (void)setError:(id)arg0;
- (id)description;
- (id)children;
- (void)setProgress:(double)arg0;
- (void)setLock:(id)arg0;
- (id)error;
- (void)addDependency:(id)arg0;
- (void)startNode;

@end

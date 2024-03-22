//
//     Generated by private class-dump
//

@class NSError, NSString, NSHashTable, AWEPublishFlowModel, NSLock, NSArray, NSMutableArray, NSMapTable;
@protocol AWEPublishTaskContextProtocol;

@interface AWEPublishContainerStage : NSObject <AWEPublishContainerStageProtocol, AWEPublishRunnableStageObserver, AWEPublishStageProtocol> {
    BOOL _autoCalculateProgress;
    long long _status;
    double _progress;
    AWEPublishFlowModel *_flowModel;
    NSError *_error;
    id<AWEPublishTaskContextProtocol> _task;
    NSString *_stageType;
    long long _type;
    NSHashTable *_observers;
    NSMutableArray *_stages;
    NSMapTable *_stageProgressDict;
    NSLock *_lock;
    NSMutableArray *_depenencyArray;
    NSHashTable *_childArray;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *stages;
@property (retain, nonatomic) NSMapTable *stageProgressDict;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *depenencyArray;
@property (retain, nonatomic) NSHashTable *childArray;
@property (nonatomic) BOOL autoCalculateProgress;
@property (readonly, copy, nonatomic) id /* block */ add;
@property (readonly, copy, nonatomic) id /* block */ addObserver;
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
@property (nonatomic) long long type;
@property (readonly, weak, nonatomic) id<AWEPublishTaskContextProtocol> task;

- (void)addDependencies:(id)arg0;
- (void)setStageType:(id)arg0;
- (id)stageType;
- (void)setFlowModel:(id)arg0;
- (id)flowModel;
- (void)bindToTask:(id)arg0;
- (void)stage:(id)arg0 didChangeStatus:(long long)arg1;
- (void)stage:(id)arg0 didUpdateProgress:(double)arg1;
- (id /* block */)addDependencies;
- (BOOL)isDependenciesFinished;
- (BOOL)isStageFinishedWithStatus:(long long)arg0;
- (id)stages;
- (id)depenencyArray;
- (id)childArray;
- (BOOL)autoCalculateProgress;
- (id)stageProgressDict;
- (id)stageArray;
- (void)setAutoCalculateProgress:(BOOL)arg0;
- (void)setStages:(id)arg0;
- (void)setStageProgressDict:(id)arg0;
- (void)setDepenencyArray:(id)arg0;
- (void)setChildArray:(id)arg0;
- (void)run;
- (id)init;
- (void).cxx_destruct;
- (long long)status;
- (id)dependencies;
- (long long)type;
- (id)observers;
- (void)handleEvent:(id)arg0;
- (void)setObservers:(id)arg0;
- (void)setType:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (id)lock;
- (double)progress;
- (void)addObserver:(id)arg0;
- (void)setError:(id)arg0;
- (id)description;
- (id)children;
- (id)task;
- (void)setProgress:(double)arg0;
- (id /* block */)addObserver;
- (void)setLock:(id)arg0;
- (id)error;
- (id /* block */)add;
- (void)addDependency:(id)arg0;
- (void)startNode;
- (void)addStage:(id)arg0;

@end
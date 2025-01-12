//
//     Generated by private class-dump
//

@class NLEModel_OC;

@protocol DVENLEEditorProtocol <NSObject>

@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (readonly, nonatomic) NLEModel_OC *stageModel;

- (id)nleModel;
- (void)resetHeadWithCompletion:(id /* block */)arg0;
- (long long)restore:(id)arg0;
- (void)setNleModel:(id)arg0;
- (id)stageModel;
- (void)commit;
- (BOOL)undo;
- (BOOL)done;
- (void)addDelegate:(id)arg0;
- (void)removeListener:(id)arg0;
- (BOOL)redo;
- (id)store;
- (void)commit:(id /* block */)arg0;
- (void)removeDelegate:(id)arg0;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (BOOL)done:(id)arg0;
- (void)addListener:(id)arg0;

@end

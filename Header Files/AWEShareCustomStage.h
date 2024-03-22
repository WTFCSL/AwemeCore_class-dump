//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareCustomStage : AWEShareBaseStage {
    NSString *_name;
    id /* block */ _runHandler;
    id /* block */ _preparationHandler;
    id /* block */ _asyncPreparationHandler;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ runHandler;
@property (copy, nonatomic) id /* block */ preparationHandler;
@property (copy, nonatomic) id /* block */ asyncPreparationHandler;

+ (id)stageWithName:(id)arg0 preparationHandler:(id /* block */)arg1;
+ (id)stageWithName:(id)arg0 runHandler:(id /* block */)arg1;
+ (id)stageWithName:(id)arg0 asyncPreparationHandler:(id /* block */)arg1;

- (id /* block */)asyncPreparationHandler;
- (void)setAsyncPreparationHandler:(id /* block */)arg0;
- (BOOL)prepareBeforeRun;
- (void)prepareBeforeRunWithCompletion:(id /* block */)arg0;
- (void)setRunHandler:(id /* block */)arg0;
- (id /* block */)runHandler;
- (void)run;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)initWithName:(id)arg0;
- (id)description;
- (id)name;
- (id /* block */)preparationHandler;
- (void)setPreparationHandler:(id /* block */)arg0;

@end

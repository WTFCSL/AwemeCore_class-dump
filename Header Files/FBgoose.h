//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, AWECFMuniments, NSError, NSMutableArray, NSString;

@interface FBgoose : NSObject <AWECFDaffodil> {
    BOOL _cancelled;
    NSError *_error;
    NSMutableArray *_retryTasks;
    AWECFMuniments *_moduleListTask;
    NSMutableDictionary *_moduleTaskMapper;
}

@property (retain, nonatomic) NSMutableDictionary *moduleTaskMapper;
@property (retain, nonatomic) AWECFMuniments *moduleListTask;
@property (readonly, nonatomic) NSArray *moduleTasks;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *retryTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)moduleListTask;
- (id)taskForModuleModel:(id)arg0;
- (void)bd_automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers:(id)arg0 bd_shouldAutomaticallyForwardRotationMethods:(id)arg1;
- (void)setModuleListTask:(id)arg0;
- (id)retryTasks;
- (void)setRetryTasks:(id)arg0;
- (id)moduleTaskMapper;
- (void)bd_willMoveToParentViewController:(id)arg0;
- (id)moduleTasks;
- (void)setModuleTaskMapper:(id)arg0;
- (void)setCancelled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)cancel;
- (void)setError:(id)arg0;
- (void)dealloc;
- (BOOL)isCancelled;
- (id)error;

@end

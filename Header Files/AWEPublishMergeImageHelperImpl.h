//
//     Generated by private class-dump
//

@class NSArray, NSString, NSMutableArray, NSObject;
@protocol ACCSequenceEditServiceProtocol, AWEPublishEditServiceManagerProtocol, OS_dispatch_semaphore, OS_dispatch_queue;

@interface AWEPublishMergeImageHelperImpl : NSObject <ACCPublishMergeImageHelperProtocol> {
    BOOL _background;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _backgroundWaitOperationCount;
    NSArray *_allOperation;
    long long _maxConcurrentCount;
    NSArray *_disableSequenceEditServiceIndexs;
    double _scale;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_operations;
    NSMutableArray *_executeOperations;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<AWEPublishEditServiceManagerProtocol> _editServiceManager;
    NSObject<OS_dispatch_semaphore> *_backgroundWaitSemaphore;
}

@property (nonatomic) double scale;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *operations;
@property (retain, nonatomic) NSMutableArray *executeOperations;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (nonatomic) long long maxConcurrentCount;
@property (nonatomic) BOOL background;
@property (nonatomic) long long backgroundWaitOperationCount;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *backgroundWaitSemaphore;
@property (readonly, weak, nonatomic) NSArray *allOperation;
@property (retain, nonatomic) NSArray *disableSequenceEditServiceIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxConcurrentCount:(long long)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)editServiceManager;
- (void)setEditServiceManager:(id)arg0;
- (BOOL)enableIsolateEditAndPublishEditorWithPublishModel:(id)arg0;
- (void)setExecuteOperations:(id)arg0;
- (void)setBackgroundWaitSemaphore:(id)arg0;
- (long long)backgroundWaitOperationCount;
- (id)backgroundWaitSemaphore;
- (void)setBackgroundWaitOperationCount:(long long)arg0;
- (id)disableSequenceEditServiceIndexs;
- (void)printOperation:(id)arg0 executeInfo:(id)arg1;
- (void)lockWithExecuteBlock:(id /* block */)arg0;
- (void)removeWithOperationIDs:(id)arg0;
- (id)executeOperations;
- (void)handleOperation:(id)arg0 editService:(id)arg1;
- (void)activeEditServiceWithOperation:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)canUseSequenceEditServiceWithIndex:(long long)arg0 workspace:(id)arg1;
- (void)finishedOperation:(id)arg0 exportItemModel:(id)arg1 mergeImage:(id)arg2 editService:(id)arg3 error:(id)arg4;
- (void)getProcessImageWithOperation:(id)arg0 activedEditService:(id)arg1;
- (void)configCanvasSizeWithOperation:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isValidSize:(struct CGSize { double x0; double x1; })arg0;
- (id)getExportItemModel:(id)arg0 outputImage:(id)arg1 error:(id *)arg2;
- (void)resetCanvasSizeIfNeededWithOperation:(id)arg0 completion:(id /* block */)arg1;
- (id)mergeImagePathWithTaskID:(id)arg0 uuid:(id)arg1;
- (void)useSequenceEditService:(id)arg0;
- (void)useEditServiceManager:(id)arg0;
- (id)imageWithConfig:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)imagesWithConfig:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)removeReusableEditServicesIfNeeded;
- (id)allOperation;
- (void)setDisableSequenceEditServiceIndexs:(id)arg0;
- (id)init;
- (void)execute;
- (BOOL)background;
- (void).cxx_destruct;
- (id)operations;
- (void)setBackground:(BOOL)arg0;
- (double)scale;
- (struct os_unfair_lock_s { unsigned int x0; })lock;
- (id)queue;
- (void)dealloc;
- (void)setOperations:(id)arg0;
- (void)setScale:(double)arg0;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x0; })arg0;
- (void)setQueue:(id)arg0;
- (long long)maxConcurrentCount;

@end

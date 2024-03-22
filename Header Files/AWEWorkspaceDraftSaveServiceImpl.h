//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEWorkspaceDraftSaveServiceImpl : NSObject <AWEWorkspaceDraftSaveService> {
    NSObject<OS_dispatch_queue> *_queueSerial;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queueSerial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveWorkspace:(id)arg0 video:(id)arg1 backup:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)saveWorkspace:(id)arg0 video:(id)arg1 backup:(BOOL)arg2 modifiedHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)saveProject:(id)arg0 completion:(id /* block */)arg1;
- (void)saveWorkspace:(id)arg0 video:(id)arg1 completion:(id /* block */)arg2;
- (void)p_saveProjectImpl:(id)arg0 completion:(id /* block */)arg1;
- (void)saveWorkspace:(id)arg0 video:(id)arg1 backupFlag:(id)arg2 modifiedHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)saveProjects:(id)arg0 completion:(id /* block */)arg1;
- (void)p_saveWorkspace:(id)arg0 video:(id)arg1 backup:(id)arg2 presaveHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)queueSerial;
- (void)p_saveVideoDataWithProject:(id)arg0 completion:(id /* block */)arg1;
- (id)generateDraftWithRepository:(id)arg0 error:(id *)arg1;
- (void)storeExtensionModelsFor:(id)arg0 with:(id)arg1;
- (void)setQueueSerial:(id)arg0;
- (void).cxx_destruct;

@end
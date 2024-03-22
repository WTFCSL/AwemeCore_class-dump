//
//     Generated by private class-dump
//

@class NSString, AWEPublishFlowModel, NSError, AWEPublishInfiniTask;
@protocol AWEPublishInfiniTaskCoordinatorServiceProtocol, AWEPublishInfiniTaskFlowMessageServiceProtocol;

@interface AWEPublishInfiniTaskStageService : NSObject <AWEPublishInfiniTaskStageServiceProtocol> {
    NSError *_error;
    AWEPublishInfiniTask *_task;
    AWEPublishFlowModel *_flowModel;
    id<AWEPublishInfiniTaskFlowMessageServiceProtocol> _flowMessageService;
    id<AWEPublishInfiniTaskCoordinatorServiceProtocol> _coordinatorService;
}

@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) AWEPublishInfiniTask *task;
@property (weak, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) id<AWEPublishInfiniTaskFlowMessageServiceProtocol> flowMessageService;
@property (retain, nonatomic) id<AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)arg0;
- (void)setFlowModel:(id)arg0;
- (id)flowModel;
- (void)stage:(id)arg0 didChangeStatus:(long long)arg1;
- (void)stage:(id)arg0 didUpdateProgress:(double)arg1;
- (void)finishStage:(id)arg0;
- (id)flowMessageService;
- (id)coordinatorService;
- (void)setCoordinatorService:(id)arg0;
- (void)setFlowMessageService:(id)arg0;
- (void)mergeSuccess;
- (void)waterMarkSuccess;
- (void)uploadSuccess;
- (void)createModelSuccess;
- (void)publishHandleAwemeSuccess;
- (void)uploadImageFramesSuccess;
- (void)publishFinishedSuccess;
- (void)releaseService;
- (id)userInfoWithStage:(id)arg0;
- (void)publishFailed:(id)arg0;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (void)setError:(id)arg0;
- (void)dealloc;
- (id)task;
- (id)error;

@end
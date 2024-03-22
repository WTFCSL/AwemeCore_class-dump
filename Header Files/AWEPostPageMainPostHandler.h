//
//     Generated by private class-dump
//

@class AWEPublishBaseTask, AWEVideoPublishFlowService, NSString, IESContainer, NSObject, UIViewController, NSNumber, AWEPostPageContext;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPostPageMainPostHandler : NSObject <AWEPostPageMainPostService> {
    BOOL _cancelsPreuploadOnRequestComplete;
    IESContainer *_serviceContainer;
    AWEPostPageContext *_context;
    AWEVideoPublishFlowService *_flowService;
    UIViewController *_postPage;
    NSObject *_requestUploadParamsStateSignal;
    NSNumber *_publishStateSignal;
}

@property (weak, nonatomic) IESContainer *serviceContainer;
@property (retain, nonatomic) AWEPostPageContext *context;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEVideoPublishFlowService *flowService;
@property (weak, nonatomic) UIViewController *postPage;
@property BOOL cancelsPreuploadOnRequestComplete;
@property (retain, nonatomic) NSObject *requestUploadParamsStateSignal;
@property (retain, nonatomic) NSNumber *publishStateSignal;
@property (readonly, nonatomic) AWEPublishBaseTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishTask;
- (void)setServiceContainer:(id)arg0;
- (void)beginPublish;
- (id)editService;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)sequenceEditService;
- (void)removePreUploadingTask;
- (void)cancelPreUploadingTask;
- (id)dynamicyPrepareCanvasPublishAsImageFlagValue;
- (void)handleDeactiveSignal;
- (void)handlePrePublish;
- (id)requestUploadParamsStateSignal;
- (void)saveHashtagWithPublishState:(BOOL)arg0;
- (void)resetPublishTask;
- (void)replaceTaskWithTask:(id)arg0;
- (void)removePreUploadingTask:(BOOL)arg0;
- (void)removePreUploadingTaskForPreview;
- (void)startPreMergeOrUploadIfNeeded;
- (void)delayStartPreMergeOrUploadIfNeeded;
- (void)endPublish;
- (id)publishStateSignal;
- (BOOL)disablePreUploadWithNetWorkCondition;
- (void)setPostPage:(id)arg0;
- (id)postPage;
- (void)configPublishTask;
- (void)requestUploadParameters:(id /* block */)arg0;
- (void)setPublishStateSignal:(id)arg0;
- (void)setCancelsPreuploadOnRequestComplete:(BOOL)arg0;
- (void)setRequestUploadParamsStateSignal:(id)arg0;
- (BOOL)cancelsPreuploadOnRequestComplete;
- (BOOL)closePreMergeWithInfo:(id)arg0;
- (BOOL)needOpenPreUploadWithInfo:(id)arg0;
- (void)p_recoverPlayerEdgeIfNeed;
- (unsigned long long)videoPublishStatus;
- (BOOL)isImageOrMixed;
- (BOOL)isImageAlumPublishModel:(id)arg0;
- (BOOL)closePreMergeForImageAlbum;
- (void).cxx_destruct;
- (id)serviceContainer;
- (void)setContext:(id)arg0;
- (id)currentTask;
- (id)context;
- (void)viewDidLoad;

@end

//
//     Generated by private class-dump
//

@class AWEPublicIMPhotoAblumTask, AWEIMEditorFinishedView, AWEPublishIMVideoTask;
@protocol ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface AWEIMEditorFinishedComponent : ACCFeatureComponent {
    AWEPublishIMVideoTask *_imVideoTask;
    AWEPublicIMPhotoAblumTask *_imPhotoTask;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCVideoEditFlowControlService> _flowService;
    AWEIMEditorFinishedView *_finishedView;
}

@property (retain, nonatomic) AWEPublishIMVideoTask *imVideoTask;
@property (retain, nonatomic) AWEPublicIMPhotoAblumTask *imPhotoTask;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) AWEIMEditorFinishedView *finishedView;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)loadComponentView;
- (void)setEditService:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setFinishedView:(id)arg0;
- (void)onFinishButtonDidClick;
- (id)finishedView;
- (void)p_setupFinishButton;
- (void)preparePublish;
- (void)enqueuePublishTask;
- (void)executeTaskV2;
- (void)executeTaskV2_photo;
- (id)imVideoTask;
- (id)imPhotoTask;
- (void)setImVideoTask:(id)arg0;
- (void)setImPhotoTask:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end

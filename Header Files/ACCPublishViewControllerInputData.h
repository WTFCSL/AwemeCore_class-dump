//
//     Generated by private class-dump
//

@class AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, IESServiceProvider, IESServiceRegister, ACCEditServiceProtocol;

@interface ACCPublishViewControllerInputData : ACCRepositoryWrapper {
    AWEVideoPublishViewModel *_publishModel;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEResourceUploadParametersResponseModel *_uploadParamsCache;
    id /* block */ _cancelBlock;
    id<IESServiceRegister, IESServiceProvider> _editorServiceContainer;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> editorServiceContainer;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)editService;
- (id)uploadParamsCache;
- (void)setEditService:(id)arg0;
- (void)setUploadParamsCache:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)editorServiceContainer;
- (void)setEditorServiceContainer:(id)arg0;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (void)setCancelBlock:(id /* block */)arg0;

@end

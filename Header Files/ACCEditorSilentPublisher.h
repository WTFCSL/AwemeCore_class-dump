//
//     Generated by private class-dump
//

@class NSString, ACCEditorAssemblerComponent, AWEVideoPublishViewModel, ACCEditViewControllerInputData, AWEPublishMergeStage;
@protocol IESServiceRegister, IESServiceProvider, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCEditorSilentPublisher : NSObject <AWEPublishStageDelegate> {
    BOOL _showLoading;
    BOOL _silentMergeNoPublish;
    ACCEditViewControllerInputData *_inputData;
    AWEVideoPublishViewModel *_repository;
    id<IESServiceRegister, IESServiceProvider> _editServiceContainer;
    ACCEditorAssemblerComponent *_editorAssemblerComponent;
    AWEPublishMergeStage *_silentMergeStage;
    id /* block */ _silentMergeUpdatePublishViewModel;
    id /* block */ _silentMergeCompleted;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
}

@property (retain, nonatomic) ACCEditViewControllerInputData *inputData;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> editServiceContainer;
@property (retain, nonatomic) ACCEditorAssemblerComponent *editorAssemblerComponent;
@property (retain, nonatomic) AWEPublishMergeStage *silentMergeStage;
@property (copy, nonatomic) id /* block */ silentMergeUpdatePublishViewModel;
@property (copy, nonatomic) id /* block */ silentMergeCompleted;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL silentMergeNoPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShowLoading:(BOOL)arg0;
- (id)businessServiceContainer;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)initWithRepository:(id)arg0;
- (void)silentPublishQuickStory;
- (void)silentPublishNormalVideo;
- (void)prepareEditPageDataForSilentPublishOnCompletion:(id /* block */)arg0;
- (void)doPublishWithIsQuickStory:(BOOL)arg0;
- (void)doPublishWithIsQuickStory:(BOOL)arg0 withEnableTitle:(BOOL)arg1;
- (id)editServiceContainer;
- (void)configInputDataForServiceContainer:(id)arg0;
- (BOOL)_setupEditSession;
- (void)setEditServiceContainer:(id)arg0;
- (void)silentPublish:(id)arg0 quickStory:(BOOL)arg1;
- (void)trackWithPublishModel:(id)arg0 isCanceled:(BOOL)arg1;
- (void)setupEditSessionIfNeeded;
- (BOOL)silentMergeNoPublish;
- (id /* block */)silentMergeUpdatePublishViewModel;
- (void)setEditorAssemblerComponent:(id)arg0;
- (id)editorAssemblerComponent;
- (void)setSilentMergeCompleted:(id /* block */)arg0;
- (void)setSilentMergeStage:(id)arg0;
- (void)setSilentMergeUpdatePublishViewModel:(id /* block */)arg0;
- (id)convertSilentMergeVideoLocalPath:(id)arg0;
- (id)copySilentMergeVideoWithSrcPath:(id)arg0 dstPath:(id)arg1;
- (id /* block */)silentMergeCompleted;
- (void)publishStage:(id)arg0 didChangeStatus:(long long)arg1 userInfo:(id)arg2;
- (void)silentMergeNormalVideoWithCompleted:(id /* block */)arg0;
- (void)silentMergeUpdatePublishViewModel:(id /* block */)arg0;
- (void)setSilentMergeNoPublish:(BOOL)arg0;
- (id)silentMergeStage;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (BOOL)showLoading;

@end
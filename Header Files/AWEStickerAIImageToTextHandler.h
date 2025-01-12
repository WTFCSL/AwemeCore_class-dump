//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordPropService, ACCRecordFlowService, ACCCameraService;

@interface AWEStickerAIImageToTextHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber> {
    AWEVideoPublishViewModel *_repository;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordFlowService> _recordFlowService;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> recordFlowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)flowServiceDidEnterNextPageWithMode:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)handleArg2:(long long)arg0 arg3:(id)arg1;
- (void)handlerDidBecomeActive;
- (void)camera:(id)arg0 didRecvMessage:(id)arg1;
- (id)recordFlowService;
- (void)handleJson:(id)arg0 taskId:(long long)arg1;
- (void)camera:(id)arg0 willApplySticker:(id)arg1;
- (void)setRecordFlowService:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end

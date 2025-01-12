//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;

@interface AWERecordFlowConfigProtocolImpl : NSObject <ACCRecordFlowConfigProtocol> {
    AWEVideoPublishViewModel *_repository;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableLightningStyleRecordButton;
- (BOOL)enableTapToTakePictureRecordMode:(BOOL)arg0;
- (BOOL)needJumpDirectlyAfterTakePicture;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end

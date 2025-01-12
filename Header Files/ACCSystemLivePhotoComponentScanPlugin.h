//
//     Generated by private class-dump
//

@class NSString, ACCSystemLivePhotoComponent;
@protocol ACCCameraService, ACCRecordSystemLivePhotoService, ACCFeatureComponent, ACCRecordScanModelFlowService;

@interface ACCSystemLivePhotoComponentScanPlugin : NSObject <ACCRecordScanModelFlowSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
    id<ACCRecordSystemLivePhotoService> _systemLivePhotoService;
    id<ACCRecordScanModelFlowService> _scanService;
    id<ACCCameraService> _cameraService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly, weak, nonatomic) ACCSystemLivePhotoComponent *hostComponnent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)systemLivePhotoService;
- (void)setSystemLivePhotoService:(id)arg0;
- (id)scanService;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceDidExitScanMode;
- (void)setScanService:(id)arg0;
- (id)hostComponnent;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end

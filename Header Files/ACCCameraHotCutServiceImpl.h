//
//     Generated by private class-dump
//

@class IESMMCameraConfig, NSString;
@protocol IESServiceProvider, ACCCameraService;

@interface ACCCameraHotCutServiceImpl : NSObject <ACCCameraHotCutService> {
    IESMMCameraConfig *_mainTabConfig;
    IESMMCameraConfig *_momentSwitchConfig;
    id<ACCCameraService> _cameraService;
    id<IESServiceProvider> _serviceProvider;
}

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) IESMMCameraConfig *mainTabConfig;
@property (retain, nonatomic) IESMMCameraConfig *momentSwitchConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCameraConfig;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (BOOL)checkConfigNeedInterrupt;
- (void)resetCameraRecordConfigWithComplete:(id /* block */)arg0;
- (id)mainTabConfig;
- (void)setMainTabConfig:(id)arg0;
- (id)momentSwitchConfig;
- (void)setMomentSwitchConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;

@end

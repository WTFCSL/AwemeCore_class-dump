//
//     Generated by private class-dump
//

@class IESMMCameraConfig, NSString, UIView, CECCameraSubscription;
@protocol ACCRecorderProtocolD, ACCAlgorithmProtocol, ACCBeautyProtocol, VERecorderPublicProtocol, CECMomentCameraFactory, ACCMultiCameraProtocol, ACCFilterProtocol, ACCCameraControlProtocolD, AFDMomentCameraPerformanceTrackService, ACCServiceProvideRecipe, CECMomentCameraSwitchTabService;

@interface CECMomentCameraServiceImpls : NSObject <CECMomentCameraService> {
    BOOL _cameraHasInit;
    BOOL _isLandingToRecord;
    BOOL _hasSendDidRenderMsg;
    BOOL _isCameraCompleted;
    BOOL _isLoadFinished;
    IESMMCameraConfig *_config;
    UIView *_cameraPreviewView;
    id<CECMomentCameraFactory> _cameraFactory;
    id<ACCCameraControlProtocolD> _cameraControl;
    id<ACCRecorderProtocolD> _recorder;
    id<ACCMultiCameraProtocol> _multiCameraControl;
    id<ACCBeautyProtocol> _beauty;
    id<ACCFilterProtocol> _filter;
    id<ACCAlgorithmProtocol> _algorithm;
    id<VERecorderPublicProtocol> _camera;
    CECCameraSubscription *_subscription;
    id<ACCServiceProvideRecipe> _serviceResolver;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
}

@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) CECCameraSubscription *subscription;
@property (nonatomic) BOOL hasSendDidRenderMsg;
@property (nonatomic) BOOL isCameraCompleted;
@property (nonatomic) BOOL isLoadFinished;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceResolver;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (nonatomic) BOOL cameraHasInit;
@property (nonatomic) BOOL isLandingToRecord;
@property (readonly, nonatomic) UIView *cameraPreviewView;
@property (readonly, nonatomic) UIView *cameraSecondPreviewView;
@property (retain, nonatomic) id<CECMomentCameraFactory> cameraFactory;
@property (retain, nonatomic) IESMMCameraConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCRecorderProtocolD> recorder;
@property (readonly, nonatomic) id<ACCCameraControlProtocolD> cameraControl;
@property (readonly, nonatomic) id<ACCAlgorithmProtocol> algorithm;
@property (readonly, nonatomic) id<ACCMultiCameraProtocol> multiCameraControl;
@property (readonly, nonatomic) id<ACCBeautyProtocol> beauty;
@property (readonly, nonatomic) id<ACCFilterProtocol> filter;

- (id)resolveObject:(id)arg0;
- (id)beauty;
- (id /* block */)cameraActionBlock;
- (id)cameraControl;
- (void)markComponentsLoadFinished;
- (id /* block */)wrappedCameraActionBlock;
- (BOOL)cameraHasInit;
- (id)cameraFactory;
- (void)setCameraFactory:(id)arg0;
- (id)trackService;
- (void)setTrackService:(id)arg0;
- (void)configResolver:(id)arg0;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (void)switchMomentCameraSetCamera:(id)arg0;
- (id)multiCameraControl;
- (void)buildCameraWithConfig:(id)arg0;
- (void)switchCameraToMutliCameraWithConfig:(id)arg0 completion:(id /* block */)arg1;
- (void)switchCameraToSingleCameraWithConfig:(id)arg0 completion:(id /* block */)arg1;
- (void)removeCamera;
- (void)cameraSessionVECameraCreateCompletion;
- (void)cameraSessionAfterSwithSession;
- (void)setCameraHasInit:(BOOL)arg0;
- (BOOL)isLandingToRecord;
- (void)setIsLandingToRecord:(BOOL)arg0;
- (id)cameraSecondPreviewView;
- (id)serviceResolver;
- (void)setIsCameraCompleted:(BOOL)arg0;
- (void)p_handleComleteCamera;
- (void)bindCameraLifeCircle;
- (void)setIsLoadFinished:(BOOL)arg0;
- (BOOL)isLoadFinished;
- (BOOL)isCameraCompleted;
- (BOOL)hasSendDidRenderMsg;
- (void)setHasSendDidRenderMsg:(BOOL)arg0;
- (void)setServiceResolver:(id)arg0;
- (void)p_releaseCamera;
- (void)p_switchCameraToMutliCameraWithConfig:(id)arg0 completion:(id /* block */)arg1;
- (void)p_switchCameraToSingleCameraWithConfig:(id)arg0 completion:(id /* block */)arg1;
- (id)algorithm;
- (id)camera;
- (id)filter;
- (void)setConfig:(id)arg0;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)recorder;
- (BOOL)isSplitting;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (id)cameraPreviewView;

@end
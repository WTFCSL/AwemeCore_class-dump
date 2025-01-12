//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage, CECMomentCameraDeleteViewModel, AFDMomentCameraContext;
@protocol CECExchangeCameraLocationService, AFDMomentCameraPerformanceTrackService, CECMomentCameraFlowService, CECMomentCameraSubModeService;

@interface CECExchangeCameraLocationViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber> {
    BOOL _shouldShowLocationAnchor;
    BOOL _shouldShowLocationButton;
    BOOL _closeCameraVC;
    BOOL _isDisabled;
    NSDictionary *_locationInfo;
    AFDMomentCameraContext *_cameraContext;
    unsigned long long _loadingState;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSubModeService> _subModeService;
    id<CECExchangeCameraLocationService> _locationService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
    CECMomentCameraDeleteViewModel *_deleteViewModel;
    UIImage *_locationImage;
}

@property (copy, nonatomic) NSDictionary *locationInfo;
@property (nonatomic) BOOL shouldShowLocationAnchor;
@property (nonatomic) BOOL shouldShowLocationButton;
@property (nonatomic) BOOL closeCameraVC;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) unsigned long long loadingState;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (weak, nonatomic) id<CECExchangeCameraLocationService> locationService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) CECMomentCameraDeleteViewModel *deleteViewModel;
@property (retain, nonatomic) UIImage *locationImage;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)cameraContext;
- (void)setCameraContext:(id)arg0;
- (id)locationService;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (id)deleteViewModel;
- (void)didTapLocationButton:(BOOL)arg0;
- (void)setDeleteViewModel:(id)arg0;
- (id)subModeService;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)setSubModeService:(id)arg0;
- (void)setLocationService:(id)arg0;
- (void)setLocationImage:(id)arg0;
- (void)p_trackLocationButtonTapped;
- (void)p_handleError;
- (void)p_beginMakeSnapShotAndSearchPOIWithCoord:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (void)p_trackMomentCamerShootLocation;
- (id)locationImage;
- (void)p_didFinishMakeSnapShot:(id)arg0 andLocationInfo:(id)arg1;
- (void)setCloseCameraVC:(BOOL)arg0;
- (void)setShouldShowLocationButton:(BOOL)arg0;
- (void)setShouldShowLocationAnchor:(BOOL)arg0;
- (BOOL)shouldShowLocationAnchor;
- (BOOL)shouldShowLocationButton;
- (BOOL)closeCameraVC;
- (void)setIsDisabled:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isDisabled;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg0;
- (void)dealloc;
- (unsigned long long)loadingState;
- (void)setLoadingState:(unsigned long long)arg0;

@end

//
//     Generated by private class-dump
//

@class AWERecordLoadingView, NSString;
@protocol ACCRecordButtonService, ACCRecordPropService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCShootSourceService, ACCFeatureComponent, ACCRecordFlowService, ACCCameraService, IESServiceProvider;

@interface ACCRecordFlowComponentPropPickerPlugin : NSObject <ACCRecordFlowServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable> {
    BOOL _applicationResignActive;
    id<ACCFeatureComponent> _component;
    id<IESServiceProvider> _serviceProvider;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordPropService> _propService;
    id<ACCRecordFlowService> _flowService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordButtonService> _recordButtonService;
    id<ACCShootSourceService> _shootSourceService;
    id<ACCRecordSwitchModeService> _switchModeService;
    AWERecordLoadingView *_loadingView;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordButtonService> recordButtonService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) AWERecordLoadingView *loadingView;
@property (nonatomic) BOOL applicationResignActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (BOOL)applicationResignActive;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (id)flowService;
- (id)switchModeService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)flowServiceDidAddPictureToVideo:(id)arg0;
- (void)flowServiceDidAddFragment:(id)arg0;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)shootSourceService;
- (void)setShootSourceService:(id)arg0;
- (id)recordButtonService;
- (void)executePropPanelRecordBeganTask;
- (void)setRecordButtonService:(id)arg0;
- (void)prepareForExecutePropPanelRecord;
- (void)setApplicationResignActive:(BOOL)arg0;
- (void)updateCountDownTrackData:(BOOL)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)component;
- (void)applicationDidBecomeActive:(id)arg0;
- (id)serviceProvider;
- (void)dealloc;
- (void)setComponent:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
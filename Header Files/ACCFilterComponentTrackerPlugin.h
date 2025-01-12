//
//     Generated by private class-dump
//

@class NSString, ACCFilterComponent;
@protocol ACCCameraService, ACCFeatureComponent, IESServiceProvider;

@interface ACCFilterComponentTrackerPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
    id<IESServiceProvider> _serviceProvider;
    id<ACCCameraService> _cameraService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCFilterComponent *hostComponent;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostIdentifier;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (void)bindTrackEvent;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)component;
- (id)serviceProvider;
- (void)setComponent:(id)arg0;

@end

//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCFeatureComponent, ACCCameraService;

@interface ACCAcousticAlgorithmComponentPropPlugin : NSObject <ACCRecordPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
    id<ACCCameraService> _cameraService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (void)propServiceWillApplyProp:(id)arg0 propSource:(long long)arg1;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
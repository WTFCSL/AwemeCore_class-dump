//
//     Generated by private class-dump
//

@class NSString, ACCBeautyFeatureComponent;
@protocol ACCFeatureComponent, ACCRecordTrackService, ACCRecordPropService, ACCBeautyService;

@interface ACCBeautyFeatureComponentPropPlugin : NSObject <ACCCameraLifeCircleEvent, ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
    id<ACCRecordTrackService> _trackService;
    id<ACCRecordPropService> _propService;
    id<ACCBeautyService> _beautyService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCBeautyService> beautyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (void)bindToComponent:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (id)trackService;
- (void)cameraService:(id)arg0 pauseRecordWithError:(id)arg1;
- (void)setTrackService:(id)arg0;
- (id)beautyService;
- (void)setBeautyService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end

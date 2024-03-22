//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecordPropService, CKBeautyService, ACCFeatureComponent;

@interface ACCRecorderBeautyComponentPropPlugin : ACCFeatureComponent <ACCServiceBindable, ACCFeatureComponentPlugin> {
    id<ACCFeatureComponent> _component;
    id<ACCRecordPropService> _propService;
    id<CKBeautyService> _beautyService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<CKBeautyService> beautyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (void)bindServices:(id)arg0;
- (id)beautyService;
- (void)setBeautyService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
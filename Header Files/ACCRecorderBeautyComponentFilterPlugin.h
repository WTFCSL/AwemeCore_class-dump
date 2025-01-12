//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCFeatureComponent;

@interface ACCRecorderBeautyComponentFilterPlugin : ACCFeatureComponent <ACCServiceBindable, ACCFeatureComponentPlugin> {
    id<ACCFeatureComponent> _component;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (void)bindServices:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end

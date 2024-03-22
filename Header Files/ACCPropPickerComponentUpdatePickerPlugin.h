//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCFeatureComponent, IESServiceProvider;

@interface ACCPropPickerComponentUpdatePickerPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
    id<IESServiceProvider> _serviceProvider;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostIdentifier;

- (void)bindToComponent:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (void)bindUpdatePicker;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)component;
- (id)serviceProvider;
- (void)setComponent:(id)arg0;

@end
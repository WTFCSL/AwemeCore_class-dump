//
//     Generated by private class-dump
//

@class ACCRecordCloseComponent, NSString;
@protocol ACCFeatureComponent, AWETeenSwitchPropPanelService;

@interface AWETeenRecordCloseComponentPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
    id<AWETeenSwitchPropPanelService> _switchPropPanelService;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCRecordCloseComponent *hostComponent;
@property (retain, nonatomic) id<AWETeenSwitchPropPanelService> switchPropPanelService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostIdentifier;

- (void)bindViewModel;
- (void)componentDidMount;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (id)switchPropPanelService;
- (void)setSwitchPropPanelService:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
